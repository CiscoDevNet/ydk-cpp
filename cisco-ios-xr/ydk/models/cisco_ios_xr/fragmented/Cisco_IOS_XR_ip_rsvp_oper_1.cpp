
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_1.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::~S2lSubLsp()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool RsvpStandby::RsbBriefs::RsbBrief::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::FlowSpec()
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

RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::~FlowSpec()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_peak_rate.is_set
	|| flow_min_unit.is_set
	|| flow_max_unit.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set
	|| flow_qos.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::has_operation() const
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

std::string RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
        ,
    g709otn_flow_spec(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_flow_spec != nullptr)
    {
        _children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::G709otnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::~G709otnFlowSpec()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::Style::~Style()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Style::has_data() const
{
    if (is_presence_container) return true;
    return reservation_type.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RsbBriefs::RsbBrief::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RsbBriefs::RsbBrief::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::~Filter()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_filter != nullptr)
    {
        _children["rsvp-filter"] = rsvp_filter;
    }

    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
        ,
    udp_ipv4_session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>())
    , p2mp_ipv4_session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_data() const
{
    if (is_presence_container) return true;
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp_ipv4_session != nullptr)
    {
        _children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        _children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::P2mpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::~P2mpIpv4Session()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

RsvpStandby::Counters::Counters()
    :
    interface_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages>())
    , message_summary(std::make_shared<RsvpStandby::Counters::MessageSummary>())
    , prefix_filtering(std::make_shared<RsvpStandby::Counters::PrefixFiltering>())
    , out_of_resource(std::make_shared<RsvpStandby::Counters::OutOfResource>())
    , interface_events(std::make_shared<RsvpStandby::Counters::InterfaceEvents>())
    , nsr(std::make_shared<RsvpStandby::Counters::Nsr>())
    , issu(std::make_shared<RsvpStandby::Counters::Issu>())
    , database(std::make_shared<RsvpStandby::Counters::Database>())
    , event_syncs(std::make_shared<RsvpStandby::Counters::EventSyncs>())
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

    yang_name = "counters"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::~Counters()
{
}

bool RsvpStandby::Counters::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::has_operation() const
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

std::string RsvpStandby::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-messages")
    {
        if(interface_messages == nullptr)
        {
            interface_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages>();
        }
        return interface_messages;
    }

    if(child_yang_name == "message-summary")
    {
        if(message_summary == nullptr)
        {
            message_summary = std::make_shared<RsvpStandby::Counters::MessageSummary>();
        }
        return message_summary;
    }

    if(child_yang_name == "prefix-filtering")
    {
        if(prefix_filtering == nullptr)
        {
            prefix_filtering = std::make_shared<RsvpStandby::Counters::PrefixFiltering>();
        }
        return prefix_filtering;
    }

    if(child_yang_name == "out-of-resource")
    {
        if(out_of_resource == nullptr)
        {
            out_of_resource = std::make_shared<RsvpStandby::Counters::OutOfResource>();
        }
        return out_of_resource;
    }

    if(child_yang_name == "interface-events")
    {
        if(interface_events == nullptr)
        {
            interface_events = std::make_shared<RsvpStandby::Counters::InterfaceEvents>();
        }
        return interface_events;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<RsvpStandby::Counters::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<RsvpStandby::Counters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<RsvpStandby::Counters::Database>();
        }
        return database;
    }

    if(child_yang_name == "event-syncs")
    {
        if(event_syncs == nullptr)
        {
            event_syncs = std::make_shared<RsvpStandby::Counters::EventSyncs>();
        }
        return event_syncs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_messages != nullptr)
    {
        _children["interface-messages"] = interface_messages;
    }

    if(message_summary != nullptr)
    {
        _children["message-summary"] = message_summary;
    }

    if(prefix_filtering != nullptr)
    {
        _children["prefix-filtering"] = prefix_filtering;
    }

    if(out_of_resource != nullptr)
    {
        _children["out-of-resource"] = out_of_resource;
    }

    if(interface_events != nullptr)
    {
        _children["interface-events"] = interface_events;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(issu != nullptr)
    {
        _children["issu"] = issu;
    }

    if(database != nullptr)
    {
        _children["database"] = database;
    }

    if(event_syncs != nullptr)
    {
        _children["event-syncs"] = event_syncs;
    }

    return _children;
}

void RsvpStandby::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-messages" || name == "message-summary" || name == "prefix-filtering" || name == "out-of-resource" || name == "interface-events" || name == "nsr" || name == "issu" || name == "database" || name == "event-syncs")
        return true;
    return false;
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessages()
    :
    interface_message(this, {"interface_name"})
{

    yang_name = "interface-messages"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::InterfaceMessages::~InterfaceMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_message.len(); index++)
    {
        if(interface_message[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::InterfaceMessages::has_operation() const
{
    for (std::size_t index=0; index<interface_message.len(); index++)
    {
        if(interface_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::Counters::InterfaceMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::InterfaceMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::InterfaceMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::InterfaceMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-message")
    {
        auto ent_ = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage>();
        ent_->parent = this;
        interface_message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::InterfaceMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::Counters::InterfaceMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::InterfaceMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::InterfaceMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-message")
        return true;
    return false;
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::InterfaceMessage()
    :
    interface_name{YType::str, "interface-name"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"}
        ,
    received_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>())
    , transmitted_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>())
    , bundle_received_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>())
    , bundle_transmitted_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>())
{
    received_messages->parent = this;
    transmitted_messages->parent = this;
    bundle_received_messages->parent = this;
    bundle_transmitted_messages->parent = this;

    yang_name = "interface-message"; yang_parent_name = "interface-messages"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::~InterfaceMessage()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| retransmitted_messages.is_set
	|| out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data());
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::has_operation() const
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

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/interface-messages/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-message";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-messages")
    {
        if(received_messages == nullptr)
        {
            received_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>();
        }
        return received_messages;
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages == nullptr)
        {
            transmitted_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>();
        }
        return transmitted_messages;
    }

    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages == nullptr)
        {
            bundle_received_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>();
        }
        return bundle_received_messages;
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages == nullptr)
        {
            bundle_transmitted_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>();
        }
        return bundle_transmitted_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(received_messages != nullptr)
    {
        _children["received-messages"] = received_messages;
    }

    if(transmitted_messages != nullptr)
    {
        _children["transmitted-messages"] = transmitted_messages;
    }

    if(bundle_received_messages != nullptr)
    {
        _children["bundle-received-messages"] = bundle_received_messages;
    }

    if(bundle_transmitted_messages != nullptr)
    {
        _children["bundle-transmitted-messages"] = bundle_transmitted_messages;
    }

    return _children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "transmitted-messages" || name == "bundle-received-messages" || name == "bundle-transmitted-messages" || name == "interface-name" || name == "retransmitted-messages" || name == "out-of-order-messages" || name == "rate-limited-messages")
        return true;
    return false;
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::ReceivedMessages()
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

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::~ReceivedMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_operation() const
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

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::TransmittedMessages()
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

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::~TransmittedMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_operation() const
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

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::BundleReceivedMessages()
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

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_operation() const
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

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::BundleTransmittedMessages()
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

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_operation() const
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

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

RsvpStandby::Counters::MessageSummary::MessageSummary()
    :
    retransmitted_messages{YType::uint32, "retransmitted-messages"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"}
        ,
    received_messages(std::make_shared<RsvpStandby::Counters::MessageSummary::ReceivedMessages>())
    , transmitted_messages(std::make_shared<RsvpStandby::Counters::MessageSummary::TransmittedMessages>())
    , bundle_received_messages(std::make_shared<RsvpStandby::Counters::MessageSummary::BundleReceivedMessages>())
    , bundle_transmitted_messages(std::make_shared<RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages>())
{
    received_messages->parent = this;
    transmitted_messages->parent = this;
    bundle_received_messages->parent = this;
    bundle_transmitted_messages->parent = this;

    yang_name = "message-summary"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::MessageSummary::~MessageSummary()
{
}

bool RsvpStandby::Counters::MessageSummary::has_data() const
{
    if (is_presence_container) return true;
    return retransmitted_messages.is_set
	|| out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data());
}

bool RsvpStandby::Counters::MessageSummary::has_operation() const
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

std::string RsvpStandby::Counters::MessageSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::MessageSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::MessageSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::MessageSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-messages")
    {
        if(received_messages == nullptr)
        {
            received_messages = std::make_shared<RsvpStandby::Counters::MessageSummary::ReceivedMessages>();
        }
        return received_messages;
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages == nullptr)
        {
            transmitted_messages = std::make_shared<RsvpStandby::Counters::MessageSummary::TransmittedMessages>();
        }
        return transmitted_messages;
    }

    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages == nullptr)
        {
            bundle_received_messages = std::make_shared<RsvpStandby::Counters::MessageSummary::BundleReceivedMessages>();
        }
        return bundle_received_messages;
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages == nullptr)
        {
            bundle_transmitted_messages = std::make_shared<RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages>();
        }
        return bundle_transmitted_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::MessageSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(received_messages != nullptr)
    {
        _children["received-messages"] = received_messages;
    }

    if(transmitted_messages != nullptr)
    {
        _children["transmitted-messages"] = transmitted_messages;
    }

    if(bundle_received_messages != nullptr)
    {
        _children["bundle-received-messages"] = bundle_received_messages;
    }

    if(bundle_transmitted_messages != nullptr)
    {
        _children["bundle-transmitted-messages"] = bundle_transmitted_messages;
    }

    return _children;
}

void RsvpStandby::Counters::MessageSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::MessageSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::MessageSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "transmitted-messages" || name == "bundle-received-messages" || name == "bundle-transmitted-messages" || name == "retransmitted-messages" || name == "out-of-order-messages" || name == "rate-limited-messages")
        return true;
    return false;
}

RsvpStandby::Counters::MessageSummary::ReceivedMessages::ReceivedMessages()
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

RsvpStandby::Counters::MessageSummary::ReceivedMessages::~ReceivedMessages()
{
}

bool RsvpStandby::Counters::MessageSummary::ReceivedMessages::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::MessageSummary::ReceivedMessages::has_operation() const
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

std::string RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::MessageSummary::ReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::MessageSummary::ReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::MessageSummary::ReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

RsvpStandby::Counters::MessageSummary::TransmittedMessages::TransmittedMessages()
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

RsvpStandby::Counters::MessageSummary::TransmittedMessages::~TransmittedMessages()
{
}

bool RsvpStandby::Counters::MessageSummary::TransmittedMessages::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::MessageSummary::TransmittedMessages::has_operation() const
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

