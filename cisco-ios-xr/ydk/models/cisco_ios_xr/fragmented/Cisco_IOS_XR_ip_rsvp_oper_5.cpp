
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

RsvpStandby::SessionBriefs::SessionBrief::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::~Session()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionBriefs::SessionBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionBriefs::SessionBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetaileds()
{

    yang_name = "session-detaileds"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::~SessionDetaileds()
{
}

bool RsvpStandby::SessionDetaileds::has_data() const
{
    for (std::size_t index=0; index<session_detailed.size(); index++)
    {
        if(session_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::has_operation() const
{
    for (std::size_t index=0; index<session_detailed.size(); index++)
    {
        if(session_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::SessionDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detailed")
    {
        for(auto const & c : session_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed>();
        c->parent = this;
        session_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detailed)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::SessionDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::SessionDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detailed")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::SessionDetailed()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    compact(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact>())
	,s2l_sub_lsp(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp>())
{
    compact->parent = this;
    s2l_sub_lsp->parent = this;

    yang_name = "session-detailed"; yang_parent_name = "session-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::~SessionDetailed()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::has_data() const
{
    for (std::size_t index=0; index<psb_rsb_info.size(); index++)
    {
        if(psb_rsb_info[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| vrf_name.is_set
	|| (compact !=  nullptr && compact->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::has_operation() const
{
    for (std::size_t index=0; index<psb_rsb_info.size(); index++)
    {
        if(psb_rsb_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (compact !=  nullptr && compact->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detailed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "compact")
    {
        if(compact == nullptr)
        {
            compact = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact>();
        }
        return compact;
    }

    if(child_yang_name == "psb-rsb-info")
    {
        for(auto const & c : psb_rsb_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo>();
        c->parent = this;
        psb_rsb_info.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(compact != nullptr)
    {
        children["compact"] = compact;
    }

    for (auto const & c : psb_rsb_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "compact" || name == "psb-rsb-info" || name == "s2l-sub-lsp" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "vrf-name")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Compact()
    :
    detail_list_size{YType::uint32, "detail-list-size"},
    ps_bs{YType::uint32, "ps-bs"},
    requests{YType::uint32, "requests"},
    rs_bs{YType::uint32, "rs-bs"}
    	,
    session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session>())
{
    session->parent = this;

    yang_name = "compact"; yang_parent_name = "session-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::~Compact()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::has_data() const
{
    return detail_list_size.is_set
	|| ps_bs.is_set
	|| requests.is_set
	|| rs_bs.is_set
	|| (session !=  nullptr && session->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detail_list_size.yfilter)
	|| ydk::is_set(ps_bs.yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(rs_bs.yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compact";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detail_list_size.is_set || is_set(detail_list_size.yfilter)) leaf_name_data.push_back(detail_list_size.get_name_leafdata());
    if (ps_bs.is_set || is_set(ps_bs.yfilter)) leaf_name_data.push_back(ps_bs.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (rs_bs.is_set || is_set(rs_bs.yfilter)) leaf_name_data.push_back(rs_bs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detail-list-size")
    {
        detail_list_size = value;
        detail_list_size.value_namespace = name_space;
        detail_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ps-bs")
    {
        ps_bs = value;
        ps_bs.value_namespace = name_space;
        ps_bs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rs-bs")
    {
        rs_bs = value;
        rs_bs.value_namespace = name_space;
        rs_bs.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detail-list-size")
    {
        detail_list_size.yfilter = yfilter;
    }
    if(value_path == "ps-bs")
    {
        ps_bs.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "rs-bs")
    {
        rs_bs.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "detail-list-size" || name == "ps-bs" || name == "requests" || name == "rs-bs")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "compact"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::~Session()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbRsbInfo()
{

    yang_name = "psb-rsb-info"; yang_parent_name = "session-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::~PsbRsbInfo()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_data() const
{
    for (std::size_t index=0; index<psb_info.size(); index++)
    {
        if(psb_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsb_info.size(); index++)
    {
        if(rsb_info[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_operation() const
{
    for (std::size_t index=0; index<psb_info.size(); index++)
    {
        if(psb_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsb_info.size(); index++)
    {
        if(rsb_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-rsb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psb-info")
    {
        for(auto const & c : psb_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo>();
        c->parent = this;
        psb_info.push_back(c);
        return c;
    }

    if(child_yang_name == "rsb-info")
    {
        for(auto const & c : rsb_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo>();
        c->parent = this;
        rsb_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : psb_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rsb_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psb-info" || name == "rsb-info")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::PsbInfo()
    :
    destination_address{YType::str, "destination-address"},
    in_interface{YType::str, "in-interface"},
    in_label{YType::uint32, "in-label"},
    incoming_interface_address{YType::str, "incoming-interface-address"},
    is_bad_address{YType::boolean, "is-bad-address"},
    is_ero_valid{YType::boolean, "is-ero-valid"},
    is_rro_valid{YType::boolean, "is-rro-valid"},
    is_traffic_spec_valid{YType::boolean, "is-traffic-spec-valid"},
    is_valid{YType::boolean, "is-valid"},
    lsp_id{YType::uint32, "lsp-id"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    association(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association>())
	,generic_in_label(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel>())
	,generic_traffic_spec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec>())
	,protection(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection>())
	,reverse_lsp(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp>())
	,traffic_spec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec>())
{
    association->parent = this;
    generic_in_label->parent = this;
    generic_traffic_spec->parent = this;
    protection->parent = this;
    reverse_lsp->parent = this;
    traffic_spec->parent = this;

    yang_name = "psb-info"; yang_parent_name = "psb-rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::~PsbInfo()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_data() const
{
    for (std::size_t index=0; index<ero.size(); index++)
    {
        if(ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| in_interface.is_set
	|| in_label.is_set
	|| incoming_interface_address.is_set
	|| is_bad_address.is_set
	|| is_ero_valid.is_set
	|| is_rro_valid.is_set
	|| is_traffic_spec_valid.is_set
	|| is_valid.is_set
	|| lsp_id.is_set
	|| lsp_wrap_label.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set
	|| tunnel_name.is_set
	|| (association !=  nullptr && association->has_data())
	|| (generic_in_label !=  nullptr && generic_in_label->has_data())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_operation() const
{
    for (std::size_t index=0; index<ero.size(); index++)
    {
        if(ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(in_interface.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(incoming_interface_address.yfilter)
	|| ydk::is_set(is_bad_address.yfilter)
	|| ydk::is_set(is_ero_valid.yfilter)
	|| ydk::is_set(is_rro_valid.yfilter)
	|| ydk::is_set(is_traffic_spec_valid.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_wrap_label.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (generic_in_label !=  nullptr && generic_in_label->has_operation())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (in_interface.is_set || is_set(in_interface.yfilter)) leaf_name_data.push_back(in_interface.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (incoming_interface_address.is_set || is_set(incoming_interface_address.yfilter)) leaf_name_data.push_back(incoming_interface_address.get_name_leafdata());
    if (is_bad_address.is_set || is_set(is_bad_address.yfilter)) leaf_name_data.push_back(is_bad_address.get_name_leafdata());
    if (is_ero_valid.is_set || is_set(is_ero_valid.yfilter)) leaf_name_data.push_back(is_ero_valid.get_name_leafdata());
    if (is_rro_valid.is_set || is_set(is_rro_valid.yfilter)) leaf_name_data.push_back(is_rro_valid.get_name_leafdata());
    if (is_traffic_spec_valid.is_set || is_set(is_traffic_spec_valid.yfilter)) leaf_name_data.push_back(is_traffic_spec_valid.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.yfilter)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association>();
        }
        return association;
    }

    if(child_yang_name == "ero")
    {
        for(auto const & c : ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero>();
        c->parent = this;
        ero.push_back(c);
        return c;
    }

    if(child_yang_name == "generic-in-label")
    {
        if(generic_in_label == nullptr)
        {
            generic_in_label = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel>();
        }
        return generic_in_label;
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp>();
        }
        return reverse_lsp;
    }

    if(child_yang_name == "rro")
    {
        for(auto const & c : rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro>();
        c->parent = this;
        rro.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec == nullptr)
        {
            traffic_spec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec>();
        }
        return traffic_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(association != nullptr)
    {
        children["association"] = association;
    }

    for (auto const & c : ero)
    {
        children[c->get_segment_path()] = c;
    }

    if(generic_in_label != nullptr)
    {
        children["generic-in-label"] = generic_in_label;
    }

    if(generic_traffic_spec != nullptr)
    {
        children["generic-traffic-spec"] = generic_traffic_spec;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    for (auto const & c : rro)
    {
        children[c->get_segment_path()] = c;
    }

    if(traffic_spec != nullptr)
    {
        children["traffic-spec"] = traffic_spec;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-interface")
    {
        in_interface = value;
        in_interface.value_namespace = name_space;
        in_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-interface-address")
    {
        incoming_interface_address = value;
        incoming_interface_address.value_namespace = name_space;
        incoming_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bad-address")
    {
        is_bad_address = value;
        is_bad_address.value_namespace = name_space;
        is_bad_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ero-valid")
    {
        is_ero_valid = value;
        is_ero_valid.value_namespace = name_space;
        is_ero_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rro-valid")
    {
        is_rro_valid = value;
        is_rro_valid.value_namespace = name_space;
        is_rro_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-traffic-spec-valid")
    {
        is_traffic_spec_valid = value;
        is_traffic_spec_valid.value_namespace = name_space;
        is_traffic_spec_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
        lsp_wrap_label.value_namespace = name_space;
        lsp_wrap_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "in-interface")
    {
        in_interface.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "incoming-interface-address")
    {
        incoming_interface_address.yfilter = yfilter;
    }
    if(value_path == "is-bad-address")
    {
        is_bad_address.yfilter = yfilter;
    }
    if(value_path == "is-ero-valid")
    {
        is_ero_valid.yfilter = yfilter;
    }
    if(value_path == "is-rro-valid")
    {
        is_rro_valid.yfilter = yfilter;
    }
    if(value_path == "is-traffic-spec-valid")
    {
        is_traffic_spec_valid.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "ero" || name == "generic-in-label" || name == "generic-traffic-spec" || name == "protection" || name == "reverse-lsp" || name == "rro" || name == "traffic-spec" || name == "destination-address" || name == "in-interface" || name == "in-label" || name == "incoming-interface-address" || name == "is-bad-address" || name == "is-ero-valid" || name == "is-rro-valid" || name == "is-traffic-spec-valid" || name == "is-valid" || name == "lsp-id" || name == "lsp-wrap-label" || name == "p2mp-sub-group-origin" || name == "sub-group-id" || name == "tunnel-name")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Association()
    :
    association_type{YType::enumeration, "association-type"}
    	,
    extended_ipv4(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4>())
	,extended_ipv6(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6>())
	,ipv4(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4>())
	,ipv6(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6>())
{
    extended_ipv4->parent = this;
    extended_ipv6->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "association"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::~Association()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_data() const
{
    return association_type.is_set
	|| (extended_ipv4 !=  nullptr && extended_ipv4->has_data())
	|| (extended_ipv6 !=  nullptr && extended_ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_type.yfilter)
	|| (extended_ipv4 !=  nullptr && extended_ipv4->has_operation())
	|| (extended_ipv6 !=  nullptr && extended_ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_type.is_set || is_set(association_type.yfilter)) leaf_name_data.push_back(association_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-ipv4")
    {
        if(extended_ipv4 == nullptr)
        {
            extended_ipv4 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4>();
        }
        return extended_ipv4;
    }

    if(child_yang_name == "extended-ipv6")
    {
        if(extended_ipv6 == nullptr)
        {
            extended_ipv6 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6>();
        }
        return extended_ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extended_ipv4 != nullptr)
    {
        children["extended-ipv4"] = extended_ipv4;
    }

    if(extended_ipv6 != nullptr)
    {
        children["extended-ipv6"] = extended_ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-type")
    {
        association_type = value;
        association_type.value_namespace = name_space;
        association_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-type")
    {
        association_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-ipv4" || name == "extended-ipv6" || name == "ipv4" || name == "ipv6" || name == "association-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedIpv4()
    :
    extended_id{YType::uint32, "extended-id"},
    global_source{YType::uint32, "global-source"},
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{

    yang_name = "extended-ipv4"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::~ExtendedIpv4()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_data() const
{
    for (auto const & leaf : extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return global_source.is_set
	|| id.is_set
	|| source.is_set
	|| type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_operation() const
{
    for (auto const & leaf : extended_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_id.yfilter)
	|| ydk::is_set(global_source.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_source.is_set || is_set(global_source.yfilter)) leaf_name_data.push_back(global_source.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto extended_id_name_datas = extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_id_name_datas.begin(), extended_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-id")
    {
        extended_id.append(value);
    }
    if(value_path == "global-source")
    {
        global_source = value;
        global_source.value_namespace = name_space;
        global_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-id")
    {
        extended_id.yfilter = yfilter;
    }
    if(value_path == "global-source")
    {
        global_source.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-id" || name == "global-source" || name == "id" || name == "source" || name == "type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedIpv6()
    :
    extended_id{YType::uint32, "extended-id"},
    global_source{YType::uint32, "global-source"},
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{

    yang_name = "extended-ipv6"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::~ExtendedIpv6()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_data() const
{
    for (auto const & leaf : extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return global_source.is_set
	|| id.is_set
	|| source.is_set
	|| type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_operation() const
{
    for (auto const & leaf : extended_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_id.yfilter)
	|| ydk::is_set(global_source.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_source.is_set || is_set(global_source.yfilter)) leaf_name_data.push_back(global_source.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto extended_id_name_datas = extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_id_name_datas.begin(), extended_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-id")
    {
        extended_id.append(value);
    }
    if(value_path == "global-source")
    {
        global_source = value;
        global_source.value_namespace = name_space;
        global_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-id")
    {
        extended_id.yfilter = yfilter;
    }
    if(value_path == "global-source")
    {
        global_source.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-id" || name == "global-source" || name == "id" || name == "source" || name == "type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::Ipv4()
    :
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{

    yang_name = "ipv4"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::~Ipv4()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_data() const
{
    return id.is_set
	|| source.is_set
	|| type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "source" || name == "type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::Ipv6()
    :
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{

    yang_name = "ipv6"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::~Ipv6()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_data() const
{
    return id.is_set
	|| source.is_set
	|| type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "source" || name == "type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ero()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "ero"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::~Ero()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GenericInLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-in-label"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::~GenericInLabel()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-in-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-in-label"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-in-label/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_tspec != nullptr)
    {
        children["g709otn-tspec"] = g709otn_tspec;
    }

    if(intsrv_tspec != nullptr)
    {
        children["intsrv-tspec"] = intsrv_tspec;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
        traffic_bit_rate.value_namespace = name_space;
        traffic_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
        traffic_multiplier.value_namespace = name_space;
        traffic_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
        traffic_nvc.value_namespace = name_space;
        traffic_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
        traffic_signal_type.value_namespace = name_space;
        traffic_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier.yfilter = yfilter;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc.yfilter = yfilter;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-bit-rate" || name == "traffic-multiplier" || name == "traffic-nvc" || name == "traffic-signal-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::Protection()
    :
    n{YType::boolean, "n"},
    o{YType::boolean, "o"},
    p{YType::boolean, "p"},
    s{YType::boolean, "s"}
    	,
    link_flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags>())
	,lsp_flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags>())
{
    link_flags->parent = this;
    lsp_flags->parent = this;

    yang_name = "protection"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::~Protection()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_data() const
{
    return n.is_set
	|| o.is_set
	|| p.is_set
	|| s.is_set
	|| (link_flags !=  nullptr && link_flags->has_data())
	|| (lsp_flags !=  nullptr && lsp_flags->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(n.yfilter)
	|| ydk::is_set(o.yfilter)
	|| ydk::is_set(p.yfilter)
	|| ydk::is_set(s.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation())
	|| (lsp_flags !=  nullptr && lsp_flags->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (n.is_set || is_set(n.yfilter)) leaf_name_data.push_back(n.get_name_leafdata());
    if (o.is_set || is_set(o.yfilter)) leaf_name_data.push_back(o.get_name_leafdata());
    if (p.is_set || is_set(p.yfilter)) leaf_name_data.push_back(p.get_name_leafdata());
    if (s.is_set || is_set(s.yfilter)) leaf_name_data.push_back(s.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "lsp-flags")
    {
        if(lsp_flags == nullptr)
        {
            lsp_flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags>();
        }
        return lsp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_flags != nullptr)
    {
        children["link-flags"] = link_flags;
    }

    if(lsp_flags != nullptr)
    {
        children["lsp-flags"] = lsp_flags;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "n")
    {
        n = value;
        n.value_namespace = name_space;
        n.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "o")
    {
        o = value;
        o.value_namespace = name_space;
        o.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p")
    {
        p = value;
        p.value_namespace = name_space;
        p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s")
    {
        s = value;
        s.value_namespace = name_space;
        s.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "n")
    {
        n.yfilter = yfilter;
    }
    if(value_path == "o")
    {
        o.yfilter = yfilter;
    }
    if(value_path == "p")
    {
        p.yfilter = yfilter;
    }
    if(value_path == "s")
    {
        s.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-flags" || name == "lsp-flags" || name == "n" || name == "o" || name == "p" || name == "s")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::LinkFlags()
    :
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    enhanced{YType::boolean, "enhanced"},
    extra_traffic{YType::boolean, "extra-traffic"},
    reserved_bit1{YType::boolean, "reserved-bit1"},
    reserved_bit2{YType::boolean, "reserved-bit2"},
    shared{YType::boolean, "shared"},
    unprotected{YType::boolean, "unprotected"}
{

    yang_name = "link-flags"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::~LinkFlags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_data() const
{
    return ded1_plus1.is_set
	|| ded1_to1.is_set
	|| enhanced.is_set
	|| extra_traffic.is_set
	|| reserved_bit1.is_set
	|| reserved_bit2.is_set
	|| shared.is_set
	|| unprotected.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(reserved_bit1.yfilter)
	|| ydk::is_set(reserved_bit2.yfilter)
	|| ydk::is_set(shared.yfilter)
	|| ydk::is_set(unprotected.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (reserved_bit1.is_set || is_set(reserved_bit1.yfilter)) leaf_name_data.push_back(reserved_bit1.get_name_leafdata());
    if (reserved_bit2.is_set || is_set(reserved_bit2.yfilter)) leaf_name_data.push_back(reserved_bit2.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());
    if (unprotected.is_set || is_set(unprotected.yfilter)) leaf_name_data.push_back(unprotected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bit1")
    {
        reserved_bit1 = value;
        reserved_bit1.value_namespace = name_space;
        reserved_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bit2")
    {
        reserved_bit2 = value;
        reserved_bit2.value_namespace = name_space;
        reserved_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unprotected")
    {
        unprotected = value;
        unprotected.value_namespace = name_space;
        unprotected.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "reserved-bit1")
    {
        reserved_bit1.yfilter = yfilter;
    }
    if(value_path == "reserved-bit2")
    {
        reserved_bit2.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
    if(value_path == "unprotected")
    {
        unprotected.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ded1-plus1" || name == "ded1-to1" || name == "enhanced" || name == "extra-traffic" || name == "reserved-bit1" || name == "reserved-bit2" || name == "shared" || name == "unprotected")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::LspFlags()
    :
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"}
{

    yang_name = "lsp-flags"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::~LspFlags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_data() const
{
    return one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one-plus-one-bi" || name == "one-plus-one-uni" || name == "one-to-n-protection-et" || name == "rerouting" || name == "rerouting-no-et")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::ReverseLsp()
    :
    generic_traffic_spec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec>())
{
    generic_traffic_spec->parent = this;

    yang_name = "reverse-lsp"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::~ReverseLsp()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_data() const
{
    for (std::size_t index=0; index<ero.size(); index++)
    {
        if(ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unsup_sub_object.size(); index++)
    {
        if(unsup_sub_object[index]->has_data())
            return true;
    }
    return (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_operation() const
{
    for (std::size_t index=0; index<ero.size(); index++)
    {
        if(ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unsup_sub_object.size(); index++)
    {
        if(unsup_sub_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        for(auto const & c : ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero>();
        c->parent = this;
        ero.push_back(c);
        return c;
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "unsup-sub-object")
    {
        for(auto const & c : unsup_sub_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject>();
        c->parent = this;
        unsup_sub_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ero)
    {
        children[c->get_segment_path()] = c;
    }

    if(generic_traffic_spec != nullptr)
    {
        children["generic-traffic-spec"] = generic_traffic_spec;
    }

    for (auto const & c : unsup_sub_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "generic-traffic-spec" || name == "unsup-sub-object")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ero()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "ero"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::~Ero()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_tspec != nullptr)
    {
        children["g709otn-tspec"] = g709otn_tspec;
    }

    if(intsrv_tspec != nullptr)
    {
        children["intsrv-tspec"] = intsrv_tspec;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
        traffic_bit_rate.value_namespace = name_space;
        traffic_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
        traffic_multiplier.value_namespace = name_space;
        traffic_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
        traffic_nvc.value_namespace = name_space;
        traffic_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
        traffic_signal_type.value_namespace = name_space;
        traffic_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier.yfilter = yfilter;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc.yfilter = yfilter;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-bit-rate" || name == "traffic-multiplier" || name == "traffic-nvc" || name == "traffic-signal-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::UnsupSubObject()
    :
    rsvp_mgmt_rev_lsp_unsupported_subobj{YType::uint8, "rsvp-mgmt-rev-lsp-unsupported-subobj"}
{

    yang_name = "unsup-sub-object"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::~UnsupSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_data() const
{
    for (auto const & leaf : rsvp_mgmt_rev_lsp_unsupported_subobj.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_operation() const
{
    for (auto const & leaf : rsvp_mgmt_rev_lsp_unsupported_subobj.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rsvp_mgmt_rev_lsp_unsupported_subobj.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unsup-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto rsvp_mgmt_rev_lsp_unsupported_subobj_name_datas = rsvp_mgmt_rev_lsp_unsupported_subobj.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rsvp_mgmt_rev_lsp_unsupported_subobj_name_datas.begin(), rsvp_mgmt_rev_lsp_unsupported_subobj_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvp-mgmt-rev-lsp-unsupported-subobj")
    {
        rsvp_mgmt_rev_lsp_unsupported_subobj.append(value);
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvp-mgmt-rev-lsp-unsupported-subobj")
    {
        rsvp_mgmt_rev_lsp_unsupported_subobj.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-mgmt-rev-lsp-unsupported-subobj")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;

    yang_name = "rro"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::~Rro()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4rro_sub_object != nullptr)
    {
        children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "srlg-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/ipv4rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"},
    variable_length_label{YType::uint32, "variable-length-label"}
    	,
    flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_data() const
{
    for (auto const & leaf : variable_length_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_label_variable_length.is_set
	|| label.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_operation() const
{
    for (auto const & leaf : variable_length_label.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(variable_length_label.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    auto variable_length_label_name_datas = variable_length_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), variable_length_label_name_datas.begin(), variable_length_label_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variable-length-label")
    {
        variable_length_label.append(value);
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "variable-length-label")
    {
        variable_length_label.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "is-label-variable-length" || name == "label" || name == "variable-length-label")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::~Flags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/label-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srl_gs.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto srl_gs_name_datas = srl_gs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srl_gs_name_datas.begin(), srl_gs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srl-gs")
    {
        srl_gs.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/unnumbered-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "traffic-spec"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::~TrafficSpec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
        traffic_average_rate.value_namespace = name_space;
        traffic_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
        traffic_max_burst.value_namespace = name_space;
        traffic_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::RsbInfo()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label{YType::uint32, "backup-label"},
    destination_address{YType::str, "destination-address"},
    is_flow_spec_valid{YType::boolean, "is-flow-spec-valid"},
    is_rro_valid{YType::boolean, "is-rro-valid"},
    is_valid{YType::boolean, "is-valid"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"}
    	,
    flow_spec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec>())
	,generic_flow_spec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec>())
	,generic_out_label(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel>())
{
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    generic_out_label->parent = this;

    yang_name = "rsb-info"; yang_parent_name = "psb-rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::~RsbInfo()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_data() const
{
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label.is_set
	|| destination_address.is_set
	|| is_flow_spec_valid.is_set
	|| is_rro_valid.is_set
	|| is_valid.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (generic_out_label !=  nullptr && generic_out_label->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_operation() const
{
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_flow_spec_valid.yfilter)
	|| ydk::is_set(is_rro_valid.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (generic_out_label !=  nullptr && generic_out_label->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label.is_set || is_set(backup_label.yfilter)) leaf_name_data.push_back(backup_label.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_flow_spec_valid.is_set || is_set(is_flow_spec_valid.yfilter)) leaf_name_data.push_back(is_flow_spec_valid.get_name_leafdata());
    if (is_rro_valid.is_set || is_set(is_rro_valid.yfilter)) leaf_name_data.push_back(is_rro_valid.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "generic-out-label")
    {
        if(generic_out_label == nullptr)
        {
            generic_out_label = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel>();
        }
        return generic_out_label;
    }

    if(child_yang_name == "rro")
    {
        for(auto const & c : rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro>();
        c->parent = this;
        rro.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_spec != nullptr)
    {
        children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        children["generic-flow-spec"] = generic_flow_spec;
    }

    if(generic_out_label != nullptr)
    {
        children["generic-out-label"] = generic_out_label;
    }

    for (auto const & c : rro)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label")
    {
        backup_label = value;
        backup_label.value_namespace = name_space;
        backup_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-spec-valid")
    {
        is_flow_spec_valid = value;
        is_flow_spec_valid.value_namespace = name_space;
        is_flow_spec_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rro-valid")
    {
        is_rro_valid = value;
        is_rro_valid.value_namespace = name_space;
        is_rro_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
        out_interface.value_namespace = name_space;
        out_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label")
    {
        backup_label.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-flow-spec-valid")
    {
        is_flow_spec_valid.yfilter = yfilter;
    }
    if(value_path == "is-rro-valid")
    {
        is_rro_valid.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-spec" || name == "generic-flow-spec" || name == "generic-out-label" || name == "rro" || name == "backup-interface" || name == "backup-label" || name == "destination-address" || name == "is-flow-spec-valid" || name == "is-rro-valid" || name == "is-valid" || name == "out-interface" || name == "out-label")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{

    yang_name = "flow-spec"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::~FlowSpec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_qos.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
        flow_average_rate.value_namespace = name_space;
        flow_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
        flow_max_burst.value_namespace = name_space;
        flow_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
        flow_requested_rate.value_namespace = name_space;
        flow_requested_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
        flow_slack.value_namespace = name_space;
        flow_slack.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-max-unit" || name == "flow-min-unit" || name == "flow-peak-rate" || name == "flow-qos" || name == "flow-requested-rate" || name == "flow-slack")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::~GenericFlowSpec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_flow_spec != nullptr)
    {
        children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_signal_type.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-bit-rate" || name == "flow-multiplier" || name == "flow-nvc" || name == "flow-signal-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GenericOutLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-out-label"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::~GenericOutLabel()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-out-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-out-label"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/generic-out-label/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;

    yang_name = "rro"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::~Rro()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4rro_sub_object != nullptr)
    {
        children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "srlg-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/ipv4rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"},
    variable_length_label{YType::uint32, "variable-length-label"}
    	,
    flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_data() const
{
    for (auto const & leaf : variable_length_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_label_variable_length.is_set
	|| label.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_operation() const
{
    for (auto const & leaf : variable_length_label.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(variable_length_label.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    auto variable_length_label_name_datas = variable_length_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), variable_length_label_name_datas.begin(), variable_length_label_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variable-length-label")
    {
        variable_length_label.append(value);
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "variable-length-label")
    {
        variable_length_label.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "is-label-variable-length" || name == "label" || name == "variable-length-label")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::~Flags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/label-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srl_gs.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto srl_gs_name_datas = srl_gs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srl_gs_name_datas.begin(), srl_gs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srl-gs")
    {
        srl_gs.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/unnumbered-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "session-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::~S2LSubLsp()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

RsvpStandby::Summary::Summary()
    :
    interfaces{YType::uint32, "interfaces"},
    ls_ps{YType::uint32, "ls-ps"}
    	,
    database_counters(std::make_shared<RsvpStandby::Summary::DatabaseCounters>())
	,issu_status(std::make_shared<RsvpStandby::Summary::IssuStatus>())
	,nsr_status(std::make_shared<RsvpStandby::Summary::NsrStatus>())
{
    database_counters->parent = this;
    issu_status->parent = this;
    nsr_status->parent = this;

    yang_name = "summary"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::Summary::~Summary()
{
}

bool RsvpStandby::Summary::has_data() const
{
    return interfaces.is_set
	|| ls_ps.is_set
	|| (database_counters !=  nullptr && database_counters->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool RsvpStandby::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| (database_counters !=  nullptr && database_counters->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string RsvpStandby::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-counters")
    {
        if(database_counters == nullptr)
        {
            database_counters = std::make_shared<RsvpStandby::Summary::DatabaseCounters>();
        }
        return database_counters;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<RsvpStandby::Summary::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<RsvpStandby::Summary::NsrStatus>();
        }
        return nsr_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_counters != nullptr)
    {
        children["database-counters"] = database_counters;
    }

    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    return children;
}

void RsvpStandby::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-counters" || name == "issu-status" || name == "nsr-status" || name == "interfaces" || name == "ls-ps")
        return true;
    return false;
}

RsvpStandby::Summary::DatabaseCounters::DatabaseCounters()
    :
    incoming_paths{YType::uint32, "incoming-paths"},
    incoming_reservations{YType::uint32, "incoming-reservations"},
    interfaces{YType::uint32, "interfaces"},
    outgoing_paths{YType::uint32, "outgoing-paths"},
    outgoing_reservations{YType::uint32, "outgoing-reservations"},
    sessions{YType::uint32, "sessions"}
{

    yang_name = "database-counters"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::Summary::DatabaseCounters::~DatabaseCounters()
{
}

bool RsvpStandby::Summary::DatabaseCounters::has_data() const
{
    return incoming_paths.is_set
	|| incoming_reservations.is_set
	|| interfaces.is_set
	|| outgoing_paths.is_set
	|| outgoing_reservations.is_set
	|| sessions.is_set;
}

bool RsvpStandby::Summary::DatabaseCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_paths.yfilter)
	|| ydk::is_set(incoming_reservations.yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(outgoing_paths.yfilter)
	|| ydk::is_set(outgoing_reservations.yfilter)
	|| ydk::is_set(sessions.yfilter);
}

std::string RsvpStandby::Summary::DatabaseCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Summary::DatabaseCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Summary::DatabaseCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_paths.is_set || is_set(incoming_paths.yfilter)) leaf_name_data.push_back(incoming_paths.get_name_leafdata());
    if (incoming_reservations.is_set || is_set(incoming_reservations.yfilter)) leaf_name_data.push_back(incoming_reservations.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (outgoing_paths.is_set || is_set(outgoing_paths.yfilter)) leaf_name_data.push_back(outgoing_paths.get_name_leafdata());
    if (outgoing_reservations.is_set || is_set(outgoing_reservations.yfilter)) leaf_name_data.push_back(outgoing_reservations.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::Summary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::Summary::DatabaseCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::Summary::DatabaseCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-paths")
    {
        incoming_paths = value;
        incoming_paths.value_namespace = name_space;
        incoming_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations = value;
        incoming_reservations.value_namespace = name_space;
        incoming_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths = value;
        outgoing_paths.value_namespace = name_space;
        outgoing_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations = value;
        outgoing_reservations.value_namespace = name_space;
        outgoing_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::DatabaseCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-paths")
    {
        incoming_paths.yfilter = yfilter;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations.yfilter = yfilter;
    }
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::DatabaseCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-paths" || name == "incoming-reservations" || name == "interfaces" || name == "outgoing-paths" || name == "outgoing-reservations" || name == "sessions")
        return true;
    return false;
}

RsvpStandby::Summary::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<RsvpStandby::Summary::IssuStatus::IdtStatus>())
	,previous_idt_status(std::make_shared<RsvpStandby::Summary::IssuStatus::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::Summary::IssuStatus::~IssuStatus()
{
}

bool RsvpStandby::Summary::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool RsvpStandby::Summary::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string RsvpStandby::Summary::IssuStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Summary::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Summary::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::Summary::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<RsvpStandby::Summary::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<RsvpStandby::Summary::IssuStatus::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::Summary::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void RsvpStandby::Summary::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

RsvpStandby::Summary::IssuStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::Summary::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool RsvpStandby::Summary::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string RsvpStandby::Summary::IssuStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Summary::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Summary::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::Summary::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::Summary::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::Summary::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Summary::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<RsvpStandby::Summary::NsrStatus::IdtStatus>())
	,previous_idt_status(std::make_shared<RsvpStandby::Summary::NsrStatus::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::Summary::NsrStatus::~NsrStatus()
{
}

bool RsvpStandby::Summary::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool RsvpStandby::Summary::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string RsvpStandby::Summary::NsrStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Summary::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Summary::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::Summary::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<RsvpStandby::Summary::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<RsvpStandby::Summary::NsrStatus::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::Summary::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void RsvpStandby::Summary::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

RsvpStandby::Summary::NsrStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::Summary::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool RsvpStandby::Summary::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string RsvpStandby::Summary::NsrStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Summary::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Summary::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::Summary::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::Summary::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::Summary::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}


}
}

