
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_3.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_4.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
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
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
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
        for(auto const & c : rsb_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : rsb_detailed)
    {
        children[c->get_segment_path()] = c;
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
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_adjusted_interface{YType::str, "input-adjusted-interface"},
    input_physical_interface{YType::str, "input-physical-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    expiry_time(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime>())
	,filter(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter>())
	,flow_spec(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec>())
	,header(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Header>())
	,hop(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Hop>())
	,label_info(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo>())
	,policy_flags(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags>())
	,policy_query_flags(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags>())
	,policy_sources(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicySources>())
	,rsb_flags(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::RsbFlags>())
	,s2l_sub_lsp(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp>())
	,session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session>())
	,style(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Style>())
{
    expiry_time->parent = this;
    filter->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    header->parent = this;
    hop->parent = this;
    label_info->parent = this;
    policy_flags->parent = this;
    policy_query_flags->parent = this;
    policy_sources->parent = this;
    rsb_flags->parent = this;
    s2l_sub_lsp->parent = this;
    session->parent = this;
    style->parent = this;

    yang_name = "rsb-detailed"; yang_parent_name = "rsb-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::~RsbDetailed()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| input_adjusted_interface.is_set
	|| input_physical_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (expiry_time !=  nullptr && expiry_time->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (label_info !=  nullptr && label_info->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data())
	|| (policy_sources !=  nullptr && policy_sources->has_data())
	|| (rsb_flags !=  nullptr && rsb_flags->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(input_adjusted_interface.yfilter)
	|| ydk::is_set(input_physical_interface.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (expiry_time !=  nullptr && expiry_time->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (label_info !=  nullptr && label_info->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation())
	|| (policy_sources !=  nullptr && policy_sources->has_operation())
	|| (rsb_flags !=  nullptr && rsb_flags->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
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
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_adjusted_interface.is_set || is_set(input_adjusted_interface.yfilter)) leaf_name_data.push_back(input_adjusted_interface.get_name_leafdata());
    if (input_physical_interface.is_set || is_set(input_physical_interface.yfilter)) leaf_name_data.push_back(input_physical_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter>();
        }
        return filter;
    }

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

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Header>();
        }
        return header;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "label-info")
    {
        if(label_info == nullptr)
        {
            label_info = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo>();
        }
        return label_info;
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    if(child_yang_name == "policy-sources")
    {
        if(policy_sources == nullptr)
        {
            policy_sources = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::PolicySources>();
        }
        return policy_sources;
    }

    if(child_yang_name == "rsb-flags")
    {
        if(rsb_flags == nullptr)
        {
            rsb_flags = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::RsbFlags>();
        }
        return rsb_flags;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session>();
        }
        return session;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Style>();
        }
        return style;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(expiry_time != nullptr)
    {
        children["expiry-time"] = expiry_time;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(flow_spec != nullptr)
    {
        children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        children["generic-flow-spec"] = generic_flow_spec;
    }

    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(hop != nullptr)
    {
        children["hop"] = hop;
    }

    if(label_info != nullptr)
    {
        children["label-info"] = label_info;
    }

    if(policy_flags != nullptr)
    {
        children["policy-flags"] = policy_flags;
    }

    if(policy_query_flags != nullptr)
    {
        children["policy-query-flags"] = policy_query_flags;
    }

    if(policy_sources != nullptr)
    {
        children["policy-sources"] = policy_sources;
    }

    if(rsb_flags != nullptr)
    {
        children["rsb-flags"] = rsb_flags;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(style != nullptr)
    {
        children["style"] = style;
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "input-adjusted-interface")
    {
        input_adjusted_interface.yfilter = yfilter;
    }
    if(value_path == "input-physical-interface")
    {
        input_physical_interface.yfilter = yfilter;
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
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time" || name == "filter" || name == "flow-spec" || name == "generic-flow-spec" || name == "header" || name == "hop" || name == "label-info" || name == "policy-flags" || name == "policy-query-flags" || name == "policy-sources" || name == "rsb-flags" || name == "s2l-sub-lsp" || name == "session" || name == "style" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "input-adjusted-interface" || name == "input-physical-interface" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::ExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::~ExpiryTime()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
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
    p2mp_ipv4_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    udp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
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
    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
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
    if(name == "p2mp-ipv4-session" || name == "udp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
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

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
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
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-sub-group-origin" || name == "source-address" || name == "source-port" || name == "sub-group-id")
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

Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::FlowSpec()
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

    yang_name = "flow-spec"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::has_data() const
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

bool Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::has_operation() const
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
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

bool Rsvp::RsbDetaileds::RsbDetailed::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-max-unit" || name == "flow-min-unit" || name == "flow-peak-rate" || name == "flow-qos" || name == "flow-requested-rate" || name == "flow-slack")
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
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_signal_type.yfilter);
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

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-bit-rate" || name == "flow-multiplier" || name == "flow-nvc" || name == "flow-signal-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Header::Header()
    :
    ip_source_address{YType::str, "ip-source-address"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_version{YType::uint8, "rsvp-version"}
{

    yang_name = "header"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Header::~Header()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Header::has_data() const
{
    return ip_source_address.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_message_type.is_set
	|| rsvp_ttl.is_set
	|| rsvp_version.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_source_address.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(ip_ttl.yfilter)
	|| ydk::is_set(rsvp_header_flags.yfilter)
	|| ydk::is_set(rsvp_message_type.yfilter)
	|| ydk::is_set(rsvp_ttl.yfilter)
	|| ydk::is_set(rsvp_version.yfilter);
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

    if (ip_source_address.is_set || is_set(ip_source_address.yfilter)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.yfilter)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.yfilter)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.yfilter)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.yfilter)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_version.is_set || is_set(rsvp_version.yfilter)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
        ip_source_address.value_namespace = name_space;
        ip_source_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
        rsvp_header_flags.value_namespace = name_space;
        rsvp_header_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
        rsvp_message_type.value_namespace = name_space;
        rsvp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
        rsvp_ttl.value_namespace = name_space;
        rsvp_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
        rsvp_version.value_namespace = name_space;
        rsvp_version.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags.yfilter = yfilter;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type.yfilter = yfilter;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-source-address" || name == "ip-tos" || name == "ip-ttl" || name == "rsvp-header-flags" || name == "rsvp-message-type" || name == "rsvp-ttl" || name == "rsvp-version")
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

Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::LabelInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    local_downstream_label{YType::uint32, "local-downstream-label"},
    local_upstream_label{YType::uint32, "local-upstream-label"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"},
    merge_point_label{YType::uint32, "merge-point-label"},
    outgoing_downstream_label{YType::uint32, "outgoing-downstream-label"},
    outgoing_upstream_label{YType::uint32, "outgoing-upstream-label"},
    recovery_label{YType::uint32, "recovery-label"}
    	,
    generic_local_downstream_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel>())
	,generic_local_upstream_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel>())
	,generic_merge_point_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel>())
	,generic_outgoing_downstream_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>())
	,generic_outgoing_upstream_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>())
	,generic_recovery_label(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel>())
{
    generic_local_downstream_label->parent = this;
    generic_local_upstream_label->parent = this;
    generic_merge_point_label->parent = this;
    generic_outgoing_downstream_label->parent = this;
    generic_outgoing_upstream_label->parent = this;
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
	|| local_upstream_label.is_set
	|| lsp_wrap_label.is_set
	|| merge_point_label.is_set
	|| outgoing_downstream_label.is_set
	|| outgoing_upstream_label.is_set
	|| recovery_label.is_set
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_data())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_data())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_data())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_data())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_data())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(local_downstream_label.yfilter)
	|| ydk::is_set(local_upstream_label.yfilter)
	|| ydk::is_set(lsp_wrap_label.yfilter)
	|| ydk::is_set(merge_point_label.yfilter)
	|| ydk::is_set(outgoing_downstream_label.yfilter)
	|| ydk::is_set(outgoing_upstream_label.yfilter)
	|| ydk::is_set(recovery_label.yfilter)
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_operation())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_operation())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_operation())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_operation())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_operation())
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
    if (local_upstream_label.is_set || is_set(local_upstream_label.yfilter)) leaf_name_data.push_back(local_upstream_label.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.yfilter)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.yfilter)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (outgoing_downstream_label.is_set || is_set(outgoing_downstream_label.yfilter)) leaf_name_data.push_back(outgoing_downstream_label.get_name_leafdata());
    if (outgoing_upstream_label.is_set || is_set(outgoing_upstream_label.yfilter)) leaf_name_data.push_back(outgoing_upstream_label.get_name_leafdata());
    if (recovery_label.is_set || is_set(recovery_label.yfilter)) leaf_name_data.push_back(recovery_label.get_name_leafdata());

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

    if(child_yang_name == "generic-local-upstream-label")
    {
        if(generic_local_upstream_label == nullptr)
        {
            generic_local_upstream_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel>();
        }
        return generic_local_upstream_label;
    }

    if(child_yang_name == "generic-merge-point-label")
    {
        if(generic_merge_point_label == nullptr)
        {
            generic_merge_point_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel>();
        }
        return generic_merge_point_label;
    }

    if(child_yang_name == "generic-outgoing-downstream-label")
    {
        if(generic_outgoing_downstream_label == nullptr)
        {
            generic_outgoing_downstream_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>();
        }
        return generic_outgoing_downstream_label;
    }

    if(child_yang_name == "generic-outgoing-upstream-label")
    {
        if(generic_outgoing_upstream_label == nullptr)
        {
            generic_outgoing_upstream_label = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>();
        }
        return generic_outgoing_upstream_label;
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
    if(generic_local_downstream_label != nullptr)
    {
        children["generic-local-downstream-label"] = generic_local_downstream_label;
    }

    if(generic_local_upstream_label != nullptr)
    {
        children["generic-local-upstream-label"] = generic_local_upstream_label;
    }

    if(generic_merge_point_label != nullptr)
    {
        children["generic-merge-point-label"] = generic_merge_point_label;
    }

    if(generic_outgoing_downstream_label != nullptr)
    {
        children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
    }

    if(generic_outgoing_upstream_label != nullptr)
    {
        children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
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
    if(value_path == "local-upstream-label")
    {
        local_upstream_label = value;
        local_upstream_label.value_namespace = name_space;
        local_upstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
        lsp_wrap_label.value_namespace = name_space;
        lsp_wrap_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
        merge_point_label.value_namespace = name_space;
        merge_point_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label = value;
        outgoing_downstream_label.value_namespace = name_space;
        outgoing_downstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label = value;
        outgoing_upstream_label.value_namespace = name_space;
        outgoing_upstream_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-label")
    {
        recovery_label = value;
        recovery_label.value_namespace = name_space;
        recovery_label.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "local-upstream-label")
    {
        local_upstream_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label.yfilter = yfilter;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label.yfilter = yfilter;
    }
    if(value_path == "recovery-label")
    {
        recovery_label.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-local-downstream-label" || name == "generic-local-upstream-label" || name == "generic-merge-point-label" || name == "generic-outgoing-downstream-label" || name == "generic-outgoing-upstream-label" || name == "generic-recovery-label" || name == "is-valid" || name == "local-downstream-label" || name == "local-upstream-label" || name == "lsp-wrap-label" || name == "merge-point-label" || name == "outgoing-downstream-label" || name == "outgoing-upstream-label" || name == "recovery-label")
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

Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_forwarding{YType::boolean, "is-forwarding"},
    is_installed{YType::boolean, "is-installed"}
{

    yang_name = "policy-flags"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::~PolicyFlags()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_forwarding.is_set
	|| is_installed.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_forwarding.yfilter)
	|| ydk::is_set(is_installed.yfilter);
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
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
        is_forwarding.value_namespace = name_space;
        is_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
        is_installed.value_namespace = name_space;
        is_installed.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-accepted")
    {
        is_accepted.yfilter = yfilter;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding.yfilter = yfilter;
    }
    if(value_path == "is-installed")
    {
        is_installed.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-forwarding" || name == "is-installed")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_bypass{YType::boolean, "is-bypass"},
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::has_data() const
{
    return is_bypass.is_set
	|| is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bypass.yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter);
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

    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());
    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bypass")
    {
        is_bypass = value;
        is_bypass.value_namespace = name_space;
        is_bypass.value_namespace_prefix = name_space_prefix;
    }
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
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bypass")
    {
        is_bypass.yfilter = yfilter;
    }
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
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bypass" || name == "is-needed" || name == "is-report-required" || name == "is-resync")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicySources::PolicySources()
    :
    is_cable{YType::boolean, "is-cable"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_local{YType::boolean, "is-local"},
    is_te_link{YType::boolean, "is-te-link"}
{

    yang_name = "policy-sources"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::PolicySources::~PolicySources()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicySources::has_data() const
{
    return is_cable.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_local.is_set
	|| is_te_link.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicySources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_cable.yfilter)
	|| ydk::is_set(is_cops.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_te_link.yfilter);
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

    if (is_cable.is_set || is_set(is_cable.yfilter)) leaf_name_data.push_back(is_cable.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.yfilter)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_te_link.is_set || is_set(is_te_link.yfilter)) leaf_name_data.push_back(is_te_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::PolicySources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::PolicySources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicySources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-cable")
    {
        is_cable = value;
        is_cable.value_namespace = name_space;
        is_cable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-link")
    {
        is_te_link = value;
        is_te_link.value_namespace = name_space;
        is_te_link.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::PolicySources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-cable")
    {
        is_cable.yfilter = yfilter;
    }
    if(value_path == "is-cops")
    {
        is_cops.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-te-link")
    {
        is_te_link.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::PolicySources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-cable" || name == "is-cops" || name == "is-default" || name == "is-local" || name == "is-te-link")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::RsbFlags()
    :
    is_local_receiver{YType::boolean, "is-local-receiver"},
    is_local_repair{YType::boolean, "is-local-repair"},
    is_lockout{YType::boolean, "is-lockout"},
    is_merge_point{YType::boolean, "is-merge-point"},
    is_message_id_valid{YType::boolean, "is-message-id-valid"}
{

    yang_name = "rsb-flags"; yang_parent_name = "rsb-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::~RsbFlags()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::has_data() const
{
    return is_local_receiver.is_set
	|| is_local_repair.is_set
	|| is_lockout.is_set
	|| is_merge_point.is_set
	|| is_message_id_valid.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_local_receiver.yfilter)
	|| ydk::is_set(is_local_repair.yfilter)
	|| ydk::is_set(is_lockout.yfilter)
	|| ydk::is_set(is_merge_point.yfilter)
	|| ydk::is_set(is_message_id_valid.yfilter);
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
    if (is_local_repair.is_set || is_set(is_local_repair.yfilter)) leaf_name_data.push_back(is_local_repair.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (is_merge_point.is_set || is_set(is_merge_point.yfilter)) leaf_name_data.push_back(is_merge_point.get_name_leafdata());
    if (is_message_id_valid.is_set || is_set(is_message_id_valid.yfilter)) leaf_name_data.push_back(is_message_id_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "is-local-repair")
    {
        is_local_repair = value;
        is_local_repair.value_namespace = name_space;
        is_local_repair.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point = value;
        is_merge_point.value_namespace = name_space;
        is_merge_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid = value;
        is_message_id_valid.value_namespace = name_space;
        is_message_id_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-local-receiver")
    {
        is_local_receiver.yfilter = yfilter;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair.yfilter = yfilter;
    }
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point.yfilter = yfilter;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid.yfilter = yfilter;
    }
}

bool Rsvp::RsbDetaileds::RsbDetailed::RsbFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-local-receiver" || name == "is-local-repair" || name == "is-lockout" || name == "is-merge-point" || name == "is-message-id-valid")
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
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

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
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
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

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_children() const
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
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
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
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
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
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
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

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
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
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
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

Rsvp::RxsbDetails::RxsbDetails()
{

    yang_name = "rxsb-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::~RxsbDetails()
{
}

bool Rsvp::RxsbDetails::has_data() const
{
    for (std::size_t index=0; index<rxsb_detail.size(); index++)
    {
        if(rxsb_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RxsbDetails::has_operation() const
{
    for (std::size_t index=0; index<rxsb_detail.size(); index++)
    {
        if(rxsb_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RxsbDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rxsb-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rxsb-detail")
    {
        for(auto const & c : rxsb_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::RxsbDetails::RxsbDetail>();
        c->parent = this;
        rxsb_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rxsb_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::RxsbDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RxsbDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RxsbDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rxsb-detail")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::RxsbDetail()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    dynamic_state{YType::uint32, "dynamic-state"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_interface{YType::str, "input-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    filter(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Filter>())
	,flow_spec(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec>())
	,hop(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Hop>())
	,rsvp_header(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::RsvpHeader>())
	,s2l_sub_lsp(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp>())
	,session(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session>())
	,style(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Style>())
{
    filter->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    hop->parent = this;
    rsvp_header->parent = this;
    s2l_sub_lsp->parent = this;
    session->parent = this;
    style->parent = this;

    yang_name = "rxsb-detail"; yang_parent_name = "rxsb-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::~RxsbDetail()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| dynamic_state.is_set
	|| extended_tunnel_id.is_set
	|| input_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (rsvp_header !=  nullptr && rsvp_header->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool Rsvp::RxsbDetails::RxsbDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(dynamic_state.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (rsvp_header !=  nullptr && rsvp_header->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string Rsvp::RxsbDetails::RxsbDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rxsb-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (dynamic_state.is_set || is_set(dynamic_state.yfilter)) leaf_name_data.push_back(dynamic_state.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.yfilter)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "rsvp-header")
    {
        if(rsvp_header == nullptr)
        {
            rsvp_header = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::RsvpHeader>();
        }
        return rsvp_header;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session>();
        }
        return session;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Style>();
        }
        return style;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(flow_spec != nullptr)
    {
        children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        children["generic-flow-spec"] = generic_flow_spec;
    }

    if(hop != nullptr)
    {
        children["hop"] = hop;
    }

    if(rsvp_header != nullptr)
    {
        children["rsvp-header"] = rsvp_header;
    }

    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(style != nullptr)
    {
        children["style"] = style;
    }

    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dynamic-state")
    {
        dynamic_state = value;
        dynamic_state.value_namespace = name_space;
        dynamic_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
        input_interface.value_namespace = name_space;
        input_interface.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RxsbDetails::RxsbDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "dynamic-state")
    {
        dynamic_state.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
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
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::RxsbDetails::RxsbDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "flow-spec" || name == "generic-flow-spec" || name == "hop" || name == "rsvp-header" || name == "s2l-sub-lsp" || name == "session" || name == "style" || name == "destination-address" || name == "destination-port" || name == "dynamic-state" || name == "extended-tunnel-id" || name == "input-interface" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "rxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Filter::~Filter()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RxsbDetails::RxsbDetail::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_filter != nullptr)
    {
        children["rsvp-filter"] = rsvp_filter;
    }

    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RxsbDetails::RxsbDetail::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    udp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2mp_ipv4_session != nullptr)
    {
        children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    if(udp_ipv4_session != nullptr)
    {
        children["udp-ipv4-session"] = udp_ipv4_session;
    }

    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-ipv4-session" || name == "udp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-sub-group-origin" || name == "source-address" || name == "source-port" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::FlowSpec::FlowSpec()
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

    yang_name = "flow-spec"; yang_parent_name = "rxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::FlowSpec::has_data() const
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

bool Rsvp::RxsbDetails::RxsbDetail::FlowSpec::has_operation() const
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

std::string Rsvp::RxsbDetails::RxsbDetail::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::FlowSpec::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RxsbDetails::RxsbDetail::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RxsbDetails::RxsbDetail::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-max-unit" || name == "flow-min-unit" || name == "flow-peak-rate" || name == "flow-qos" || name == "flow-requested-rate" || name == "flow-slack")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_flow_spec != nullptr)
    {
        children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_signal_type.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-bit-rate" || name == "flow-multiplier" || name == "flow-nvc" || name == "flow-signal-type")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{

    yang_name = "hop"; yang_parent_name = "rxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Hop::~Hop()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_logical_interface_name.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.yfilter)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RxsbDetails::RxsbDetail::Hop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RxsbDetails::RxsbDetail::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-logical-interface-name")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::RsvpHeader()
    :
    ip_source_address{YType::str, "ip-source-address"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_version{YType::uint8, "rsvp-version"}
{

    yang_name = "rsvp-header"; yang_parent_name = "rxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::~RsvpHeader()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::has_data() const
{
    return ip_source_address.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_message_type.is_set
	|| rsvp_ttl.is_set
	|| rsvp_version.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_source_address.yfilter)
	|| ydk::is_set(ip_tos.yfilter)
	|| ydk::is_set(ip_ttl.yfilter)
	|| ydk::is_set(rsvp_header_flags.yfilter)
	|| ydk::is_set(rsvp_message_type.yfilter)
	|| ydk::is_set(rsvp_ttl.yfilter)
	|| ydk::is_set(rsvp_version.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_source_address.is_set || is_set(ip_source_address.yfilter)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.yfilter)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.yfilter)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.yfilter)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.yfilter)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.yfilter)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_version.is_set || is_set(rsvp_version.yfilter)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
        ip_source_address.value_namespace = name_space;
        ip_source_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
        rsvp_header_flags.value_namespace = name_space;
        rsvp_header_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
        rsvp_message_type.value_namespace = name_space;
        rsvp_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
        rsvp_ttl.value_namespace = name_space;
        rsvp_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
        rsvp_version.value_namespace = name_space;
        rsvp_version.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address.yfilter = yfilter;
    }
    if(value_path == "ip-tos")
    {
        ip_tos.yfilter = yfilter;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags.yfilter = yfilter;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type.yfilter = yfilter;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl.yfilter = yfilter;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version.yfilter = yfilter;
    }
}

bool Rsvp::RxsbDetails::RxsbDetail::RsvpHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-source-address" || name == "ip-tos" || name == "ip-ttl" || name == "rsvp-header-flags" || name == "rsvp-message-type" || name == "rsvp-ttl" || name == "rsvp-version")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "rxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "rxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::~Session()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RxsbDetails::RxsbDetail::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::get_children() const
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

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::RxsbDetails::RxsbDetail::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "rxsb-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::RxsbDetails::RxsbDetail::Style::~Style()
{
}

bool Rsvp::RxsbDetails::RxsbDetail::Style::has_data() const
{
    return reservation_type.is_set;
}

bool Rsvp::RxsbDetails::RxsbDetail::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string Rsvp::RxsbDetails::RxsbDetail::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rxsb-details/rxsb-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RxsbDetails::RxsbDetail::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RxsbDetails::RxsbDetail::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::RxsbDetails::RxsbDetail::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::RxsbDetails::RxsbDetail::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::RxsbDetails::RxsbDetail::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RxsbDetails::RxsbDetail::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool Rsvp::RxsbDetails::RxsbDetail::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBriefs()
{

    yang_name = "session-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::~SessionBriefs()
{
}

bool Rsvp::SessionBriefs::has_data() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::SessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-brief")
    {
        for(auto const & c : session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::SessionBriefs::SessionBrief>();
        c->parent = this;
        session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::SessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-brief")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBrief::SessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    detail_list_size{YType::uint32, "detail-list-size"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    ps_bs{YType::uint32, "ps-bs"},
    requests{YType::uint32, "requests"},
    rs_bs{YType::uint32, "rs-bs"},
    session_type{YType::enumeration, "session-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    session(std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session>())
{
    session->parent = this;

    yang_name = "session-brief"; yang_parent_name = "session-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::~SessionBrief()
{
}

bool Rsvp::SessionBriefs::SessionBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| detail_list_size.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| ps_bs.is_set
	|| requests.is_set
	|| rs_bs.is_set
	|| session_type.is_set
	|| vrf_name.is_set
	|| (session !=  nullptr && session->has_data());
}

bool Rsvp::SessionBriefs::SessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(detail_list_size.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(ps_bs.yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(rs_bs.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Rsvp::SessionBriefs::SessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionBriefs::SessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionBriefs::SessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (detail_list_size.is_set || is_set(detail_list_size.yfilter)) leaf_name_data.push_back(detail_list_size.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (ps_bs.is_set || is_set(ps_bs.yfilter)) leaf_name_data.push_back(ps_bs.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (rs_bs.is_set || is_set(rs_bs.yfilter)) leaf_name_data.push_back(rs_bs.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Rsvp::SessionBriefs::SessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "detail-list-size")
    {
        detail_list_size = value;
        detail_list_size.value_namespace = name_space;
        detail_list_size.value_namespace_prefix = name_space_prefix;
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

void Rsvp::SessionBriefs::SessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "detail-list-size")
    {
        detail_list_size.yfilter = yfilter;
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
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::SessionBriefs::SessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "destination-address" || name == "destination-port" || name == "detail-list-size" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "protocol" || name == "ps-bs" || name == "requests" || name == "rs-bs" || name == "session-type" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::Session::~Session()
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::SessionBriefs::SessionBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-briefs/session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionBriefs::SessionBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::SessionBriefs::SessionBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionBriefs::SessionBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-briefs/session-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::get_children() const
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

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
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

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
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
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetaileds()
{

    yang_name = "session-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::~SessionDetaileds()
{
}

bool Rsvp::SessionDetaileds::has_data() const
{
    for (std::size_t index=0; index<session_detailed.size(); index++)
    {
        if(session_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::has_operation() const
{
    for (std::size_t index=0; index<session_detailed.size(); index++)
    {
        if(session_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::SessionDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed>();
        c->parent = this;
        session_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detailed)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::SessionDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detailed")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::SessionDetailed()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    compact(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact>())
	,s2l_sub_lsp(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp>())
{
    compact->parent = this;
    s2l_sub_lsp->parent = this;

    yang_name = "session-detailed"; yang_parent_name = "session-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::~SessionDetailed()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detailed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "compact")
    {
        if(compact == nullptr)
        {
            compact = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact>();
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo>();
        c->parent = this;
        psb_rsb_info.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "compact" || name == "psb-rsb-info" || name == "s2l-sub-lsp" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "protocol" || name == "session-type" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Compact()
    :
    detail_list_size{YType::uint32, "detail-list-size"},
    ps_bs{YType::uint32, "ps-bs"},
    requests{YType::uint32, "requests"},
    rs_bs{YType::uint32, "rs-bs"}
    	,
    session(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session>())
{
    session->parent = this;

    yang_name = "compact"; yang_parent_name = "session-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::~Compact()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::has_data() const
{
    return detail_list_size.is_set
	|| ps_bs.is_set
	|| requests.is_set
	|| rs_bs.is_set
	|| (session !=  nullptr && session->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detail_list_size.yfilter)
	|| ydk::is_set(ps_bs.yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(rs_bs.yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compact";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::Compact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detail_list_size.is_set || is_set(detail_list_size.yfilter)) leaf_name_data.push_back(detail_list_size.get_name_leafdata());
    if (ps_bs.is_set || is_set(ps_bs.yfilter)) leaf_name_data.push_back(ps_bs.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (rs_bs.is_set || is_set(rs_bs.yfilter)) leaf_name_data.push_back(rs_bs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "detail-list-size" || name == "ps-bs" || name == "requests" || name == "rs-bs")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "compact"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::~Session()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/compact/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/compact/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbRsbInfo()
{

    yang_name = "psb-rsb-info"; yang_parent_name = "session-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::~PsbRsbInfo()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-rsb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo>();
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo>();
        c->parent = this;
        rsb_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psb-info" || name == "rsb-info")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::PsbInfo()
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
    association(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association>())
	,generic_in_label(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel>())
	,generic_traffic_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec>())
	,protection(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection>())
	,reverse_lsp(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp>())
	,traffic_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec>())
{
    association->parent = this;
    generic_in_label->parent = this;
    generic_traffic_spec->parent = this;
    protection->parent = this;
    reverse_lsp->parent = this;
    traffic_spec->parent = this;

    yang_name = "psb-info"; yang_parent_name = "psb-rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::~PsbInfo()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association>();
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero>();
        c->parent = this;
        ero.push_back(c);
        return c;
    }

    if(child_yang_name == "generic-in-label")
    {
        if(generic_in_label == nullptr)
        {
            generic_in_label = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel>();
        }
        return generic_in_label;
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp>();
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro>();
        c->parent = this;
        rro.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec == nullptr)
        {
            traffic_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec>();
        }
        return traffic_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "ero" || name == "generic-in-label" || name == "generic-traffic-spec" || name == "protection" || name == "reverse-lsp" || name == "rro" || name == "traffic-spec" || name == "destination-address" || name == "in-interface" || name == "in-label" || name == "incoming-interface-address" || name == "is-bad-address" || name == "is-ero-valid" || name == "is-rro-valid" || name == "is-traffic-spec-valid" || name == "is-valid" || name == "lsp-id" || name == "lsp-wrap-label" || name == "p2mp-sub-group-origin" || name == "sub-group-id" || name == "tunnel-name")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Association()
    :
    association_type{YType::enumeration, "association-type"}
    	,
    extended_ipv4(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4>())
	,extended_ipv6(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6>())
	,ipv4(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4>())
	,ipv6(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6>())
{
    extended_ipv4->parent = this;
    extended_ipv6->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "association"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::~Association()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_data() const
{
    return association_type.is_set
	|| (extended_ipv4 !=  nullptr && extended_ipv4->has_data())
	|| (extended_ipv6 !=  nullptr && extended_ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_type.yfilter)
	|| (extended_ipv4 !=  nullptr && extended_ipv4->has_operation())
	|| (extended_ipv6 !=  nullptr && extended_ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_type.is_set || is_set(association_type.yfilter)) leaf_name_data.push_back(association_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-ipv4")
    {
        if(extended_ipv4 == nullptr)
        {
            extended_ipv4 = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4>();
        }
        return extended_ipv4;
    }

    if(child_yang_name == "extended-ipv6")
    {
        if(extended_ipv6 == nullptr)
        {
            extended_ipv6 = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6>();
        }
        return extended_ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-type")
    {
        association_type = value;
        association_type.value_namespace = name_space;
        association_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-type")
    {
        association_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-ipv4" || name == "extended-ipv6" || name == "ipv4" || name == "ipv6" || name == "association-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedIpv4()
    :
    extended_id{YType::uint32, "extended-id"},
    global_source{YType::uint32, "global-source"},
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{

    yang_name = "extended-ipv4"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::~ExtendedIpv4()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-id" || name == "global-source" || name == "id" || name == "source" || name == "type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedIpv6()
    :
    extended_id{YType::uint32, "extended-id"},
    global_source{YType::uint32, "global-source"},
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{

    yang_name = "extended-ipv6"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::~ExtendedIpv6()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-id" || name == "global-source" || name == "id" || name == "source" || name == "type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::Ipv4()
    :
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{

    yang_name = "ipv4"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::~Ipv4()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_data() const
{
    return id.is_set
	|| source.is_set
	|| type.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "source" || name == "type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::Ipv6()
    :
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{

    yang_name = "ipv6"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::~Ipv6()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_data() const
{
    return id.is_set
	|| source.is_set
	|| type.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "source" || name == "type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ero()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "ero"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::~Ero()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GenericInLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-in-label"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::~GenericInLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-in-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-in-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-in-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-bit-rate" || name == "traffic-multiplier" || name == "traffic-nvc" || name == "traffic-signal-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::Protection()
    :
    n{YType::boolean, "n"},
    o{YType::boolean, "o"},
    p{YType::boolean, "p"},
    s{YType::boolean, "s"}
    	,
    link_flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags>())
	,lsp_flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags>())
{
    link_flags->parent = this;
    lsp_flags->parent = this;

    yang_name = "protection"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::~Protection()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_data() const
{
    return n.is_set
	|| o.is_set
	|| p.is_set
	|| s.is_set
	|| (link_flags !=  nullptr && link_flags->has_data())
	|| (lsp_flags !=  nullptr && lsp_flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(n.yfilter)
	|| ydk::is_set(o.yfilter)
	|| ydk::is_set(p.yfilter)
	|| ydk::is_set(s.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation())
	|| (lsp_flags !=  nullptr && lsp_flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (n.is_set || is_set(n.yfilter)) leaf_name_data.push_back(n.get_name_leafdata());
    if (o.is_set || is_set(o.yfilter)) leaf_name_data.push_back(o.get_name_leafdata());
    if (p.is_set || is_set(p.yfilter)) leaf_name_data.push_back(p.get_name_leafdata());
    if (s.is_set || is_set(s.yfilter)) leaf_name_data.push_back(s.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "lsp-flags")
    {
        if(lsp_flags == nullptr)
        {
            lsp_flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags>();
        }
        return lsp_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-flags" || name == "lsp-flags" || name == "n" || name == "o" || name == "p" || name == "s")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::LinkFlags()
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::~LinkFlags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ded1-plus1" || name == "ded1-to1" || name == "enhanced" || name == "extra-traffic" || name == "reserved-bit1" || name == "reserved-bit2" || name == "shared" || name == "unprotected")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::LspFlags()
    :
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"}
{

    yang_name = "lsp-flags"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::~LspFlags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_data() const
{
    return one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/protection/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one-plus-one-bi" || name == "one-plus-one-uni" || name == "one-to-n-protection-et" || name == "rerouting" || name == "rerouting-no-et")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::ReverseLsp()
    :
    generic_traffic_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec>())
{
    generic_traffic_spec->parent = this;

    yang_name = "reverse-lsp"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::~ReverseLsp()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero>();
        c->parent = this;
        ero.push_back(c);
        return c;
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec>();
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject>();
        c->parent = this;
        unsup_sub_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "generic-traffic-spec" || name == "unsup-sub-object")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ero()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "ero"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::~Ero()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-address" || name == "is-strict-route" || name == "prefix-length")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero-interface-id" || name == "ero-router-id" || name == "is-strict-route" || name == "status")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-bit-rate" || name == "traffic-multiplier" || name == "traffic-nvc" || name == "traffic-signal-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::UnsupSubObject()
    :
    rsvp_mgmt_rev_lsp_unsupported_subobj{YType::uint8, "rsvp-mgmt-rev-lsp-unsupported-subobj"}
{

    yang_name = "unsup-sub-object"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::~UnsupSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_data() const
{
    for (auto const & leaf : rsvp_mgmt_rev_lsp_unsupported_subobj.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_operation() const
{
    for (auto const & leaf : rsvp_mgmt_rev_lsp_unsupported_subobj.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rsvp_mgmt_rev_lsp_unsupported_subobj.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unsup-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto rsvp_mgmt_rev_lsp_unsupported_subobj_name_datas = rsvp_mgmt_rev_lsp_unsupported_subobj.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rsvp_mgmt_rev_lsp_unsupported_subobj_name_datas.begin(), rsvp_mgmt_rev_lsp_unsupported_subobj_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvp-mgmt-rev-lsp-unsupported-subobj")
    {
        rsvp_mgmt_rev_lsp_unsupported_subobj.append(value);
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvp-mgmt-rev-lsp-unsupported-subobj")
    {
        rsvp_mgmt_rev_lsp_unsupported_subobj.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-mgmt-rev-lsp-unsupported-subobj")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;

    yang_name = "rro"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::~Rro()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "srlg-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/ipv4rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"},
    variable_length_label{YType::uint32, "variable-length-label"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    auto variable_length_label_name_datas = variable_length_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), variable_length_label_name_datas.begin(), variable_length_label_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "is-label-variable-length" || name == "label" || name == "variable-length-label")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/label-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srl_gs.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto srl_gs_name_datas = srl_gs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srl_gs_name_datas.begin(), srl_gs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srl-gs")
    {
        srl_gs.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/unnumbered-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{

    yang_name = "traffic-spec"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::~TrafficSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-max-unit" || name == "traffic-min-unit" || name == "traffic-peak-rate")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::RsbInfo()
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
    flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec>())
	,generic_flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec>())
	,generic_out_label(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel>())
{
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    generic_out_label->parent = this;

    yang_name = "rsb-info"; yang_parent_name = "psb-rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::~RsbInfo()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "generic-out-label")
    {
        if(generic_out_label == nullptr)
        {
            generic_out_label = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel>();
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
        auto c = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro>();
        c->parent = this;
        rro.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-spec" || name == "generic-flow-spec" || name == "generic-out-label" || name == "rro" || name == "backup-interface" || name == "backup-label" || name == "destination-address" || name == "is-flow-spec-valid" || name == "is-rro-valid" || name == "is-valid" || name == "out-interface" || name == "out-label")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::FlowSpec()
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::~FlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-max-unit" || name == "flow-min-unit" || name == "flow-peak-rate" || name == "flow-qos" || name == "flow-requested-rate" || name == "flow-slack")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g709otn_flow_spec != nullptr)
    {
        children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_signal_type.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-bit-rate" || name == "flow-multiplier" || name == "flow-nvc" || name == "flow-signal-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GenericOutLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;

    yang_name = "generic-out-label"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::~GenericOutLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_label_type.yfilter)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-out-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.yfilter)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generalized-label")
    {
        if(generalized_label == nullptr)
        {
            generalized_label = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel>();
        }
        return generalized_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generalized_label != nullptr)
    {
        children["generalized-label"] = generalized_label;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
        generic_label_type.value_namespace = name_space;
        generic_label_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generalized-label" || name == "generic-label-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{

    yang_name = "generalized-label"; yang_parent_name = "generic-out-label"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/generic-out-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;

    yang_name = "rro"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::~Rro()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_children() const
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "srlg-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/ipv4rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::LabelRroSubObject()
    :
    is_label_variable_length{YType::boolean, "is-label-variable-length"},
    label{YType::uint32, "label"},
    variable_length_label{YType::uint32, "variable-length-label"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_operation() const
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

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    auto variable_length_label_name_datas = variable_length_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), variable_length_label_name_datas.begin(), variable_length_label_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "is-label-variable-length" || name == "label" || name == "variable-length-label")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/label-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs{YType::uint32, "srl-gs"}
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_data() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_operation() const
{
    for (auto const & leaf : srl_gs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srl_gs.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto srl_gs_name_datas = srl_gs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srl_gs_name_datas.begin(), srl_gs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srl-gs")
    {
        srl_gs.append(value);
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srl-gs")
    {
        srl_gs.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_id{YType::boolean, "is-node-id"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_bandwidth_protected.is_set
	|| is_node_id.is_set
	|| is_node_protection_available.is_set
	|| is_protection_available.is_set
	|| is_protection_in_use.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_id.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/unnumbered-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-protected" || name == "is-node-id" || name == "is-node-protection-available" || name == "is-protection-available" || name == "is-protection-in-use")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "session-detailed"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::Summary::Summary()
    :
    interfaces{YType::uint32, "interfaces"},
    ls_ps{YType::uint32, "ls-ps"}
    	,
    database_counters(std::make_shared<Rsvp::Summary::DatabaseCounters>())
	,issu_status(std::make_shared<Rsvp::Summary::IssuStatus>())
	,nsr_status(std::make_shared<Rsvp::Summary::NsrStatus>())
{
    database_counters->parent = this;
    issu_status->parent = this;
    nsr_status->parent = this;

    yang_name = "summary"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Summary::~Summary()
{
}

bool Rsvp::Summary::has_data() const
{
    return interfaces.is_set
	|| ls_ps.is_set
	|| (database_counters !=  nullptr && database_counters->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool Rsvp::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| (database_counters !=  nullptr && database_counters->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string Rsvp::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-counters")
    {
        if(database_counters == nullptr)
        {
            database_counters = std::make_shared<Rsvp::Summary::DatabaseCounters>();
        }
        return database_counters;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<Rsvp::Summary::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<Rsvp::Summary::NsrStatus>();
        }
        return nsr_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Summary::get_children() const
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

void Rsvp::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::Summary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-counters" || name == "issu-status" || name == "nsr-status" || name == "interfaces" || name == "ls-ps")
        return true;
    return false;
}

Rsvp::Summary::DatabaseCounters::DatabaseCounters()
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

Rsvp::Summary::DatabaseCounters::~DatabaseCounters()
{
}

bool Rsvp::Summary::DatabaseCounters::has_data() const
{
    return incoming_paths.is_set
	|| incoming_reservations.is_set
	|| interfaces.is_set
	|| outgoing_paths.is_set
	|| outgoing_reservations.is_set
	|| sessions.is_set;
}

bool Rsvp::Summary::DatabaseCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_paths.yfilter)
	|| ydk::is_set(incoming_reservations.yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(outgoing_paths.yfilter)
	|| ydk::is_set(outgoing_reservations.yfilter)
	|| ydk::is_set(sessions.yfilter);
}

std::string Rsvp::Summary::DatabaseCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::DatabaseCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::DatabaseCounters::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::Summary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Summary::DatabaseCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Summary::DatabaseCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::Summary::DatabaseCounters::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::Summary::DatabaseCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-paths" || name == "incoming-reservations" || name == "interfaces" || name == "outgoing-paths" || name == "outgoing-reservations" || name == "sessions")
        return true;
    return false;
}

Rsvp::Summary::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<Rsvp::Summary::IssuStatus::IdtStatus>())
	,previous_idt_status(std::make_shared<Rsvp::Summary::IssuStatus::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Summary::IssuStatus::~IssuStatus()
{
}

bool Rsvp::Summary::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool Rsvp::Summary::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string Rsvp::Summary::IssuStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Summary::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<Rsvp::Summary::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<Rsvp::Summary::IssuStatus::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Summary::IssuStatus::get_children() const
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

void Rsvp::Summary::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool Rsvp::Summary::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

Rsvp::Summary::IssuStatus::IdtStatus::IdtStatus()
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

Rsvp::Summary::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool Rsvp::Summary::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Summary::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Summary::IssuStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::IssuStatus::IdtStatus::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::Summary::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Summary::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Summary::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::Summary::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::Summary::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Summary::IssuStatus::PreviousIdtStatus::PreviousIdtStatus()
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

Rsvp::Summary::IssuStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool Rsvp::Summary::IssuStatus::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Summary::IssuStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Summary::IssuStatus::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::Summary::IssuStatus::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::Summary::IssuStatus::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Summary::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<Rsvp::Summary::NsrStatus::IdtStatus>())
	,previous_idt_status(std::make_shared<Rsvp::Summary::NsrStatus::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Summary::NsrStatus::~NsrStatus()
{
}

bool Rsvp::Summary::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool Rsvp::Summary::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string Rsvp::Summary::NsrStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Summary::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<Rsvp::Summary::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<Rsvp::Summary::NsrStatus::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Summary::NsrStatus::get_children() const
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

void Rsvp::Summary::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool Rsvp::Summary::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

Rsvp::Summary::NsrStatus::IdtStatus::IdtStatus()
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

Rsvp::Summary::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool Rsvp::Summary::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Summary::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Summary::NsrStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::NsrStatus::IdtStatus::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::Summary::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Summary::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Summary::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::Summary::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::Summary::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Summary::NsrStatus::PreviousIdtStatus::PreviousIdtStatus()
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

Rsvp::Summary::NsrStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool Rsvp::Summary::NsrStatus::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Summary::NsrStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_name_leaf_data() const
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

std::shared_ptr<Entity> Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Summary::NsrStatus::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::Summary::NsrStatus::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::Summary::NsrStatus::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::RsvpStandby()
    :
    authentication_briefs(std::make_shared<RsvpStandby::AuthenticationBriefs>())
	,authentication_details(std::make_shared<RsvpStandby::AuthenticationDetails>())
	,controller_briefs(std::make_shared<RsvpStandby::ControllerBriefs>())
	,controller_detaileds(std::make_shared<RsvpStandby::ControllerDetaileds>())
	,controller_summaries(std::make_shared<RsvpStandby::ControllerSummaries>())
	,counters(std::make_shared<RsvpStandby::Counters>())
	,frr_summary(std::make_shared<RsvpStandby::FrrSummary>())
	,frrs(std::make_shared<RsvpStandby::Frrs>())
	,global_neighbor_briefs(std::make_shared<RsvpStandby::GlobalNeighborBriefs>())
	,global_neighbor_details(std::make_shared<RsvpStandby::GlobalNeighborDetails>())
	,graceful_restart(std::make_shared<RsvpStandby::GracefulRestart>())
	,hello_instance_briefs(std::make_shared<RsvpStandby::HelloInstanceBriefs>())
	,hello_instance_details(std::make_shared<RsvpStandby::HelloInstanceDetails>())
	,hello_interface_instance_briefs(std::make_shared<RsvpStandby::HelloInterfaceInstanceBriefs>())
	,hello_interface_instance_details(std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails>())
	,interface_briefs(std::make_shared<RsvpStandby::InterfaceBriefs>())
	,interface_detaileds(std::make_shared<RsvpStandby::InterfaceDetaileds>())
	,interface_neighbor_briefs(std::make_shared<RsvpStandby::InterfaceNeighborBriefs>())
	,interface_neighbor_details(std::make_shared<RsvpStandby::InterfaceNeighborDetails>())
	,interface_summaries(std::make_shared<RsvpStandby::InterfaceSummaries>())
	,nsr(std::make_shared<RsvpStandby::Nsr>())
	,open_config(std::make_shared<RsvpStandby::OpenConfig>())
	,psb_briefs(std::make_shared<RsvpStandby::PsbBriefs>())
	,psb_detaileds(std::make_shared<RsvpStandby::PsbDetaileds>())
	,request_briefs(std::make_shared<RsvpStandby::RequestBriefs>())
	,request_details(std::make_shared<RsvpStandby::RequestDetails>())
	,rsb_briefs(std::make_shared<RsvpStandby::RsbBriefs>())
	,rsb_detaileds(std::make_shared<RsvpStandby::RsbDetaileds>())
	,session_briefs(std::make_shared<RsvpStandby::SessionBriefs>())
	,session_detaileds(std::make_shared<RsvpStandby::SessionDetaileds>())
	,summary(std::make_shared<RsvpStandby::Summary>())
{
    authentication_briefs->parent = this;
    authentication_details->parent = this;
    controller_briefs->parent = this;
    controller_detaileds->parent = this;
    controller_summaries->parent = this;
    counters->parent = this;
    frr_summary->parent = this;
    frrs->parent = this;
    global_neighbor_briefs->parent = this;
    global_neighbor_details->parent = this;
    graceful_restart->parent = this;
    hello_instance_briefs->parent = this;
    hello_instance_details->parent = this;
    hello_interface_instance_briefs->parent = this;
    hello_interface_instance_details->parent = this;
    interface_briefs->parent = this;
    interface_detaileds->parent = this;
    interface_neighbor_briefs->parent = this;
    interface_neighbor_details->parent = this;
    interface_summaries->parent = this;
    nsr->parent = this;
    open_config->parent = this;
    psb_briefs->parent = this;
    psb_detaileds->parent = this;
    request_briefs->parent = this;
    request_details->parent = this;
    rsb_briefs->parent = this;
    rsb_detaileds->parent = this;
    session_briefs->parent = this;
    session_detaileds->parent = this;
    summary->parent = this;

    yang_name = "rsvp-standby"; yang_parent_name = "Cisco-IOS-XR-ip-rsvp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

RsvpStandby::~RsvpStandby()
{
}

bool RsvpStandby::has_data() const
{
    return (authentication_briefs !=  nullptr && authentication_briefs->has_data())
	|| (authentication_details !=  nullptr && authentication_details->has_data())
	|| (controller_briefs !=  nullptr && controller_briefs->has_data())
	|| (controller_detaileds !=  nullptr && controller_detaileds->has_data())
	|| (controller_summaries !=  nullptr && controller_summaries->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (frr_summary !=  nullptr && frr_summary->has_data())
	|| (frrs !=  nullptr && frrs->has_data())
	|| (global_neighbor_briefs !=  nullptr && global_neighbor_briefs->has_data())
	|| (global_neighbor_details !=  nullptr && global_neighbor_details->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (hello_instance_briefs !=  nullptr && hello_instance_briefs->has_data())
	|| (hello_instance_details !=  nullptr && hello_instance_details->has_data())
	|| (hello_interface_instance_briefs !=  nullptr && hello_interface_instance_briefs->has_data())
	|| (hello_interface_instance_details !=  nullptr && hello_interface_instance_details->has_data())
	|| (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interface_detaileds !=  nullptr && interface_detaileds->has_data())
	|| (interface_neighbor_briefs !=  nullptr && interface_neighbor_briefs->has_data())
	|| (interface_neighbor_details !=  nullptr && interface_neighbor_details->has_data())
	|| (interface_summaries !=  nullptr && interface_summaries->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (open_config !=  nullptr && open_config->has_data())
	|| (psb_briefs !=  nullptr && psb_briefs->has_data())
	|| (psb_detaileds !=  nullptr && psb_detaileds->has_data())
	|| (request_briefs !=  nullptr && request_briefs->has_data())
	|| (request_details !=  nullptr && request_details->has_data())
	|| (rsb_briefs !=  nullptr && rsb_briefs->has_data())
	|| (rsb_detaileds !=  nullptr && rsb_detaileds->has_data())
	|| (session_briefs !=  nullptr && session_briefs->has_data())
	|| (session_detaileds !=  nullptr && session_detaileds->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool RsvpStandby::has_operation() const
{
    return is_set(yfilter)
	|| (authentication_briefs !=  nullptr && authentication_briefs->has_operation())
	|| (authentication_details !=  nullptr && authentication_details->has_operation())
	|| (controller_briefs !=  nullptr && controller_briefs->has_operation())
	|| (controller_detaileds !=  nullptr && controller_detaileds->has_operation())
	|| (controller_summaries !=  nullptr && controller_summaries->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (frr_summary !=  nullptr && frr_summary->has_operation())
	|| (frrs !=  nullptr && frrs->has_operation())
	|| (global_neighbor_briefs !=  nullptr && global_neighbor_briefs->has_operation())
	|| (global_neighbor_details !=  nullptr && global_neighbor_details->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (hello_instance_briefs !=  nullptr && hello_instance_briefs->has_operation())
	|| (hello_instance_details !=  nullptr && hello_instance_details->has_operation())
	|| (hello_interface_instance_briefs !=  nullptr && hello_interface_instance_briefs->has_operation())
	|| (hello_interface_instance_details !=  nullptr && hello_interface_instance_details->has_operation())
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interface_detaileds !=  nullptr && interface_detaileds->has_operation())
	|| (interface_neighbor_briefs !=  nullptr && interface_neighbor_briefs->has_operation())
	|| (interface_neighbor_details !=  nullptr && interface_neighbor_details->has_operation())
	|| (interface_summaries !=  nullptr && interface_summaries->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (open_config !=  nullptr && open_config->has_operation())
	|| (psb_briefs !=  nullptr && psb_briefs->has_operation())
	|| (psb_detaileds !=  nullptr && psb_detaileds->has_operation())
	|| (request_briefs !=  nullptr && request_briefs->has_operation())
	|| (request_details !=  nullptr && request_details->has_operation())
	|| (rsb_briefs !=  nullptr && rsb_briefs->has_operation())
	|| (rsb_detaileds !=  nullptr && rsb_detaileds->has_operation())
	|| (session_briefs !=  nullptr && session_briefs->has_operation())
	|| (session_detaileds !=  nullptr && session_detaileds->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string RsvpStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-briefs")
    {
        if(authentication_briefs == nullptr)
        {
            authentication_briefs = std::make_shared<RsvpStandby::AuthenticationBriefs>();
        }
        return authentication_briefs;
    }

    if(child_yang_name == "authentication-details")
    {
        if(authentication_details == nullptr)
        {
            authentication_details = std::make_shared<RsvpStandby::AuthenticationDetails>();
        }
        return authentication_details;
    }

    if(child_yang_name == "controller-briefs")
    {
        if(controller_briefs == nullptr)
        {
            controller_briefs = std::make_shared<RsvpStandby::ControllerBriefs>();
        }
        return controller_briefs;
    }

    if(child_yang_name == "controller-detaileds")
    {
        if(controller_detaileds == nullptr)
        {
            controller_detaileds = std::make_shared<RsvpStandby::ControllerDetaileds>();
        }
        return controller_detaileds;
    }

    if(child_yang_name == "controller-summaries")
    {
        if(controller_summaries == nullptr)
        {
            controller_summaries = std::make_shared<RsvpStandby::ControllerSummaries>();
        }
        return controller_summaries;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<RsvpStandby::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "frr-summary")
    {
        if(frr_summary == nullptr)
        {
            frr_summary = std::make_shared<RsvpStandby::FrrSummary>();
        }
        return frr_summary;
    }

    if(child_yang_name == "frrs")
    {
        if(frrs == nullptr)
        {
            frrs = std::make_shared<RsvpStandby::Frrs>();
        }
        return frrs;
    }

    if(child_yang_name == "global-neighbor-briefs")
    {
        if(global_neighbor_briefs == nullptr)
        {
            global_neighbor_briefs = std::make_shared<RsvpStandby::GlobalNeighborBriefs>();
        }
        return global_neighbor_briefs;
    }

    if(child_yang_name == "global-neighbor-details")
    {
        if(global_neighbor_details == nullptr)
        {
            global_neighbor_details = std::make_shared<RsvpStandby::GlobalNeighborDetails>();
        }
        return global_neighbor_details;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<RsvpStandby::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "hello-instance-briefs")
    {
        if(hello_instance_briefs == nullptr)
        {
            hello_instance_briefs = std::make_shared<RsvpStandby::HelloInstanceBriefs>();
        }
        return hello_instance_briefs;
    }

    if(child_yang_name == "hello-instance-details")
    {
        if(hello_instance_details == nullptr)
        {
            hello_instance_details = std::make_shared<RsvpStandby::HelloInstanceDetails>();
        }
        return hello_instance_details;
    }

    if(child_yang_name == "hello-interface-instance-briefs")
    {
        if(hello_interface_instance_briefs == nullptr)
        {
            hello_interface_instance_briefs = std::make_shared<RsvpStandby::HelloInterfaceInstanceBriefs>();
        }
        return hello_interface_instance_briefs;
    }

    if(child_yang_name == "hello-interface-instance-details")
    {
        if(hello_interface_instance_details == nullptr)
        {
            hello_interface_instance_details = std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails>();
        }
        return hello_interface_instance_details;
    }

    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<RsvpStandby::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interface-detaileds")
    {
        if(interface_detaileds == nullptr)
        {
            interface_detaileds = std::make_shared<RsvpStandby::InterfaceDetaileds>();
        }
        return interface_detaileds;
    }

    if(child_yang_name == "interface-neighbor-briefs")
    {
        if(interface_neighbor_briefs == nullptr)
        {
            interface_neighbor_briefs = std::make_shared<RsvpStandby::InterfaceNeighborBriefs>();
        }
        return interface_neighbor_briefs;
    }

    if(child_yang_name == "interface-neighbor-details")
    {
        if(interface_neighbor_details == nullptr)
        {
            interface_neighbor_details = std::make_shared<RsvpStandby::InterfaceNeighborDetails>();
        }
        return interface_neighbor_details;
    }

    if(child_yang_name == "interface-summaries")
    {
        if(interface_summaries == nullptr)
        {
            interface_summaries = std::make_shared<RsvpStandby::InterfaceSummaries>();
        }
        return interface_summaries;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<RsvpStandby::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "open-config")
    {
        if(open_config == nullptr)
        {
            open_config = std::make_shared<RsvpStandby::OpenConfig>();
        }
        return open_config;
    }

    if(child_yang_name == "psb-briefs")
    {
        if(psb_briefs == nullptr)
        {
            psb_briefs = std::make_shared<RsvpStandby::PsbBriefs>();
        }
        return psb_briefs;
    }

    if(child_yang_name == "psb-detaileds")
    {
        if(psb_detaileds == nullptr)
        {
            psb_detaileds = std::make_shared<RsvpStandby::PsbDetaileds>();
        }
        return psb_detaileds;
    }

    if(child_yang_name == "request-briefs")
    {
        if(request_briefs == nullptr)
        {
            request_briefs = std::make_shared<RsvpStandby::RequestBriefs>();
        }
        return request_briefs;
    }

    if(child_yang_name == "request-details")
    {
        if(request_details == nullptr)
        {
            request_details = std::make_shared<RsvpStandby::RequestDetails>();
        }
        return request_details;
    }

    if(child_yang_name == "rsb-briefs")
    {
        if(rsb_briefs == nullptr)
        {
            rsb_briefs = std::make_shared<RsvpStandby::RsbBriefs>();
        }
        return rsb_briefs;
    }

    if(child_yang_name == "rsb-detaileds")
    {
        if(rsb_detaileds == nullptr)
        {
            rsb_detaileds = std::make_shared<RsvpStandby::RsbDetaileds>();
        }
        return rsb_detaileds;
    }

    if(child_yang_name == "session-briefs")
    {
        if(session_briefs == nullptr)
        {
            session_briefs = std::make_shared<RsvpStandby::SessionBriefs>();
        }
        return session_briefs;
    }

    if(child_yang_name == "session-detaileds")
    {
        if(session_detaileds == nullptr)
        {
            session_detaileds = std::make_shared<RsvpStandby::SessionDetaileds>();
        }
        return session_detaileds;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RsvpStandby::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_briefs != nullptr)
    {
        children["authentication-briefs"] = authentication_briefs;
    }

    if(authentication_details != nullptr)
    {
        children["authentication-details"] = authentication_details;
    }

    if(controller_briefs != nullptr)
    {
        children["controller-briefs"] = controller_briefs;
    }

    if(controller_detaileds != nullptr)
    {
        children["controller-detaileds"] = controller_detaileds;
    }

    if(controller_summaries != nullptr)
    {
        children["controller-summaries"] = controller_summaries;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(frr_summary != nullptr)
    {
        children["frr-summary"] = frr_summary;
    }

    if(frrs != nullptr)
    {
        children["frrs"] = frrs;
    }

    if(global_neighbor_briefs != nullptr)
    {
        children["global-neighbor-briefs"] = global_neighbor_briefs;
    }

    if(global_neighbor_details != nullptr)
    {
        children["global-neighbor-details"] = global_neighbor_details;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(hello_instance_briefs != nullptr)
    {
        children["hello-instance-briefs"] = hello_instance_briefs;
    }

    if(hello_instance_details != nullptr)
    {
        children["hello-instance-details"] = hello_instance_details;
    }

    if(hello_interface_instance_briefs != nullptr)
    {
        children["hello-interface-instance-briefs"] = hello_interface_instance_briefs;
    }

    if(hello_interface_instance_details != nullptr)
    {
        children["hello-interface-instance-details"] = hello_interface_instance_details;
    }

    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interface_detaileds != nullptr)
    {
        children["interface-detaileds"] = interface_detaileds;
    }

    if(interface_neighbor_briefs != nullptr)
    {
        children["interface-neighbor-briefs"] = interface_neighbor_briefs;
    }

    if(interface_neighbor_details != nullptr)
    {
        children["interface-neighbor-details"] = interface_neighbor_details;
    }

    if(interface_summaries != nullptr)
    {
        children["interface-summaries"] = interface_summaries;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(open_config != nullptr)
    {
        children["open-config"] = open_config;
    }

    if(psb_briefs != nullptr)
    {
        children["psb-briefs"] = psb_briefs;
    }

    if(psb_detaileds != nullptr)
    {
        children["psb-detaileds"] = psb_detaileds;
    }

    if(request_briefs != nullptr)
    {
        children["request-briefs"] = request_briefs;
    }

    if(request_details != nullptr)
    {
        children["request-details"] = request_details;
    }

    if(rsb_briefs != nullptr)
    {
        children["rsb-briefs"] = rsb_briefs;
    }

    if(rsb_detaileds != nullptr)
    {
        children["rsb-detaileds"] = rsb_detaileds;
    }

    if(session_briefs != nullptr)
    {
        children["session-briefs"] = session_briefs;
    }

    if(session_detaileds != nullptr)
    {
        children["session-detaileds"] = session_detaileds;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void RsvpStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RsvpStandby::clone_ptr() const
{
    return std::make_shared<RsvpStandby>();
}

std::string RsvpStandby::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RsvpStandby::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RsvpStandby::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RsvpStandby::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RsvpStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-briefs" || name == "authentication-details" || name == "controller-briefs" || name == "controller-detaileds" || name == "controller-summaries" || name == "counters" || name == "frr-summary" || name == "frrs" || name == "global-neighbor-briefs" || name == "global-neighbor-details" || name == "graceful-restart" || name == "hello-instance-briefs" || name == "hello-instance-details" || name == "hello-interface-instance-briefs" || name == "hello-interface-instance-details" || name == "interface-briefs" || name == "interface-detaileds" || name == "interface-neighbor-briefs" || name == "interface-neighbor-details" || name == "interface-summaries" || name == "nsr" || name == "open-config" || name == "psb-briefs" || name == "psb-detaileds" || name == "request-briefs" || name == "request-details" || name == "rsb-briefs" || name == "rsb-detaileds" || name == "session-briefs" || name == "session-detaileds" || name == "summary")
        return true;
    return false;
}

RsvpStandby::AuthenticationBriefs::AuthenticationBriefs()
{

    yang_name = "authentication-briefs"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::AuthenticationBriefs::~AuthenticationBriefs()
{
}

bool RsvpStandby::AuthenticationBriefs::has_data() const
{
    for (std::size_t index=0; index<authentication_brief.size(); index++)
    {
        if(authentication_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::AuthenticationBriefs::has_operation() const
{
    for (std::size_t index=0; index<authentication_brief.size(); index++)
    {
        if(authentication_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::AuthenticationBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::AuthenticationBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-brief")
    {
        for(auto const & c : authentication_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::AuthenticationBriefs::AuthenticationBrief>();
        c->parent = this;
        authentication_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : authentication_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpStandby::AuthenticationBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::AuthenticationBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::AuthenticationBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-brief")
        return true;
    return false;
}

RsvpStandby::AuthenticationBriefs::AuthenticationBrief::AuthenticationBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    mode_id{YType::enumeration, "mode-id"},
    interface_name{YType::str, "interface-name"},
    destination_address_xr{YType::str, "destination-address-xr"},
    direction{YType::enumeration, "direction"},
    key_id{YType::uint64, "key-id"},
    key_id_valid{YType::uint32, "key-id-valid"},
    key_source{YType::str, "key-source"},
    key_type{YType::enumeration, "key-type"},
    neighbor_address{YType::str, "neighbor-address"},
    source_address_xr{YType::str, "source-address-xr"}
{

    yang_name = "authentication-brief"; yang_parent_name = "authentication-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::AuthenticationBriefs::AuthenticationBrief::~AuthenticationBrief()
{
}

bool RsvpStandby::AuthenticationBriefs::AuthenticationBrief::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| mode_id.is_set
	|| interface_name.is_set
	|| destination_address_xr.is_set
	|| direction.is_set
	|| key_id.is_set
	|| key_id_valid.is_set
	|| key_source.is_set
	|| key_type.is_set
	|| neighbor_address.is_set
	|| source_address_xr.is_set;
}

bool RsvpStandby::AuthenticationBriefs::AuthenticationBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(mode_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(key_id_valid.yfilter)
	|| ydk::is_set(key_source.yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter);
}

std::string RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/authentication-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-brief" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[mode-id='" <<mode_id <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mode_id.is_set || is_set(mode_id.yfilter)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_id_valid.is_set || is_set(key_id_valid.yfilter)) leaf_name_data.push_back(key_id_valid.get_name_leafdata());
    if (key_source.is_set || is_set(key_source.yfilter)) leaf_name_data.push_back(key_source.get_name_leafdata());
    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::AuthenticationBriefs::AuthenticationBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "key-source")
    {
        key_source = value;
        key_source.value_namespace = name_space;
        key_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::AuthenticationBriefs::AuthenticationBrief::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid.yfilter = yfilter;
    }
    if(value_path == "key-source")
    {
        key_source.yfilter = yfilter;
    }
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
}

bool RsvpStandby::AuthenticationBriefs::AuthenticationBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "mode-id" || name == "interface-name" || name == "destination-address-xr" || name == "direction" || name == "key-id" || name == "key-id-valid" || name == "key-source" || name == "key-type" || name == "neighbor-address" || name == "source-address-xr")
        return true;
    return false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetails()
{

    yang_name = "authentication-details"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::AuthenticationDetails::~AuthenticationDetails()
{
}

bool RsvpStandby::AuthenticationDetails::has_data() const
{
    for (std::size_t index=0; index<authentication_detail.size(); index++)
    {
        if(authentication_detail[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::AuthenticationDetails::has_operation() const
{
    for (std::size_t index=0; index<authentication_detail.size(); index++)
    {
        if(authentication_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::AuthenticationDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::AuthenticationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-detail")
    {
        for(auto const & c : authentication_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail>();
        c->parent = this;
        authentication_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : authentication_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::AuthenticationDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::AuthenticationDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-detail")
        return true;
    return false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthenticationDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    mode_id{YType::enumeration, "mode-id"},
    interface_name{YType::str, "interface-name"},
    challenge_status{YType::enumeration, "challenge-status"},
    key_digest_info{YType::uint32, "key-digest-info"},
    key_status{YType::uint32, "key-status"},
    lifetime{YType::uint32, "lifetime"},
    lifetime_left{YType::uint32, "lifetime-left"}
    	,
    auth_compact(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact>())
	,direction_info(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo>())
{
    auth_compact->parent = this;
    direction_info->parent = this;

    yang_name = "authentication-detail"; yang_parent_name = "authentication-details"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::~AuthenticationDetail()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| mode_id.is_set
	|| interface_name.is_set
	|| challenge_status.is_set
	|| key_digest_info.is_set
	|| key_status.is_set
	|| lifetime.is_set
	|| lifetime_left.is_set
	|| (auth_compact !=  nullptr && auth_compact->has_data())
	|| (direction_info !=  nullptr && direction_info->has_data());
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(mode_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(challenge_status.yfilter)
	|| ydk::is_set(key_digest_info.yfilter)
	|| ydk::is_set(key_status.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(lifetime_left.yfilter)
	|| (auth_compact !=  nullptr && auth_compact->has_operation())
	|| (direction_info !=  nullptr && direction_info->has_operation());
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/authentication-details/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-detail" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[mode-id='" <<mode_id <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mode_id.is_set || is_set(mode_id.yfilter)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (challenge_status.is_set || is_set(challenge_status.yfilter)) leaf_name_data.push_back(challenge_status.get_name_leafdata());
    if (key_digest_info.is_set || is_set(key_digest_info.yfilter)) leaf_name_data.push_back(key_digest_info.get_name_leafdata());
    if (key_status.is_set || is_set(key_status.yfilter)) leaf_name_data.push_back(key_status.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (lifetime_left.is_set || is_set(lifetime_left.yfilter)) leaf_name_data.push_back(lifetime_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-compact")
    {
        if(auth_compact == nullptr)
        {
            auth_compact = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact>();
        }
        return auth_compact;
    }

    if(child_yang_name == "direction-info")
    {
        if(direction_info == nullptr)
        {
            direction_info = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo>();
        }
        return direction_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "challenge-status")
    {
        challenge_status = value;
        challenge_status.value_namespace = name_space;
        challenge_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-digest-info")
    {
        key_digest_info = value;
        key_digest_info.value_namespace = name_space;
        key_digest_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-status")
    {
        key_status = value;
        key_status.value_namespace = name_space;
        key_status.value_namespace_prefix = name_space_prefix;
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
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "challenge-status")
    {
        challenge_status.yfilter = yfilter;
    }
    if(value_path == "key-digest-info")
    {
        key_digest_info.yfilter = yfilter;
    }
    if(value_path == "key-status")
    {
        key_status.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "lifetime-left")
    {
        lifetime_left.yfilter = yfilter;
    }
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-compact" || name == "direction-info" || name == "source-address" || name == "destination-address" || name == "mode-id" || name == "interface-name" || name == "challenge-status" || name == "key-digest-info" || name == "key-status" || name == "lifetime" || name == "lifetime-left")
        return true;
    return false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::AuthCompact()
    :
    destination_address_xr{YType::str, "destination-address-xr"},
    direction{YType::enumeration, "direction"},
    key_id{YType::uint64, "key-id"},
    key_id_valid{YType::uint32, "key-id-valid"},
    key_source{YType::str, "key-source"},
    key_type{YType::enumeration, "key-type"},
    neighbor_address{YType::str, "neighbor-address"},
    source_address_xr{YType::str, "source-address-xr"}
{

    yang_name = "auth-compact"; yang_parent_name = "authentication-detail"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::~AuthCompact()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_data() const
{
    return destination_address_xr.is_set
	|| direction.is_set
	|| key_id.is_set
	|| key_id_valid.is_set
	|| key_source.is_set
	|| key_type.is_set
	|| neighbor_address.is_set
	|| source_address_xr.is_set;
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(key_id_valid.yfilter)
	|| ydk::is_set(key_source.yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter);
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-compact";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_id_valid.is_set || is_set(key_id_valid.yfilter)) leaf_name_data.push_back(key_id_valid.get_name_leafdata());
    if (key_source.is_set || is_set(key_source.yfilter)) leaf_name_data.push_back(key_source.get_name_leafdata());
    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "key-source")
    {
        key_source = value;
        key_source.value_namespace = name_space;
        key_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid.yfilter = yfilter;
    }
    if(value_path == "key-source")
    {
        key_source.yfilter = yfilter;
    }
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address-xr" || name == "direction" || name == "key-id" || name == "key-id-valid" || name == "key-source" || name == "key-type" || name == "neighbor-address" || name == "source-address-xr")
        return true;
    return false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::DirectionInfo()
    :
    auth_direction{YType::enumeration, "auth-direction"}
    	,
    receive_info(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo>())
	,send_info(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo>())
{
    receive_info->parent = this;
    send_info->parent = this;

    yang_name = "direction-info"; yang_parent_name = "authentication-detail"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::~DirectionInfo()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_data() const
{
    return auth_direction.is_set
	|| (receive_info !=  nullptr && receive_info->has_data())
	|| (send_info !=  nullptr && send_info->has_data());
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_direction.yfilter)
	|| (receive_info !=  nullptr && receive_info->has_operation())
	|| (send_info !=  nullptr && send_info->has_operation());
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_direction.is_set || is_set(auth_direction.yfilter)) leaf_name_data.push_back(auth_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive-info")
    {
        if(receive_info == nullptr)
        {
            receive_info = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo>();
        }
        return receive_info;
    }

    if(child_yang_name == "send-info")
    {
        if(send_info == nullptr)
        {
            send_info = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo>();
        }
        return send_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive_info != nullptr)
    {
        children["receive-info"] = receive_info;
    }

    if(send_info != nullptr)
    {
        children["send-info"] = send_info;
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-direction")
    {
        auth_direction = value;
        auth_direction.value_namespace = name_space;
        auth_direction.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-direction")
    {
        auth_direction.yfilter = yfilter;
    }
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive-info" || name == "send-info" || name == "auth-direction")
        return true;
    return false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::ReceiveInfo()
    :
    sequence{YType::uint64, "sequence"},
    sequence_window{YType::uint64, "sequence-window"},
    sequence_window_count{YType::uint32, "sequence-window-count"},
    sequence_window_size{YType::uint32, "sequence-window-size"}
    	,
    counters(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>())
{
    counters->parent = this;

    yang_name = "receive-info"; yang_parent_name = "direction-info"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::~ReceiveInfo()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_data() const
{
    for (auto const & leaf : sequence_window.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sequence.is_set
	|| sequence_window_count.is_set
	|| sequence_window_size.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_operation() const
{
    for (auto const & leaf : sequence_window.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(sequence_window.yfilter)
	|| ydk::is_set(sequence_window_count.yfilter)
	|| ydk::is_set(sequence_window_size.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (sequence_window_count.is_set || is_set(sequence_window_count.yfilter)) leaf_name_data.push_back(sequence_window_count.get_name_leafdata());
    if (sequence_window_size.is_set || is_set(sequence_window_size.yfilter)) leaf_name_data.push_back(sequence_window_size.get_name_leafdata());

    auto sequence_window_name_datas = sequence_window.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sequence_window_name_datas.begin(), sequence_window_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window")
    {
        sequence_window.append(value);
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count = value;
        sequence_window_count.value_namespace = name_space;
        sequence_window_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size = value;
        sequence_window_size.value_namespace = name_space;
        sequence_window_size.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "sequence-window")
    {
        sequence_window.yfilter = yfilter;
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count.yfilter = yfilter;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size.yfilter = yfilter;
    }
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "sequence" || name == "sequence-window" || name == "sequence-window-count" || name == "sequence-window-size")
        return true;
    return false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::Counters()
    :
    authentication_received_bad_digest{YType::uint32, "authentication-received-bad-digest"},
    authentication_received_bad_message_format{YType::uint32, "authentication-received-bad-message-format"},
    authentication_received_challenge_response{YType::uint32, "authentication-received-challenge-response"},
    authentication_received_challenge_timeouts{YType::uint32, "authentication-received-challenge-timeouts"},
    authentication_received_challenges_resent{YType::uint32, "authentication-received-challenges-resent"},
    authentication_received_challenges_response_duplicate{YType::uint32, "authentication-received-challenges-response-duplicate"},
    authentication_received_challenges_sent{YType::uint32, "authentication-received-challenges-sent"},
    authentication_received_during_challenge{YType::uint32, "authentication-received-during-challenge"},
    authentication_received_incomplete{YType::uint32, "authentication-received-incomplete"},
    authentication_received_no_integrity{YType::uint32, "authentication-received-no-integrity"},
    authentication_received_response_late{YType::uint32, "authentication-received-response-late"},
    authentication_received_sequence_number_duplicate{YType::uint32, "authentication-received-sequence-number-duplicate"},
    authentication_received_sequence_number_outof_range{YType::uint32, "authentication-received-sequence-number-outof-range"},
    authentication_received_valid_messages{YType::uint32, "authentication-received-valid-messages"},
    authentication_received_wrong_challenges_response{YType::uint32, "authentication-received-wrong-challenges-response"},
    authentication_received_wrong_digest_type{YType::uint32, "authentication-received-wrong-digest-type"}
{

    yang_name = "counters"; yang_parent_name = "receive-info"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::~Counters()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_data() const
{
    return authentication_received_bad_digest.is_set
	|| authentication_received_bad_message_format.is_set
	|| authentication_received_challenge_response.is_set
	|| authentication_received_challenge_timeouts.is_set
	|| authentication_received_challenges_resent.is_set
	|| authentication_received_challenges_response_duplicate.is_set
	|| authentication_received_challenges_sent.is_set
	|| authentication_received_during_challenge.is_set
	|| authentication_received_incomplete.is_set
	|| authentication_received_no_integrity.is_set
	|| authentication_received_response_late.is_set
	|| authentication_received_sequence_number_duplicate.is_set
	|| authentication_received_sequence_number_outof_range.is_set
	|| authentication_received_valid_messages.is_set
	|| authentication_received_wrong_challenges_response.is_set
	|| authentication_received_wrong_digest_type.is_set;
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_received_bad_digest.yfilter)
	|| ydk::is_set(authentication_received_bad_message_format.yfilter)
	|| ydk::is_set(authentication_received_challenge_response.yfilter)
	|| ydk::is_set(authentication_received_challenge_timeouts.yfilter)
	|| ydk::is_set(authentication_received_challenges_resent.yfilter)
	|| ydk::is_set(authentication_received_challenges_response_duplicate.yfilter)
	|| ydk::is_set(authentication_received_challenges_sent.yfilter)
	|| ydk::is_set(authentication_received_during_challenge.yfilter)
	|| ydk::is_set(authentication_received_incomplete.yfilter)
	|| ydk::is_set(authentication_received_no_integrity.yfilter)
	|| ydk::is_set(authentication_received_response_late.yfilter)
	|| ydk::is_set(authentication_received_sequence_number_duplicate.yfilter)
	|| ydk::is_set(authentication_received_sequence_number_outof_range.yfilter)
	|| ydk::is_set(authentication_received_valid_messages.yfilter)
	|| ydk::is_set(authentication_received_wrong_challenges_response.yfilter)
	|| ydk::is_set(authentication_received_wrong_digest_type.yfilter);
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_received_bad_digest.is_set || is_set(authentication_received_bad_digest.yfilter)) leaf_name_data.push_back(authentication_received_bad_digest.get_name_leafdata());
    if (authentication_received_bad_message_format.is_set || is_set(authentication_received_bad_message_format.yfilter)) leaf_name_data.push_back(authentication_received_bad_message_format.get_name_leafdata());
    if (authentication_received_challenge_response.is_set || is_set(authentication_received_challenge_response.yfilter)) leaf_name_data.push_back(authentication_received_challenge_response.get_name_leafdata());
    if (authentication_received_challenge_timeouts.is_set || is_set(authentication_received_challenge_timeouts.yfilter)) leaf_name_data.push_back(authentication_received_challenge_timeouts.get_name_leafdata());
    if (authentication_received_challenges_resent.is_set || is_set(authentication_received_challenges_resent.yfilter)) leaf_name_data.push_back(authentication_received_challenges_resent.get_name_leafdata());
    if (authentication_received_challenges_response_duplicate.is_set || is_set(authentication_received_challenges_response_duplicate.yfilter)) leaf_name_data.push_back(authentication_received_challenges_response_duplicate.get_name_leafdata());
    if (authentication_received_challenges_sent.is_set || is_set(authentication_received_challenges_sent.yfilter)) leaf_name_data.push_back(authentication_received_challenges_sent.get_name_leafdata());
    if (authentication_received_during_challenge.is_set || is_set(authentication_received_during_challenge.yfilter)) leaf_name_data.push_back(authentication_received_during_challenge.get_name_leafdata());
    if (authentication_received_incomplete.is_set || is_set(authentication_received_incomplete.yfilter)) leaf_name_data.push_back(authentication_received_incomplete.get_name_leafdata());
    if (authentication_received_no_integrity.is_set || is_set(authentication_received_no_integrity.yfilter)) leaf_name_data.push_back(authentication_received_no_integrity.get_name_leafdata());
    if (authentication_received_response_late.is_set || is_set(authentication_received_response_late.yfilter)) leaf_name_data.push_back(authentication_received_response_late.get_name_leafdata());
    if (authentication_received_sequence_number_duplicate.is_set || is_set(authentication_received_sequence_number_duplicate.yfilter)) leaf_name_data.push_back(authentication_received_sequence_number_duplicate.get_name_leafdata());
    if (authentication_received_sequence_number_outof_range.is_set || is_set(authentication_received_sequence_number_outof_range.yfilter)) leaf_name_data.push_back(authentication_received_sequence_number_outof_range.get_name_leafdata());
    if (authentication_received_valid_messages.is_set || is_set(authentication_received_valid_messages.yfilter)) leaf_name_data.push_back(authentication_received_valid_messages.get_name_leafdata());
    if (authentication_received_wrong_challenges_response.is_set || is_set(authentication_received_wrong_challenges_response.yfilter)) leaf_name_data.push_back(authentication_received_wrong_challenges_response.get_name_leafdata());
    if (authentication_received_wrong_digest_type.is_set || is_set(authentication_received_wrong_digest_type.yfilter)) leaf_name_data.push_back(authentication_received_wrong_digest_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest = value;
        authentication_received_bad_digest.value_namespace = name_space;
        authentication_received_bad_digest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format = value;
        authentication_received_bad_message_format.value_namespace = name_space;
        authentication_received_bad_message_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response = value;
        authentication_received_challenge_response.value_namespace = name_space;
        authentication_received_challenge_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts = value;
        authentication_received_challenge_timeouts.value_namespace = name_space;
        authentication_received_challenge_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent = value;
        authentication_received_challenges_resent.value_namespace = name_space;
        authentication_received_challenges_resent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate = value;
        authentication_received_challenges_response_duplicate.value_namespace = name_space;
        authentication_received_challenges_response_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent = value;
        authentication_received_challenges_sent.value_namespace = name_space;
        authentication_received_challenges_sent.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late = value;
        authentication_received_response_late.value_namespace = name_space;
        authentication_received_response_late.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages = value;
        authentication_received_valid_messages.value_namespace = name_space;
        authentication_received_valid_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response = value;
        authentication_received_wrong_challenges_response.value_namespace = name_space;
        authentication_received_wrong_challenges_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type = value;
        authentication_received_wrong_digest_type.value_namespace = name_space;
        authentication_received_wrong_digest_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest.yfilter = yfilter;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent.yfilter = yfilter;
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
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late.yfilter = yfilter;
    }
    if(value_path == "authentication-received-sequence-number-duplicate")
    {
        authentication_received_sequence_number_duplicate.yfilter = yfilter;
    }
    if(value_path == "authentication-received-sequence-number-outof-range")
    {
        authentication_received_sequence_number_outof_range.yfilter = yfilter;
    }
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages.yfilter = yfilter;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response.yfilter = yfilter;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type.yfilter = yfilter;
    }
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-received-bad-digest" || name == "authentication-received-bad-message-format" || name == "authentication-received-challenge-response" || name == "authentication-received-challenge-timeouts" || name == "authentication-received-challenges-resent" || name == "authentication-received-challenges-response-duplicate" || name == "authentication-received-challenges-sent" || name == "authentication-received-during-challenge" || name == "authentication-received-incomplete" || name == "authentication-received-no-integrity" || name == "authentication-received-response-late" || name == "authentication-received-sequence-number-duplicate" || name == "authentication-received-sequence-number-outof-range" || name == "authentication-received-valid-messages" || name == "authentication-received-wrong-challenges-response" || name == "authentication-received-wrong-digest-type")
        return true;
    return false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::SendInfo()
    :
    sequence{YType::uint64, "sequence"}
    	,
    counters(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>())
{
    counters->parent = this;

    yang_name = "send-info"; yang_parent_name = "direction-info"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::~SendInfo()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_data() const
{
    return sequence.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "sequence")
        return true;
    return false;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::Counters()
    :
    authentication_challenge_responses_sent{YType::uint32, "authentication-challenge-responses-sent"},
    authentication_failures{YType::uint32, "authentication-failures"},
    authentication_send_challenges_received{YType::uint32, "authentication-send-challenges-received"},
    authentication_sent{YType::uint32, "authentication-sent"}
{

    yang_name = "counters"; yang_parent_name = "send-info"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::~Counters()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_data() const
{
    return authentication_challenge_responses_sent.is_set
	|| authentication_failures.is_set
	|| authentication_send_challenges_received.is_set
	|| authentication_sent.is_set;
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_challenge_responses_sent.yfilter)
	|| ydk::is_set(authentication_failures.yfilter)
	|| ydk::is_set(authentication_send_challenges_received.yfilter)
	|| ydk::is_set(authentication_sent.yfilter);
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_challenge_responses_sent.is_set || is_set(authentication_challenge_responses_sent.yfilter)) leaf_name_data.push_back(authentication_challenge_responses_sent.get_name_leafdata());
    if (authentication_failures.is_set || is_set(authentication_failures.yfilter)) leaf_name_data.push_back(authentication_failures.get_name_leafdata());
    if (authentication_send_challenges_received.is_set || is_set(authentication_send_challenges_received.yfilter)) leaf_name_data.push_back(authentication_send_challenges_received.get_name_leafdata());
    if (authentication_sent.is_set || is_set(authentication_sent.yfilter)) leaf_name_data.push_back(authentication_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent = value;
        authentication_challenge_responses_sent.value_namespace = name_space;
        authentication_challenge_responses_sent.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authentication-sent")
    {
        authentication_sent = value;
        authentication_sent.value_namespace = name_space;
        authentication_sent.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent.yfilter = yfilter;
    }
    if(value_path == "authentication-failures")
    {
        authentication_failures.yfilter = yfilter;
    }
    if(value_path == "authentication-send-challenges-received")
    {
        authentication_send_challenges_received.yfilter = yfilter;
    }
    if(value_path == "authentication-sent")
    {
        authentication_sent.yfilter = yfilter;
    }
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-challenge-responses-sent" || name == "authentication-failures" || name == "authentication-send-challenges-received" || name == "authentication-sent")
        return true;
    return false;
}

RsvpStandby::ControllerBriefs::ControllerBriefs()
{

    yang_name = "controller-briefs"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::ControllerBriefs::~ControllerBriefs()
{
}

bool RsvpStandby::ControllerBriefs::has_data() const
{
    for (std::size_t index=0; index<controller_brief.size(); index++)
    {
        if(controller_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::ControllerBriefs::has_operation() const
{
    for (std::size_t index=0; index<controller_brief.size(); index++)
    {
        if(controller_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::ControllerBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::ControllerBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::ControllerBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::ControllerBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-brief")
    {
        for(auto const & c : controller_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief>();
        c->parent = this;
        controller_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::ControllerBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpStandby::ControllerBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::ControllerBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::ControllerBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-brief")
        return true;
    return false;
}

RsvpStandby::ControllerBriefs::ControllerBrief::ControllerBrief()
    :
    controller_name{YType::str, "controller-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
    	,
    bandwidth_information(std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "controller-brief"; yang_parent_name = "controller-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::ControllerBriefs::ControllerBrief::~ControllerBrief()
{
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::has_data() const
{
    return controller_name.is_set
	|| interface_name_xr.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string RsvpStandby::ControllerBriefs::ControllerBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/controller-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::ControllerBriefs::ControllerBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-brief" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::ControllerBriefs::ControllerBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::ControllerBriefs::ControllerBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::ControllerBriefs::ControllerBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    return children;
}

void RsvpStandby::ControllerBriefs::ControllerBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void RsvpStandby::ControllerBriefs::ControllerBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "controller-name" || name == "interface-name-xr")
        return true;
    return false;
}

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "controller-brief"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::~BandwidthInformation()
{
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter);
}

std::string RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-subpool-bandwidth")
        return true;
    return false;
}

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_bc0_bandwidth_absolute{YType::boolean, "is-max-bc0-bandwidth-absolute"},
    is_max_bc1_bandwidth_absolute{YType::boolean, "is-max-bc1-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_pool0_bandwidth{YType::uint64, "max-pool0-bandwidth"},
    max_pool1_bandwidth{YType::uint64, "max-pool1-bandwidth"}
{

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set;
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter);
}

std::string RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
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
}

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
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
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth")
        return true;
    return false;
}

RsvpStandby::ControllerDetaileds::ControllerDetaileds()
{

    yang_name = "controller-detaileds"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false;
}

RsvpStandby::ControllerDetaileds::~ControllerDetaileds()
{
}

bool RsvpStandby::ControllerDetaileds::has_data() const
{
    for (std::size_t index=0; index<controller_detailed.size(); index++)
    {
        if(controller_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::ControllerDetaileds::has_operation() const
{
    for (std::size_t index=0; index<controller_detailed.size(); index++)
    {
        if(controller_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::ControllerDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::ControllerDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::ControllerDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RsvpStandby::ControllerDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-detailed")
    {
        for(auto const & c : controller_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RsvpStandby::ControllerDetaileds::ControllerDetailed>();
        c->parent = this;
        controller_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RsvpStandby::ControllerDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller_detailed)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RsvpStandby::ControllerDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::ControllerDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::ControllerDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-detailed")
        return true;
    return false;
}


}
}

