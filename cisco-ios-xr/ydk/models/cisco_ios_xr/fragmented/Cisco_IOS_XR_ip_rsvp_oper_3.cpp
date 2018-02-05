
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_3.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetaileds()
{

    yang_name = "psb-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::~PsbDetaileds()
{
}

bool Rsvp::PsbDetaileds::has_data() const
{
    for (std::size_t index=0; index<psb_detailed.size(); index++)
    {
        if(psb_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::has_operation() const
{
    for (std::size_t index=0; index<psb_detailed.size(); index++)
    {
        if(psb_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::PsbDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psb-detailed")
    {
        auto c = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed>();
        c->parent = this;
        psb_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : psb_detailed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::PsbDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psb-detailed")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PsbDetailed()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    protocol{YType::int32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::int32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    input_interface{YType::str, "input-interface"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    is_in_ero_valid{YType::boolean, "is-in-ero-valid"},
    is_out_ero_valid{YType::boolean, "is-out-ero-valid"}
    	,
    session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session>())
	,s2l_sub_lsp(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp>())
	,template_(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template>())
	,session_attribute(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute>())
	,traffic_spec(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec>())
	,generic_traffic_spec(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec>())
	,path_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PathFlags>())
	,hop(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Hop>())
	,policy_source_info(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo>())
	,header(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Header>())
	,expiry_time(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime>())
	,policy_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags>())
	,policy_query_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags>())
	,label_info(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo>())
	,class_type(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::ClassType>())
{
    session->parent = this;
    s2l_sub_lsp->parent = this;
    template_->parent = this;
    session_attribute->parent = this;
    traffic_spec->parent = this;
    generic_traffic_spec->parent = this;
    path_flags->parent = this;
    hop->parent = this;
    policy_source_info->parent = this;
    header->parent = this;
    expiry_time->parent = this;
    policy_flags->parent = this;
    policy_query_flags->parent = this;
    label_info->parent = this;
    class_type->parent = this;

    yang_name = "psb-detailed"; yang_parent_name = "psb-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::~PsbDetailed()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::has_data() const
{
    for (std::size_t index=0; index<pfc.size(); index++)
    {
        if(pfc[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrf_name.is_set
	|| input_interface.is_set
	|| backup_tunnel_name.is_set
	|| is_in_ero_valid.is_set
	|| is_out_ero_valid.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (session_attribute !=  nullptr && session_attribute->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (path_flags !=  nullptr && path_flags->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (policy_source_info !=  nullptr && policy_source_info->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (expiry_time !=  nullptr && expiry_time->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data())
	|| (label_info !=  nullptr && label_info->has_data())
	|| (class_type !=  nullptr && class_type->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::has_operation() const
{
    for (std::size_t index=0; index<pfc.size(); index++)
    {
        if(pfc[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(is_in_ero_valid.yfilter)
	|| ydk::is_set(is_out_ero_valid.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (session_attribute !=  nullptr && session_attribute->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (path_flags !=  nullptr && path_flags->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (policy_source_info !=  nullptr && policy_source_info->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (expiry_time !=  nullptr && expiry_time->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation())
	|| (label_info !=  nullptr && label_info->has_operation())
	|| (class_type !=  nullptr && class_type->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-detailed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.yfilter)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (is_in_ero_valid.is_set || is_set(is_in_ero_valid.yfilter)) leaf_name_data.push_back(is_in_ero_valid.get_name_leafdata());
    if (is_out_ero_valid.is_set || is_set(is_out_ero_valid.yfilter)) leaf_name_data.push_back(is_out_ero_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template>();
        }
        return template_;
    }

    if(child_yang_name == "session-attribute")
    {
        if(session_attribute == nullptr)
        {
            session_attribute = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute>();
        }
        return session_attribute;
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec == nullptr)
        {
            traffic_spec = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec>();
        }
        return traffic_spec;
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "path-flags")
    {
        if(path_flags == nullptr)
        {
            path_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PathFlags>();
        }
        return path_flags;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "policy-source-info")
    {
        if(policy_source_info == nullptr)
        {
            policy_source_info = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo>();
        }
        return policy_source_info;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Header>();
        }
        return header;
    }

    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    if(child_yang_name == "label-info")
    {
        if(label_info == nullptr)
        {
            label_info = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo>();
        }
        return label_info;
    }

    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "pfc")
    {
        auto c = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc>();
        c->parent = this;
        pfc.push_back(c);
        return c;
    }

    if(child_yang_name == "in-ero")
    {
        auto c = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro>();
        c->parent = this;
        in_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "out-ero")
    {
        auto c = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro>();
        c->parent = this;
        out_ero.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(session_attribute != nullptr)
    {
        children["session-attribute"] = session_attribute;
    }

    if(traffic_spec != nullptr)
    {
        children["traffic-spec"] = traffic_spec;
    }

    if(generic_traffic_spec != nullptr)
    {
        children["generic-traffic-spec"] = generic_traffic_spec;
    }

    if(path_flags != nullptr)
    {
        children["path-flags"] = path_flags;
    }

    if(hop != nullptr)
    {
        children["hop"] = hop;
    }

    if(policy_source_info != nullptr)
    {
        children["policy-source-info"] = policy_source_info;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(expiry_time != nullptr)
    {
        children["expiry-time"] = expiry_time;
    }

    if(policy_flags != nullptr)
    {
        children["policy-flags"] = policy_flags;
    }

    if(policy_query_flags != nullptr)
    {
        children["policy-query-flags"] = policy_query_flags;
    }

    if(label_info != nullptr)
    {
        children["label-info"] = label_info;
    }

    if(class_type != nullptr)
    {
        children["class-type"] = class_type;
    }

    count = 0;
    for (auto const & c : pfc)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : in_ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : out_ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
        input_interface.value_namespace = name_space;
        input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-ero-valid")
    {
        is_in_ero_valid = value;
        is_in_ero_valid.value_namespace = name_space;
        is_in_ero_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-out-ero-valid")
    {
        is_out_ero_valid = value;
        is_out_ero_valid.value_namespace = name_space;
        is_out_ero_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "is-in-ero-valid")
    {
        is_in_ero_valid.yfilter = yfilter;
    }
    if(value_path == "is-out-ero-valid")
    {
        is_out_ero_valid.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "template" || name == "session-attribute" || name == "traffic-spec" || name == "generic-traffic-spec" || name == "path-flags" || name == "hop" || name == "policy-source-info" || name == "header" || name == "expiry-time" || name == "policy-flags" || name == "policy-query-flags" || name == "label-info" || name == "class-type" || name == "pfc" || name == "in-ero" || name == "out-ero" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "input-interface" || name == "backup-tunnel-name" || name == "is-in-ero-valid" || name == "is-out-ero-valid")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::~Session()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template::Template()
    :
    rsvp_filter(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "template"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template::~Template()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbDetaileds::PsbDetailed::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    udp_ipv4_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session>())
	,p2mp_ipv4_session(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
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
}

void Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Template::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessionAttribute()
    :
    setup_priority{YType::uint8, "setup-priority"},
    reservation_priority{YType::uint8, "reservation-priority"}
    	,
    sess_attribute_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags>())
{
    sess_attribute_flags->parent = this;

    yang_name = "session-attribute"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::~SessionAttribute()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::has_data() const
{
    return setup_priority.is_set
	|| reservation_priority.is_set
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(reservation_priority.yfilter)
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (reservation_priority.is_set || is_set(reservation_priority.yfilter)) leaf_name_data.push_back(reservation_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sess-attribute-flags")
    {
        if(sess_attribute_flags == nullptr)
        {
            sess_attribute_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags>();
        }
        return sess_attribute_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sess_attribute_flags != nullptr)
    {
        children["sess-attribute-flags"] = sess_attribute_flags;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-priority")
    {
        reservation_priority = value;
        reservation_priority.value_namespace = name_space;
        reservation_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "reservation-priority")
    {
        reservation_priority.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sess-attribute-flags" || name == "setup-priority" || name == "reservation-priority")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::SessAttributeFlags()
    :
    is_local_protect{YType::boolean, "is-local-protect"},
    is_node_protect{YType::boolean, "is-node-protect"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_record_labels{YType::boolean, "is-record-labels"},
    is_shared_explicit_requested{YType::boolean, "is-shared-explicit-requested"}
{

    yang_name = "sess-attribute-flags"; yang_parent_name = "session-attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::~SessAttributeFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::has_data() const
{
    return is_local_protect.is_set
	|| is_node_protect.is_set
	|| is_bandwidth_protect.is_set
	|| is_record_labels.is_set
	|| is_shared_explicit_requested.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_local_protect.yfilter)
	|| ydk::is_set(is_node_protect.yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(is_record_labels.yfilter)
	|| ydk::is_set(is_shared_explicit_requested.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/session-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sess-attribute-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_local_protect.is_set || is_set(is_local_protect.yfilter)) leaf_name_data.push_back(is_local_protect.get_name_leafdata());
    if (is_node_protect.is_set || is_set(is_node_protect.yfilter)) leaf_name_data.push_back(is_node_protect.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_record_labels.is_set || is_set(is_record_labels.yfilter)) leaf_name_data.push_back(is_record_labels.get_name_leafdata());
    if (is_shared_explicit_requested.is_set || is_set(is_shared_explicit_requested.yfilter)) leaf_name_data.push_back(is_shared_explicit_requested.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-local-protect")
    {
        is_local_protect = value;
        is_local_protect.value_namespace = name_space;
        is_local_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protect")
    {
        is_node_protect = value;
        is_node_protect.value_namespace = name_space;
        is_node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
        is_bandwidth_protect.value_namespace = name_space;
        is_bandwidth_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-record-labels")
    {
        is_record_labels = value;
        is_record_labels.value_namespace = name_space;
        is_record_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-shared-explicit-requested")
    {
        is_shared_explicit_requested = value;
        is_shared_explicit_requested.value_namespace = name_space;
        is_shared_explicit_requested.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-local-protect")
    {
        is_local_protect.yfilter = yfilter;
    }
    if(value_path == "is-node-protect")
    {
        is_node_protect.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect.yfilter = yfilter;
    }
    if(value_path == "is-record-labels")
    {
        is_record_labels.yfilter = yfilter;
    }
    if(value_path == "is-shared-explicit-requested")
    {
        is_shared_explicit_requested.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-local-protect" || name == "is-node-protect" || name == "is-bandwidth-protect" || name == "is-record-labels" || name == "is-shared-explicit-requested")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"}
{

    yang_name = "traffic-spec"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::~TrafficSpec()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_peak_rate.is_set
	|| traffic_min_unit.is_set
	|| traffic_max_unit.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-peak-rate" || name == "traffic-min-unit" || name == "traffic-max-unit")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_signal_type{YType::uint8, "traffic-signal-type"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_signal_type.is_set
	|| traffic_nvc.is_set
	|| traffic_multiplier.is_set
	|| traffic_bit_rate.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
        traffic_signal_type.value_namespace = name_space;
        traffic_signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
        traffic_nvc.value_namespace = name_space;
        traffic_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
        traffic_multiplier.value_namespace = name_space;
        traffic_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
        traffic_bit_rate.value_namespace = name_space;
        traffic_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type.yfilter = yfilter;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc.yfilter = yfilter;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier.yfilter = yfilter;
    }
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-signal-type" || name == "traffic-nvc" || name == "traffic-multiplier" || name == "traffic-bit-rate")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_peak_rate.is_set
	|| traffic_min_unit.is_set
	|| traffic_max_unit.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
        traffic_peak_rate.value_namespace = name_space;
        traffic_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
        traffic_min_unit.value_namespace = name_space;
        traffic_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
        traffic_max_unit.value_namespace = name_space;
        traffic_max_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst.yfilter = yfilter;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate.yfilter = yfilter;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit.yfilter = yfilter;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-peak-rate" || name == "traffic-min-unit" || name == "traffic-max-unit")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PathFlags::PathFlags()
    :
    is_non_rsvp_hop_upstream{YType::boolean, "is-non-rsvp-hop-upstream"},
    is_local_sender{YType::boolean, "is-local-sender"},
    is_message_id_valid{YType::boolean, "is-message-id-valid"},
    is_local_repair{YType::boolean, "is-local-repair"},
    is_bidirectional{YType::boolean, "is-bidirectional"},
    is_lockout{YType::boolean, "is-lockout"}
{

    yang_name = "path-flags"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::PathFlags::~PathFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::PathFlags::has_data() const
{
    return is_non_rsvp_hop_upstream.is_set
	|| is_local_sender.is_set
	|| is_message_id_valid.is_set
	|| is_local_repair.is_set
	|| is_bidirectional.is_set
	|| is_lockout.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::PathFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_non_rsvp_hop_upstream.yfilter)
	|| ydk::is_set(is_local_sender.yfilter)
	|| ydk::is_set(is_message_id_valid.yfilter)
	|| ydk::is_set(is_local_repair.yfilter)
	|| ydk::is_set(is_bidirectional.yfilter)
	|| ydk::is_set(is_lockout.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_non_rsvp_hop_upstream.is_set || is_set(is_non_rsvp_hop_upstream.yfilter)) leaf_name_data.push_back(is_non_rsvp_hop_upstream.get_name_leafdata());
    if (is_local_sender.is_set || is_set(is_local_sender.yfilter)) leaf_name_data.push_back(is_local_sender.get_name_leafdata());
    if (is_message_id_valid.is_set || is_set(is_message_id_valid.yfilter)) leaf_name_data.push_back(is_message_id_valid.get_name_leafdata());
    if (is_local_repair.is_set || is_set(is_local_repair.yfilter)) leaf_name_data.push_back(is_local_repair.get_name_leafdata());
    if (is_bidirectional.is_set || is_set(is_bidirectional.yfilter)) leaf_name_data.push_back(is_bidirectional.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::PathFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::PathFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-non-rsvp-hop-upstream")
    {
        is_non_rsvp_hop_upstream = value;
        is_non_rsvp_hop_upstream.value_namespace = name_space;
        is_non_rsvp_hop_upstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-sender")
    {
        is_local_sender = value;
        is_local_sender.value_namespace = name_space;
        is_local_sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid = value;
        is_message_id_valid.value_namespace = name_space;
        is_message_id_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair = value;
        is_local_repair.value_namespace = name_space;
        is_local_repair.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional")
    {
        is_bidirectional = value;
        is_bidirectional.value_namespace = name_space;
        is_bidirectional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::PathFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-non-rsvp-hop-upstream")
    {
        is_non_rsvp_hop_upstream.yfilter = yfilter;
    }
    if(value_path == "is-local-sender")
    {
        is_local_sender.yfilter = yfilter;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid.yfilter = yfilter;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional")
    {
        is_bidirectional.yfilter = yfilter;
    }
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::PathFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-non-rsvp-hop-upstream" || name == "is-local-sender" || name == "is-message-id-valid" || name == "is-local-repair" || name == "is-bidirectional" || name == "is-lockout")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{

    yang_name = "hop"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Hop::~Hop()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_logical_interface_name.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.yfilter)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name = value;
        neighbor_logical_interface_name.value_namespace = name_space;
        neighbor_logical_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-logical-interface-name")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::PolicySourceInfo()
    :
    is_te_link{YType::boolean, "is-te-link"},
    is_local{YType::boolean, "is-local"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_cable{YType::boolean, "is-cable"}
{

    yang_name = "policy-source-info"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::~PolicySourceInfo()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::has_data() const
{
    return is_te_link.is_set
	|| is_local.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_cable.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_te_link.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_cops.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_cable.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-source-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_te_link.is_set || is_set(is_te_link.yfilter)) leaf_name_data.push_back(is_te_link.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.yfilter)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_cable.is_set || is_set(is_cable.yfilter)) leaf_name_data.push_back(is_cable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-te-link")
    {
        is_te_link = value;
        is_te_link.value_namespace = name_space;
        is_te_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cops")
    {
        is_cops = value;
        is_cops.value_namespace = name_space;
        is_cops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cable")
    {
        is_cable = value;
        is_cable.value_namespace = name_space;
        is_cable.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-te-link")
    {
        is_te_link.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-cops")
    {
        is_cops.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "is-cable")
    {
        is_cable.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-te-link" || name == "is-local" || name == "is-cops" || name == "is-default" || name == "is-cable")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Header::Header()
    :
    rsvp_version{YType::uint8, "rsvp-version"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    ip_source_address{YType::str, "ip-source-address"}
{

    yang_name = "header"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Header::~Header()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Header::has_data() const
{
    return rsvp_version.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_ttl.is_set
	|| rsvp_message_type.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| ip_source_address.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvp_version.yfilter)
	|| ydk::is_set(rsvp_header_flags.yfilter)
	|| ydk::is_set(rsvp_ttl.yfilter)
	|| ydk::is_set(rsvp_message_type.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(ip_ttl.yfilter)
	|| ydk::is_set(ip_source_address.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Header::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvp_version.is_set || is_set(rsvp_version.yfilter)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.yfilter)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.yfilter)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.yfilter)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.yfilter)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (ip_source_address.is_set || is_set(ip_source_address.yfilter)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
        rsvp_version.value_namespace = name_space;
        rsvp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
        rsvp_header_flags.value_namespace = name_space;
        rsvp_header_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
        rsvp_ttl.value_namespace = name_space;
        rsvp_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
        rsvp_message_type.value_namespace = name_space;
        rsvp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl = value;
        ip_ttl.value_namespace = name_space;
        ip_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
        ip_source_address.value_namespace = name_space;
        ip_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvp-version")
    {
        rsvp_version.yfilter = yfilter;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags.yfilter = yfilter;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl.yfilter = yfilter;
    }
    if(value_path == "ip-source-address")
    {
        ip_source_address.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-version" || name == "rsvp-header-flags" || name == "rsvp-ttl" || name == "rsvp-message-type" || name == "ip-tos" || name == "ip-ttl" || name == "ip-source-address")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::ExpiryTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::~ExpiryTime()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_installed{YType::boolean, "is-installed"},
    is_forwarding{YType::boolean, "is-forwarding"}
{

    yang_name = "policy-flags"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::~PolicyFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_installed.is_set
	|| is_forwarding.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_installed.yfilter)
	|| ydk::is_set(is_forwarding.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.yfilter)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
        is_accepted.value_namespace = name_space;
        is_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
        is_installed.value_namespace = name_space;
        is_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
        is_forwarding.value_namespace = name_space;
        is_forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-accepted")
    {
        is_accepted.yfilter = yfilter;
    }
    if(value_path == "is-installed")
    {
        is_installed.yfilter = yfilter;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-installed" || name == "is-forwarding")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"},
    is_bypass{YType::boolean, "is-bypass"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::has_data() const
{
    return is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set
	|| is_bypass.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter)
	|| ydk::is_set(is_bypass.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());
    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-needed")
    {
        is_needed = value;
        is_needed.value_namespace = name_space;
        is_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
        is_report_required.value_namespace = name_space;
        is_report_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
        is_resync.value_namespace = name_space;
        is_resync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bypass")
    {
        is_bypass = value;
        is_bypass.value_namespace = name_space;
        is_bypass.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-needed")
    {
        is_needed.yfilter = yfilter;
    }
    if(value_path == "is-report-required")
    {
        is_report_required.yfilter = yfilter;
    }
    if(value_path == "is-resync")
    {
        is_resync.yfilter = yfilter;
    }
    if(value_path == "is-bypass")
    {
        is_bypass.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-needed" || name == "is-report-required" || name == "is-resync" || name == "is-bypass")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::LabelInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    local_downstream_label{YType::uint32, "local-downstream-label"},
    outgoing_downstream_label{YType::uint32, "outgoing-downstream-label"},
    merge_point_label{YType::uint32, "merge-point-label"},
    outgoing_upstream_label{YType::uint32, "outgoing-upstream-label"},
    local_upstream_label{YType::uint32, "local-upstream-label"},
    recovery_label{YType::uint32, "recovery-label"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"}
    	,
    generic_local_downstream_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel>())
	,generic_outgoing_downstream_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>())
	,generic_merge_point_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel>())
	,generic_outgoing_upstream_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>())
	,generic_local_upstream_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel>())
	,generic_recovery_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel>())
{
    generic_local_downstream_label->parent = this;
    generic_outgoing_downstream_label->parent = this;
    generic_merge_point_label->parent = this;
    generic_outgoing_upstream_label->parent = this;
    generic_local_upstream_label->parent = this;
    generic_recovery_label->parent = this;

    yang_name = "label-info"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::~LabelInfo()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::has_data() const
{
    return is_valid.is_set
	|| local_downstream_label.is_set
	|| outgoing_downstream_label.is_set
	|| merge_point_label.is_set
	|| outgoing_upstream_label.is_set
	|| local_upstream_label.is_set
	|| recovery_label.is_set
	|| lsp_wrap_label.is_set
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_data())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_data())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_data())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_data())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_data())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(local_downstream_label.yfilter)
	|| ydk::is_set(outgoing_downstream_label.yfilter)
	|| ydk::is_set(merge_point_label.yfilter)
	|| ydk::is_set(outgoing_upstream_label.yfilter)
	|| ydk::is_set(local_upstream_label.yfilter)
	|| ydk::is_set(recovery_label.yfilter)
	|| ydk::is_set(lsp_wrap_label.yfilter)
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_operation())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_operation())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_operation())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_operation())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_operation())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (local_downstream_label.is_set || is_set(local_downstream_label.yfilter)) leaf_name_data.push_back(local_downstream_label.get_name_leafdata());
    if (outgoing_downstream_label.is_set || is_set(outgoing_downstream_label.yfilter)) leaf_name_data.push_back(outgoing_downstream_label.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.yfilter)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (outgoing_upstream_label.is_set || is_set(outgoing_upstream_label.yfilter)) leaf_name_data.push_back(outgoing_upstream_label.get_name_leafdata());
    if (local_upstream_label.is_set || is_set(local_upstream_label.yfilter)) leaf_name_data.push_back(local_upstream_label.get_name_leafdata());
    if (recovery_label.is_set || is_set(recovery_label.yfilter)) leaf_name_data.push_back(recovery_label.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.yfilter)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-local-downstream-label")
    {
        if(generic_local_downstream_label == nullptr)
        {
            generic_local_downstream_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel>();
        }
        return generic_local_downstream_label;
    }

    if(child_yang_name == "generic-outgoing-downstream-label")
    {
        if(generic_outgoing_downstream_label == nullptr)
        {
            generic_outgoing_downstream_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>();
        }
        return generic_outgoing_downstream_label;
    }

    if(child_yang_name == "generic-merge-point-label")
    {
        if(generic_merge_point_label == nullptr)
        {
            generic_merge_point_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel>();
        }
        return generic_merge_point_label;
    }

    if(child_yang_name == "generic-outgoing-upstream-label")
    {
        if(generic_outgoing_upstream_label == nullptr)
        {
            generic_outgoing_upstream_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>();
        }
        return generic_outgoing_upstream_label;
    }

    if(child_yang_name == "generic-local-upstream-label")
    {
        if(generic_local_upstream_label == nullptr)
        {
            generic_local_upstream_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel>();
        }
        return generic_local_upstream_label;
    }

    if(child_yang_name == "generic-recovery-label")
    {
        if(generic_recovery_label == nullptr)
        {
            generic_recovery_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel>();
        }
        return generic_recovery_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_local_downstream_label != nullptr)
    {
        children["generic-local-downstream-label"] = generic_local_downstream_label;
    }

    if(generic_outgoing_downstream_label != nullptr)
    {
        children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
    }

    if(generic_merge_point_label != nullptr)
    {
        children["generic-merge-point-label"] = generic_merge_point_label;
    }

    if(generic_outgoing_upstream_label != nullptr)
    {
        children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
    }

    if(generic_local_upstream_label != nullptr)
    {
        children["generic-local-upstream-label"] = generic_local_upstream_label;
    }

    if(generic_recovery_label != nullptr)
    {
        children["generic-recovery-label"] = generic_recovery_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-downstream-label")
    {
        local_downstream_label = value;
        local_downstream_label.value_namespace = name_space;
        local_downstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label = value;
        outgoing_downstream_label.value_namespace = name_space;
        outgoing_downstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
        merge_point_label.value_namespace = name_space;
        merge_point_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label = value;
        outgoing_upstream_label.value_namespace = name_space;
        outgoing_upstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-upstream-label")
    {
        local_upstream_label = value;
        local_upstream_label.value_namespace = name_space;
        local_upstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-label")
    {
        recovery_label = value;
        recovery_label.value_namespace = name_space;
        recovery_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
        lsp_wrap_label.value_namespace = name_space;
        lsp_wrap_label.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "local-downstream-label")
    {
        local_downstream_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label.yfilter = yfilter;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label.yfilter = yfilter;
    }
    if(value_path == "local-upstream-label")
    {
        local_upstream_label.yfilter = yfilter;
    }
    if(value_path == "recovery-label")
    {
        recovery_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-local-downstream-label" || name == "generic-outgoing-downstream-label" || name == "generic-merge-point-label" || name == "generic-outgoing-upstream-label" || name == "generic-local-upstream-label" || name == "generic-recovery-label" || name == "is-valid" || name == "local-downstream-label" || name == "outgoing-downstream-label" || name == "merge-point-label" || name == "outgoing-upstream-label" || name == "local-upstream-label" || name == "recovery-label" || name == "lsp-wrap-label")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GenericLocalDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-local-downstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::~GenericLocalDownstreamLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-downstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-local-downstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-local-downstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GenericOutgoingDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-outgoing-downstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::~GenericOutgoingDownstreamLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-downstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-downstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-outgoing-downstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GenericMergePointLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-merge-point-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::~GenericMergePointLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-merge-point-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-merge-point-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-merge-point-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GenericOutgoingUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-outgoing-upstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::~GenericOutgoingUpstreamLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-upstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-upstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-outgoing-upstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GenericLocalUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-local-upstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::~GenericLocalUpstreamLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-upstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-local-upstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-local-upstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GenericRecoveryLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-recovery-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::~GenericRecoveryLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-recovery-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-recovery-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/label-info/generic-recovery-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::ClassType::ClassType()
    :
    is_class_type_info_valid{YType::boolean, "is-class-type-info-valid"},
    class_type{YType::uint8, "class-type"}
{

    yang_name = "class-type"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::ClassType::~ClassType()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::ClassType::has_data() const
{
    return is_class_type_info_valid.is_set
	|| class_type.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_class_type_info_valid.yfilter)
	|| ydk::is_set(class_type.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_class_type_info_valid.is_set || is_set(is_class_type_info_valid.yfilter)) leaf_name_data.push_back(is_class_type_info_valid.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-class-type-info-valid")
    {
        is_class_type_info_valid = value;
        is_class_type_info_valid.value_namespace = name_space;
        is_class_type_info_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-class-type-info-valid")
    {
        is_class_type_info_valid.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-class-type-info-valid" || name == "class-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::Pfc()
    :
    output_interface{YType::str, "output-interface"}
    	,
    policy_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags>())
	,policy_query_flags(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags>())
{
    policy_flags->parent = this;
    policy_query_flags->parent = this;

    yang_name = "pfc"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::~Pfc()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::has_data() const
{
    return output_interface.is_set
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Pfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_flags != nullptr)
    {
        children["policy-flags"] = policy_flags;
    }

    if(policy_query_flags != nullptr)
    {
        children["policy-query-flags"] = policy_query_flags;
    }

    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-flags" || name == "policy-query-flags" || name == "output-interface")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_installed{YType::boolean, "is-installed"},
    is_forwarding{YType::boolean, "is-forwarding"}
{

    yang_name = "policy-flags"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::~PolicyFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_installed.is_set
	|| is_forwarding.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_installed.yfilter)
	|| ydk::is_set(is_forwarding.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/pfc/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.yfilter)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
        is_accepted.value_namespace = name_space;
        is_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
        is_installed.value_namespace = name_space;
        is_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
        is_forwarding.value_namespace = name_space;
        is_forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-accepted")
    {
        is_accepted.yfilter = yfilter;
    }
    if(value_path == "is-installed")
    {
        is_installed.yfilter = yfilter;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-installed" || name == "is-forwarding")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"},
    is_bypass{YType::boolean, "is-bypass"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::has_data() const
{
    return is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set
	|| is_bypass.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter)
	|| ydk::is_set(is_bypass.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/pfc/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());
    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-needed")
    {
        is_needed = value;
        is_needed.value_namespace = name_space;
        is_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
        is_report_required.value_namespace = name_space;
        is_report_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
        is_resync.value_namespace = name_space;
        is_resync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bypass")
    {
        is_bypass = value;
        is_bypass.value_namespace = name_space;
        is_bypass.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-needed")
    {
        is_needed.yfilter = yfilter;
    }
    if(value_path == "is-report-required")
    {
        is_report_required.yfilter = yfilter;
    }
    if(value_path == "is-resync")
    {
        is_resync.yfilter = yfilter;
    }
    if(value_path == "is-bypass")
    {
        is_bypass.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-needed" || name == "is-report-required" || name == "is-resync" || name == "is-bypass")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::InEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "in-ero"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::~InEro()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::InEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::InEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::InEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Rsvp::PsbDetaileds::PsbDetailed::InEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/in-ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/in-ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::OutEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "out-ero"; yang_parent_name = "psb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::~OutEro()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::OutEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/out-ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-detaileds/psb-detailed/out-ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetaileds()
{

    yang_name = "controller-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::ControllerDetaileds::~ControllerDetaileds()
{
}

bool Rsvp::ControllerDetaileds::has_data() const
{
    for (std::size_t index=0; index<controller_detailed.size(); index++)
    {
        if(controller_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::ControllerDetaileds::has_operation() const
{
    for (std::size_t index=0; index<controller_detailed.size(); index++)
    {
        if(controller_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::ControllerDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-detailed")
    {
        auto c = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed>();
        c->parent = this;
        controller_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : controller_detailed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::ControllerDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::ControllerDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::ControllerDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-detailed")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::ControllerDetailed()
    :
    controller_name{YType::str, "controller-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    signalling_ip_tos{YType::uint8, "signalling-ip-tos"},
    integrity_send_password{YType::str, "integrity-send-password"},
    integrity_receive_password{YType::str, "integrity-receive-password"},
    integrity_receive_password_optional{YType::uint8, "integrity-receive-password-optional"},
    refresh_timer_state{YType::enumeration, "refresh-timer-state"},
    summary_refresh_timer_state{YType::enumeration, "summary-refresh-timer-state"},
    refresh_interval{YType::int32, "refresh-interval"},
    out_of_band_refresh_interval{YType::uint32, "out-of-band-refresh-interval"},
    summary_refresh_max_size{YType::uint32, "summary-refresh-max-size"},
    bundle_message_max_size{YType::uint32, "bundle-message-max-size"},
    expiry_timer_state{YType::enumeration, "expiry-timer-state"},
    expiry_states{YType::int32, "expiry-states"},
    expiry_interval{YType::int32, "expiry-interval"},
    expiry_drops_tolerated{YType::int32, "expiry-drops-tolerated"},
    out_of_band_expiry_drops_tolerated{YType::uint32, "out-of-band-expiry-drops-tolerated"},
    ack_hold_time{YType::uint32, "ack-hold-time"},
    ack_max_size{YType::uint32, "ack-max-size"},
    retransmit_time{YType::uint32, "retransmit-time"},
    pacing_interval{YType::uint32, "pacing-interval"},
    pacing_message_rate{YType::uint32, "pacing-message-rate"},
    pacing_timer_state{YType::enumeration, "pacing-timer-state"},
    pacing_messages{YType::int32, "pacing-messages"}
    	,
    bandwidth_information(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation>())
	,flags(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::Flags>())
{
    bandwidth_information->parent = this;
    flags->parent = this;

    yang_name = "controller-detailed"; yang_parent_name = "controller-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::~ControllerDetailed()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::has_data() const
{
    for (std::size_t index=0; index<neighbor_array.size(); index++)
    {
        if(neighbor_array[index]->has_data())
            return true;
    }
    return controller_name.is_set
	|| interface_name_xr.is_set
	|| signalling_ip_tos.is_set
	|| integrity_send_password.is_set
	|| integrity_receive_password.is_set
	|| integrity_receive_password_optional.is_set
	|| refresh_timer_state.is_set
	|| summary_refresh_timer_state.is_set
	|| refresh_interval.is_set
	|| out_of_band_refresh_interval.is_set
	|| summary_refresh_max_size.is_set
	|| bundle_message_max_size.is_set
	|| expiry_timer_state.is_set
	|| expiry_states.is_set
	|| expiry_interval.is_set
	|| expiry_drops_tolerated.is_set
	|| out_of_band_expiry_drops_tolerated.is_set
	|| ack_hold_time.is_set
	|| ack_max_size.is_set
	|| retransmit_time.is_set
	|| pacing_interval.is_set
	|| pacing_message_rate.is_set
	|| pacing_timer_state.is_set
	|| pacing_messages.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data())
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::has_operation() const
{
    for (std::size_t index=0; index<neighbor_array.size(); index++)
    {
        if(neighbor_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(signalling_ip_tos.yfilter)
	|| ydk::is_set(integrity_send_password.yfilter)
	|| ydk::is_set(integrity_receive_password.yfilter)
	|| ydk::is_set(integrity_receive_password_optional.yfilter)
	|| ydk::is_set(refresh_timer_state.yfilter)
	|| ydk::is_set(summary_refresh_timer_state.yfilter)
	|| ydk::is_set(refresh_interval.yfilter)
	|| ydk::is_set(out_of_band_refresh_interval.yfilter)
	|| ydk::is_set(summary_refresh_max_size.yfilter)
	|| ydk::is_set(bundle_message_max_size.yfilter)
	|| ydk::is_set(expiry_timer_state.yfilter)
	|| ydk::is_set(expiry_states.yfilter)
	|| ydk::is_set(expiry_interval.yfilter)
	|| ydk::is_set(expiry_drops_tolerated.yfilter)
	|| ydk::is_set(out_of_band_expiry_drops_tolerated.yfilter)
	|| ydk::is_set(ack_hold_time.yfilter)
	|| ydk::is_set(ack_max_size.yfilter)
	|| ydk::is_set(retransmit_time.yfilter)
	|| ydk::is_set(pacing_interval.yfilter)
	|| ydk::is_set(pacing_message_rate.yfilter)
	|| ydk::is_set(pacing_timer_state.yfilter)
	|| ydk::is_set(pacing_messages.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation())
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/controller-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-detailed" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (signalling_ip_tos.is_set || is_set(signalling_ip_tos.yfilter)) leaf_name_data.push_back(signalling_ip_tos.get_name_leafdata());
    if (integrity_send_password.is_set || is_set(integrity_send_password.yfilter)) leaf_name_data.push_back(integrity_send_password.get_name_leafdata());
    if (integrity_receive_password.is_set || is_set(integrity_receive_password.yfilter)) leaf_name_data.push_back(integrity_receive_password.get_name_leafdata());
    if (integrity_receive_password_optional.is_set || is_set(integrity_receive_password_optional.yfilter)) leaf_name_data.push_back(integrity_receive_password_optional.get_name_leafdata());
    if (refresh_timer_state.is_set || is_set(refresh_timer_state.yfilter)) leaf_name_data.push_back(refresh_timer_state.get_name_leafdata());
    if (summary_refresh_timer_state.is_set || is_set(summary_refresh_timer_state.yfilter)) leaf_name_data.push_back(summary_refresh_timer_state.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());
    if (out_of_band_refresh_interval.is_set || is_set(out_of_band_refresh_interval.yfilter)) leaf_name_data.push_back(out_of_band_refresh_interval.get_name_leafdata());
    if (summary_refresh_max_size.is_set || is_set(summary_refresh_max_size.yfilter)) leaf_name_data.push_back(summary_refresh_max_size.get_name_leafdata());
    if (bundle_message_max_size.is_set || is_set(bundle_message_max_size.yfilter)) leaf_name_data.push_back(bundle_message_max_size.get_name_leafdata());
    if (expiry_timer_state.is_set || is_set(expiry_timer_state.yfilter)) leaf_name_data.push_back(expiry_timer_state.get_name_leafdata());
    if (expiry_states.is_set || is_set(expiry_states.yfilter)) leaf_name_data.push_back(expiry_states.get_name_leafdata());
    if (expiry_interval.is_set || is_set(expiry_interval.yfilter)) leaf_name_data.push_back(expiry_interval.get_name_leafdata());
    if (expiry_drops_tolerated.is_set || is_set(expiry_drops_tolerated.yfilter)) leaf_name_data.push_back(expiry_drops_tolerated.get_name_leafdata());
    if (out_of_band_expiry_drops_tolerated.is_set || is_set(out_of_band_expiry_drops_tolerated.yfilter)) leaf_name_data.push_back(out_of_band_expiry_drops_tolerated.get_name_leafdata());
    if (ack_hold_time.is_set || is_set(ack_hold_time.yfilter)) leaf_name_data.push_back(ack_hold_time.get_name_leafdata());
    if (ack_max_size.is_set || is_set(ack_max_size.yfilter)) leaf_name_data.push_back(ack_max_size.get_name_leafdata());
    if (retransmit_time.is_set || is_set(retransmit_time.yfilter)) leaf_name_data.push_back(retransmit_time.get_name_leafdata());
    if (pacing_interval.is_set || is_set(pacing_interval.yfilter)) leaf_name_data.push_back(pacing_interval.get_name_leafdata());
    if (pacing_message_rate.is_set || is_set(pacing_message_rate.yfilter)) leaf_name_data.push_back(pacing_message_rate.get_name_leafdata());
    if (pacing_timer_state.is_set || is_set(pacing_timer_state.yfilter)) leaf_name_data.push_back(pacing_timer_state.get_name_leafdata());
    if (pacing_messages.is_set || is_set(pacing_messages.yfilter)) leaf_name_data.push_back(pacing_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "neighbor-array")
    {
        auto c = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray>();
        c->parent = this;
        neighbor_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    count = 0;
    for (auto const & c : neighbor_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos = value;
        signalling_ip_tos.value_namespace = name_space;
        signalling_ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password = value;
        integrity_send_password.value_namespace = name_space;
        integrity_send_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password = value;
        integrity_receive_password.value_namespace = name_space;
        integrity_receive_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional = value;
        integrity_receive_password_optional.value_namespace = name_space;
        integrity_receive_password_optional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state = value;
        refresh_timer_state.value_namespace = name_space;
        refresh_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state = value;
        summary_refresh_timer_state.value_namespace = name_space;
        summary_refresh_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval = value;
        out_of_band_refresh_interval.value_namespace = name_space;
        out_of_band_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size = value;
        summary_refresh_max_size.value_namespace = name_space;
        summary_refresh_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size = value;
        bundle_message_max_size.value_namespace = name_space;
        bundle_message_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state = value;
        expiry_timer_state.value_namespace = name_space;
        expiry_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-states")
    {
        expiry_states = value;
        expiry_states.value_namespace = name_space;
        expiry_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval = value;
        expiry_interval.value_namespace = name_space;
        expiry_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated = value;
        expiry_drops_tolerated.value_namespace = name_space;
        expiry_drops_tolerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated = value;
        out_of_band_expiry_drops_tolerated.value_namespace = name_space;
        out_of_band_expiry_drops_tolerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time = value;
        ack_hold_time.value_namespace = name_space;
        ack_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size = value;
        ack_max_size.value_namespace = name_space;
        ack_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time = value;
        retransmit_time.value_namespace = name_space;
        retransmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval = value;
        pacing_interval.value_namespace = name_space;
        pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate = value;
        pacing_message_rate.value_namespace = name_space;
        pacing_message_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state = value;
        pacing_timer_state.value_namespace = name_space;
        pacing_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages = value;
        pacing_messages.value_namespace = name_space;
        pacing_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos.yfilter = yfilter;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password.yfilter = yfilter;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password.yfilter = yfilter;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional.yfilter = yfilter;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state.yfilter = yfilter;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state.yfilter = yfilter;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size.yfilter = yfilter;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size.yfilter = yfilter;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state.yfilter = yfilter;
    }
    if(value_path == "expiry-states")
    {
        expiry_states.yfilter = yfilter;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval.yfilter = yfilter;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated.yfilter = yfilter;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated.yfilter = yfilter;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time.yfilter = yfilter;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size.yfilter = yfilter;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time.yfilter = yfilter;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval.yfilter = yfilter;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate.yfilter = yfilter;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state.yfilter = yfilter;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "flags" || name == "neighbor-array" || name == "controller-name" || name == "interface-name-xr" || name == "signalling-ip-tos" || name == "integrity-send-password" || name == "integrity-receive-password" || name == "integrity-receive-password-optional" || name == "refresh-timer-state" || name == "summary-refresh-timer-state" || name == "refresh-interval" || name == "out-of-band-refresh-interval" || name == "summary-refresh-max-size" || name == "bundle-message-max-size" || name == "expiry-timer-state" || name == "expiry-states" || name == "expiry-interval" || name == "expiry-drops-tolerated" || name == "out-of-band-expiry-drops-tolerated" || name == "ack-hold-time" || name == "ack-max-size" || name == "retransmit-time" || name == "pacing-interval" || name == "pacing-message-rate" || name == "pacing-timer-state" || name == "pacing-messages")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "controller-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pre_standard_dste_interface != nullptr)
    {
        children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        children["standard-dste-interface"] = standard_dste_interface;
    }

    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_subpool_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-subpool-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_pool0_bandwidth{YType::uint64, "max-pool0-bandwidth"},
    max_pool1_bandwidth{YType::uint64, "max-pool1-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_bc0_bandwidth_absolute{YType::boolean, "is-max-bc0-bandwidth-absolute"},
    is_max_bc1_bandwidth_absolute{YType::boolean, "is-max-bc1-bandwidth-absolute"}
{

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::Flags::Flags()
    :
    is_mpls_enabled{YType::boolean, "is-mpls-enabled"},
    is_refresh_reduction_enabled{YType::boolean, "is-refresh-reduction-enabled"},
    is_pacing_enabled{YType::boolean, "is-pacing-enabled"},
    is_refresh_enabled{YType::boolean, "is-refresh-enabled"},
    is_s_refresh_enabled{YType::boolean, "is-s-refresh-enabled"},
    is_interface_down{YType::boolean, "is-interface-down"},
    is_interface_created{YType::boolean, "is-interface-created"},
    is_rel_s_refresh_enabled{YType::boolean, "is-rel-s-refresh-enabled"},
    is_backup_tunnel{YType::boolean, "is-backup-tunnel"},
    is_rsvp_configured{YType::boolean, "is-rsvp-configured"},
    is_non_default_vrf{YType::boolean, "is-non-default-vrf"},
    is_message_bundling_enabled{YType::boolean, "is-message-bundling-enabled"}
{

    yang_name = "flags"; yang_parent_name = "controller-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::Flags::~Flags()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::Flags::has_data() const
{
    return is_mpls_enabled.is_set
	|| is_refresh_reduction_enabled.is_set
	|| is_pacing_enabled.is_set
	|| is_refresh_enabled.is_set
	|| is_s_refresh_enabled.is_set
	|| is_interface_down.is_set
	|| is_interface_created.is_set
	|| is_rel_s_refresh_enabled.is_set
	|| is_backup_tunnel.is_set
	|| is_rsvp_configured.is_set
	|| is_non_default_vrf.is_set
	|| is_message_bundling_enabled.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mpls_enabled.yfilter)
	|| ydk::is_set(is_refresh_reduction_enabled.yfilter)
	|| ydk::is_set(is_pacing_enabled.yfilter)
	|| ydk::is_set(is_refresh_enabled.yfilter)
	|| ydk::is_set(is_s_refresh_enabled.yfilter)
	|| ydk::is_set(is_interface_down.yfilter)
	|| ydk::is_set(is_interface_created.yfilter)
	|| ydk::is_set(is_rel_s_refresh_enabled.yfilter)
	|| ydk::is_set(is_backup_tunnel.yfilter)
	|| ydk::is_set(is_rsvp_configured.yfilter)
	|| ydk::is_set(is_non_default_vrf.yfilter)
	|| ydk::is_set(is_message_bundling_enabled.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mpls_enabled.is_set || is_set(is_mpls_enabled.yfilter)) leaf_name_data.push_back(is_mpls_enabled.get_name_leafdata());
    if (is_refresh_reduction_enabled.is_set || is_set(is_refresh_reduction_enabled.yfilter)) leaf_name_data.push_back(is_refresh_reduction_enabled.get_name_leafdata());
    if (is_pacing_enabled.is_set || is_set(is_pacing_enabled.yfilter)) leaf_name_data.push_back(is_pacing_enabled.get_name_leafdata());
    if (is_refresh_enabled.is_set || is_set(is_refresh_enabled.yfilter)) leaf_name_data.push_back(is_refresh_enabled.get_name_leafdata());
    if (is_s_refresh_enabled.is_set || is_set(is_s_refresh_enabled.yfilter)) leaf_name_data.push_back(is_s_refresh_enabled.get_name_leafdata());
    if (is_interface_down.is_set || is_set(is_interface_down.yfilter)) leaf_name_data.push_back(is_interface_down.get_name_leafdata());
    if (is_interface_created.is_set || is_set(is_interface_created.yfilter)) leaf_name_data.push_back(is_interface_created.get_name_leafdata());
    if (is_rel_s_refresh_enabled.is_set || is_set(is_rel_s_refresh_enabled.yfilter)) leaf_name_data.push_back(is_rel_s_refresh_enabled.get_name_leafdata());
    if (is_backup_tunnel.is_set || is_set(is_backup_tunnel.yfilter)) leaf_name_data.push_back(is_backup_tunnel.get_name_leafdata());
    if (is_rsvp_configured.is_set || is_set(is_rsvp_configured.yfilter)) leaf_name_data.push_back(is_rsvp_configured.get_name_leafdata());
    if (is_non_default_vrf.is_set || is_set(is_non_default_vrf.yfilter)) leaf_name_data.push_back(is_non_default_vrf.get_name_leafdata());
    if (is_message_bundling_enabled.is_set || is_set(is_message_bundling_enabled.yfilter)) leaf_name_data.push_back(is_message_bundling_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled = value;
        is_mpls_enabled.value_namespace = name_space;
        is_mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled = value;
        is_refresh_reduction_enabled.value_namespace = name_space;
        is_refresh_reduction_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled = value;
        is_pacing_enabled.value_namespace = name_space;
        is_pacing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled = value;
        is_refresh_enabled.value_namespace = name_space;
        is_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled = value;
        is_s_refresh_enabled.value_namespace = name_space;
        is_s_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down = value;
        is_interface_down.value_namespace = name_space;
        is_interface_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created = value;
        is_interface_created.value_namespace = name_space;
        is_interface_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled = value;
        is_rel_s_refresh_enabled.value_namespace = name_space;
        is_rel_s_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel = value;
        is_backup_tunnel.value_namespace = name_space;
        is_backup_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured = value;
        is_rsvp_configured.value_namespace = name_space;
        is_rsvp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf = value;
        is_non_default_vrf.value_namespace = name_space;
        is_non_default_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled = value;
        is_message_bundling_enabled.value_namespace = name_space;
        is_message_bundling_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled.yfilter = yfilter;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled.yfilter = yfilter;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down.yfilter = yfilter;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created.yfilter = yfilter;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel.yfilter = yfilter;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured.yfilter = yfilter;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf.yfilter = yfilter;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mpls-enabled" || name == "is-refresh-reduction-enabled" || name == "is-pacing-enabled" || name == "is-refresh-enabled" || name == "is-s-refresh-enabled" || name == "is-interface-down" || name == "is-interface-created" || name == "is-rel-s-refresh-enabled" || name == "is-backup-tunnel" || name == "is-rsvp-configured" || name == "is-non-default-vrf" || name == "is-message-bundling-enabled")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborArray()
    :
    is_neighbor_refresh_reduction_capable{YType::boolean, "is-neighbor-refresh-reduction-capable"},
    neighbor_address{YType::str, "neighbor-address"},
    message_ids{YType::uint32, "message-ids"},
    outgoing_states{YType::int32, "outgoing-states"}
    	,
    expiry_time(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime>())
{
    expiry_time->parent = this;

    yang_name = "neighbor-array"; yang_parent_name = "controller-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::~NeighborArray()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::has_data() const
{
    for (std::size_t index=0; index<neighbor_message_id.size(); index++)
    {
        if(neighbor_message_id[index]->has_data())
            return true;
    }
    return is_neighbor_refresh_reduction_capable.is_set
	|| neighbor_address.is_set
	|| message_ids.is_set
	|| outgoing_states.is_set
	|| (expiry_time !=  nullptr && expiry_time->has_data());
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::has_operation() const
{
    for (std::size_t index=0; index<neighbor_message_id.size(); index++)
    {
        if(neighbor_message_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor_refresh_reduction_capable.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(message_ids.yfilter)
	|| ydk::is_set(outgoing_states.yfilter)
	|| (expiry_time !=  nullptr && expiry_time->has_operation());
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor_refresh_reduction_capable.is_set || is_set(is_neighbor_refresh_reduction_capable.yfilter)) leaf_name_data.push_back(is_neighbor_refresh_reduction_capable.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (message_ids.is_set || is_set(message_ids.yfilter)) leaf_name_data.push_back(message_ids.get_name_leafdata());
    if (outgoing_states.is_set || is_set(outgoing_states.yfilter)) leaf_name_data.push_back(outgoing_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "neighbor-message-id")
    {
        auto c = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId>();
        c->parent = this;
        neighbor_message_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(expiry_time != nullptr)
    {
        children["expiry-time"] = expiry_time;
    }

    count = 0;
    for (auto const & c : neighbor_message_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable = value;
        is_neighbor_refresh_reduction_capable.value_namespace = name_space;
        is_neighbor_refresh_reduction_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-ids")
    {
        message_ids = value;
        message_ids.value_namespace = name_space;
        message_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states = value;
        outgoing_states.value_namespace = name_space;
        outgoing_states.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "message-ids")
    {
        message_ids.yfilter = yfilter;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time" || name == "neighbor-message-id" || name == "is-neighbor-refresh-reduction-capable" || name == "neighbor-address" || name == "message-ids" || name == "outgoing-states")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::ExpiryTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::~ExpiryTime()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::NeighborMessageId()
    :
    message_id{YType::uint32, "message-id"}
{

    yang_name = "neighbor-message-id"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::~NeighborMessageId()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::has_data() const
{
    return message_id.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_id.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-message-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-id")
    {
        message_id = value;
        message_id.value_namespace = name_space;
        message_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-id")
    {
        message_id.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-id")
        return true;
    return false;
}

Rsvp::FrrSummary::FrrSummary()
    :
    path_states(std::make_shared<Rsvp::FrrSummary::PathStates>())
	,reservation_states(std::make_shared<Rsvp::FrrSummary::ReservationStates>())
{
    path_states->parent = this;
    reservation_states->parent = this;

    yang_name = "frr-summary"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::FrrSummary::~FrrSummary()
{
}

bool Rsvp::FrrSummary::has_data() const
{
    return (path_states !=  nullptr && path_states->has_data())
	|| (reservation_states !=  nullptr && reservation_states->has_data());
}

bool Rsvp::FrrSummary::has_operation() const
{
    return is_set(yfilter)
	|| (path_states !=  nullptr && path_states->has_operation())
	|| (reservation_states !=  nullptr && reservation_states->has_operation());
}

std::string Rsvp::FrrSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::FrrSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::FrrSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::FrrSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-states")
    {
        if(path_states == nullptr)
        {
            path_states = std::make_shared<Rsvp::FrrSummary::PathStates>();
        }
        return path_states;
    }

    if(child_yang_name == "reservation-states")
    {
        if(reservation_states == nullptr)
        {
            reservation_states = std::make_shared<Rsvp::FrrSummary::ReservationStates>();
        }
        return reservation_states;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::FrrSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_states != nullptr)
    {
        children["path-states"] = path_states;
    }

    if(reservation_states != nullptr)
    {
        children["reservation-states"] = reservation_states;
    }

    return children;
}

void Rsvp::FrrSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::FrrSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::FrrSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-states" || name == "reservation-states")
        return true;
    return false;
}

Rsvp::FrrSummary::PathStates::PathStates()
    :
    total{YType::uint32, "total"},
    active_instances{YType::uint32, "active-instances"},
    ready_instances{YType::uint32, "ready-instances"},
    active_wait_instances{YType::uint32, "active-wait-instances"}
{

    yang_name = "path-states"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::FrrSummary::PathStates::~PathStates()
{
}

bool Rsvp::FrrSummary::PathStates::has_data() const
{
    return total.is_set
	|| active_instances.is_set
	|| ready_instances.is_set
	|| active_wait_instances.is_set;
}

bool Rsvp::FrrSummary::PathStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(active_instances.yfilter)
	|| ydk::is_set(ready_instances.yfilter)
	|| ydk::is_set(active_wait_instances.yfilter);
}

std::string Rsvp::FrrSummary::PathStates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frr-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::FrrSummary::PathStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::FrrSummary::PathStates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (active_instances.is_set || is_set(active_instances.yfilter)) leaf_name_data.push_back(active_instances.get_name_leafdata());
    if (ready_instances.is_set || is_set(ready_instances.yfilter)) leaf_name_data.push_back(ready_instances.get_name_leafdata());
    if (active_wait_instances.is_set || is_set(active_wait_instances.yfilter)) leaf_name_data.push_back(active_wait_instances.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::FrrSummary::PathStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::FrrSummary::PathStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::FrrSummary::PathStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-instances")
    {
        active_instances = value;
        active_instances.value_namespace = name_space;
        active_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-instances")
    {
        ready_instances = value;
        ready_instances.value_namespace = name_space;
        ready_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances = value;
        active_wait_instances.value_namespace = name_space;
        active_wait_instances.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::FrrSummary::PathStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "active-instances")
    {
        active_instances.yfilter = yfilter;
    }
    if(value_path == "ready-instances")
    {
        ready_instances.yfilter = yfilter;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances.yfilter = yfilter;
    }
}

bool Rsvp::FrrSummary::PathStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "active-instances" || name == "ready-instances" || name == "active-wait-instances")
        return true;
    return false;
}

Rsvp::FrrSummary::ReservationStates::ReservationStates()
    :
    total{YType::uint32, "total"},
    active_instances{YType::uint32, "active-instances"},
    ready_instances{YType::uint32, "ready-instances"},
    active_wait_instances{YType::uint32, "active-wait-instances"}
{

    yang_name = "reservation-states"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::FrrSummary::ReservationStates::~ReservationStates()
{
}

bool Rsvp::FrrSummary::ReservationStates::has_data() const
{
    return total.is_set
	|| active_instances.is_set
	|| ready_instances.is_set
	|| active_wait_instances.is_set;
}

bool Rsvp::FrrSummary::ReservationStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(active_instances.yfilter)
	|| ydk::is_set(ready_instances.yfilter)
	|| ydk::is_set(active_wait_instances.yfilter);
}

std::string Rsvp::FrrSummary::ReservationStates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frr-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::FrrSummary::ReservationStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::FrrSummary::ReservationStates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (active_instances.is_set || is_set(active_instances.yfilter)) leaf_name_data.push_back(active_instances.get_name_leafdata());
    if (ready_instances.is_set || is_set(ready_instances.yfilter)) leaf_name_data.push_back(ready_instances.get_name_leafdata());
    if (active_wait_instances.is_set || is_set(active_wait_instances.yfilter)) leaf_name_data.push_back(active_wait_instances.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::FrrSummary::ReservationStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::FrrSummary::ReservationStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::FrrSummary::ReservationStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-instances")
    {
        active_instances = value;
        active_instances.value_namespace = name_space;
        active_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-instances")
    {
        ready_instances = value;
        ready_instances.value_namespace = name_space;
        ready_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances = value;
        active_wait_instances.value_namespace = name_space;
        active_wait_instances.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::FrrSummary::ReservationStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "active-instances")
    {
        active_instances.yfilter = yfilter;
    }
    if(value_path == "ready-instances")
    {
        ready_instances.yfilter = yfilter;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances.yfilter = yfilter;
    }
}

bool Rsvp::FrrSummary::ReservationStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "active-instances" || name == "ready-instances" || name == "active-wait-instances")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetaileds()
{

    yang_name = "rsb-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::~RsbDetaileds()
{
}

bool Rsvp::RsbDetaileds::has_data() const
{
    for (std::size_t index=0; index<rsb_detailed.size(); index++)
    {
        if(rsb_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RsbDetaileds::has_operation() const
{
    for (std::size_t index=0; index<rsb_detailed.size(); index++)
    {
        if(rsb_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RsbDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsb-detailed")
    {
        auto c = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed>();
        c->parent = this;
        rsb_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rsb_detailed)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::RsbDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsb-detailed")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::RsbDetailed()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    protocol{YType::int32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::int32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    input_adjusted_interface{YType::str, "input-adjusted-interface"},
    input_physical_interface{YType::str, "input-physical-interface"}
    	,
    flow_spec(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec>())
	,session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session>())
	,s2l_sub_lsp(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp>())
	,style(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Style>())
	,filter(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter>())
	,rsb_flags(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::RsbFlags>())
	,hop(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Hop>())
	,policy_sources(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicySources>())
	,header(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Header>())
	,policy_flags(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags>())
	,expiry_time(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime>())
	,policy_query_flags(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags>())
	,label_info(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo>())
{
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    session->parent = this;
    s2l_sub_lsp->parent = this;
    style->parent = this;
    filter->parent = this;
    rsb_flags->parent = this;
    hop->parent = this;
    policy_sources->parent = this;
    header->parent = this;
    policy_flags->parent = this;
    expiry_time->parent = this;
    policy_query_flags->parent = this;
    label_info->parent = this;

    yang_name = "rsb-detailed"; yang_parent_name = "rsb-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::~RsbDetailed()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrf_name.is_set
	|| input_adjusted_interface.is_set
	|| input_physical_interface.is_set
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (style !=  nullptr && style->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (rsb_flags !=  nullptr && rsb_flags->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (policy_sources !=  nullptr && policy_sources->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (expiry_time !=  nullptr && expiry_time->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data())
	|| (label_info !=  nullptr && label_info->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(input_adjusted_interface.yfilter)
	|| ydk::is_set(input_physical_interface.yfilter)
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (style !=  nullptr && style->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (rsb_flags !=  nullptr && rsb_flags->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (policy_sources !=  nullptr && policy_sources->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (expiry_time !=  nullptr && expiry_time->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation())
	|| (label_info !=  nullptr && label_info->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-detailed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (input_adjusted_interface.is_set || is_set(input_adjusted_interface.yfilter)) leaf_name_data.push_back(input_adjusted_interface.get_name_leafdata());
    if (input_physical_interface.is_set || is_set(input_physical_interface.yfilter)) leaf_name_data.push_back(input_physical_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Style>();
        }
        return style;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "rsb-flags")
    {
        if(rsb_flags == nullptr)
        {
            rsb_flags = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::RsbFlags>();
        }
        return rsb_flags;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "policy-sources")
    {
        if(policy_sources == nullptr)
        {
            policy_sources = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicySources>();
        }
        return policy_sources;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Header>();
        }
        return header;
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    if(child_yang_name == "label-info")
    {
        if(label_info == nullptr)
        {
            label_info = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo>();
        }
        return label_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_spec != nullptr)
    {
        children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        children["generic-flow-spec"] = generic_flow_spec;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(style != nullptr)
    {
        children["style"] = style;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(rsb_flags != nullptr)
    {
        children["rsb-flags"] = rsb_flags;
    }

    if(hop != nullptr)
    {
        children["hop"] = hop;
    }

    if(policy_sources != nullptr)
    {
        children["policy-sources"] = policy_sources;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(policy_flags != nullptr)
    {
        children["policy-flags"] = policy_flags;
    }

    if(expiry_time != nullptr)
    {
        children["expiry-time"] = expiry_time;
    }

    if(policy_query_flags != nullptr)
    {
        children["policy-query-flags"] = policy_query_flags;
    }

    if(label_info != nullptr)
    {
        children["label-info"] = label_info;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-adjusted-interface")
    {
        input_adjusted_interface = value;
        input_adjusted_interface.value_namespace = name_space;
        input_adjusted_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-physical-interface")
    {
        input_physical_interface = value;
        input_physical_interface.value_namespace = name_space;
        input_physical_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "input-adjusted-interface")
    {
        input_adjusted_interface.yfilter = yfilter;
    }
    if(value_path == "input-physical-interface")
    {
        input_physical_interface.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-spec" || name == "generic-flow-spec" || name == "session" || name == "s2l-sub-lsp" || name == "style" || name == "filter" || name == "rsb-flags" || name == "hop" || name == "policy-sources" || name == "header" || name == "policy-flags" || name == "expiry-time" || name == "policy-query-flags" || name == "label-info" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "input-adjusted-interface" || name == "input-physical-interface")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"},
    flow_qos{YType::enumeration, "flow-qos"}
{

    yang_name = "flow-spec"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_peak_rate.is_set
	|| flow_min_unit.is_set
	|| flow_max_unit.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set
	|| flow_qos.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter)
	|| ydk::is_set(flow_qos.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(g709otn_flow_spec != nullptr)
    {
        children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::~Session()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Style::~Style()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Style::has_data() const
{
    return reservation_type.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::~Filter()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    udp_ipv4_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session>())
	,p2mp_ipv4_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
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
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::RsbFlags()
    :
    is_local_receiver{YType::boolean, "is-local-receiver"},
    is_message_id_valid{YType::boolean, "is-message-id-valid"},
    is_local_repair{YType::boolean, "is-local-repair"},
    is_merge_point{YType::boolean, "is-merge-point"},
    is_lockout{YType::boolean, "is-lockout"}
{

    yang_name = "rsb-flags"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::~RsbFlags()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::has_data() const
{
    return is_local_receiver.is_set
	|| is_message_id_valid.is_set
	|| is_local_repair.is_set
	|| is_merge_point.is_set
	|| is_lockout.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_local_receiver.yfilter)
	|| ydk::is_set(is_message_id_valid.yfilter)
	|| ydk::is_set(is_local_repair.yfilter)
	|| ydk::is_set(is_merge_point.yfilter)
	|| ydk::is_set(is_lockout.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_local_receiver.is_set || is_set(is_local_receiver.yfilter)) leaf_name_data.push_back(is_local_receiver.get_name_leafdata());
    if (is_message_id_valid.is_set || is_set(is_message_id_valid.yfilter)) leaf_name_data.push_back(is_message_id_valid.get_name_leafdata());
    if (is_local_repair.is_set || is_set(is_local_repair.yfilter)) leaf_name_data.push_back(is_local_repair.get_name_leafdata());
    if (is_merge_point.is_set || is_set(is_merge_point.yfilter)) leaf_name_data.push_back(is_merge_point.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-local-receiver")
    {
        is_local_receiver = value;
        is_local_receiver.value_namespace = name_space;
        is_local_receiver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid = value;
        is_message_id_valid.value_namespace = name_space;
        is_message_id_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair = value;
        is_local_repair.value_namespace = name_space;
        is_local_repair.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point = value;
        is_merge_point.value_namespace = name_space;
        is_merge_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-local-receiver")
    {
        is_local_receiver.yfilter = yfilter;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid.yfilter = yfilter;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair.yfilter = yfilter;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point.yfilter = yfilter;
    }
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-local-receiver" || name == "is-message-id-valid" || name == "is-local-repair" || name == "is-merge-point" || name == "is-lockout")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{

    yang_name = "hop"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Hop::~Hop()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_logical_interface_name.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.yfilter)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name = value;
        neighbor_logical_interface_name.value_namespace = name_space;
        neighbor_logical_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-logical-interface-name")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicySources::PolicySources()
    :
    is_te_link{YType::boolean, "is-te-link"},
    is_local{YType::boolean, "is-local"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_cable{YType::boolean, "is-cable"}
{

    yang_name = "policy-sources"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicySources::~PolicySources()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicySources::has_data() const
{
    return is_te_link.is_set
	|| is_local.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_cable.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicySources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_te_link.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_cops.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_cable.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::PolicySources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::PolicySources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::PolicySources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_te_link.is_set || is_set(is_te_link.yfilter)) leaf_name_data.push_back(is_te_link.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.yfilter)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_cable.is_set || is_set(is_cable.yfilter)) leaf_name_data.push_back(is_cable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::PolicySources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::PolicySources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicySources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-te-link")
    {
        is_te_link = value;
        is_te_link.value_namespace = name_space;
        is_te_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cops")
    {
        is_cops = value;
        is_cops.value_namespace = name_space;
        is_cops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cable")
    {
        is_cable = value;
        is_cable.value_namespace = name_space;
        is_cable.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicySources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-te-link")
    {
        is_te_link.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-cops")
    {
        is_cops.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "is-cable")
    {
        is_cable.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicySources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-te-link" || name == "is-local" || name == "is-cops" || name == "is-default" || name == "is-cable")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Header::Header()
    :
    rsvp_version{YType::uint8, "rsvp-version"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    ip_source_address{YType::str, "ip-source-address"}
{

    yang_name = "header"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Header::~Header()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Header::has_data() const
{
    return rsvp_version.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_ttl.is_set
	|| rsvp_message_type.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| ip_source_address.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvp_version.yfilter)
	|| ydk::is_set(rsvp_header_flags.yfilter)
	|| ydk::is_set(rsvp_ttl.yfilter)
	|| ydk::is_set(rsvp_message_type.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(ip_ttl.yfilter)
	|| ydk::is_set(ip_source_address.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Header::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvp_version.is_set || is_set(rsvp_version.yfilter)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.yfilter)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.yfilter)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.yfilter)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.yfilter)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (ip_source_address.is_set || is_set(ip_source_address.yfilter)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
        rsvp_version.value_namespace = name_space;
        rsvp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
        rsvp_header_flags.value_namespace = name_space;
        rsvp_header_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
        rsvp_ttl.value_namespace = name_space;
        rsvp_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
        rsvp_message_type.value_namespace = name_space;
        rsvp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
        ip_tos.value_namespace = name_space;
        ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl = value;
        ip_ttl.value_namespace = name_space;
        ip_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
        ip_source_address.value_namespace = name_space;
        ip_source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvp-version")
    {
        rsvp_version.yfilter = yfilter;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags.yfilter = yfilter;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl.yfilter = yfilter;
    }
    if(value_path == "ip-source-address")
    {
        ip_source_address.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-version" || name == "rsvp-header-flags" || name == "rsvp-ttl" || name == "rsvp-message-type" || name == "ip-tos" || name == "ip-ttl" || name == "ip-source-address")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_installed{YType::boolean, "is-installed"},
    is_forwarding{YType::boolean, "is-forwarding"}
{

    yang_name = "policy-flags"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::~PolicyFlags()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_installed.is_set
	|| is_forwarding.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_installed.yfilter)
	|| ydk::is_set(is_forwarding.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.yfilter)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
        is_accepted.value_namespace = name_space;
        is_accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
        is_installed.value_namespace = name_space;
        is_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
        is_forwarding.value_namespace = name_space;
        is_forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-accepted")
    {
        is_accepted.yfilter = yfilter;
    }
    if(value_path == "is-installed")
    {
        is_installed.yfilter = yfilter;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-installed" || name == "is-forwarding")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::ExpiryTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::~ExpiryTime()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"},
    is_bypass{YType::boolean, "is-bypass"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::has_data() const
{
    return is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set
	|| is_bypass.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter)
	|| ydk::is_set(is_bypass.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());
    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-needed")
    {
        is_needed = value;
        is_needed.value_namespace = name_space;
        is_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
        is_report_required.value_namespace = name_space;
        is_report_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
        is_resync.value_namespace = name_space;
        is_resync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bypass")
    {
        is_bypass = value;
        is_bypass.value_namespace = name_space;
        is_bypass.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-needed")
    {
        is_needed.yfilter = yfilter;
    }
    if(value_path == "is-report-required")
    {
        is_report_required.yfilter = yfilter;
    }
    if(value_path == "is-resync")
    {
        is_resync.yfilter = yfilter;
    }
    if(value_path == "is-bypass")
    {
        is_bypass.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-needed" || name == "is-report-required" || name == "is-resync" || name == "is-bypass")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::LabelInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    local_downstream_label{YType::uint32, "local-downstream-label"},
    outgoing_downstream_label{YType::uint32, "outgoing-downstream-label"},
    merge_point_label{YType::uint32, "merge-point-label"},
    outgoing_upstream_label{YType::uint32, "outgoing-upstream-label"},
    local_upstream_label{YType::uint32, "local-upstream-label"},
    recovery_label{YType::uint32, "recovery-label"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"}
    	,
    generic_local_downstream_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel>())
	,generic_outgoing_downstream_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>())
	,generic_merge_point_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel>())
	,generic_outgoing_upstream_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>())
	,generic_local_upstream_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel>())
	,generic_recovery_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel>())
{
    generic_local_downstream_label->parent = this;
    generic_outgoing_downstream_label->parent = this;
    generic_merge_point_label->parent = this;
    generic_outgoing_upstream_label->parent = this;
    generic_local_upstream_label->parent = this;
    generic_recovery_label->parent = this;

    yang_name = "label-info"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::~LabelInfo()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::has_data() const
{
    return is_valid.is_set
	|| local_downstream_label.is_set
	|| outgoing_downstream_label.is_set
	|| merge_point_label.is_set
	|| outgoing_upstream_label.is_set
	|| local_upstream_label.is_set
	|| recovery_label.is_set
	|| lsp_wrap_label.is_set
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_data())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_data())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_data())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_data())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_data())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(local_downstream_label.yfilter)
	|| ydk::is_set(outgoing_downstream_label.yfilter)
	|| ydk::is_set(merge_point_label.yfilter)
	|| ydk::is_set(outgoing_upstream_label.yfilter)
	|| ydk::is_set(local_upstream_label.yfilter)
	|| ydk::is_set(recovery_label.yfilter)
	|| ydk::is_set(lsp_wrap_label.yfilter)
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_operation())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_operation())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_operation())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_operation())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_operation())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (local_downstream_label.is_set || is_set(local_downstream_label.yfilter)) leaf_name_data.push_back(local_downstream_label.get_name_leafdata());
    if (outgoing_downstream_label.is_set || is_set(outgoing_downstream_label.yfilter)) leaf_name_data.push_back(outgoing_downstream_label.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.yfilter)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (outgoing_upstream_label.is_set || is_set(outgoing_upstream_label.yfilter)) leaf_name_data.push_back(outgoing_upstream_label.get_name_leafdata());
    if (local_upstream_label.is_set || is_set(local_upstream_label.yfilter)) leaf_name_data.push_back(local_upstream_label.get_name_leafdata());
    if (recovery_label.is_set || is_set(recovery_label.yfilter)) leaf_name_data.push_back(recovery_label.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.yfilter)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-local-downstream-label")
    {
        if(generic_local_downstream_label == nullptr)
        {
            generic_local_downstream_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel>();
        }
        return generic_local_downstream_label;
    }

    if(child_yang_name == "generic-outgoing-downstream-label")
    {
        if(generic_outgoing_downstream_label == nullptr)
        {
            generic_outgoing_downstream_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>();
        }
        return generic_outgoing_downstream_label;
    }

    if(child_yang_name == "generic-merge-point-label")
    {
        if(generic_merge_point_label == nullptr)
        {
            generic_merge_point_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel>();
        }
        return generic_merge_point_label;
    }

    if(child_yang_name == "generic-outgoing-upstream-label")
    {
        if(generic_outgoing_upstream_label == nullptr)
        {
            generic_outgoing_upstream_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>();
        }
        return generic_outgoing_upstream_label;
    }

    if(child_yang_name == "generic-local-upstream-label")
    {
        if(generic_local_upstream_label == nullptr)
        {
            generic_local_upstream_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel>();
        }
        return generic_local_upstream_label;
    }

    if(child_yang_name == "generic-recovery-label")
    {
        if(generic_recovery_label == nullptr)
        {
            generic_recovery_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel>();
        }
        return generic_recovery_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generic_local_downstream_label != nullptr)
    {
        children["generic-local-downstream-label"] = generic_local_downstream_label;
    }

    if(generic_outgoing_downstream_label != nullptr)
    {
        children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
    }

    if(generic_merge_point_label != nullptr)
    {
        children["generic-merge-point-label"] = generic_merge_point_label;
    }

    if(generic_outgoing_upstream_label != nullptr)
    {
        children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
    }

    if(generic_local_upstream_label != nullptr)
    {
        children["generic-local-upstream-label"] = generic_local_upstream_label;
    }

    if(generic_recovery_label != nullptr)
    {
        children["generic-recovery-label"] = generic_recovery_label;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-downstream-label")
    {
        local_downstream_label = value;
        local_downstream_label.value_namespace = name_space;
        local_downstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label = value;
        outgoing_downstream_label.value_namespace = name_space;
        outgoing_downstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
        merge_point_label.value_namespace = name_space;
        merge_point_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label = value;
        outgoing_upstream_label.value_namespace = name_space;
        outgoing_upstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-upstream-label")
    {
        local_upstream_label = value;
        local_upstream_label.value_namespace = name_space;
        local_upstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-label")
    {
        recovery_label = value;
        recovery_label.value_namespace = name_space;
        recovery_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
        lsp_wrap_label.value_namespace = name_space;
        lsp_wrap_label.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "local-downstream-label")
    {
        local_downstream_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label.yfilter = yfilter;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label.yfilter = yfilter;
    }
    if(value_path == "local-upstream-label")
    {
        local_upstream_label.yfilter = yfilter;
    }
    if(value_path == "recovery-label")
    {
        recovery_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-local-downstream-label" || name == "generic-outgoing-downstream-label" || name == "generic-merge-point-label" || name == "generic-outgoing-upstream-label" || name == "generic-local-upstream-label" || name == "generic-recovery-label" || name == "is-valid" || name == "local-downstream-label" || name == "outgoing-downstream-label" || name == "merge-point-label" || name == "outgoing-upstream-label" || name == "local-upstream-label" || name == "recovery-label" || name == "lsp-wrap-label")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GenericLocalDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-local-downstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::~GenericLocalDownstreamLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-downstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-local-downstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/generic-local-downstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GenericOutgoingDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-outgoing-downstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::~GenericOutgoingDownstreamLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-downstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-downstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/generic-outgoing-downstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GenericMergePointLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-merge-point-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::~GenericMergePointLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-merge-point-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-merge-point-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/generic-merge-point-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GenericOutgoingUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-outgoing-upstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::~GenericOutgoingUpstreamLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-upstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-upstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/generic-outgoing-upstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GenericLocalUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-local-upstream-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::~GenericLocalUpstreamLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-upstream-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-local-upstream-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/generic-local-upstream-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GenericRecoveryLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-recovery-label"; yang_parent_name = "label-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::~GenericRecoveryLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-recovery-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-recovery-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-detaileds/rsb-detailed/label-info/generic-recovery-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummaries()
{

    yang_name = "interface-summaries"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceSummaries::~InterfaceSummaries()
{
}

bool Rsvp::InterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        auto c = std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary>();
        c->parent = this;
        interface_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::InterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-summary")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    paths_in{YType::uint32, "paths-in"},
    paths_out{YType::uint32, "paths-out"},
    reservations_in{YType::uint32, "reservations-in"},
    reservations_out{YType::uint32, "reservations-out"}
    	,
    bandwidth_information(std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "interface-summary"; yang_parent_name = "interface-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::~InterfaceSummary()
{
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| paths_in.is_set
	|| paths_out.is_set
	|| reservations_in.is_set
	|| reservations_out.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(paths_in.yfilter)
	|| ydk::is_set(paths_out.yfilter)
	|| ydk::is_set(reservations_in.yfilter)
	|| ydk::is_set(reservations_out.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (paths_in.is_set || is_set(paths_in.yfilter)) leaf_name_data.push_back(paths_in.get_name_leafdata());
    if (paths_out.is_set || is_set(paths_out.yfilter)) leaf_name_data.push_back(paths_out.get_name_leafdata());
    if (reservations_in.is_set || is_set(reservations_in.yfilter)) leaf_name_data.push_back(reservations_in.get_name_leafdata());
    if (reservations_out.is_set || is_set(reservations_out.yfilter)) leaf_name_data.push_back(reservations_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    return children;
}

void Rsvp::InterfaceSummaries::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-in")
    {
        paths_in = value;
        paths_in.value_namespace = name_space;
        paths_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-out")
    {
        paths_out = value;
        paths_out.value_namespace = name_space;
        paths_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservations-in")
    {
        reservations_in = value;
        reservations_in.value_namespace = name_space;
        reservations_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservations-out")
    {
        reservations_out = value;
        reservations_out.value_namespace = name_space;
        reservations_out.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceSummaries::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "paths-in")
    {
        paths_in.yfilter = yfilter;
    }
    if(value_path == "paths-out")
    {
        paths_out.yfilter = yfilter;
    }
    if(value_path == "reservations-in")
    {
        reservations_in.yfilter = yfilter;
    }
    if(value_path == "reservations-out")
    {
        reservations_out.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "interface-name" || name == "interface-name-xr" || name == "paths-in" || name == "paths-out" || name == "reservations-in" || name == "reservations-out")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pre_standard_dste_interface != nullptr)
    {
        children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        children["standard-dste-interface"] = standard_dste_interface;
    }

    return children;
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_subpool_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set;
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter);
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-subpool-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_pool0_bandwidth{YType::uint64, "max-pool0-bandwidth"},
    max_pool1_bandwidth{YType::uint64, "max-pool1-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_bc0_bandwidth_absolute{YType::boolean, "is-max-bc0-bandwidth-absolute"},
    is_max_bc1_bandwidth_absolute{YType::boolean, "is-max-bc1-bandwidth-absolute"}
{

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set;
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter);
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::HelloInstanceBriefs::HelloInstanceBriefs()
{

    yang_name = "hello-instance-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInstanceBriefs::~HelloInstanceBriefs()
{
}

bool Rsvp::HelloInstanceBriefs::has_data() const
{
    for (std::size_t index=0; index<hello_instance_brief.size(); index++)
    {
        if(hello_instance_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInstanceBriefs::has_operation() const
{
    for (std::size_t index=0; index<hello_instance_brief.size(); index++)
    {
        if(hello_instance_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::HelloInstanceBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInstanceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-instance-brief")
    {
        auto c = std::make_shared<Rsvp::HelloInstanceBriefs::HelloInstanceBrief>();
        c->parent = this;
        hello_instance_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInstanceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : hello_instance_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::HelloInstanceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::HelloInstanceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::HelloInstanceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-instance-brief")
        return true;
    return false;
}

Rsvp::HelloInstanceBriefs::HelloInstanceBrief::HelloInstanceBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    instance_type{YType::enumeration, "instance-type"},
    hello_interface{YType::str, "hello-interface"},
    lost_communication_total{YType::uint16, "lost-communication-total"}
{

    yang_name = "hello-instance-brief"; yang_parent_name = "hello-instance-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInstanceBriefs::HelloInstanceBrief::~HelloInstanceBrief()
{
}

bool Rsvp::HelloInstanceBriefs::HelloInstanceBrief::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| neighbor_hello_state.is_set
	|| instance_type.is_set
	|| hello_interface.is_set
	|| lost_communication_total.is_set;
}

bool Rsvp::HelloInstanceBriefs::HelloInstanceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(neighbor_hello_state.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(hello_interface.yfilter)
	|| ydk::is_set(lost_communication_total.yfilter);
}

std::string Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-instance-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-brief" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (neighbor_hello_state.is_set || is_set(neighbor_hello_state.yfilter)) leaf_name_data.push_back(neighbor_hello_state.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (lost_communication_total.is_set || is_set(lost_communication_total.yfilter)) leaf_name_data.push_back(lost_communication_total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::HelloInstanceBriefs::HelloInstanceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state = value;
        neighbor_hello_state.value_namespace = name_space;
        neighbor_hello_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
        instance_type.value_namespace = name_space;
        instance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
        hello_interface.value_namespace = name_space;
        hello_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total = value;
        lost_communication_total.value_namespace = name_space;
        lost_communication_total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInstanceBriefs::HelloInstanceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.yfilter = yfilter;
    }
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total.yfilter = yfilter;
    }
}

bool Rsvp::HelloInstanceBriefs::HelloInstanceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "source-address-xr" || name == "destination-address-xr" || name == "neighbor-hello-state" || name == "instance-type" || name == "hello-interface" || name == "lost-communication-total")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetails()
{

    yang_name = "authentication-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::AuthenticationDetails::~AuthenticationDetails()
{
}

bool Rsvp::AuthenticationDetails::has_data() const
{
    for (std::size_t index=0; index<authentication_detail.size(); index++)
    {
        if(authentication_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::AuthenticationDetails::has_operation() const
{
    for (std::size_t index=0; index<authentication_detail.size(); index++)
    {
        if(authentication_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::AuthenticationDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::AuthenticationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-detail")
    {
        auto c = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail>();
        c->parent = this;
        authentication_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : authentication_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::AuthenticationDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::AuthenticationDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::AuthenticationDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-detail")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::AuthenticationDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    mode_id{YType::enumeration, "mode-id"},
    interface_name{YType::str, "interface-name"},
    key_status{YType::uint32, "key-status"},
    key_digest_info{YType::uint32, "key-digest-info"},
    lifetime{YType::uint32, "lifetime"},
    lifetime_left{YType::uint32, "lifetime-left"},
    challenge_status{YType::enumeration, "challenge-status"}
    	,
    auth_compact(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact>())
	,direction_info(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo>())
{
    auth_compact->parent = this;
    direction_info->parent = this;

    yang_name = "authentication-detail"; yang_parent_name = "authentication-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::~AuthenticationDetail()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| mode_id.is_set
	|| interface_name.is_set
	|| key_status.is_set
	|| key_digest_info.is_set
	|| lifetime.is_set
	|| lifetime_left.is_set
	|| challenge_status.is_set
	|| (auth_compact !=  nullptr && auth_compact->has_data())
	|| (direction_info !=  nullptr && direction_info->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(mode_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(key_status.yfilter)
	|| ydk::is_set(key_digest_info.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(lifetime_left.yfilter)
	|| ydk::is_set(challenge_status.yfilter)
	|| (auth_compact !=  nullptr && auth_compact->has_operation())
	|| (direction_info !=  nullptr && direction_info->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/authentication-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-detail" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[mode-id='" <<mode_id <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mode_id.is_set || is_set(mode_id.yfilter)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (key_status.is_set || is_set(key_status.yfilter)) leaf_name_data.push_back(key_status.get_name_leafdata());
    if (key_digest_info.is_set || is_set(key_digest_info.yfilter)) leaf_name_data.push_back(key_digest_info.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (lifetime_left.is_set || is_set(lifetime_left.yfilter)) leaf_name_data.push_back(lifetime_left.get_name_leafdata());
    if (challenge_status.is_set || is_set(challenge_status.yfilter)) leaf_name_data.push_back(challenge_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-compact")
    {
        if(auth_compact == nullptr)
        {
            auth_compact = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact>();
        }
        return auth_compact;
    }

    if(child_yang_name == "direction-info")
    {
        if(direction_info == nullptr)
        {
            direction_info = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo>();
        }
        return direction_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auth_compact != nullptr)
    {
        children["auth-compact"] = auth_compact;
    }

    if(direction_info != nullptr)
    {
        children["direction-info"] = direction_info;
    }

    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-id")
    {
        mode_id = value;
        mode_id.value_namespace = name_space;
        mode_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-status")
    {
        key_status = value;
        key_status.value_namespace = name_space;
        key_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-digest-info")
    {
        key_digest_info = value;
        key_digest_info.value_namespace = name_space;
        key_digest_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime-left")
    {
        lifetime_left = value;
        lifetime_left.value_namespace = name_space;
        lifetime_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge-status")
    {
        challenge_status = value;
        challenge_status.value_namespace = name_space;
        challenge_status.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "mode-id")
    {
        mode_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "key-status")
    {
        key_status.yfilter = yfilter;
    }
    if(value_path == "key-digest-info")
    {
        key_digest_info.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "lifetime-left")
    {
        lifetime_left.yfilter = yfilter;
    }
    if(value_path == "challenge-status")
    {
        challenge_status.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-compact" || name == "direction-info" || name == "source-address" || name == "destination-address" || name == "mode-id" || name == "interface-name" || name == "key-status" || name == "key-digest-info" || name == "lifetime" || name == "lifetime-left" || name == "challenge-status")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::AuthCompact()
    :
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    neighbor_address{YType::str, "neighbor-address"},
    direction{YType::enumeration, "direction"},
    key_type{YType::enumeration, "key-type"},
    key_source{YType::str, "key-source"},
    key_id{YType::uint64, "key-id"},
    key_id_valid{YType::uint32, "key-id-valid"}
{

    yang_name = "auth-compact"; yang_parent_name = "authentication-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::~AuthCompact()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_data() const
{
    return source_address_xr.is_set
	|| destination_address_xr.is_set
	|| neighbor_address.is_set
	|| direction.is_set
	|| key_type.is_set
	|| key_source.is_set
	|| key_id.is_set
	|| key_id_valid.is_set;
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(key_source.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(key_id_valid.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-compact";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (key_source.is_set || is_set(key_source.yfilter)) leaf_name_data.push_back(key_source.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_id_valid.is_set || is_set(key_id_valid.yfilter)) leaf_name_data.push_back(key_id_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-source")
    {
        key_source = value;
        key_source.value_namespace = name_space;
        key_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid = value;
        key_id_valid.value_namespace = name_space;
        key_id_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "key-source")
    {
        key_source.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address-xr" || name == "destination-address-xr" || name == "neighbor-address" || name == "direction" || name == "key-type" || name == "key-source" || name == "key-id" || name == "key-id-valid")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::DirectionInfo()
    :
    auth_direction{YType::enumeration, "auth-direction"}
    	,
    send_info(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo>())
	,receive_info(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo>())
{
    send_info->parent = this;
    receive_info->parent = this;

    yang_name = "direction-info"; yang_parent_name = "authentication-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::~DirectionInfo()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_data() const
{
    return auth_direction.is_set
	|| (send_info !=  nullptr && send_info->has_data())
	|| (receive_info !=  nullptr && receive_info->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_direction.yfilter)
	|| (send_info !=  nullptr && send_info->has_operation())
	|| (receive_info !=  nullptr && receive_info->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_direction.is_set || is_set(auth_direction.yfilter)) leaf_name_data.push_back(auth_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send-info")
    {
        if(send_info == nullptr)
        {
            send_info = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo>();
        }
        return send_info;
    }

    if(child_yang_name == "receive-info")
    {
        if(receive_info == nullptr)
        {
            receive_info = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo>();
        }
        return receive_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(send_info != nullptr)
    {
        children["send-info"] = send_info;
    }

    if(receive_info != nullptr)
    {
        children["receive-info"] = receive_info;
    }

    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-direction")
    {
        auth_direction = value;
        auth_direction.value_namespace = name_space;
        auth_direction.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-direction")
    {
        auth_direction.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-info" || name == "receive-info" || name == "auth-direction")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::SendInfo()
    :
    sequence{YType::uint64, "sequence"}
    	,
    counters(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>())
{
    counters->parent = this;

    yang_name = "send-info"; yang_parent_name = "direction-info"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::~SendInfo()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_data() const
{
    return sequence.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "sequence")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::Counters()
    :
    authentication_sent{YType::uint32, "authentication-sent"},
    authentication_failures{YType::uint32, "authentication-failures"},
    authentication_send_challenges_received{YType::uint32, "authentication-send-challenges-received"},
    authentication_challenge_responses_sent{YType::uint32, "authentication-challenge-responses-sent"}
{

    yang_name = "counters"; yang_parent_name = "send-info"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::~Counters()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_data() const
{
    return authentication_sent.is_set
	|| authentication_failures.is_set
	|| authentication_send_challenges_received.is_set
	|| authentication_challenge_responses_sent.is_set;
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_sent.yfilter)
	|| ydk::is_set(authentication_failures.yfilter)
	|| ydk::is_set(authentication_send_challenges_received.yfilter)
	|| ydk::is_set(authentication_challenge_responses_sent.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_sent.is_set || is_set(authentication_sent.yfilter)) leaf_name_data.push_back(authentication_sent.get_name_leafdata());
    if (authentication_failures.is_set || is_set(authentication_failures.yfilter)) leaf_name_data.push_back(authentication_failures.get_name_leafdata());
    if (authentication_send_challenges_received.is_set || is_set(authentication_send_challenges_received.yfilter)) leaf_name_data.push_back(authentication_send_challenges_received.get_name_leafdata());
    if (authentication_challenge_responses_sent.is_set || is_set(authentication_challenge_responses_sent.yfilter)) leaf_name_data.push_back(authentication_challenge_responses_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-sent")
    {
        authentication_sent = value;
        authentication_sent.value_namespace = name_space;
        authentication_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-failures")
    {
        authentication_failures = value;
        authentication_failures.value_namespace = name_space;
        authentication_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-send-challenges-received")
    {
        authentication_send_challenges_received = value;
        authentication_send_challenges_received.value_namespace = name_space;
        authentication_send_challenges_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent = value;
        authentication_challenge_responses_sent.value_namespace = name_space;
        authentication_challenge_responses_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-sent")
    {
        authentication_sent.yfilter = yfilter;
    }
    if(value_path == "authentication-failures")
    {
        authentication_failures.yfilter = yfilter;
    }
    if(value_path == "authentication-send-challenges-received")
    {
        authentication_send_challenges_received.yfilter = yfilter;
    }
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-sent" || name == "authentication-failures" || name == "authentication-send-challenges-received" || name == "authentication-challenge-responses-sent")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::ReceiveInfo()
    :
    sequence{YType::uint64, "sequence"},
    sequence_window_size{YType::uint32, "sequence-window-size"},
    sequence_window_count{YType::uint32, "sequence-window-count"},
    sequence_window{YType::uint64, "sequence-window"}
    	,
    counters(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>())
{
    counters->parent = this;

    yang_name = "receive-info"; yang_parent_name = "direction-info"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::~ReceiveInfo()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_data() const
{
    for (auto const & leaf : sequence_window.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sequence.is_set
	|| sequence_window_size.is_set
	|| sequence_window_count.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_operation() const
{
    for (auto const & leaf : sequence_window.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(sequence_window_size.yfilter)
	|| ydk::is_set(sequence_window_count.yfilter)
	|| ydk::is_set(sequence_window.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (sequence_window_size.is_set || is_set(sequence_window_size.yfilter)) leaf_name_data.push_back(sequence_window_size.get_name_leafdata());
    if (sequence_window_count.is_set || is_set(sequence_window_count.yfilter)) leaf_name_data.push_back(sequence_window_count.get_name_leafdata());

    auto sequence_window_name_datas = sequence_window.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sequence_window_name_datas.begin(), sequence_window_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size = value;
        sequence_window_size.value_namespace = name_space;
        sequence_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count = value;
        sequence_window_count.value_namespace = name_space;
        sequence_window_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window")
    {
        sequence_window.append(value);
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size.yfilter = yfilter;
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count.yfilter = yfilter;
    }
    if(value_path == "sequence-window")
    {
        sequence_window.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "sequence" || name == "sequence-window-size" || name == "sequence-window-count" || name == "sequence-window")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::Counters()
    :
    authentication_received_valid_messages{YType::uint32, "authentication-received-valid-messages"},
    authentication_received_challenges_sent{YType::uint32, "authentication-received-challenges-sent"},
    authentication_received_challenge_response{YType::uint32, "authentication-received-challenge-response"},
    authentication_received_challenges_resent{YType::uint32, "authentication-received-challenges-resent"},
    authentication_received_challenge_timeouts{YType::uint32, "authentication-received-challenge-timeouts"},
    authentication_received_during_challenge{YType::uint32, "authentication-received-during-challenge"},
    authentication_received_incomplete{YType::uint32, "authentication-received-incomplete"},
    authentication_received_no_integrity{YType::uint32, "authentication-received-no-integrity"},
    authentication_received_bad_digest{YType::uint32, "authentication-received-bad-digest"},
    authentication_received_wrong_digest_type{YType::uint32, "authentication-received-wrong-digest-type"},
    authentication_received_sequence_number_duplicate{YType::uint32, "authentication-received-sequence-number-duplicate"},
    authentication_received_sequence_number_outof_range{YType::uint32, "authentication-received-sequence-number-outof-range"},
    authentication_received_wrong_challenges_response{YType::uint32, "authentication-received-wrong-challenges-response"},
    authentication_received_challenges_response_duplicate{YType::uint32, "authentication-received-challenges-response-duplicate"},
    authentication_received_response_late{YType::uint32, "authentication-received-response-late"},
    authentication_received_bad_message_format{YType::uint32, "authentication-received-bad-message-format"}
{

    yang_name = "counters"; yang_parent_name = "receive-info"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::~Counters()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_data() const
{
    return authentication_received_valid_messages.is_set
	|| authentication_received_challenges_sent.is_set
	|| authentication_received_challenge_response.is_set
	|| authentication_received_challenges_resent.is_set
	|| authentication_received_challenge_timeouts.is_set
	|| authentication_received_during_challenge.is_set
	|| authentication_received_incomplete.is_set
	|| authentication_received_no_integrity.is_set
	|| authentication_received_bad_digest.is_set
	|| authentication_received_wrong_digest_type.is_set
	|| authentication_received_sequence_number_duplicate.is_set
	|| authentication_received_sequence_number_outof_range.is_set
	|| authentication_received_wrong_challenges_response.is_set
	|| authentication_received_challenges_response_duplicate.is_set
	|| authentication_received_response_late.is_set
	|| authentication_received_bad_message_format.is_set;
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_received_valid_messages.yfilter)
	|| ydk::is_set(authentication_received_challenges_sent.yfilter)
	|| ydk::is_set(authentication_received_challenge_response.yfilter)
	|| ydk::is_set(authentication_received_challenges_resent.yfilter)
	|| ydk::is_set(authentication_received_challenge_timeouts.yfilter)
	|| ydk::is_set(authentication_received_during_challenge.yfilter)
	|| ydk::is_set(authentication_received_incomplete.yfilter)
	|| ydk::is_set(authentication_received_no_integrity.yfilter)
	|| ydk::is_set(authentication_received_bad_digest.yfilter)
	|| ydk::is_set(authentication_received_wrong_digest_type.yfilter)
	|| ydk::is_set(authentication_received_sequence_number_duplicate.yfilter)
	|| ydk::is_set(authentication_received_sequence_number_outof_range.yfilter)
	|| ydk::is_set(authentication_received_wrong_challenges_response.yfilter)
	|| ydk::is_set(authentication_received_challenges_response_duplicate.yfilter)
	|| ydk::is_set(authentication_received_response_late.yfilter)
	|| ydk::is_set(authentication_received_bad_message_format.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_received_valid_messages.is_set || is_set(authentication_received_valid_messages.yfilter)) leaf_name_data.push_back(authentication_received_valid_messages.get_name_leafdata());
    if (authentication_received_challenges_sent.is_set || is_set(authentication_received_challenges_sent.yfilter)) leaf_name_data.push_back(authentication_received_challenges_sent.get_name_leafdata());
    if (authentication_received_challenge_response.is_set || is_set(authentication_received_challenge_response.yfilter)) leaf_name_data.push_back(authentication_received_challenge_response.get_name_leafdata());
    if (authentication_received_challenges_resent.is_set || is_set(authentication_received_challenges_resent.yfilter)) leaf_name_data.push_back(authentication_received_challenges_resent.get_name_leafdata());
    if (authentication_received_challenge_timeouts.is_set || is_set(authentication_received_challenge_timeouts.yfilter)) leaf_name_data.push_back(authentication_received_challenge_timeouts.get_name_leafdata());
    if (authentication_received_during_challenge.is_set || is_set(authentication_received_during_challenge.yfilter)) leaf_name_data.push_back(authentication_received_during_challenge.get_name_leafdata());
    if (authentication_received_incomplete.is_set || is_set(authentication_received_incomplete.yfilter)) leaf_name_data.push_back(authentication_received_incomplete.get_name_leafdata());
    if (authentication_received_no_integrity.is_set || is_set(authentication_received_no_integrity.yfilter)) leaf_name_data.push_back(authentication_received_no_integrity.get_name_leafdata());
    if (authentication_received_bad_digest.is_set || is_set(authentication_received_bad_digest.yfilter)) leaf_name_data.push_back(authentication_received_bad_digest.get_name_leafdata());
    if (authentication_received_wrong_digest_type.is_set || is_set(authentication_received_wrong_digest_type.yfilter)) leaf_name_data.push_back(authentication_received_wrong_digest_type.get_name_leafdata());
    if (authentication_received_sequence_number_duplicate.is_set || is_set(authentication_received_sequence_number_duplicate.yfilter)) leaf_name_data.push_back(authentication_received_sequence_number_duplicate.get_name_leafdata());
    if (authentication_received_sequence_number_outof_range.is_set || is_set(authentication_received_sequence_number_outof_range.yfilter)) leaf_name_data.push_back(authentication_received_sequence_number_outof_range.get_name_leafdata());
    if (authentication_received_wrong_challenges_response.is_set || is_set(authentication_received_wrong_challenges_response.yfilter)) leaf_name_data.push_back(authentication_received_wrong_challenges_response.get_name_leafdata());
    if (authentication_received_challenges_response_duplicate.is_set || is_set(authentication_received_challenges_response_duplicate.yfilter)) leaf_name_data.push_back(authentication_received_challenges_response_duplicate.get_name_leafdata());
    if (authentication_received_response_late.is_set || is_set(authentication_received_response_late.yfilter)) leaf_name_data.push_back(authentication_received_response_late.get_name_leafdata());
    if (authentication_received_bad_message_format.is_set || is_set(authentication_received_bad_message_format.yfilter)) leaf_name_data.push_back(authentication_received_bad_message_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages = value;
        authentication_received_valid_messages.value_namespace = name_space;
        authentication_received_valid_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent = value;
        authentication_received_challenges_sent.value_namespace = name_space;
        authentication_received_challenges_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response = value;
        authentication_received_challenge_response.value_namespace = name_space;
        authentication_received_challenge_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent = value;
        authentication_received_challenges_resent.value_namespace = name_space;
        authentication_received_challenges_resent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts = value;
        authentication_received_challenge_timeouts.value_namespace = name_space;
        authentication_received_challenge_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-during-challenge")
    {
        authentication_received_during_challenge = value;
        authentication_received_during_challenge.value_namespace = name_space;
        authentication_received_during_challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-incomplete")
    {
        authentication_received_incomplete = value;
        authentication_received_incomplete.value_namespace = name_space;
        authentication_received_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-no-integrity")
    {
        authentication_received_no_integrity = value;
        authentication_received_no_integrity.value_namespace = name_space;
        authentication_received_no_integrity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest = value;
        authentication_received_bad_digest.value_namespace = name_space;
        authentication_received_bad_digest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type = value;
        authentication_received_wrong_digest_type.value_namespace = name_space;
        authentication_received_wrong_digest_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-sequence-number-duplicate")
    {
        authentication_received_sequence_number_duplicate = value;
        authentication_received_sequence_number_duplicate.value_namespace = name_space;
        authentication_received_sequence_number_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-sequence-number-outof-range")
    {
        authentication_received_sequence_number_outof_range = value;
        authentication_received_sequence_number_outof_range.value_namespace = name_space;
        authentication_received_sequence_number_outof_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response = value;
        authentication_received_wrong_challenges_response.value_namespace = name_space;
        authentication_received_wrong_challenges_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate = value;
        authentication_received_challenges_response_duplicate.value_namespace = name_space;
        authentication_received_challenges_response_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late = value;
        authentication_received_response_late.value_namespace = name_space;
        authentication_received_response_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format = value;
        authentication_received_bad_message_format.value_namespace = name_space;
        authentication_received_bad_message_format.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts.yfilter = yfilter;
    }
    if(value_path == "authentication-received-during-challenge")
    {
        authentication_received_during_challenge.yfilter = yfilter;
    }
    if(value_path == "authentication-received-incomplete")
    {
        authentication_received_incomplete.yfilter = yfilter;
    }
    if(value_path == "authentication-received-no-integrity")
    {
        authentication_received_no_integrity.yfilter = yfilter;
    }
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest.yfilter = yfilter;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type.yfilter = yfilter;
    }
    if(value_path == "authentication-received-sequence-number-duplicate")
    {
        authentication_received_sequence_number_duplicate.yfilter = yfilter;
    }
    if(value_path == "authentication-received-sequence-number-outof-range")
    {
        authentication_received_sequence_number_outof_range.yfilter = yfilter;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate.yfilter = yfilter;
    }
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late.yfilter = yfilter;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-received-valid-messages" || name == "authentication-received-challenges-sent" || name == "authentication-received-challenge-response" || name == "authentication-received-challenges-resent" || name == "authentication-received-challenge-timeouts" || name == "authentication-received-during-challenge" || name == "authentication-received-incomplete" || name == "authentication-received-no-integrity" || name == "authentication-received-bad-digest" || name == "authentication-received-wrong-digest-type" || name == "authentication-received-sequence-number-duplicate" || name == "authentication-received-sequence-number-outof-range" || name == "authentication-received-wrong-challenges-response" || name == "authentication-received-challenges-response-duplicate" || name == "authentication-received-response-late" || name == "authentication-received-bad-message-format")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBriefs()
{

    yang_name = "rsb-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::~RsbBriefs()
{
}

bool Rsvp::RsbBriefs::has_data() const
{
    for (std::size_t index=0; index<rsb_brief.size(); index++)
    {
        if(rsb_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RsbBriefs::has_operation() const
{
    for (std::size_t index=0; index<rsb_brief.size(); index++)
    {
        if(rsb_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RsbBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsb-brief")
    {
        auto c = std::make_shared<Rsvp::RsbBriefs::RsbBrief>();
        c->parent = this;
        rsb_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rsb_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::RsbBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsb-brief")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::RsbBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    protocol{YType::int32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::int32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    input_interface{YType::str, "input-interface"}
    	,
    session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session>())
	,s2l_sub_lsp(std::make_shared<Rsvp::RsbBriefs::RsbBrief::S2LSubLsp>())
	,flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec>())
	,style(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Style>())
	,filter(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter>())
{
    session->parent = this;
    s2l_sub_lsp->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    style->parent = this;
    filter->parent = this;

    yang_name = "rsb-brief"; yang_parent_name = "rsb-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::~RsbBrief()
{
}

bool Rsvp::RsbBriefs::RsbBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrf_name.is_set
	|| input_interface.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (style !=  nullptr && style->has_data())
	|| (filter !=  nullptr && filter->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (style !=  nullptr && style->has_operation())
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.yfilter)) leaf_name_data.push_back(input_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RsbBriefs::RsbBrief::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Style>();
        }
        return style;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(flow_spec != nullptr)
    {
        children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        children["generic-flow-spec"] = generic_flow_spec;
    }

    if(style != nullptr)
    {
        children["style"] = style;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
        input_interface.value_namespace = name_space;
        input_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "flow-spec" || name == "generic-flow-spec" || name == "style" || name == "filter" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "input-interface")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::~Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::RsbBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"},
    flow_qos{YType::enumeration, "flow-qos"}
{

    yang_name = "flow-spec"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_peak_rate.is_set
	|| flow_min_unit.is_set
	|| flow_max_unit.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set
	|| flow_qos.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter)
	|| ydk::is_set(flow_qos.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(g709otn_flow_spec != nullptr)
    {
        children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Style::~Style()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Style::has_data() const
{
    return reservation_type.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::~Filter()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::RsbBrief::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    udp_ipv4_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>())
	,p2mp_ipv4_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
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
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::OpenConfig::OpenConfig()
    :
    global_counters(std::make_shared<Rsvp::OpenConfig::GlobalCounters>())
	,interface_counters(std::make_shared<Rsvp::OpenConfig::InterfaceCounters>())
{
    global_counters->parent = this;
    interface_counters->parent = this;

    yang_name = "open-config"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::OpenConfig::~OpenConfig()
{
}

bool Rsvp::OpenConfig::has_data() const
{
    return (global_counters !=  nullptr && global_counters->has_data())
	|| (interface_counters !=  nullptr && interface_counters->has_data());
}

bool Rsvp::OpenConfig::has_operation() const
{
    return is_set(yfilter)
	|| (global_counters !=  nullptr && global_counters->has_operation())
	|| (interface_counters !=  nullptr && interface_counters->has_operation());
}

std::string Rsvp::OpenConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::OpenConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::OpenConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::OpenConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-counters")
    {
        if(global_counters == nullptr)
        {
            global_counters = std::make_shared<Rsvp::OpenConfig::GlobalCounters>();
        }
        return global_counters;
    }

    if(child_yang_name == "interface-counters")
    {
        if(interface_counters == nullptr)
        {
            interface_counters = std::make_shared<Rsvp::OpenConfig::InterfaceCounters>();
        }
        return interface_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::OpenConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_counters != nullptr)
    {
        children["global-counters"] = global_counters;
    }

    if(interface_counters != nullptr)
    {
        children["interface-counters"] = interface_counters;
    }

    return children;
}

void Rsvp::OpenConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::OpenConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::OpenConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-counters" || name == "interface-counters")
        return true;
    return false;
}

Rsvp::OpenConfig::GlobalCounters::GlobalCounters()
    :
    path_timeouts{YType::uint64, "path-timeouts"},
    reservation_timeouts{YType::uint64, "reservation-timeouts"},
    rate_limited_messages{YType::uint64, "rate-limited-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    in_ack_messages{YType::uint64, "in-ack-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"}
{

    yang_name = "global-counters"; yang_parent_name = "open-config"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::OpenConfig::GlobalCounters::~GlobalCounters()
{
}

bool Rsvp::OpenConfig::GlobalCounters::has_data() const
{
    return path_timeouts.is_set
	|| reservation_timeouts.is_set
	|| rate_limited_messages.is_set
	|| in_path_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_hello_messages.is_set
	|| in_srefresh_messages.is_set
	|| in_ack_messages.is_set
	|| out_path_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_hello_messages.is_set
	|| out_srefresh_messages.is_set
	|| out_ack_messages.is_set;
}

bool Rsvp::OpenConfig::GlobalCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_timeouts.yfilter)
	|| ydk::is_set(reservation_timeouts.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter);
}

std::string Rsvp::OpenConfig::GlobalCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/open-config/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::OpenConfig::GlobalCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::OpenConfig::GlobalCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_timeouts.is_set || is_set(path_timeouts.yfilter)) leaf_name_data.push_back(path_timeouts.get_name_leafdata());
    if (reservation_timeouts.is_set || is_set(reservation_timeouts.yfilter)) leaf_name_data.push_back(reservation_timeouts.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::OpenConfig::GlobalCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::OpenConfig::GlobalCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::OpenConfig::GlobalCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-timeouts")
    {
        path_timeouts = value;
        path_timeouts.value_namespace = name_space;
        path_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts = value;
        reservation_timeouts.value_namespace = name_space;
        reservation_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::OpenConfig::GlobalCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-timeouts")
    {
        path_timeouts.yfilter = yfilter;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
}

bool Rsvp::OpenConfig::GlobalCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-timeouts" || name == "reservation-timeouts" || name == "rate-limited-messages" || name == "in-path-messages" || name == "in-path-error-messages" || name == "in-path-tear-messages" || name == "in-reservation-messages" || name == "in-reservation-error-messages" || name == "in-reservation-tear-messages" || name == "in-hello-messages" || name == "in-srefresh-messages" || name == "in-ack-messages" || name == "out-path-messages" || name == "out-path-error-messages" || name == "out-path-tear-messages" || name == "out-reservation-messages" || name == "out-reservation-error-messages" || name == "out-reservation-tear-messages" || name == "out-hello-messages" || name == "out-srefresh-messages" || name == "out-ack-messages")
        return true;
    return false;
}

Rsvp::OpenConfig::InterfaceCounters::InterfaceCounters()
{

    yang_name = "interface-counters"; yang_parent_name = "open-config"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::OpenConfig::InterfaceCounters::~InterfaceCounters()
{
}

bool Rsvp::OpenConfig::InterfaceCounters::has_data() const
{
    for (std::size_t index=0; index<interface_counter.size(); index++)
    {
        if(interface_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::OpenConfig::InterfaceCounters::has_operation() const
{
    for (std::size_t index=0; index<interface_counter.size(); index++)
    {
        if(interface_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::OpenConfig::InterfaceCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/open-config/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::OpenConfig::InterfaceCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::OpenConfig::InterfaceCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::OpenConfig::InterfaceCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counter")
    {
        auto c = std::make_shared<Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter>();
        c->parent = this;
        interface_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::OpenConfig::InterfaceCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::OpenConfig::InterfaceCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::OpenConfig::InterfaceCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::OpenConfig::InterfaceCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counter")
        return true;
    return false;
}

Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::InterfaceCounter()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    in_ack_messages{YType::uint64, "in-ack-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"}
{

    yang_name = "interface-counter"; yang_parent_name = "interface-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::~InterfaceCounter()
{
}

bool Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| in_path_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_hello_messages.is_set
	|| in_srefresh_messages.is_set
	|| in_ack_messages.is_set
	|| out_path_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_hello_messages.is_set
	|| out_srefresh_messages.is_set
	|| out_ack_messages.is_set;
}

bool Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(in_path_messages.yfilter)
	|| ydk::is_set(in_path_error_messages.yfilter)
	|| ydk::is_set(in_path_tear_messages.yfilter)
	|| ydk::is_set(in_reservation_messages.yfilter)
	|| ydk::is_set(in_reservation_error_messages.yfilter)
	|| ydk::is_set(in_reservation_tear_messages.yfilter)
	|| ydk::is_set(in_hello_messages.yfilter)
	|| ydk::is_set(in_srefresh_messages.yfilter)
	|| ydk::is_set(in_ack_messages.yfilter)
	|| ydk::is_set(out_path_messages.yfilter)
	|| ydk::is_set(out_path_error_messages.yfilter)
	|| ydk::is_set(out_path_tear_messages.yfilter)
	|| ydk::is_set(out_reservation_messages.yfilter)
	|| ydk::is_set(out_reservation_error_messages.yfilter)
	|| ydk::is_set(out_reservation_tear_messages.yfilter)
	|| ydk::is_set(out_hello_messages.yfilter)
	|| ydk::is_set(out_srefresh_messages.yfilter)
	|| ydk::is_set(out_ack_messages.yfilter);
}

std::string Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/open-config/interface-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counter" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.yfilter)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.yfilter)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.yfilter)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.yfilter)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.yfilter)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.yfilter)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.yfilter)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.yfilter)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (in_ack_messages.is_set || is_set(in_ack_messages.yfilter)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.yfilter)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.yfilter)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.yfilter)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.yfilter)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.yfilter)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.yfilter)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.yfilter)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.yfilter)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.yfilter)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
        in_path_messages.value_namespace = name_space;
        in_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
        in_path_error_messages.value_namespace = name_space;
        in_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
        in_path_tear_messages.value_namespace = name_space;
        in_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
        in_reservation_messages.value_namespace = name_space;
        in_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
        in_reservation_error_messages.value_namespace = name_space;
        in_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
        in_reservation_tear_messages.value_namespace = name_space;
        in_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
        in_hello_messages.value_namespace = name_space;
        in_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
        in_srefresh_messages.value_namespace = name_space;
        in_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
        in_ack_messages.value_namespace = name_space;
        in_ack_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
        out_path_messages.value_namespace = name_space;
        out_path_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
        out_path_error_messages.value_namespace = name_space;
        out_path_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
        out_path_tear_messages.value_namespace = name_space;
        out_path_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
        out_reservation_messages.value_namespace = name_space;
        out_reservation_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
        out_reservation_error_messages.value_namespace = name_space;
        out_reservation_error_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
        out_reservation_tear_messages.value_namespace = name_space;
        out_reservation_tear_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
        out_hello_messages.value_namespace = name_space;
        out_hello_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
        out_srefresh_messages.value_namespace = name_space;
        out_srefresh_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
        out_ack_messages.value_namespace = name_space;
        out_ack_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages.yfilter = yfilter;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages.yfilter = yfilter;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages.yfilter = yfilter;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages.yfilter = yfilter;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages.yfilter = yfilter;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages.yfilter = yfilter;
    }
}

bool Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "in-path-messages" || name == "in-path-error-messages" || name == "in-path-tear-messages" || name == "in-reservation-messages" || name == "in-reservation-error-messages" || name == "in-reservation-tear-messages" || name == "in-hello-messages" || name == "in-srefresh-messages" || name == "in-ack-messages" || name == "out-path-messages" || name == "out-path-error-messages" || name == "out-path-tear-messages" || name == "out-reservation-messages" || name == "out-reservation-error-messages" || name == "out-reservation-tear-messages" || name == "out-hello-messages" || name == "out-srefresh-messages" || name == "out-ack-messages")
        return true;
    return false;
}

Rsvp::Counters::Counters()
    :
    interface_messages(std::make_shared<Rsvp::Counters::InterfaceMessages>())
	,message_summary(std::make_shared<Rsvp::Counters::MessageSummary>())
	,prefix_filtering(std::make_shared<Rsvp::Counters::PrefixFiltering>())
	,out_of_resource(std::make_shared<Rsvp::Counters::OutOfResource>())
	,interface_events(std::make_shared<Rsvp::Counters::InterfaceEvents>())
	,nsr(std::make_shared<Rsvp::Counters::Nsr>())
	,issu(std::make_shared<Rsvp::Counters::Issu>())
	,database(std::make_shared<Rsvp::Counters::Database>())
	,event_syncs(std::make_shared<Rsvp::Counters::EventSyncs>())
{
    interface_messages->parent = this;
    message_summary->parent = this;
    prefix_filtering->parent = this;
    out_of_resource->parent = this;
    interface_events->parent = this;
    nsr->parent = this;
    issu->parent = this;
    database->parent = this;
    event_syncs->parent = this;

    yang_name = "counters"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::~Counters()
{
}

bool Rsvp::Counters::has_data() const
{
    return (interface_messages !=  nullptr && interface_messages->has_data())
	|| (message_summary !=  nullptr && message_summary->has_data())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_data())
	|| (out_of_resource !=  nullptr && out_of_resource->has_data())
	|| (interface_events !=  nullptr && interface_events->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (event_syncs !=  nullptr && event_syncs->has_data());
}

bool Rsvp::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (interface_messages !=  nullptr && interface_messages->has_operation())
	|| (message_summary !=  nullptr && message_summary->has_operation())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_operation())
	|| (out_of_resource !=  nullptr && out_of_resource->has_operation())
	|| (interface_events !=  nullptr && interface_events->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (event_syncs !=  nullptr && event_syncs->has_operation());
}

std::string Rsvp::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-messages")
    {
        if(interface_messages == nullptr)
        {
            interface_messages = std::make_shared<Rsvp::Counters::InterfaceMessages>();
        }
        return interface_messages;
    }

    if(child_yang_name == "message-summary")
    {
        if(message_summary == nullptr)
        {
            message_summary = std::make_shared<Rsvp::Counters::MessageSummary>();
        }
        return message_summary;
    }

    if(child_yang_name == "prefix-filtering")
    {
        if(prefix_filtering == nullptr)
        {
            prefix_filtering = std::make_shared<Rsvp::Counters::PrefixFiltering>();
        }
        return prefix_filtering;
    }

    if(child_yang_name == "out-of-resource")
    {
        if(out_of_resource == nullptr)
        {
            out_of_resource = std::make_shared<Rsvp::Counters::OutOfResource>();
        }
        return out_of_resource;
    }

    if(child_yang_name == "interface-events")
    {
        if(interface_events == nullptr)
        {
            interface_events = std::make_shared<Rsvp::Counters::InterfaceEvents>();
        }
        return interface_events;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Rsvp::Counters::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<Rsvp::Counters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Rsvp::Counters::Database>();
        }
        return database;
    }

    if(child_yang_name == "event-syncs")
    {
        if(event_syncs == nullptr)
        {
            event_syncs = std::make_shared<Rsvp::Counters::EventSyncs>();
        }
        return event_syncs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_messages != nullptr)
    {
        children["interface-messages"] = interface_messages;
    }

    if(message_summary != nullptr)
    {
        children["message-summary"] = message_summary;
    }

    if(prefix_filtering != nullptr)
    {
        children["prefix-filtering"] = prefix_filtering;
    }

    if(out_of_resource != nullptr)
    {
        children["out-of-resource"] = out_of_resource;
    }

    if(interface_events != nullptr)
    {
        children["interface-events"] = interface_events;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(event_syncs != nullptr)
    {
        children["event-syncs"] = event_syncs;
    }

    return children;
}

void Rsvp::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-messages" || name == "message-summary" || name == "prefix-filtering" || name == "out-of-resource" || name == "interface-events" || name == "nsr" || name == "issu" || name == "database" || name == "event-syncs")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessages()
{

    yang_name = "interface-messages"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::InterfaceMessages::~InterfaceMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::has_data() const
{
    for (std::size_t index=0; index<interface_message.size(); index++)
    {
        if(interface_message[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::InterfaceMessages::has_operation() const
{
    for (std::size_t index=0; index<interface_message.size(); index++)
    {
        if(interface_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-message")
    {
        auto c = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage>();
        c->parent = this;
        interface_message.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_message)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::Counters::InterfaceMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::InterfaceMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::InterfaceMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-message")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::InterfaceMessage()
    :
    interface_name{YType::str, "interface-name"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"}
    	,
    received_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>())
	,transmitted_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>())
	,bundle_received_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>())
	,bundle_transmitted_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>())
{
    received_messages->parent = this;
    transmitted_messages->parent = this;
    bundle_received_messages->parent = this;
    bundle_transmitted_messages->parent = this;

    yang_name = "interface-message"; yang_parent_name = "interface-messages"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::~InterfaceMessage()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_data() const
{
    return interface_name.is_set
	|| retransmitted_messages.is_set
	|| out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data());
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| (received_messages !=  nullptr && received_messages->has_operation())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_operation())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_operation())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_operation());
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/interface-messages/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-message" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-messages")
    {
        if(received_messages == nullptr)
        {
            received_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>();
        }
        return received_messages;
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages == nullptr)
        {
            transmitted_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>();
        }
        return transmitted_messages;
    }

    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages == nullptr)
        {
            bundle_received_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>();
        }
        return bundle_received_messages;
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages == nullptr)
        {
            bundle_transmitted_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>();
        }
        return bundle_transmitted_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_messages != nullptr)
    {
        children["received-messages"] = received_messages;
    }

    if(transmitted_messages != nullptr)
    {
        children["transmitted-messages"] = transmitted_messages;
    }

    if(bundle_received_messages != nullptr)
    {
        children["bundle-received-messages"] = bundle_received_messages;
    }

    if(bundle_transmitted_messages != nullptr)
    {
        children["bundle-transmitted-messages"] = bundle_transmitted_messages;
    }

    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "transmitted-messages" || name == "bundle-received-messages" || name == "bundle-transmitted-messages" || name == "interface-name" || name == "retransmitted-messages" || name == "out-of-order-messages" || name == "rate-limited-messages")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::ReceivedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "received-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::~ReceivedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_data() const
{
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::TransmittedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "transmitted-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::~TransmittedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_data() const
{
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::BundleReceivedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "bundle-received-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_data() const
{
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::BundleTransmittedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "bundle-transmitted-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_data() const
{
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::MessageSummary()
    :
    retransmitted_messages{YType::uint32, "retransmitted-messages"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"}
    	,
    received_messages(std::make_shared<Rsvp::Counters::MessageSummary::ReceivedMessages>())
	,transmitted_messages(std::make_shared<Rsvp::Counters::MessageSummary::TransmittedMessages>())
	,bundle_received_messages(std::make_shared<Rsvp::Counters::MessageSummary::BundleReceivedMessages>())
	,bundle_transmitted_messages(std::make_shared<Rsvp::Counters::MessageSummary::BundleTransmittedMessages>())
{
    received_messages->parent = this;
    transmitted_messages->parent = this;
    bundle_received_messages->parent = this;
    bundle_transmitted_messages->parent = this;

    yang_name = "message-summary"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::~MessageSummary()
{
}

bool Rsvp::Counters::MessageSummary::has_data() const
{
    return retransmitted_messages.is_set
	|| out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data());
}

bool Rsvp::Counters::MessageSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| (received_messages !=  nullptr && received_messages->has_operation())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_operation())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_operation())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_operation());
}

std::string Rsvp::Counters::MessageSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-messages")
    {
        if(received_messages == nullptr)
        {
            received_messages = std::make_shared<Rsvp::Counters::MessageSummary::ReceivedMessages>();
        }
        return received_messages;
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages == nullptr)
        {
            transmitted_messages = std::make_shared<Rsvp::Counters::MessageSummary::TransmittedMessages>();
        }
        return transmitted_messages;
    }

    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages == nullptr)
        {
            bundle_received_messages = std::make_shared<Rsvp::Counters::MessageSummary::BundleReceivedMessages>();
        }
        return bundle_received_messages;
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages == nullptr)
        {
            bundle_transmitted_messages = std::make_shared<Rsvp::Counters::MessageSummary::BundleTransmittedMessages>();
        }
        return bundle_transmitted_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(received_messages != nullptr)
    {
        children["received-messages"] = received_messages;
    }

    if(transmitted_messages != nullptr)
    {
        children["transmitted-messages"] = transmitted_messages;
    }

    if(bundle_received_messages != nullptr)
    {
        children["bundle-received-messages"] = bundle_received_messages;
    }

    if(bundle_transmitted_messages != nullptr)
    {
        children["bundle-transmitted-messages"] = bundle_transmitted_messages;
    }

    return children;
}

void Rsvp::Counters::MessageSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "transmitted-messages" || name == "bundle-received-messages" || name == "bundle-transmitted-messages" || name == "retransmitted-messages" || name == "out-of-order-messages" || name == "rate-limited-messages")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::ReceivedMessages::ReceivedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "received-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::ReceivedMessages::~ReceivedMessages()
{
}

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_data() const
{
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::MessageSummary::ReceivedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::ReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::ReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::Counters::MessageSummary::ReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::ReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::TransmittedMessages::TransmittedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "transmitted-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::TransmittedMessages::~TransmittedMessages()
{
}

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_data() const
{
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::MessageSummary::TransmittedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::TransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::TransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::Counters::MessageSummary::TransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::TransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::BundleReceivedMessages::BundleReceivedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "bundle-received-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_data() const
{
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::Counters::MessageSummary::BundleReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::BundleReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::BundleTransmittedMessages::BundleTransmittedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "bundle-transmitted-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_data() const
{
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Rsvp::Counters::MessageSummary::BundleTransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::BundleTransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::PrefixFiltering()
    :
    accesses(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses>())
	,interfaces(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces>())
{
    accesses->parent = this;
    interfaces->parent = this;

    yang_name = "prefix-filtering"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::~PrefixFiltering()
{
}

bool Rsvp::Counters::PrefixFiltering::has_data() const
{
    return (accesses !=  nullptr && accesses->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Rsvp::Counters::PrefixFiltering::has_operation() const
{
    return is_set(yfilter)
	|| (accesses !=  nullptr && accesses->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesses")
    {
        if(accesses == nullptr)
        {
            accesses = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses>();
        }
        return accesses;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accesses != nullptr)
    {
        children["accesses"] = accesses;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesses" || name == "interfaces")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Accesses()
{

    yang_name = "accesses"; yang_parent_name = "prefix-filtering"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Accesses::~Accesses()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_data() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        auto c = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access>();
        c->parent = this;
        access.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Accesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : access)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Accesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}


}
}