std::string RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::MessageSummary::TransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::MessageSummary::TransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::MessageSummary::TransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::BundleReceivedMessages()
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

RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::has_operation() const
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

std::string RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::BundleTransmittedMessages()
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

RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::has_operation() const
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

std::string RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::PrefixFiltering()
    :
    accesses(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses>())
    , interfaces(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces>())
{
    accesses->parent = this;
    interfaces->parent = this;

    yang_name = "prefix-filtering"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::~PrefixFiltering()
{
}

bool RsvpStandby::Counters::PrefixFiltering::has_data() const
{
    if (is_presence_container) return true;
    return (accesses !=  nullptr && accesses->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::has_operation() const
{
    return is_set(yfilter)
	|| (accesses !=  nullptr && accesses->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesses")
    {
        if(accesses == nullptr)
        {
            accesses = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses>();
        }
        return accesses;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accesses != nullptr)
    {
        _children["accesses"] = accesses;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::PrefixFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::PrefixFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesses" || name == "interfaces")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Accesses()
    :
    access(this, {"access_list_name"})
{

    yang_name = "accesses"; yang_parent_name = "prefix-filtering"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Accesses::~Accesses()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Accesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        auto ent_ = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access>();
        ent_->parent = this;
        access.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Accesses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Access()
    :
    access_list_name{YType::str, "access-list-name"}
        ,
    forwarded(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded>())
    , locally_destined(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined>())
    , dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped>())
    , total(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total>())
{
    forwarded->parent = this;
    locally_destined->parent = this;
    dropped->parent = this;
    total->parent = this;

    yang_name = "access"; yang_parent_name = "accesses"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::~Access()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::has_data() const
{
    if (is_presence_container) return true;
    return access_list_name.is_set
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    ADD_KEY_TOKEN(access_list_name, "access-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarded != nullptr)
    {
        _children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        _children["locally-destined"] = locally_destined;
    }

    if(dropped != nullptr)
    {
        _children["dropped"] = dropped;
    }

    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarded" || name == "locally-destined" || name == "dropped" || name == "total" || name == "access-list-name")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::~Forwarded()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::~LocallyDestined()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::~Dropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::~Total()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces()
    :
    summary(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary>())
    , interfaces(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_>())
{
    summary->parent = this;
    interfaces->parent = this;

    yang_name = "interfaces"; yang_parent_name = "prefix-filtering"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::~Interfaces()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "interfaces")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Summary()
    :
    forwarded(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded>())
    , locally_destined(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined>())
    , dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped>())
    , default_action_dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped>())
    , default_action_processed(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed>())
    , total(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total>())
{
    forwarded->parent = this;
    locally_destined->parent = this;
    dropped->parent = this;
    default_action_dropped->parent = this;
    default_action_processed->parent = this;
    total->parent = this;

    yang_name = "summary"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::~Summary()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::has_data() const
{
    if (is_presence_container) return true;
    return (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_data())
	|| (default_action_processed !=  nullptr && default_action_processed->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_operation())
	|| (default_action_processed !=  nullptr && default_action_processed->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "default-action-dropped")
    {
        if(default_action_dropped == nullptr)
        {
            default_action_dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped>();
        }
        return default_action_dropped;
    }

    if(child_yang_name == "default-action-processed")
    {
        if(default_action_processed == nullptr)
        {
            default_action_processed = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed>();
        }
        return default_action_processed;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarded != nullptr)
    {
        _children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        _children["locally-destined"] = locally_destined;
    }

    if(dropped != nullptr)
    {
        _children["dropped"] = dropped;
    }

    if(default_action_dropped != nullptr)
    {
        _children["default-action-dropped"] = default_action_dropped;
    }

    if(default_action_processed != nullptr)
    {
        _children["default-action-processed"] = default_action_processed;
    }

    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarded" || name == "locally-destined" || name == "dropped" || name == "default-action-dropped" || name == "default-action-processed" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::~Forwarded()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::~LocallyDestined()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::~Dropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::DefaultActionDropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-dropped"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::~DefaultActionDropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::DefaultActionProcessed()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-processed"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::~DefaultActionProcessed()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::~Total()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interfaces_()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::~Interfaces_()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_children() const
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

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    forwarded(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded>())
    , locally_destined(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined>())
    , dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped>())
    , default_action_dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped>())
    , default_action_processed(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed>())
    , total(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total>())
{
    forwarded->parent = this;
    locally_destined->parent = this;
    dropped->parent = this;
    default_action_dropped->parent = this;
    default_action_processed->parent = this;
    total->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::~Interface()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_data())
	|| (default_action_processed !=  nullptr && default_action_processed->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_operation())
	|| (default_action_processed !=  nullptr && default_action_processed->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "default-action-dropped")
    {
        if(default_action_dropped == nullptr)
        {
            default_action_dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped>();
        }
        return default_action_dropped;
    }

    if(child_yang_name == "default-action-processed")
    {
        if(default_action_processed == nullptr)
        {
            default_action_processed = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed>();
        }
        return default_action_processed;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarded != nullptr)
    {
        _children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        _children["locally-destined"] = locally_destined;
    }

    if(dropped != nullptr)
    {
        _children["dropped"] = dropped;
    }

    if(default_action_dropped != nullptr)
    {
        _children["default-action-dropped"] = default_action_dropped;
    }

    if(default_action_processed != nullptr)
    {
        _children["default-action-processed"] = default_action_processed;
    }

    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarded" || name == "locally-destined" || name == "dropped" || name == "default-action-dropped" || name == "default-action-processed" || name == "total" || name == "interface-name")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::~Forwarded()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::~LocallyDestined()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::~Dropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::DefaultActionDropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-dropped"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::~DefaultActionDropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::DefaultActionProcessed()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-processed"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::~DefaultActionProcessed()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::~Total()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

RsvpStandby::Counters::OutOfResource::OutOfResource()
    :
    interfaces(std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "out-of-resource"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::OutOfResource::~OutOfResource()
{
}

bool RsvpStandby::Counters::OutOfResource::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool RsvpStandby::Counters::OutOfResource::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string RsvpStandby::Counters::OutOfResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::OutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::OutOfResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::OutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::OutOfResource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void RsvpStandby::Counters::OutOfResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::OutOfResource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::OutOfResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces()
    :
    summary(std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Summary>())
    , interfaces(std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_>())
{
    summary->parent = this;
    interfaces->parent = this;

    yang_name = "interfaces"; yang_parent_name = "out-of-resource"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::OutOfResource::Interfaces::~Interfaces()
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::OutOfResource::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::OutOfResource::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::OutOfResource::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void RsvpStandby::Counters::OutOfResource::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::OutOfResource::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "interfaces")
        return true;
    return false;
}

RsvpStandby::Counters::OutOfResource::Interfaces::Summary::Summary()
    :
    dropped_path_messages{YType::uint32, "dropped-path-messages"}
{

    yang_name = "summary"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::OutOfResource::Interfaces::Summary::~Summary()
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Summary::has_data() const
{
    if (is_presence_container) return true;
    return dropped_path_messages.is_set;
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_path_messages.yfilter);
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/out-of-resource/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_path_messages.is_set || is_set(dropped_path_messages.yfilter)) leaf_name_data.push_back(dropped_path_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::OutOfResource::Interfaces::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages = value;
        dropped_path_messages.value_namespace = name_space;
        dropped_path_messages.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::OutOfResource::Interfaces::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-path-messages")
        return true;
    return false;
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interfaces_()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::~Interfaces_()
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/out-of-resource/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_children() const
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

void RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    dropped_path_messages{YType::uint32, "dropped-path-messages"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::~Interface()
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| dropped_path_messages.is_set;
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(dropped_path_messages.yfilter);
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/out-of-resource/interfaces/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (dropped_path_messages.is_set || is_set(dropped_path_messages.yfilter)) leaf_name_data.push_back(dropped_path_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages = value;
        dropped_path_messages.value_namespace = name_space;
        dropped_path_messages.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "dropped-path-messages")
        return true;
    return false;
}

RsvpStandby::Counters::InterfaceEvents::InterfaceEvents()
    :
    interface_event(this, {"interface_name"})
{

    yang_name = "interface-events"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::InterfaceEvents::~InterfaceEvents()
{
}

bool RsvpStandby::Counters::InterfaceEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_event.len(); index++)
    {
        if(interface_event[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::InterfaceEvents::has_operation() const
{
    for (std::size_t index=0; index<interface_event.len(); index++)
    {
        if(interface_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::Counters::InterfaceEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::InterfaceEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::InterfaceEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::InterfaceEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-event")
    {
        auto ent_ = std::make_shared<RsvpStandby::Counters::InterfaceEvents::InterfaceEvent>();
        ent_->parent = this;
        interface_event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::InterfaceEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::Counters::InterfaceEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::InterfaceEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::InterfaceEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-event")
        return true;
    return false;
}

RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::InterfaceEvent()
    :
    interface_name{YType::str, "interface-name"},
    expired_paths{YType::uint32, "expired-paths"},
    expired_reservations{YType::uint32, "expired-reservations"},
    nac_ks{YType::uint32, "nac-ks"}
{

    yang_name = "interface-event"; yang_parent_name = "interface-events"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::~InterfaceEvent()
{
}

bool RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| expired_paths.is_set
	|| expired_reservations.is_set
	|| nac_ks.is_set;
}

bool RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(expired_paths.yfilter)
	|| ydk::is_set(expired_reservations.yfilter)
	|| ydk::is_set(nac_ks.yfilter);
}

std::string RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/interface-events/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-event";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (expired_paths.is_set || is_set(expired_paths.yfilter)) leaf_name_data.push_back(expired_paths.get_name_leafdata());
    if (expired_reservations.is_set || is_set(expired_reservations.yfilter)) leaf_name_data.push_back(expired_reservations.get_name_leafdata());
    if (nac_ks.is_set || is_set(nac_ks.yfilter)) leaf_name_data.push_back(nac_ks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-paths")
    {
        expired_paths = value;
        expired_paths.value_namespace = name_space;
        expired_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations = value;
        expired_reservations.value_namespace = name_space;
        expired_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nac-ks")
    {
        nac_ks = value;
        nac_ks.value_namespace = name_space;
        nac_ks.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "expired-paths")
    {
        expired_paths.yfilter = yfilter;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations.yfilter = yfilter;
    }
    if(value_path == "nac-ks")
    {
        nac_ks.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "expired-paths" || name == "expired-reservations" || name == "nac-ks")
        return true;
    return false;
}

RsvpStandby::Counters::Nsr::Nsr()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    rsvp_process_role{YType::enumeration, "rsvp-process-role"},
    last_idt_states{YType::uint32, "last-idt-states"},
    total_states{YType::uint32, "total-states"},
    total_deletions{YType::uint32, "total-deletions"},
    total_nacks{YType::uint64, "total-nacks"},
    total_id_ts{YType::uint32, "total-id-ts"}
{

    yang_name = "nsr"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::Nsr::~Nsr()
{
}

bool RsvpStandby::Counters::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| rsvp_process_role.is_set
	|| last_idt_states.is_set
	|| total_states.is_set
	|| total_deletions.is_set
	|| total_nacks.is_set
	|| total_id_ts.is_set;
}

bool RsvpStandby::Counters::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(rsvp_process_role.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(total_states.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_nacks.yfilter)
	|| ydk::is_set(total_id_ts.yfilter);
}

std::string RsvpStandby::Counters::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (rsvp_process_role.is_set || is_set(rsvp_process_role.yfilter)) leaf_name_data.push_back(rsvp_process_role.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_nacks.is_set || is_set(total_nacks.yfilter)) leaf_name_data.push_back(total_nacks.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role = value;
        rsvp_process_role.value_namespace = name_space;
        rsvp_process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nacks")
    {
        total_nacks = value;
        total_nacks.value_namespace = name_space;
        total_nacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-nacks")
    {
        total_nacks.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "rsvp-process-role" || name == "last-idt-states" || name == "total-states" || name == "total-deletions" || name == "total-nacks" || name == "total-id-ts")
        return true;
    return false;
}

RsvpStandby::Counters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    rsvp_process_role{YType::enumeration, "rsvp-process-role"},
    last_idt_states{YType::uint32, "last-idt-states"},
    total_states{YType::uint32, "total-states"},
    total_deletions{YType::uint32, "total-deletions"},
    total_nacks{YType::uint64, "total-nacks"},
    total_id_ts{YType::uint32, "total-id-ts"}
{

    yang_name = "issu"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::Issu::~Issu()
{
}

bool RsvpStandby::Counters::Issu::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| rsvp_process_role.is_set
	|| last_idt_states.is_set
	|| total_states.is_set
	|| total_deletions.is_set
	|| total_nacks.is_set
	|| total_id_ts.is_set;
}

bool RsvpStandby::Counters::Issu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(rsvp_process_role.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(total_states.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_nacks.yfilter)
	|| ydk::is_set(total_id_ts.yfilter);
}

std::string RsvpStandby::Counters::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (rsvp_process_role.is_set || is_set(rsvp_process_role.yfilter)) leaf_name_data.push_back(rsvp_process_role.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_nacks.is_set || is_set(total_nacks.yfilter)) leaf_name_data.push_back(total_nacks.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role = value;
        rsvp_process_role.value_namespace = name_space;
        rsvp_process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nacks")
    {
        total_nacks = value;
        total_nacks.value_namespace = name_space;
        total_nacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-nacks")
    {
        total_nacks.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "rsvp-process-role" || name == "last-idt-states" || name == "total-states" || name == "total-deletions" || name == "total-nacks" || name == "total-id-ts")
        return true;
    return false;
}

RsvpStandby::Counters::Database::Database()
    :
    sessions{YType::uint32, "sessions"},
    incoming_paths{YType::uint32, "incoming-paths"},
    outgoing_paths{YType::uint32, "outgoing-paths"},
    incoming_reservations{YType::uint32, "incoming-reservations"},
    outgoing_reservations{YType::uint32, "outgoing-reservations"},
    interfaces{YType::uint32, "interfaces"}
{

    yang_name = "database"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::Database::~Database()
{
}

bool RsvpStandby::Counters::Database::has_data() const
{
    if (is_presence_container) return true;
    return sessions.is_set
	|| incoming_paths.is_set
	|| outgoing_paths.is_set
	|| incoming_reservations.is_set
	|| outgoing_reservations.is_set
	|| interfaces.is_set;
}

bool RsvpStandby::Counters::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(incoming_paths.yfilter)
	|| ydk::is_set(outgoing_paths.yfilter)
	|| ydk::is_set(incoming_reservations.yfilter)
	|| ydk::is_set(outgoing_reservations.yfilter)
	|| ydk::is_set(interfaces.yfilter);
}

std::string RsvpStandby::Counters::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (incoming_paths.is_set || is_set(incoming_paths.yfilter)) leaf_name_data.push_back(incoming_paths.get_name_leafdata());
    if (outgoing_paths.is_set || is_set(outgoing_paths.yfilter)) leaf_name_data.push_back(outgoing_paths.get_name_leafdata());
    if (incoming_reservations.is_set || is_set(incoming_reservations.yfilter)) leaf_name_data.push_back(incoming_reservations.get_name_leafdata());
    if (outgoing_reservations.is_set || is_set(outgoing_reservations.yfilter)) leaf_name_data.push_back(outgoing_reservations.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-paths")
    {
        incoming_paths = value;
        incoming_paths.value_namespace = name_space;
        incoming_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths = value;
        outgoing_paths.value_namespace = name_space;
        outgoing_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations = value;
        incoming_reservations.value_namespace = name_space;
        incoming_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations = value;
        outgoing_reservations.value_namespace = name_space;
        outgoing_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "incoming-paths")
    {
        incoming_paths.yfilter = yfilter;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths.yfilter = yfilter;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations.yfilter = yfilter;
    }
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "incoming-paths" || name == "outgoing-paths" || name == "incoming-reservations" || name == "outgoing-reservations" || name == "interfaces")
        return true;
    return false;
}

RsvpStandby::Counters::EventSyncs::EventSyncs()
    :
    event_sync(this, {"interface_name"})
{

    yang_name = "event-syncs"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::EventSyncs::~EventSyncs()
{
}

bool RsvpStandby::Counters::EventSyncs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_sync.len(); index++)
    {
        if(event_sync[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::EventSyncs::has_operation() const
{
    for (std::size_t index=0; index<event_sync.len(); index++)
    {
        if(event_sync[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::Counters::EventSyncs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::EventSyncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-syncs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::EventSyncs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::EventSyncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-sync")
    {
        auto ent_ = std::make_shared<RsvpStandby::Counters::EventSyncs::EventSync>();
        ent_->parent = this;
        event_sync.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::EventSyncs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_sync.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::Counters::EventSyncs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Counters::EventSyncs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Counters::EventSyncs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-sync")
        return true;
    return false;
}

RsvpStandby::Counters::EventSyncs::EventSync::EventSync()
    :
    interface_name{YType::str, "interface-name"},
    expired_paths{YType::uint32, "expired-paths"},
    expired_reservations{YType::uint32, "expired-reservations"},
    nac_ks{YType::uint32, "nac-ks"}
{

    yang_name = "event-sync"; yang_parent_name = "event-syncs"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Counters::EventSyncs::EventSync::~EventSync()
{
}

bool RsvpStandby::Counters::EventSyncs::EventSync::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| expired_paths.is_set
	|| expired_reservations.is_set
	|| nac_ks.is_set;
}

bool RsvpStandby::Counters::EventSyncs::EventSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(expired_paths.yfilter)
	|| ydk::is_set(expired_reservations.yfilter)
	|| ydk::is_set(nac_ks.yfilter);
}

std::string RsvpStandby::Counters::EventSyncs::EventSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/event-syncs/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Counters::EventSyncs::EventSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-sync";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Counters::EventSyncs::EventSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (expired_paths.is_set || is_set(expired_paths.yfilter)) leaf_name_data.push_back(expired_paths.get_name_leafdata());
    if (expired_reservations.is_set || is_set(expired_reservations.yfilter)) leaf_name_data.push_back(expired_reservations.get_name_leafdata());
    if (nac_ks.is_set || is_set(nac_ks.yfilter)) leaf_name_data.push_back(nac_ks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Counters::EventSyncs::EventSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Counters::EventSyncs::EventSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Counters::EventSyncs::EventSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-paths")
    {
        expired_paths = value;
        expired_paths.value_namespace = name_space;
        expired_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations = value;
        expired_reservations.value_namespace = name_space;
        expired_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nac-ks")
    {
        nac_ks = value;
        nac_ks.value_namespace = name_space;
        nac_ks.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Counters::EventSyncs::EventSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "expired-paths")
    {
        expired_paths.yfilter = yfilter;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations.yfilter = yfilter;
    }
    if(value_path == "nac-ks")
    {
        nac_ks.yfilter = yfilter;
    }
}

bool RsvpStandby::Counters::EventSyncs::EventSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "expired-paths" || name == "expired-reservations" || name == "nac-ks")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetaileds()
    :
    interface_detailed(this, {"interface_name"})
{

    yang_name = "interface-detaileds"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::InterfaceDetaileds::~InterfaceDetaileds()
{
}

bool RsvpStandby::InterfaceDetaileds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_detailed.len(); index++)
    {
        if(interface_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::InterfaceDetaileds::has_operation() const
{
    for (std::size_t index=0; index<interface_detailed.len(); index++)
    {
        if(interface_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::InterfaceDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::InterfaceDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detailed")
    {
        auto ent_ = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed>();
        ent_->parent = this;
        interface_detailed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_detailed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::InterfaceDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::InterfaceDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::InterfaceDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detailed")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::InterfaceDetailed()
    :
    interface_name{YType::str, "interface-name"},
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
    bandwidth_information(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation>())
    , flags(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags>())
    , neighbor_array(this, {})
{
    bandwidth_information->parent = this;
    flags->parent = this;

    yang_name = "interface-detailed"; yang_parent_name = "interface-detaileds"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::~InterfaceDetailed()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_array.len(); index++)
    {
        if(neighbor_array[index]->has_data())
            return true;
    }
    return interface_name.is_set
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::has_operation() const
{
    for (std::size_t index=0; index<neighbor_array.len(); index++)
    {
        if(neighbor_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
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

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/interface-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detailed";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "neighbor-array")
    {
        auto ent_ = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray>();
        ent_->parent = this;
        neighbor_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth_information != nullptr)
    {
        _children["bandwidth-information"] = bandwidth_information;
    }

    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    count_ = 0;
    for (auto ent_ : neighbor_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "flags" || name == "neighbor-array" || name == "interface-name" || name == "interface-name-xr" || name == "signalling-ip-tos" || name == "integrity-send-password" || name == "integrity-receive-password" || name == "integrity-receive-password-optional" || name == "refresh-timer-state" || name == "summary-refresh-timer-state" || name == "refresh-interval" || name == "out-of-band-refresh-interval" || name == "summary-refresh-max-size" || name == "bundle-message-max-size" || name == "expiry-timer-state" || name == "expiry-states" || name == "expiry-interval" || name == "expiry-drops-tolerated" || name == "out-of-band-expiry-drops-tolerated" || name == "ack-hold-time" || name == "ack-max-size" || name == "retransmit-time" || name == "pacing-interval" || name == "pacing-message-rate" || name == "pacing-timer-state" || name == "pacing-messages")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
        ,
    pre_standard_dste_interface(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface>())
    , standard_dste_interface(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::~BandwidthInformation()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_data() const
{
    if (is_presence_container) return true;
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pre_standard_dste_interface != nullptr)
    {
        _children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        _children["standard-dste-interface"] = standard_dste_interface;
    }

    return _children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
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

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_subpool_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter);
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-subpool-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_operation() const
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

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::Flags()
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

    yang_name = "flags"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::~Flags()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::has_data() const
{
    if (is_presence_container) return true;
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::has_operation() const
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

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mpls-enabled" || name == "is-refresh-reduction-enabled" || name == "is-pacing-enabled" || name == "is-refresh-enabled" || name == "is-s-refresh-enabled" || name == "is-interface-down" || name == "is-interface-created" || name == "is-rel-s-refresh-enabled" || name == "is-backup-tunnel" || name == "is-rsvp-configured" || name == "is-non-default-vrf" || name == "is-message-bundling-enabled")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborArray()
    :
    is_neighbor_refresh_reduction_capable{YType::boolean, "is-neighbor-refresh-reduction-capable"},
    neighbor_address{YType::str, "neighbor-address"},
    message_ids{YType::uint32, "message-ids"},
    outgoing_states{YType::int32, "outgoing-states"}
        ,
    expiry_time(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime>())
    , neighbor_message_id(this, {})
{
    expiry_time->parent = this;

    yang_name = "neighbor-array"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::~NeighborArray()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_message_id.len(); index++)
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_operation() const
{
    for (std::size_t index=0; index<neighbor_message_id.len(); index++)
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

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor_refresh_reduction_capable.is_set || is_set(is_neighbor_refresh_reduction_capable.yfilter)) leaf_name_data.push_back(is_neighbor_refresh_reduction_capable.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (message_ids.is_set || is_set(message_ids.yfilter)) leaf_name_data.push_back(message_ids.get_name_leafdata());
    if (outgoing_states.is_set || is_set(outgoing_states.yfilter)) leaf_name_data.push_back(outgoing_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "neighbor-message-id")
    {
        auto ent_ = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId>();
        ent_->parent = this;
        neighbor_message_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expiry_time != nullptr)
    {
        _children["expiry-time"] = expiry_time;
    }

    count_ = 0;
    for (auto ent_ : neighbor_message_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time" || name == "neighbor-message-id" || name == "is-neighbor-refresh-reduction-capable" || name == "neighbor-address" || name == "message-ids" || name == "outgoing-states")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::ExpiryTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::~ExpiryTime()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::NeighborMessageId()
    :
    message_id{YType::uint32, "message-id"}
{

    yang_name = "neighbor-message-id"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::~NeighborMessageId()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_data() const
{
    if (is_presence_container) return true;
    return message_id.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_id.yfilter);
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-message-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-id")
    {
        message_id = value;
        message_id.value_namespace = name_space;
        message_id.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-id")
    {
        message_id.yfilter = yfilter;
    }
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-id")
        return true;
    return false;
}

RsvpStandby::ControllerBriefs::ControllerBriefs()
    :
    controller_brief(this, {"controller_name"})
{

    yang_name = "controller-briefs"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::ControllerBriefs::~ControllerBriefs()
{
}

bool RsvpStandby::ControllerBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller_brief.len(); index++)
    {
        if(controller_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::ControllerBriefs::has_operation() const
{
    for (std::size_t index=0; index<controller_brief.len(); index++)
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

std::shared_ptr<ydk::Entity> RsvpStandby::ControllerBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-brief")
    {
        auto ent_ = std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief>();
        ent_->parent = this;
        controller_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::ControllerBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controller_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "controller-brief";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::ControllerBriefs::ControllerBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::ControllerBriefs::ControllerBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::ControllerBriefs::ControllerBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth_information != nullptr)
    {
        _children["bandwidth-information"] = bandwidth_information;
    }

    return _children;
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
    , standard_dste_interface(std::make_shared<RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pre_standard_dste_interface != nullptr)
    {
        _children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        _children["standard-dste-interface"] = standard_dste_interface;
    }

    return _children;
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
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_subpool_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set;
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter);
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
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-subpool-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute")
        return true;
    return false;
}

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set;
}

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_operation() const
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
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute")
        return true;
    return false;
}

RsvpStandby::GracefulRestart::GracefulRestart()
    :
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    global_neighbors{YType::uint32, "global-neighbors"},
    restart_time{YType::uint32, "restart-time"},
    recovery_time{YType::uint32, "recovery-time"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    hello_interval{YType::uint32, "hello-interval"},
    missed_hellos{YType::uint8, "missed-hellos"},
    pending_states{YType::uint32, "pending-states"}
        ,
    recovery_time_left(std::make_shared<RsvpStandby::GracefulRestart::RecoveryTimeLeft>())
    , recovery_timer_exp_time(std::make_shared<RsvpStandby::GracefulRestart::RecoveryTimerExpTime>())
    , local_node_address(this, {})
{
    recovery_time_left->parent = this;
    recovery_timer_exp_time->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::GracefulRestart::~GracefulRestart()
{
}

bool RsvpStandby::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_node_address.len(); index++)
    {
        if(local_node_address[index]->has_data())
            return true;
    }
    return is_gr_enabled.is_set
	|| global_neighbors.is_set
	|| restart_time.is_set
	|| recovery_time.is_set
	|| is_recovery_timer_running.is_set
	|| hello_interval.is_set
	|| missed_hellos.is_set
	|| pending_states.is_set
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_data())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_data());
}

bool RsvpStandby::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<local_node_address.len(); index++)
    {
        if(local_node_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(global_neighbors.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(is_recovery_timer_running.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(missed_hellos.yfilter)
	|| ydk::is_set(pending_states.yfilter)
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_operation())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_operation());
}

std::string RsvpStandby::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (global_neighbors.is_set || is_set(global_neighbors.yfilter)) leaf_name_data.push_back(global_neighbors.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.yfilter)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (missed_hellos.is_set || is_set(missed_hellos.yfilter)) leaf_name_data.push_back(missed_hellos.get_name_leafdata());
    if (pending_states.is_set || is_set(pending_states.yfilter)) leaf_name_data.push_back(pending_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery-time-left")
    {
        if(recovery_time_left == nullptr)
        {
            recovery_time_left = std::make_shared<RsvpStandby::GracefulRestart::RecoveryTimeLeft>();
        }
        return recovery_time_left;
    }

    if(child_yang_name == "recovery-timer-exp-time")
    {
        if(recovery_timer_exp_time == nullptr)
        {
            recovery_timer_exp_time = std::make_shared<RsvpStandby::GracefulRestart::RecoveryTimerExpTime>();
        }
        return recovery_timer_exp_time;
    }

    if(child_yang_name == "local-node-address")
    {
        auto ent_ = std::make_shared<RsvpStandby::GracefulRestart::LocalNodeAddress>();
        ent_->parent = this;
        local_node_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery_time_left != nullptr)
    {
        _children["recovery-time-left"] = recovery_time_left;
    }

    if(recovery_timer_exp_time != nullptr)
    {
        _children["recovery-timer-exp-time"] = recovery_timer_exp_time;
    }

    count_ = 0;
    for (auto ent_ : local_node_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-neighbors")
    {
        global_neighbors = value;
        global_neighbors.value_namespace = name_space;
        global_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
        is_recovery_timer_running.value_namespace = name_space;
        is_recovery_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos = value;
        missed_hellos.value_namespace = name_space;
        missed_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-states")
    {
        pending_states = value;
        pending_states.value_namespace = name_space;
        pending_states.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "global-neighbors")
    {
        global_neighbors.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos.yfilter = yfilter;
    }
    if(value_path == "pending-states")
    {
        pending_states.yfilter = yfilter;
    }
}

bool RsvpStandby::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery-time-left" || name == "recovery-timer-exp-time" || name == "local-node-address" || name == "is-gr-enabled" || name == "global-neighbors" || name == "restart-time" || name == "recovery-time" || name == "is-recovery-timer-running" || name == "hello-interval" || name == "missed-hellos" || name == "pending-states")
        return true;
    return false;
}

RsvpStandby::GracefulRestart::RecoveryTimeLeft::RecoveryTimeLeft()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "recovery-time-left"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::GracefulRestart::RecoveryTimeLeft::~RecoveryTimeLeft()
{
}

bool RsvpStandby::GracefulRestart::RecoveryTimeLeft::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool RsvpStandby::GracefulRestart::RecoveryTimeLeft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-time-left";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::GracefulRestart::RecoveryTimeLeft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::GracefulRestart::RecoveryTimeLeft::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::GracefulRestart::RecoveryTimeLeft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

RsvpStandby::GracefulRestart::RecoveryTimerExpTime::RecoveryTimerExpTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "recovery-timer-exp-time"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::GracefulRestart::RecoveryTimerExpTime::~RecoveryTimerExpTime()
{
}

bool RsvpStandby::GracefulRestart::RecoveryTimerExpTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool RsvpStandby::GracefulRestart::RecoveryTimerExpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-timer-exp-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::GracefulRestart::RecoveryTimerExpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::GracefulRestart::RecoveryTimerExpTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::GracefulRestart::RecoveryTimerExpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

RsvpStandby::GracefulRestart::LocalNodeAddress::LocalNodeAddress()
    :
    local_node_ip_address{YType::str, "local-node-ip-address"},
    application_type{YType::enumeration, "application-type"}
{

    yang_name = "local-node-address"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::GracefulRestart::LocalNodeAddress::~LocalNodeAddress()
{
}

bool RsvpStandby::GracefulRestart::LocalNodeAddress::has_data() const
{
    if (is_presence_container) return true;
    return local_node_ip_address.is_set
	|| application_type.is_set;
}

bool RsvpStandby::GracefulRestart::LocalNodeAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_node_ip_address.yfilter)
	|| ydk::is_set(application_type.yfilter);
}

std::string RsvpStandby::GracefulRestart::LocalNodeAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::GracefulRestart::LocalNodeAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-node-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::GracefulRestart::LocalNodeAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_node_ip_address.is_set || is_set(local_node_ip_address.yfilter)) leaf_name_data.push_back(local_node_ip_address.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::GracefulRestart::LocalNodeAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::GracefulRestart::LocalNodeAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::GracefulRestart::LocalNodeAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-node-ip-address")
    {
        local_node_ip_address = value;
        local_node_ip_address.value_namespace = name_space;
        local_node_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::GracefulRestart::LocalNodeAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-node-ip-address")
    {
        local_node_ip_address.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
}

bool RsvpStandby::GracefulRestart::LocalNodeAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-node-ip-address" || name == "application-type")
        return true;
    return false;
}

RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBriefs()
    :
    hello_interface_instance_brief(this, {"source_address", "destination_address"})
{

    yang_name = "hello-interface-instance-briefs"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::HelloInterfaceInstanceBriefs::~HelloInterfaceInstanceBriefs()
{
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_interface_instance_brief.len(); index++)
    {
        if(hello_interface_instance_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::has_operation() const
{
    for (std::size_t index=0; index<hello_interface_instance_brief.len(); index++)
    {
        if(hello_interface_instance_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::HelloInterfaceInstanceBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::HelloInterfaceInstanceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::HelloInterfaceInstanceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::HelloInterfaceInstanceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interface-instance-brief")
    {
        auto ent_ = std::make_shared<RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief>();
        ent_->parent = this;
        hello_interface_instance_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::HelloInterfaceInstanceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_interface_instance_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::HelloInterfaceInstanceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::HelloInterfaceInstanceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interface-instance-brief")
        return true;
    return false;
}

RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::HelloInterfaceInstanceBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    instance_type{YType::enumeration, "instance-type"},
    hello_interface{YType::str, "hello-interface"}
{

    yang_name = "hello-interface-instance-brief"; yang_parent_name = "hello-interface-instance-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::~HelloInterfaceInstanceBrief()
{
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| instance_type.is_set
	|| hello_interface.is_set;
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(hello_interface.yfilter);
}

std::string RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/hello-interface-instance-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-brief";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "source-address-xr" || name == "destination-address-xr" || name == "instance-type" || name == "hello-interface")
        return true;
    return false;
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetails()
    :
    hello_interface_instance_detail(this, {"source_address", "destination_address"})
{

    yang_name = "hello-interface-instance-details"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::HelloInterfaceInstanceDetails::~HelloInterfaceInstanceDetails()
{
}

bool RsvpStandby::HelloInterfaceInstanceDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_interface_instance_detail.len(); index++)
    {
        if(hello_interface_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::HelloInterfaceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<hello_interface_instance_detail.len(); index++)
    {
        if(hello_interface_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::HelloInterfaceInstanceDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::HelloInterfaceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::HelloInterfaceInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::HelloInterfaceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interface-instance-detail")
    {
        auto ent_ = std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail>();
        ent_->parent = this;
        hello_interface_instance_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::HelloInterfaceInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_interface_instance_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::HelloInterfaceInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::HelloInterfaceInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::HelloInterfaceInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interface-instance-detail")
        return true;
    return false;
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::HelloInterfaceInstanceDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    hello_global_neighbor_id{YType::str, "hello-global-neighbor-id"},
    instance_type{YType::enumeration, "instance-type"},
    hello_interface{YType::str, "hello-interface"},
    source_instance{YType::uint32, "source-instance"},
    destination_instance{YType::uint32, "destination-instance"},
    hello_messages_sent{YType::uint64, "hello-messages-sent"},
    hello_messages_received{YType::uint64, "hello-messages-received"}
        ,
    last_message_sent_time(std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime>())
{
    last_message_sent_time->parent = this;

    yang_name = "hello-interface-instance-detail"; yang_parent_name = "hello-interface-instance-details"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::~HelloInterfaceInstanceDetail()
{
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| hello_global_neighbor_id.is_set
	|| instance_type.is_set
	|| hello_interface.is_set
	|| source_instance.is_set
	|| destination_instance.is_set
	|| hello_messages_sent.is_set
	|| hello_messages_received.is_set
	|| (last_message_sent_time !=  nullptr && last_message_sent_time->has_data());
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(hello_global_neighbor_id.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(hello_interface.yfilter)
	|| ydk::is_set(source_instance.yfilter)
	|| ydk::is_set(destination_instance.yfilter)
	|| ydk::is_set(hello_messages_sent.yfilter)
	|| ydk::is_set(hello_messages_received.yfilter)
	|| (last_message_sent_time !=  nullptr && last_message_sent_time->has_operation());
}

std::string RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/hello-interface-instance-details/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-detail";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (hello_global_neighbor_id.is_set || is_set(hello_global_neighbor_id.yfilter)) leaf_name_data.push_back(hello_global_neighbor_id.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (source_instance.is_set || is_set(source_instance.yfilter)) leaf_name_data.push_back(source_instance.get_name_leafdata());
    if (destination_instance.is_set || is_set(destination_instance.yfilter)) leaf_name_data.push_back(destination_instance.get_name_leafdata());
    if (hello_messages_sent.is_set || is_set(hello_messages_sent.yfilter)) leaf_name_data.push_back(hello_messages_sent.get_name_leafdata());
    if (hello_messages_received.is_set || is_set(hello_messages_received.yfilter)) leaf_name_data.push_back(hello_messages_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-message-sent-time")
    {
        if(last_message_sent_time == nullptr)
        {
            last_message_sent_time = std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime>();
        }
        return last_message_sent_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_message_sent_time != nullptr)
    {
        _children["last-message-sent-time"] = last_message_sent_time;
    }

    return _children;
}

void RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "hello-global-neighbor-id")
    {
        hello_global_neighbor_id = value;
        hello_global_neighbor_id.value_namespace = name_space;
        hello_global_neighbor_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "source-instance")
    {
        source_instance = value;
        source_instance.value_namespace = name_space;
        source_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-instance")
    {
        destination_instance = value;
        destination_instance.value_namespace = name_space;
        destination_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent = value;
        hello_messages_sent.value_namespace = name_space;
        hello_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received = value;
        hello_messages_received.value_namespace = name_space;
        hello_messages_received.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "hello-global-neighbor-id")
    {
        hello_global_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
    if(value_path == "source-instance")
    {
        source_instance.yfilter = yfilter;
    }
    if(value_path == "destination-instance")
    {
        destination_instance.yfilter = yfilter;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent.yfilter = yfilter;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received.yfilter = yfilter;
    }
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-message-sent-time" || name == "source-address" || name == "destination-address" || name == "source-address-xr" || name == "destination-address-xr" || name == "hello-global-neighbor-id" || name == "instance-type" || name == "hello-interface" || name == "source-instance" || name == "destination-instance" || name == "hello-messages-sent" || name == "hello-messages-received")
        return true;
    return false;
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::LastMessageSentTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "last-message-sent-time"; yang_parent_name = "hello-interface-instance-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::~LastMessageSentTime()
{
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-message-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetails()
    :
    interface_neighbor_detail(this, {"neighbor_address"})
{

    yang_name = "interface-neighbor-details"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::InterfaceNeighborDetails::~InterfaceNeighborDetails()
{
}

bool RsvpStandby::InterfaceNeighborDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_neighbor_detail.len(); index++)
    {
        if(interface_neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::InterfaceNeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_detail.len(); index++)
    {
        if(interface_neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::InterfaceNeighborDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::InterfaceNeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceNeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceNeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-neighbor-detail")
    {
        auto ent_ = std::make_shared<RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail>();
        ent_->parent = this;
        interface_neighbor_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceNeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_neighbor_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::InterfaceNeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::InterfaceNeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::InterfaceNeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-detail")
        return true;
    return false;
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborDetail()
    :
    neighbor_address{YType::str, "neighbor-address"},
    node_address{YType::str, "node-address"}
        ,
    interface_neighbor_list_detail(this, {})
{

    yang_name = "interface-neighbor-detail"; yang_parent_name = "interface-neighbor-details"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::~InterfaceNeighborDetail()
{
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_neighbor_list_detail.len(); index++)
    {
        if(interface_neighbor_list_detail[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| node_address.is_set;
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_list_detail.len(); index++)
    {
        if(interface_neighbor_list_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(node_address.yfilter);
}

std::string RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/interface-neighbor-details/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-detail";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-neighbor-list-detail")
    {
        auto ent_ = std::make_shared<RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail>();
        ent_->parent = this;
        interface_neighbor_list_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_neighbor_list_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-list-detail" || name == "neighbor-address" || name == "node-address")
        return true;
    return false;
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::InterfaceNeighborListDetail()
    :
    interface_neighbor_address{YType::str, "interface-neighbor-address"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    is_rr_enabled{YType::boolean, "is-rr-enabled"},
    neighbor_epoch{YType::uint32, "neighbor-epoch"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"}
{

    yang_name = "interface-neighbor-list-detail"; yang_parent_name = "interface-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::~InterfaceNeighborListDetail()
{
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_data() const
{
    if (is_presence_container) return true;
    return interface_neighbor_address.is_set
	|| neighbor_interface_name.is_set
	|| is_rr_enabled.is_set
	|| neighbor_epoch.is_set
	|| out_of_order_messages.is_set
	|| retransmitted_messages.is_set;
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_address.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(is_rr_enabled.yfilter)
	|| ydk::is_set(neighbor_epoch.yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter);
}

std::string RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-list-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_address.is_set || is_set(interface_neighbor_address.yfilter)) leaf_name_data.push_back(interface_neighbor_address.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (is_rr_enabled.is_set || is_set(is_rr_enabled.yfilter)) leaf_name_data.push_back(is_rr_enabled.get_name_leafdata());
    if (neighbor_epoch.is_set || is_set(neighbor_epoch.yfilter)) leaf_name_data.push_back(neighbor_epoch.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address = value;
        interface_neighbor_address.value_namespace = name_space;
        interface_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rr-enabled")
    {
        is_rr_enabled = value;
        is_rr_enabled.value_namespace = name_space;
        is_rr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-epoch")
    {
        neighbor_epoch = value;
        neighbor_epoch.value_namespace = name_space;
        neighbor_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-rr-enabled")
    {
        is_rr_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-epoch")
    {
        neighbor_epoch.yfilter = yfilter;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-address" || name == "neighbor-interface-name" || name == "is-rr-enabled" || name == "neighbor-epoch" || name == "out-of-order-messages" || name == "retransmitted-messages")
        return true;
    return false;
}

RsvpStandby::Nsr::Nsr()
    :
    status(std::make_shared<RsvpStandby::Nsr::Status>())
{
    status->parent = this;

    yang_name = "nsr"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Nsr::~Nsr()
{
}

bool RsvpStandby::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return (status !=  nullptr && status->has_data());
}

bool RsvpStandby::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation());
}

std::string RsvpStandby::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<RsvpStandby::Nsr::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void RsvpStandby::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

RsvpStandby::Nsr::Status::Status()
    :
    role{YType::enumeration, "role"}
        ,
    idt_status(std::make_shared<RsvpStandby::Nsr::Status::IdtStatus>())
    , previous_idt_status(std::make_shared<RsvpStandby::Nsr::Status::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Nsr::Status::~Status()
{
}

bool RsvpStandby::Nsr::Status::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool RsvpStandby::Nsr::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string RsvpStandby::Nsr::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Nsr::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Nsr::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Nsr::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<RsvpStandby::Nsr::Status::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<RsvpStandby::Nsr::Status::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Nsr::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
}

void RsvpStandby::Nsr::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Nsr::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool RsvpStandby::Nsr::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

RsvpStandby::Nsr::Status::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Nsr::Status::IdtStatus::~IdtStatus()
{
}

bool RsvpStandby::Nsr::Status::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Nsr::Status::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string RsvpStandby::Nsr::Status::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/nsr/status/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Nsr::Status::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Nsr::Status::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Nsr::Status::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Nsr::Status::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Nsr::Status::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Nsr::Status::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Nsr::Status::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Nsr::Status::PreviousIdtStatus::PreviousIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Nsr::Status::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool RsvpStandby::Nsr::Status::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Nsr::Status::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string RsvpStandby::Nsr::Status::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/nsr/status/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Nsr::Status::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Nsr::Status::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Nsr::Status::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Nsr::Status::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Nsr::Status::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Nsr::Status::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Nsr::Status::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Summary::Summary()
    :
    interfaces{YType::uint32, "interfaces"},
    ls_ps{YType::uint32, "ls-ps"}
        ,
    issu_status(std::make_shared<RsvpStandby::Summary::IssuStatus>())
    , nsr_status(std::make_shared<RsvpStandby::Summary::NsrStatus>())
    , database_counters(std::make_shared<RsvpStandby::Summary::DatabaseCounters>())
{
    issu_status->parent = this;
    nsr_status->parent = this;
    database_counters->parent = this;

    yang_name = "summary"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Summary::~Summary()
{
}

bool RsvpStandby::Summary::has_data() const
{
    if (is_presence_container) return true;
    return interfaces.is_set
	|| ls_ps.is_set
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data())
	|| (database_counters !=  nullptr && database_counters->has_data());
}

bool RsvpStandby::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation())
	|| (database_counters !=  nullptr && database_counters->has_operation());
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

std::shared_ptr<ydk::Entity> RsvpStandby::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "database-counters")
    {
        if(database_counters == nullptr)
        {
            database_counters = std::make_shared<RsvpStandby::Summary::DatabaseCounters>();
        }
        return database_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(issu_status != nullptr)
    {
        _children["issu-status"] = issu_status;
    }

    if(nsr_status != nullptr)
    {
        _children["nsr-status"] = nsr_status;
    }

    if(database_counters != nullptr)
    {
        _children["database-counters"] = database_counters;
    }

    return _children;
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
    if(name == "issu-status" || name == "nsr-status" || name == "database-counters" || name == "interfaces" || name == "ls-ps")
        return true;
    return false;
}

RsvpStandby::Summary::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
        ,
    idt_status(std::make_shared<RsvpStandby::Summary::IssuStatus::IdtStatus>())
    , previous_idt_status(std::make_shared<RsvpStandby::Summary::IssuStatus::PreviousIdtStatus>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> RsvpStandby::Summary::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Summary::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
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
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Summary::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool RsvpStandby::Summary::IssuStatus::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Summary::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Summary::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Summary::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::PreviousIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Summary::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
        ,
    idt_status(std::make_shared<RsvpStandby::Summary::NsrStatus::IdtStatus>())
    , previous_idt_status(std::make_shared<RsvpStandby::Summary::NsrStatus::PreviousIdtStatus>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> RsvpStandby::Summary::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Summary::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
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
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Summary::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool RsvpStandby::Summary::NsrStatus::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Summary::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Summary::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Summary::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::PreviousIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
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

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

RsvpStandby::Summary::DatabaseCounters::DatabaseCounters()
    :
    sessions{YType::uint32, "sessions"},
    incoming_paths{YType::uint32, "incoming-paths"},
    outgoing_paths{YType::uint32, "outgoing-paths"},
    incoming_reservations{YType::uint32, "incoming-reservations"},
    outgoing_reservations{YType::uint32, "outgoing-reservations"},
    interfaces{YType::uint32, "interfaces"}
{

    yang_name = "database-counters"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Summary::DatabaseCounters::~DatabaseCounters()
{
}

bool RsvpStandby::Summary::DatabaseCounters::has_data() const
{
    if (is_presence_container) return true;
    return sessions.is_set
	|| incoming_paths.is_set
	|| outgoing_paths.is_set
	|| incoming_reservations.is_set
	|| outgoing_reservations.is_set
	|| interfaces.is_set;
}

bool RsvpStandby::Summary::DatabaseCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(incoming_paths.yfilter)
	|| ydk::is_set(outgoing_paths.yfilter)
	|| ydk::is_set(incoming_reservations.yfilter)
	|| ydk::is_set(outgoing_reservations.yfilter)
	|| ydk::is_set(interfaces.yfilter);
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

    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (incoming_paths.is_set || is_set(incoming_paths.yfilter)) leaf_name_data.push_back(incoming_paths.get_name_leafdata());
    if (outgoing_paths.is_set || is_set(outgoing_paths.yfilter)) leaf_name_data.push_back(outgoing_paths.get_name_leafdata());
    if (incoming_reservations.is_set || is_set(incoming_reservations.yfilter)) leaf_name_data.push_back(incoming_reservations.get_name_leafdata());
    if (outgoing_reservations.is_set || is_set(outgoing_reservations.yfilter)) leaf_name_data.push_back(outgoing_reservations.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Summary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Summary::DatabaseCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Summary::DatabaseCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-paths")
    {
        incoming_paths = value;
        incoming_paths.value_namespace = name_space;
        incoming_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths = value;
        outgoing_paths.value_namespace = name_space;
        outgoing_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations = value;
        incoming_reservations.value_namespace = name_space;
        incoming_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations = value;
        outgoing_reservations.value_namespace = name_space;
        outgoing_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Summary::DatabaseCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "incoming-paths")
    {
        incoming_paths.yfilter = yfilter;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths.yfilter = yfilter;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations.yfilter = yfilter;
    }
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
}

bool RsvpStandby::Summary::DatabaseCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "incoming-paths" || name == "outgoing-paths" || name == "incoming-reservations" || name == "outgoing-reservations" || name == "interfaces")
        return true;
    return false;
}

RsvpStandby::Frrs::Frrs()
    :
    frr(this, {})
{

    yang_name = "frrs"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::~Frrs()
{
}

bool RsvpStandby::Frrs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr.len(); index++)
    {
        if(frr[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Frrs::has_operation() const
{
    for (std::size_t index=0; index<frr.len(); index++)
    {
        if(frr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::Frrs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr")
    {
        auto ent_ = std::make_shared<RsvpStandby::Frrs::Frr>();
        ent_->parent = this;
        frr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::Frrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Frrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Frrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr")
        return true;
    return false;
}

RsvpStandby::Frrs::Frr::Frr()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint32, "destination-port"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::uint32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::uint32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    path_status{YType::enumeration, "path-status"},
    reservation_status{YType::enumeration, "reservation-status"}
        ,
    session(std::make_shared<RsvpStandby::Frrs::Frr::Session>())
    , s2l_sub_lsp(std::make_shared<RsvpStandby::Frrs::Frr::S2lSubLsp>())
{
    session->parent = this;
    s2l_sub_lsp->parent = this;

    yang_name = "frr"; yang_parent_name = "frrs"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::Frr::~Frr()
{
}

bool RsvpStandby::Frrs::Frr::has_data() const
{
    if (is_presence_container) return true;
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
	|| path_status.is_set
	|| reservation_status.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data());
}

bool RsvpStandby::Frrs::Frr::has_operation() const
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
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(reservation_status.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation());
}

std::string RsvpStandby::Frrs::Frr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::Frr::get_name_leaf_data() const
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
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (reservation_status.is_set || is_set(reservation_status.yfilter)) leaf_name_data.push_back(reservation_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<RsvpStandby::Frrs::Frr::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::Frrs::Frr::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        _children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    return _children;
}

void RsvpStandby::Frrs::Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-status")
    {
        reservation_status = value;
        reservation_status.value_namespace = name_space;
        reservation_status.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Frrs::Frr::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "reservation-status")
    {
        reservation_status.yfilter = yfilter;
    }
}

bool RsvpStandby::Frrs::Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "path-status" || name == "reservation-status")
        return true;
    return false;
}

RsvpStandby::Frrs::Frr::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::Frr::Session::~Session()
{
}

bool RsvpStandby::Frrs::Frr::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::Frrs::Frr::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::Frrs::Frr::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::Frr::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::Frr::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::Frr::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::Frr::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
}

void RsvpStandby::Frrs::Frr::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::Frrs::Frr::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::Frrs::Frr::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
        ,
    ipv4(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4>())
    , ipv4_lsp_session(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::Frr::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::Frr::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        _children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        _children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        _children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return _children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

RsvpStandby::Frrs::Frr::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::Frrs::Frr::S2lSubLsp::~S2lSubLsp()
{
}

bool RsvpStandby::Frrs::Frr::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool RsvpStandby::Frrs::Frr::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string RsvpStandby::Frrs::Frr::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::Frrs::Frr::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::Frrs::Frr::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::Frrs::Frr::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::Frrs::Frr::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::Frrs::Frr::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::Frrs::Frr::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool RsvpStandby::Frrs::Frr::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBriefs()
    :
    request_brief(this, {})
{

    yang_name = "request-briefs"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::~RequestBriefs()
{
}

bool RsvpStandby::RequestBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<request_brief.len(); index++)
    {
        if(request_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::RequestBriefs::has_operation() const
{
    for (std::size_t index=0; index<request_brief.len(); index++)
    {
        if(request_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::RequestBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request-brief")
    {
        auto ent_ = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief>();
        ent_->parent = this;
        request_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : request_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::RequestBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::RequestBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::RequestBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-brief")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::RequestBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint32, "destination-port"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::uint32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::uint32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    output_interface{YType::str, "output-interface"}
        ,
    session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session>())
    , s2l_sub_lsp(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp>())
    , flow_spec(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::FlowSpec>())
    , generic_flow_spec(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec>())
    , filter(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter>())
    , style(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Style>())
{
    session->parent = this;
    s2l_sub_lsp->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    filter->parent = this;
    style->parent = this;

    yang_name = "request-brief"; yang_parent_name = "request-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::~RequestBrief()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::has_data() const
{
    if (is_presence_container) return true;
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
	|| output_interface.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::has_operation() const
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
	|| ydk::is_set(output_interface.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-brief";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::get_name_leaf_data() const
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
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Style>();
        }
        return style;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        _children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(flow_spec != nullptr)
    {
        _children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        _children["generic-flow-spec"] = generic_flow_spec;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(style != nullptr)
    {
        _children["style"] = style;
    }

    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestBriefs::RequestBrief::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestBriefs::RequestBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "flow-spec" || name == "generic-flow-spec" || name == "filter" || name == "style" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "output-interface")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Session::~Session()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
        ,
    ipv4(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4>())
    , ipv4_lsp_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        _children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        _children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        _children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::~S2lSubLsp()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestBriefs::RequestBrief::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::FlowSpec()
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

    yang_name = "flow-spec"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::~FlowSpec()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_peak_rate.is_set
	|| flow_min_unit.is_set
	|| flow_max_unit.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set
	|| flow_qos.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::has_operation() const
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

std::string RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
        ,
    g709otn_flow_spec(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_flow_spec != nullptr)
    {
        _children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::G709otnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::~G709otnFlowSpec()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::~Filter()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_filter != nullptr)
    {
        _children["rsvp-filter"] = rsvp_filter;
    }

    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
        ,
    udp_ipv4_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session>())
    , p2mp_ipv4_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_data() const
{
    if (is_presence_container) return true;
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp_ipv4_session != nullptr)
    {
        _children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        _children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::P2mpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::~P2mpIpv4Session()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

RsvpStandby::RequestBriefs::RequestBrief::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestBriefs::RequestBrief::Style::~Style()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Style::has_data() const
{
    if (is_presence_container) return true;
    return reservation_type.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestBriefs::RequestBrief::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestBriefs::RequestBrief::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestBriefs::RequestBrief::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestBriefs::RequestBrief::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestBriefs::RequestBrief::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetails()
    :
    request_detail(this, {})
{

    yang_name = "request-details"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::~RequestDetails()
{
}

bool RsvpStandby::RequestDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<request_detail.len(); index++)
    {
        if(request_detail[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::RequestDetails::has_operation() const
{
    for (std::size_t index=0; index<request_detail.len(); index++)
    {
        if(request_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::RequestDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request-detail")
    {
        auto ent_ = std::make_shared<RsvpStandby::RequestDetails::RequestDetail>();
        ent_->parent = this;
        request_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : request_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::RequestDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::RequestDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::RequestDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-detail")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::RequestDetail()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint32, "destination-port"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::uint32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::uint32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    output_interface{YType::str, "output-interface"}
        ,
    session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session>())
    , s2l_sub_lsp(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp>())
    , flow_spec(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::FlowSpec>())
    , generic_flow_spec(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec>())
    , filter(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter>())
    , style(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Style>())
    , req_flags(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::ReqFlags>())
    , hop(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Hop>())
    , header(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Header>())
    , policy_sources(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicySources>())
    , policy_flags(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicyFlags>())
    , policy_query_flags(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags>())
    , psb_key(this, {})
    , rsb_key(this, {})
{
    session->parent = this;
    s2l_sub_lsp->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    filter->parent = this;
    style->parent = this;
    req_flags->parent = this;
    hop->parent = this;
    header->parent = this;
    policy_sources->parent = this;
    policy_flags->parent = this;
    policy_query_flags->parent = this;

    yang_name = "request-detail"; yang_parent_name = "request-details"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::~RequestDetail()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psb_key.len(); index++)
    {
        if(psb_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsb_key.len(); index++)
    {
        if(rsb_key[index]->has_data())
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
	|| output_interface.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (style !=  nullptr && style->has_data())
	|| (req_flags !=  nullptr && req_flags->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (policy_sources !=  nullptr && policy_sources->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::has_operation() const
{
    for (std::size_t index=0; index<psb_key.len(); index++)
    {
        if(psb_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsb_key.len(); index++)
    {
        if(rsb_key[index]->has_operation())
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
	|| ydk::is_set(output_interface.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (style !=  nullptr && style->has_operation())
	|| (req_flags !=  nullptr && req_flags->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (policy_sources !=  nullptr && policy_sources->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::get_name_leaf_data() const
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
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Style>();
        }
        return style;
    }

    if(child_yang_name == "req-flags")
    {
        if(req_flags == nullptr)
        {
            req_flags = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::ReqFlags>();
        }
        return req_flags;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Header>();
        }
        return header;
    }

    if(child_yang_name == "policy-sources")
    {
        if(policy_sources == nullptr)
        {
            policy_sources = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicySources>();
        }
        return policy_sources;
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    if(child_yang_name == "psb-key")
    {
        auto ent_ = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PsbKey>();
        ent_->parent = this;
        psb_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rsb-key")
    {
        auto ent_ = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::RsbKey>();
        ent_->parent = this;
        rsb_key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        _children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(flow_spec != nullptr)
    {
        _children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        _children["generic-flow-spec"] = generic_flow_spec;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(style != nullptr)
    {
        _children["style"] = style;
    }

    if(req_flags != nullptr)
    {
        _children["req-flags"] = req_flags;
    }

    if(hop != nullptr)
    {
        _children["hop"] = hop;
    }

    if(header != nullptr)
    {
        _children["header"] = header;
    }

    if(policy_sources != nullptr)
    {
        _children["policy-sources"] = policy_sources;
    }

    if(policy_flags != nullptr)
    {
        _children["policy-flags"] = policy_flags;
    }

    if(policy_query_flags != nullptr)
    {
        _children["policy-query-flags"] = policy_query_flags;
    }

    count_ = 0;
    for (auto ent_ : psb_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rsb_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "flow-spec" || name == "generic-flow-spec" || name == "filter" || name == "style" || name == "req-flags" || name == "hop" || name == "header" || name == "policy-sources" || name == "policy-flags" || name == "policy-query-flags" || name == "psb-key" || name == "rsb-key" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "output-interface")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Session::~Session()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::RequestDetails::RequestDetail::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
        ,
    ipv4(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4>())
    , ipv4_lsp_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        _children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        _children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        _children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::~S2lSubLsp()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::FlowSpec::FlowSpec()
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

    yang_name = "flow-spec"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::FlowSpec::~FlowSpec()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_peak_rate.is_set
	|| flow_min_unit.is_set
	|| flow_max_unit.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set
	|| flow_qos.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::FlowSpec::has_operation() const
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

std::string RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
        ,
    g709otn_flow_spec(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::~GenericFlowSpec()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_flow_spec != nullptr)
    {
        _children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::G709otnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::~G709otnFlowSpec()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Filter::Filter()
    :
    rsvp_filter(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Filter::~Filter()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_filter != nullptr)
    {
        _children["rsvp-filter"] = rsvp_filter;
    }

    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
        ,
    udp_ipv4_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session>())
    , p2mp_ipv4_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::~RsvpFilter()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::has_data() const
{
    if (is_presence_container) return true;
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp_ipv4_session != nullptr)
    {
        _children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        _children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::P2mpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::~P2mpIpv4Session()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Style::~Style()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Style::has_data() const
{
    if (is_presence_container) return true;
    return reservation_type.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::ReqFlags::ReqFlags()
    :
    is_local_receiver{YType::boolean, "is-local-receiver"},
    is_refreshing{YType::boolean, "is-refreshing"},
    is_send_confirm{YType::boolean, "is-send-confirm"},
    is_ack_outstanding{YType::boolean, "is-ack-outstanding"},
    is_message_id_allocated{YType::boolean, "is-message-id-allocated"},
    is_nack_received{YType::boolean, "is-nack-received"},
    is_retransmit{YType::boolean, "is-retransmit"},
    is_paced{YType::boolean, "is-paced"},
    is_label_request_in_path{YType::boolean, "is-label-request-in-path"},
    is_rro_in_path{YType::boolean, "is-rro-in-path"},
    is_record_label_in_path{YType::boolean, "is-record-label-in-path"},
    is_merge_point{YType::boolean, "is-merge-point"}
{

    yang_name = "req-flags"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::ReqFlags::~ReqFlags()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::ReqFlags::has_data() const
{
    if (is_presence_container) return true;
    return is_local_receiver.is_set
	|| is_refreshing.is_set
	|| is_send_confirm.is_set
	|| is_ack_outstanding.is_set
	|| is_message_id_allocated.is_set
	|| is_nack_received.is_set
	|| is_retransmit.is_set
	|| is_paced.is_set
	|| is_label_request_in_path.is_set
	|| is_rro_in_path.is_set
	|| is_record_label_in_path.is_set
	|| is_merge_point.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::ReqFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_local_receiver.yfilter)
	|| ydk::is_set(is_refreshing.yfilter)
	|| ydk::is_set(is_send_confirm.yfilter)
	|| ydk::is_set(is_ack_outstanding.yfilter)
	|| ydk::is_set(is_message_id_allocated.yfilter)
	|| ydk::is_set(is_nack_received.yfilter)
	|| ydk::is_set(is_retransmit.yfilter)
	|| ydk::is_set(is_paced.yfilter)
	|| ydk::is_set(is_label_request_in_path.yfilter)
	|| ydk::is_set(is_rro_in_path.yfilter)
	|| ydk::is_set(is_record_label_in_path.yfilter)
	|| ydk::is_set(is_merge_point.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "req-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_local_receiver.is_set || is_set(is_local_receiver.yfilter)) leaf_name_data.push_back(is_local_receiver.get_name_leafdata());
    if (is_refreshing.is_set || is_set(is_refreshing.yfilter)) leaf_name_data.push_back(is_refreshing.get_name_leafdata());
    if (is_send_confirm.is_set || is_set(is_send_confirm.yfilter)) leaf_name_data.push_back(is_send_confirm.get_name_leafdata());
    if (is_ack_outstanding.is_set || is_set(is_ack_outstanding.yfilter)) leaf_name_data.push_back(is_ack_outstanding.get_name_leafdata());
    if (is_message_id_allocated.is_set || is_set(is_message_id_allocated.yfilter)) leaf_name_data.push_back(is_message_id_allocated.get_name_leafdata());
    if (is_nack_received.is_set || is_set(is_nack_received.yfilter)) leaf_name_data.push_back(is_nack_received.get_name_leafdata());
    if (is_retransmit.is_set || is_set(is_retransmit.yfilter)) leaf_name_data.push_back(is_retransmit.get_name_leafdata());
    if (is_paced.is_set || is_set(is_paced.yfilter)) leaf_name_data.push_back(is_paced.get_name_leafdata());
    if (is_label_request_in_path.is_set || is_set(is_label_request_in_path.yfilter)) leaf_name_data.push_back(is_label_request_in_path.get_name_leafdata());
    if (is_rro_in_path.is_set || is_set(is_rro_in_path.yfilter)) leaf_name_data.push_back(is_rro_in_path.get_name_leafdata());
    if (is_record_label_in_path.is_set || is_set(is_record_label_in_path.yfilter)) leaf_name_data.push_back(is_record_label_in_path.get_name_leafdata());
    if (is_merge_point.is_set || is_set(is_merge_point.yfilter)) leaf_name_data.push_back(is_merge_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::ReqFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-local-receiver")
    {
        is_local_receiver = value;
        is_local_receiver.value_namespace = name_space;
        is_local_receiver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refreshing")
    {
        is_refreshing = value;
        is_refreshing.value_namespace = name_space;
        is_refreshing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-send-confirm")
    {
        is_send_confirm = value;
        is_send_confirm.value_namespace = name_space;
        is_send_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ack-outstanding")
    {
        is_ack_outstanding = value;
        is_ack_outstanding.value_namespace = name_space;
        is_ack_outstanding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-id-allocated")
    {
        is_message_id_allocated = value;
        is_message_id_allocated.value_namespace = name_space;
        is_message_id_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nack-received")
    {
        is_nack_received = value;
        is_nack_received.value_namespace = name_space;
        is_nack_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-retransmit")
    {
        is_retransmit = value;
        is_retransmit.value_namespace = name_space;
        is_retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-paced")
    {
        is_paced = value;
        is_paced.value_namespace = name_space;
        is_paced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-request-in-path")
    {
        is_label_request_in_path = value;
        is_label_request_in_path.value_namespace = name_space;
        is_label_request_in_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rro-in-path")
    {
        is_rro_in_path = value;
        is_rro_in_path.value_namespace = name_space;
        is_rro_in_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-record-label-in-path")
    {
        is_record_label_in_path = value;
        is_record_label_in_path.value_namespace = name_space;
        is_record_label_in_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point = value;
        is_merge_point.value_namespace = name_space;
        is_merge_point.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::ReqFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-local-receiver")
    {
        is_local_receiver.yfilter = yfilter;
    }
    if(value_path == "is-refreshing")
    {
        is_refreshing.yfilter = yfilter;
    }
    if(value_path == "is-send-confirm")
    {
        is_send_confirm.yfilter = yfilter;
    }
    if(value_path == "is-ack-outstanding")
    {
        is_ack_outstanding.yfilter = yfilter;
    }
    if(value_path == "is-message-id-allocated")
    {
        is_message_id_allocated.yfilter = yfilter;
    }
    if(value_path == "is-nack-received")
    {
        is_nack_received.yfilter = yfilter;
    }
    if(value_path == "is-retransmit")
    {
        is_retransmit.yfilter = yfilter;
    }
    if(value_path == "is-paced")
    {
        is_paced.yfilter = yfilter;
    }
    if(value_path == "is-label-request-in-path")
    {
        is_label_request_in_path.yfilter = yfilter;
    }
    if(value_path == "is-rro-in-path")
    {
        is_rro_in_path.yfilter = yfilter;
    }
    if(value_path == "is-record-label-in-path")
    {
        is_record_label_in_path.yfilter = yfilter;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::ReqFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-local-receiver" || name == "is-refreshing" || name == "is-send-confirm" || name == "is-ack-outstanding" || name == "is-message-id-allocated" || name == "is-nack-received" || name == "is-retransmit" || name == "is-paced" || name == "is-label-request-in-path" || name == "is-rro-in-path" || name == "is-record-label-in-path" || name == "is-merge-point")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{

    yang_name = "hop"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Hop::~Hop()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Hop::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_logical_interface_name.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.yfilter)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::Hop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-logical-interface-name")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::Header::Header()
    :
    rsvp_version{YType::uint8, "rsvp-version"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    ip_source_address{YType::str, "ip-source-address"}
{

    yang_name = "header"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::Header::~Header()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Header::has_data() const
{
    if (is_presence_container) return true;
    return rsvp_version.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_ttl.is_set
	|| rsvp_message_type.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| ip_source_address.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Header::has_operation() const
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

std::string RsvpStandby::RequestDetails::RequestDetail::Header::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::Header::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::Header::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-version" || name == "rsvp-header-flags" || name == "rsvp-ttl" || name == "rsvp-message-type" || name == "ip-tos" || name == "ip-ttl" || name == "ip-source-address")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::PolicySources::PolicySources()
    :
    is_te_link{YType::boolean, "is-te-link"},
    is_local{YType::boolean, "is-local"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_cable{YType::boolean, "is-cable"}
{

    yang_name = "policy-sources"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::PolicySources::~PolicySources()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicySources::has_data() const
{
    if (is_presence_container) return true;
    return is_te_link.is_set
	|| is_local.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_cable.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicySources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_te_link.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_cops.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_cable.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_te_link.is_set || is_set(is_te_link.yfilter)) leaf_name_data.push_back(is_te_link.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.yfilter)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_cable.is_set || is_set(is_cable.yfilter)) leaf_name_data.push_back(is_cable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::PolicySources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::PolicySources::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::PolicySources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-te-link" || name == "is-local" || name == "is-cops" || name == "is-default" || name == "is-cable")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_installed{YType::boolean, "is-installed"},
    is_forwarding{YType::boolean, "is-forwarding"}
{

    yang_name = "policy-flags"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::~PolicyFlags()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::has_data() const
{
    if (is_presence_container) return true;
    return is_accepted.is_set
	|| is_installed.is_set
	|| is_forwarding.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_installed.yfilter)
	|| ydk::is_set(is_forwarding.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.yfilter)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-installed" || name == "is-forwarding")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"},
    is_bypass{YType::boolean, "is-bypass"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::has_data() const
{
    if (is_presence_container) return true;
    return is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set
	|| is_bypass.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter)
	|| ydk::is_set(is_bypass.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());
    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-needed" || name == "is-report-required" || name == "is-resync" || name == "is-bypass")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::PsbKey::PsbKey()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    destination_address{YType::str, "destination-address"},
    destination_port_or_tunnel_id{YType::uint32, "destination-port-or-tunnel-id"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port_or_lsp_id{YType::uint32, "source-port-or-lsp-id"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"},
    vrfid{YType::uint32, "vrfid"}
{

    yang_name = "psb-key"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::PsbKey::~PsbKey()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::PsbKey::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| destination_address.is_set
	|| destination_port_or_tunnel_id.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port_or_lsp_id.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrfid.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::PsbKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port_or_tunnel_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port_or_lsp_id.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrfid.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-key";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port_or_tunnel_id.is_set || is_set(destination_port_or_tunnel_id.yfilter)) leaf_name_data.push_back(destination_port_or_tunnel_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port_or_lsp_id.is_set || is_set(source_port_or_lsp_id.yfilter)) leaf_name_data.push_back(source_port_or_lsp_id.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::PsbKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id = value;
        destination_port_or_tunnel_id.value_namespace = name_space;
        destination_port_or_tunnel_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id = value;
        source_port_or_lsp_id.value_namespace = name_space;
        source_port_or_lsp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::PsbKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id.yfilter = yfilter;
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
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::PsbKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "destination-address" || name == "destination-port-or-tunnel-id" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "source-address" || name == "source-port-or-lsp-id" || name == "p2mp-sub-group-origin" || name == "sub-group-id" || name == "vrfid")
        return true;
    return false;
}

RsvpStandby::RequestDetails::RequestDetail::RsbKey::RsbKey()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    destination_address{YType::str, "destination-address"},
    destination_port_or_tunnel_id{YType::uint32, "destination-port-or-tunnel-id"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port_or_lsp_id{YType::uint32, "source-port-or-lsp-id"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"},
    vrfid{YType::uint32, "vrfid"}
{

    yang_name = "rsb-key"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::RequestDetails::RequestDetail::RsbKey::~RsbKey()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::RsbKey::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| destination_address.is_set
	|| destination_port_or_tunnel_id.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port_or_lsp_id.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrfid.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::RsbKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port_or_tunnel_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port_or_lsp_id.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrfid.yfilter);
}

std::string RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-key";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port_or_tunnel_id.is_set || is_set(destination_port_or_tunnel_id.yfilter)) leaf_name_data.push_back(destination_port_or_tunnel_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port_or_lsp_id.is_set || is_set(source_port_or_lsp_id.yfilter)) leaf_name_data.push_back(source_port_or_lsp_id.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RsvpStandby::RequestDetails::RequestDetail::RsbKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id = value;
        destination_port_or_tunnel_id.value_namespace = name_space;
        destination_port_or_tunnel_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id = value;
        source_port_or_lsp_id.value_namespace = name_space;
        source_port_or_lsp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void RsvpStandby::RequestDetails::RequestDetail::RsbKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id.yfilter = yfilter;
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
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool RsvpStandby::RequestDetails::RequestDetail::RsbKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "destination-address" || name == "destination-port-or-tunnel-id" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "source-address" || name == "source-port-or-lsp-id" || name == "p2mp-sub-group-origin" || name == "sub-group-id" || name == "vrfid")
        return true;
    return false;
}

RsvpStandby::InterfaceBriefs::InterfaceBriefs()
    :
    interface_brief(this, {"interface_name"})
{

    yang_name = "interface-briefs"; yang_parent_name = "rsvp-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::InterfaceBriefs::~InterfaceBriefs()
{
}

bool RsvpStandby::InterfaceBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_brief.len(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.len(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RsvpStandby::InterfaceBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        auto ent_ = std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief>();
        ent_->parent = this;
        interface_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RsvpStandby::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RsvpStandby::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RsvpStandby::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
        ,
    bandwidth_information(std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string RsvpStandby::InterfaceBriefs::InterfaceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/interface-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string RsvpStandby::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RsvpStandby::InterfaceBriefs::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RsvpStandby::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RsvpStandby::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth_information != nullptr)
    {
        _children["bandwidth-information"] = bandwidth_information;
    }

    return _children;
}

void RsvpStandby::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void RsvpStandby::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "interface-name" || name == "interface-name-xr")
        return true;
    return false;
}


}
}

