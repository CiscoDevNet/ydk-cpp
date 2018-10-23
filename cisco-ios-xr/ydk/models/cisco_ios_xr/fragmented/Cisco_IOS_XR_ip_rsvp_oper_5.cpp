
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

Rsvp::RequestDetails::RequestDetail::ReqFlags::ReqFlags()
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

Rsvp::RequestDetails::RequestDetail::ReqFlags::~ReqFlags()
{
}

bool Rsvp::RequestDetails::RequestDetail::ReqFlags::has_data() const
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

bool Rsvp::RequestDetails::RequestDetail::ReqFlags::has_operation() const
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

std::string Rsvp::RequestDetails::RequestDetail::ReqFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::ReqFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "req-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::ReqFlags::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::ReqFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::ReqFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::ReqFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RequestDetails::RequestDetail::ReqFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RequestDetails::RequestDetail::ReqFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-local-receiver" || name == "is-refreshing" || name == "is-send-confirm" || name == "is-ack-outstanding" || name == "is-message-id-allocated" || name == "is-nack-received" || name == "is-retransmit" || name == "is-paced" || name == "is-label-request-in-path" || name == "is-rro-in-path" || name == "is-record-label-in-path" || name == "is-merge-point")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{

    yang_name = "hop"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Hop::~Hop()
{
}

bool Rsvp::RequestDetails::RequestDetail::Hop::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_logical_interface_name.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.yfilter)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RequestDetails::RequestDetail::Hop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RequestDetails::RequestDetail::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "neighbor-logical-interface-name")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Header::Header()
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

Rsvp::RequestDetails::RequestDetail::Header::~Header()
{
}

bool Rsvp::RequestDetails::RequestDetail::Header::has_data() const
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

bool Rsvp::RequestDetails::RequestDetail::Header::has_operation() const
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

std::string Rsvp::RequestDetails::RequestDetail::Header::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Header::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RequestDetails::RequestDetail::Header::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RequestDetails::RequestDetail::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-version" || name == "rsvp-header-flags" || name == "rsvp-ttl" || name == "rsvp-message-type" || name == "ip-tos" || name == "ip-ttl" || name == "ip-source-address")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::PolicySources::PolicySources()
    :
    is_te_link{YType::boolean, "is-te-link"},
    is_local{YType::boolean, "is-local"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_cable{YType::boolean, "is-cable"}
{

    yang_name = "policy-sources"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::PolicySources::~PolicySources()
{
}

bool Rsvp::RequestDetails::RequestDetail::PolicySources::has_data() const
{
    if (is_presence_container) return true;
    return is_te_link.is_set
	|| is_local.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_cable.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::PolicySources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_te_link.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_cops.yfilter)
	|| ydk::is_set(is_default.yfilter)
	|| ydk::is_set(is_cable.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::PolicySources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::PolicySources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::PolicySources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_te_link.is_set || is_set(is_te_link.yfilter)) leaf_name_data.push_back(is_te_link.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.yfilter)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_cable.is_set || is_set(is_cable.yfilter)) leaf_name_data.push_back(is_cable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::PolicySources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::PolicySources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::PolicySources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RequestDetails::RequestDetail::PolicySources::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RequestDetails::RequestDetail::PolicySources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-te-link" || name == "is-local" || name == "is-cops" || name == "is-default" || name == "is-cable")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_installed{YType::boolean, "is-installed"},
    is_forwarding{YType::boolean, "is-forwarding"}
{

    yang_name = "policy-flags"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::PolicyFlags::~PolicyFlags()
{
}

bool Rsvp::RequestDetails::RequestDetail::PolicyFlags::has_data() const
{
    if (is_presence_container) return true;
    return is_accepted.is_set
	|| is_installed.is_set
	|| is_forwarding.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::PolicyFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_accepted.yfilter)
	|| ydk::is_set(is_installed.yfilter)
	|| ydk::is_set(is_forwarding.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.yfilter)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.yfilter)) leaf_name_data.push_back(is_installed.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.yfilter)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::PolicyFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::PolicyFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RequestDetails::RequestDetail::PolicyFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RequestDetails::RequestDetail::PolicyFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-accepted" || name == "is-installed" || name == "is-forwarding")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"},
    is_bypass{YType::boolean, "is-bypass"}
{

    yang_name = "policy-query-flags"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::has_data() const
{
    if (is_presence_container) return true;
    return is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set
	|| is_bypass.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_needed.yfilter)
	|| ydk::is_set(is_report_required.yfilter)
	|| ydk::is_set(is_resync.yfilter)
	|| ydk::is_set(is_bypass.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_needed.is_set || is_set(is_needed.yfilter)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.yfilter)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.yfilter)) leaf_name_data.push_back(is_resync.get_name_leafdata());
    if (is_bypass.is_set || is_set(is_bypass.yfilter)) leaf_name_data.push_back(is_bypass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-needed" || name == "is-report-required" || name == "is-resync" || name == "is-bypass")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::PsbKey::PsbKey()
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

Rsvp::RequestDetails::RequestDetail::PsbKey::~PsbKey()
{
}

bool Rsvp::RequestDetails::RequestDetail::PsbKey::has_data() const
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

bool Rsvp::RequestDetails::RequestDetail::PsbKey::has_operation() const
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

std::string Rsvp::RequestDetails::RequestDetail::PsbKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::PsbKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::PsbKey::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::PsbKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::PsbKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::PsbKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RequestDetails::RequestDetail::PsbKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RequestDetails::RequestDetail::PsbKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "destination-address" || name == "destination-port-or-tunnel-id" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "source-address" || name == "source-port-or-lsp-id" || name == "p2mp-sub-group-origin" || name == "sub-group-id" || name == "vrfid")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::RsbKey::RsbKey()
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

Rsvp::RequestDetails::RequestDetail::RsbKey::~RsbKey()
{
}

bool Rsvp::RequestDetails::RequestDetail::RsbKey::has_data() const
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

bool Rsvp::RequestDetails::RequestDetail::RsbKey::has_operation() const
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

std::string Rsvp::RequestDetails::RequestDetail::RsbKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::RsbKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::RsbKey::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::RsbKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::RsbKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::RsbKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::RequestDetails::RequestDetail::RsbKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::RequestDetails::RequestDetail::RsbKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "destination-address" || name == "destination-port-or-tunnel-id" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "source-address" || name == "source-port-or-lsp-id" || name == "p2mp-sub-group-origin" || name == "sub-group-id" || name == "vrfid")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBriefs()
    :
    interface_brief(this, {"interface_name"})
{

    yang_name = "interface-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Rsvp::InterfaceBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_brief.len(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.len(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        auto ent_ = std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief>();
        ent_->parent = this;
        interface_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceBriefs::get_children() const
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

void Rsvp::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
        ,
    bandwidth_information(std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth_information != nullptr)
    {
        _children["bandwidth-information"] = bandwidth_information;
    }

    return _children;
}

void Rsvp::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "interface-name" || name == "interface-name-xr")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
        ,
    pre_standard_dste_interface(std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface>())
    , standard_dste_interface(std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::has_data() const
{
    if (is_presence_container) return true;
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_children() const
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

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
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

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_subpool_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set;
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter);
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-subpool-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::has_data() const
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

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::has_operation() const
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

std::string Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetaileds()
    :
    session_detailed(this, {})
{

    yang_name = "session-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::~SessionDetaileds()
{
}

bool Rsvp::SessionDetaileds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_detailed.len(); index++)
    {
        if(session_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::has_operation() const
{
    for (std::size_t index=0; index<session_detailed.len(); index++)
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detailed")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed>();
        ent_->parent = this;
        session_detailed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_detailed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    destination_port{YType::uint32, "destination-port"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::uint32, "p2mp-id"},
    vrf_name{YType::str, "vrf-name"}
        ,
    compact(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact>())
    , s2l_sub_lsp(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp>())
    , psb_rsb_info(this, {})
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
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psb_rsb_info.len(); index++)
    {
        if(psb_rsb_info[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| p2mp_id.is_set
	|| vrf_name.is_set
	|| (compact !=  nullptr && compact->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::has_operation() const
{
    for (std::size_t index=0; index<psb_rsb_info.len(); index++)
    {
        if(psb_rsb_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
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
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "compact")
    {
        if(compact == nullptr)
        {
            compact = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact>();
        }
        return compact;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "psb-rsb-info")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo>();
        ent_->parent = this;
        psb_rsb_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(compact != nullptr)
    {
        _children["compact"] = compact;
    }

    if(s2l_sub_lsp != nullptr)
    {
        _children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    count_ = 0;
    for (auto ent_ : psb_rsb_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "compact" || name == "s2l-sub-lsp" || name == "psb-rsb-info" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Compact()
    :
    ps_bs{YType::uint32, "ps-bs"},
    rs_bs{YType::uint32, "rs-bs"},
    requests{YType::uint32, "requests"},
    detail_list_size{YType::uint32, "detail-list-size"}
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
    if (is_presence_container) return true;
    return ps_bs.is_set
	|| rs_bs.is_set
	|| requests.is_set
	|| detail_list_size.is_set
	|| (session !=  nullptr && session->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ps_bs.yfilter)
	|| ydk::is_set(rs_bs.yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(detail_list_size.yfilter)
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

    if (ps_bs.is_set || is_set(ps_bs.yfilter)) leaf_name_data.push_back(ps_bs.get_name_leafdata());
    if (rs_bs.is_set || is_set(rs_bs.yfilter)) leaf_name_data.push_back(rs_bs.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (detail_list_size.is_set || is_set(detail_list_size.yfilter)) leaf_name_data.push_back(detail_list_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ps-bs")
    {
        ps_bs = value;
        ps_bs.value_namespace = name_space;
        ps_bs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rs-bs")
    {
        rs_bs = value;
        rs_bs.value_namespace = name_space;
        rs_bs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail-list-size")
    {
        detail_list_size = value;
        detail_list_size.value_namespace = name_space;
        detail_list_size.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ps-bs")
    {
        ps_bs.yfilter = yfilter;
    }
    if(value_path == "rs-bs")
    {
        rs_bs.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "detail-list-size")
    {
        detail_list_size.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "ps-bs" || name == "rs-bs" || name == "requests" || name == "detail-list-size")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
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
    , ipv4_lsp_session(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_children() const
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
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
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
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
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
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
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
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "session-detailed"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::~S2lSubLsp()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbRsbInfo()
    :
    psb_info(this, {})
    , rsb_info(this, {})
{

    yang_name = "psb-rsb-info"; yang_parent_name = "session-detailed"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::~PsbRsbInfo()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psb_info.len(); index++)
    {
        if(psb_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsb_info.len(); index++)
    {
        if(rsb_info[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_operation() const
{
    for (std::size_t index=0; index<psb_info.len(); index++)
    {
        if(psb_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsb_info.len(); index++)
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psb-info")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo>();
        ent_->parent = this;
        psb_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rsb-info")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo>();
        ent_->parent = this;
        rsb_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : psb_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rsb_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    is_valid{YType::boolean, "is-valid"},
    destination_address{YType::str, "destination-address"},
    lsp_id{YType::uint32, "lsp-id"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"},
    in_interface{YType::str, "in-interface"},
    in_label{YType::uint32, "in-label"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"},
    is_bad_address{YType::boolean, "is-bad-address"},
    incoming_interface_address{YType::str, "incoming-interface-address"},
    is_ero_valid{YType::boolean, "is-ero-valid"},
    is_rro_valid{YType::boolean, "is-rro-valid"},
    is_traffic_spec_valid{YType::boolean, "is-traffic-spec-valid"},
    tunnel_name{YType::str, "tunnel-name"}
        ,
    generic_in_label(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel>())
    , traffic_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec>())
    , generic_traffic_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec>())
    , association(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association>())
    , protection(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection>())
    , reverse_lsp(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp>())
    , ero(this, {})
    , rro(this, {})
{
    generic_in_label->parent = this;
    traffic_spec->parent = this;
    generic_traffic_spec->parent = this;
    association->parent = this;
    protection->parent = this;
    reverse_lsp->parent = this;

    yang_name = "psb-info"; yang_parent_name = "psb-rsb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::~PsbInfo()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ero.len(); index++)
    {
        if(ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rro.len(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    return is_valid.is_set
	|| destination_address.is_set
	|| lsp_id.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set
	|| in_interface.is_set
	|| in_label.is_set
	|| lsp_wrap_label.is_set
	|| is_bad_address.is_set
	|| incoming_interface_address.is_set
	|| is_ero_valid.is_set
	|| is_rro_valid.is_set
	|| is_traffic_spec_valid.is_set
	|| tunnel_name.is_set
	|| (generic_in_label !=  nullptr && generic_in_label->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_operation() const
{
    for (std::size_t index=0; index<ero.len(); index++)
    {
        if(ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rro.len(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(in_interface.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(lsp_wrap_label.yfilter)
	|| ydk::is_set(is_bad_address.yfilter)
	|| ydk::is_set(incoming_interface_address.yfilter)
	|| ydk::is_set(is_ero_valid.yfilter)
	|| ydk::is_set(is_rro_valid.yfilter)
	|| ydk::is_set(is_traffic_spec_valid.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (generic_in_label !=  nullptr && generic_in_label->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
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

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (in_interface.is_set || is_set(in_interface.yfilter)) leaf_name_data.push_back(in_interface.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.yfilter)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());
    if (is_bad_address.is_set || is_set(is_bad_address.yfilter)) leaf_name_data.push_back(is_bad_address.get_name_leafdata());
    if (incoming_interface_address.is_set || is_set(incoming_interface_address.yfilter)) leaf_name_data.push_back(incoming_interface_address.get_name_leafdata());
    if (is_ero_valid.is_set || is_set(is_ero_valid.yfilter)) leaf_name_data.push_back(is_ero_valid.get_name_leafdata());
    if (is_rro_valid.is_set || is_set(is_rro_valid.yfilter)) leaf_name_data.push_back(is_rro_valid.get_name_leafdata());
    if (is_traffic_spec_valid.is_set || is_set(is_traffic_spec_valid.yfilter)) leaf_name_data.push_back(is_traffic_spec_valid.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-in-label")
    {
        if(generic_in_label == nullptr)
        {
            generic_in_label = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel>();
        }
        return generic_in_label;
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec == nullptr)
        {
            traffic_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec>();
        }
        return traffic_spec;
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association>();
        }
        return association;
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

    if(child_yang_name == "ero")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero>();
        ent_->parent = this;
        ero.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rro")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro>();
        ent_->parent = this;
        rro.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_in_label != nullptr)
    {
        _children["generic-in-label"] = generic_in_label;
    }

    if(traffic_spec != nullptr)
    {
        _children["traffic-spec"] = traffic_spec;
    }

    if(generic_traffic_spec != nullptr)
    {
        _children["generic-traffic-spec"] = generic_traffic_spec;
    }

    if(association != nullptr)
    {
        _children["association"] = association;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    if(reverse_lsp != nullptr)
    {
        _children["reverse-lsp"] = reverse_lsp;
    }

    count_ = 0;
    for (auto ent_ : ero.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rro.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
        lsp_wrap_label.value_namespace = name_space;
        lsp_wrap_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bad-address")
    {
        is_bad_address = value;
        is_bad_address.value_namespace = name_space;
        is_bad_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-interface-address")
    {
        incoming_interface_address = value;
        incoming_interface_address.value_namespace = name_space;
        incoming_interface_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "in-interface")
    {
        in_interface.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label.yfilter = yfilter;
    }
    if(value_path == "is-bad-address")
    {
        is_bad_address.yfilter = yfilter;
    }
    if(value_path == "incoming-interface-address")
    {
        incoming_interface_address.yfilter = yfilter;
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
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-in-label" || name == "traffic-spec" || name == "generic-traffic-spec" || name == "association" || name == "protection" || name == "reverse-lsp" || name == "ero" || name == "rro" || name == "is-valid" || name == "destination-address" || name == "lsp-id" || name == "p2mp-sub-group-origin" || name == "sub-group-id" || name == "in-interface" || name == "in-label" || name == "lsp-wrap-label" || name == "is-bad-address" || name == "incoming-interface-address" || name == "is-ero-valid" || name == "is-rro-valid" || name == "is-traffic-spec-valid" || name == "tunnel-name")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generalized_label != nullptr)
    {
        _children["generalized-label"] = generalized_label;
    }

    return _children;
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
    value_(this, {})
{

    yang_name = "generalized-label"; yang_parent_name = "generic-in-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<value_.len(); index++)
    {
        if(value_[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_operation() const
{
    for (std::size_t index=0; index<value_.len(); index++)
    {
        if(value_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value>();
        ent_->parent = this;
        value_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : value_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::Value()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "value"; yang_parent_name = "generalized-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::~Value()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-in-label/generalized-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"}
{

    yang_name = "traffic-spec"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::~TrafficSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_data() const
{
    if (is_presence_container) return true;
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_peak_rate.is_set
	|| traffic_min_unit.is_set
	|| traffic_max_unit.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter);
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
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-peak-rate" || name == "traffic-min-unit" || name == "traffic-max-unit")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
        ,
    g709otn_tspec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec>())
    , intsrv_tspec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_tspec != nullptr)
    {
        _children["g709otn-tspec"] = g709otn_tspec;
    }

    if(intsrv_tspec != nullptr)
    {
        _children["intsrv-tspec"] = intsrv_tspec;
    }

    return _children;
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::G709otnTspec()
    :
    traffic_signal_type{YType::uint8, "traffic-signal-type"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::~G709otnTspec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::has_data() const
{
    if (is_presence_container) return true;
    return traffic_signal_type.is_set
	|| traffic_nvc.is_set
	|| traffic_multiplier.is_set
	|| traffic_bit_rate.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709otnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-signal-type" || name == "traffic-nvc" || name == "traffic-multiplier" || name == "traffic-bit-rate")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    if (is_presence_container) return true;
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_peak_rate.is_set
	|| traffic_min_unit.is_set
	|| traffic_max_unit.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter);
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
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-peak-rate" || name == "traffic-min-unit" || name == "traffic-max-unit")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Association()
    :
    association_type{YType::enumeration, "association-type"}
        ,
    ipv4(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4>())
    , ipv6(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6>())
    , extended_ipv4(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4>())
    , extended_ipv6(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;
    extended_ipv4->parent = this;
    extended_ipv6->parent = this;

    yang_name = "association"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::~Association()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_data() const
{
    if (is_presence_container) return true;
    return association_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (extended_ipv4 !=  nullptr && extended_ipv4->has_data())
	|| (extended_ipv6 !=  nullptr && extended_ipv6->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (extended_ipv4 !=  nullptr && extended_ipv4->has_operation())
	|| (extended_ipv6 !=  nullptr && extended_ipv6->has_operation());
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(extended_ipv4 != nullptr)
    {
        _children["extended-ipv4"] = extended_ipv4;
    }

    if(extended_ipv6 != nullptr)
    {
        _children["extended-ipv6"] = extended_ipv6;
    }

    return _children;
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
    if(name == "ipv4" || name == "ipv6" || name == "extended-ipv4" || name == "extended-ipv6" || name == "association-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::Ipv4()
    :
    type{YType::uint16, "type"},
    id{YType::uint16, "id"},
    source{YType::str, "source"}
{

    yang_name = "ipv4"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::~Ipv4()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| source.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter);
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "source")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::Ipv6()
    :
    type{YType::uint16, "type"},
    id{YType::uint16, "id"},
    source{YType::str, "source"}
{

    yang_name = "ipv6"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::~Ipv6()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| source.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter);
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "source")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedIpv4()
    :
    type{YType::uint16, "type"},
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    global_source{YType::uint32, "global-source"}
        ,
    extended_id(this, {})
{

    yang_name = "extended-ipv4"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::~ExtendedIpv4()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_id.len(); index++)
    {
        if(extended_id[index]->has_data())
            return true;
    }
    return type.is_set
	|| id.is_set
	|| source.is_set
	|| global_source.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_operation() const
{
    for (std::size_t index=0; index<extended_id.len(); index++)
    {
        if(extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(global_source.yfilter);
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (global_source.is_set || is_set(global_source.yfilter)) leaf_name_data.push_back(global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-id")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId>();
        ent_->parent = this;
        extended_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "global-source")
    {
        global_source = value;
        global_source.value_namespace = name_space;
        global_source.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "global-source")
    {
        global_source.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-id" || name == "type" || name == "id" || name == "source" || name == "global-source")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::ExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-id"; yang_parent_name = "extended-ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::~ExtendedId()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/extended-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedIpv6()
    :
    type{YType::uint16, "type"},
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    global_source{YType::uint32, "global-source"}
        ,
    extended_id(this, {})
{

    yang_name = "extended-ipv6"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::~ExtendedIpv6()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_id.len(); index++)
    {
        if(extended_id[index]->has_data())
            return true;
    }
    return type.is_set
	|| id.is_set
	|| source.is_set
	|| global_source.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_operation() const
{
    for (std::size_t index=0; index<extended_id.len(); index++)
    {
        if(extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(global_source.yfilter);
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

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (global_source.is_set || is_set(global_source.yfilter)) leaf_name_data.push_back(global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-id")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId>();
        ent_->parent = this;
        extended_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "global-source")
    {
        global_source = value;
        global_source.value_namespace = name_space;
        global_source.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "global-source")
    {
        global_source.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-id" || name == "type" || name == "id" || name == "source" || name == "global-source")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::ExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-id"; yang_parent_name = "extended-ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::~ExtendedId()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/extended-ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::Protection()
    :
    s{YType::boolean, "s"},
    p{YType::boolean, "p"},
    n{YType::boolean, "n"},
    o{YType::boolean, "o"}
        ,
    lsp_flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags>())
    , link_flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags>())
{
    lsp_flags->parent = this;
    link_flags->parent = this;

    yang_name = "protection"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::~Protection()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_data() const
{
    if (is_presence_container) return true;
    return s.is_set
	|| p.is_set
	|| n.is_set
	|| o.is_set
	|| (lsp_flags !=  nullptr && lsp_flags->has_data())
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s.yfilter)
	|| ydk::is_set(p.yfilter)
	|| ydk::is_set(n.yfilter)
	|| ydk::is_set(o.yfilter)
	|| (lsp_flags !=  nullptr && lsp_flags->has_operation())
	|| (link_flags !=  nullptr && link_flags->has_operation());
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

    if (s.is_set || is_set(s.yfilter)) leaf_name_data.push_back(s.get_name_leafdata());
    if (p.is_set || is_set(p.yfilter)) leaf_name_data.push_back(p.get_name_leafdata());
    if (n.is_set || is_set(n.yfilter)) leaf_name_data.push_back(n.get_name_leafdata());
    if (o.is_set || is_set(o.yfilter)) leaf_name_data.push_back(o.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-flags")
    {
        if(lsp_flags == nullptr)
        {
            lsp_flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags>();
        }
        return lsp_flags;
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags>();
        }
        return link_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_flags != nullptr)
    {
        _children["lsp-flags"] = lsp_flags;
    }

    if(link_flags != nullptr)
    {
        _children["link-flags"] = link_flags;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s")
    {
        s = value;
        s.value_namespace = name_space;
        s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p")
    {
        p = value;
        p.value_namespace = name_space;
        p.value_namespace_prefix = name_space_prefix;
    }
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
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s")
    {
        s.yfilter = yfilter;
    }
    if(value_path == "p")
    {
        p.yfilter = yfilter;
    }
    if(value_path == "n")
    {
        n.yfilter = yfilter;
    }
    if(value_path == "o")
    {
        o.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-flags" || name == "link-flags" || name == "s" || name == "p" || name == "n" || name == "o")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::LspFlags()
    :
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"}
{

    yang_name = "lsp-flags"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::~LspFlags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_data() const
{
    if (is_presence_container) return true;
    return rerouting.is_set
	|| rerouting_no_et.is_set
	|| one_to_n_protection_et.is_set
	|| one_plus_one_uni.is_set
	|| one_plus_one_bi.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter);
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

    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rerouting" || name == "rerouting-no-et" || name == "one-to-n-protection-et" || name == "one-plus-one-uni" || name == "one-plus-one-bi")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::LinkFlags()
    :
    enhanced{YType::boolean, "enhanced"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    shared{YType::boolean, "shared"},
    unprotected{YType::boolean, "unprotected"},
    extra_traffic{YType::boolean, "extra-traffic"},
    reserved_bit1{YType::boolean, "reserved-bit1"},
    reserved_bit2{YType::boolean, "reserved-bit2"}
{

    yang_name = "link-flags"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::~LinkFlags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_data() const
{
    if (is_presence_container) return true;
    return enhanced.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| shared.is_set
	|| unprotected.is_set
	|| extra_traffic.is_set
	|| reserved_bit1.is_set
	|| reserved_bit2.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(shared.yfilter)
	|| ydk::is_set(unprotected.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(reserved_bit1.yfilter)
	|| ydk::is_set(reserved_bit2.yfilter);
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

    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());
    if (unprotected.is_set || is_set(unprotected.yfilter)) leaf_name_data.push_back(unprotected.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (reserved_bit1.is_set || is_set(reserved_bit1.yfilter)) leaf_name_data.push_back(reserved_bit1.get_name_leafdata());
    if (reserved_bit2.is_set || is_set(reserved_bit2.yfilter)) leaf_name_data.push_back(reserved_bit2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
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
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
    if(value_path == "unprotected")
    {
        unprotected.yfilter = yfilter;
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
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "ded1-plus1" || name == "ded1-to1" || name == "shared" || name == "unprotected" || name == "extra-traffic" || name == "reserved-bit1" || name == "reserved-bit2")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::ReverseLsp()
    :
    generic_traffic_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec>())
    , ero(this, {})
    , unsup_sub_object(this, {})
{
    generic_traffic_spec->parent = this;

    yang_name = "reverse-lsp"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::~ReverseLsp()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ero.len(); index++)
    {
        if(ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unsup_sub_object.len(); index++)
    {
        if(unsup_sub_object[index]->has_data())
            return true;
    }
    return (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_operation() const
{
    for (std::size_t index=0; index<ero.len(); index++)
    {
        if(ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unsup_sub_object.len(); index++)
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    if(child_yang_name == "ero")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero>();
        ent_->parent = this;
        ero.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unsup-sub-object")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject>();
        ent_->parent = this;
        unsup_sub_object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_traffic_spec != nullptr)
    {
        _children["generic-traffic-spec"] = generic_traffic_spec;
    }

    count_ = 0;
    for (auto ent_ : ero.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unsup_sub_object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-traffic-spec" || name == "ero" || name == "unsup-sub-object")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
        ,
    g709otn_tspec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec>())
    , intsrv_tspec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_tspec != nullptr)
    {
        _children["g709otn-tspec"] = g709otn_tspec;
    }

    if(intsrv_tspec != nullptr)
    {
        _children["intsrv-tspec"] = intsrv_tspec;
    }

    return _children;
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::G709otnTspec()
    :
    traffic_signal_type{YType::uint8, "traffic-signal-type"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::~G709otnTspec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::has_data() const
{
    if (is_presence_container) return true;
    return traffic_signal_type.is_set
	|| traffic_nvc.is_set
	|| traffic_multiplier.is_set
	|| traffic_bit_rate.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709otnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-signal-type" || name == "traffic-nvc" || name == "traffic-multiplier" || name == "traffic-bit-rate")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    if (is_presence_container) return true;
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_peak_rate.is_set
	|| traffic_min_unit.is_set
	|| traffic_max_unit.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter);
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
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-peak-rate" || name == "traffic-min-unit" || name == "traffic-max-unit")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ero()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
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

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::UnsupSubObject()
    :
    rsvp_mgmt_rev_lsp_unsupported_subobj(this, {})
{

    yang_name = "unsup-sub-object"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::~UnsupSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvp_mgmt_rev_lsp_unsupported_subobj.len(); index++)
    {
        if(rsvp_mgmt_rev_lsp_unsupported_subobj[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_operation() const
{
    for (std::size_t index=0; index<rsvp_mgmt_rev_lsp_unsupported_subobj.len(); index++)
    {
        if(rsvp_mgmt_rev_lsp_unsupported_subobj[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-mgmt-rev-lsp-unsupported-subobj")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj>();
        ent_->parent = this;
        rsvp_mgmt_rev_lsp_unsupported_subobj.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvp_mgmt_rev_lsp_unsupported_subobj.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-mgmt-rev-lsp-unsupported-subobj")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::RsvpMgmtRevLspUnsupportedSubobj()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "rsvp-mgmt-rev-lsp-unsupported-subobj"; yang_parent_name = "unsup-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::~RsvpMgmtRevLspUnsupportedSubobj()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/reverse-lsp/unsup-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-mgmt-rev-lsp-unsupported-subobj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject::RsvpMgmtRevLspUnsupportedSubobj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ero()
    :
    ero_type{YType::enumeration, "ero-type"}
        ,
    ipv4ero_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject>())
    , unnumbered_ero_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4ero_sub_object != nullptr)
    {
        _children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        _children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return _children;
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::Ipv4eroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::~Ipv4eroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4eroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
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

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"}
        ,
    ipv4rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject>())
    , label_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject>())
    , unnumbered_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject>())
    , srlg_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;

    yang_name = "rro"; yang_parent_name = "psb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::~Rro()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::has_data() const
{
    if (is_presence_container) return true;
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation());
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject>();
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

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4rro_sub_object != nullptr)
    {
        _children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        _children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        _children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        _children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    return _children;
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
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "srlg-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Ipv4rroSubObject()
    :
    rro_address{YType::str, "rro-address"}
        ,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::~Ipv4rroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/ipv4rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4rroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::LabelRroSubObject()
    :
    label{YType::uint32, "label"},
    is_label_variable_length{YType::boolean, "is-label-variable-length"}
        ,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags>())
    , variable_length_label(this, {})
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<variable_length_label.len(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return label.is_set
	|| is_label_variable_length.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.len(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
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

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "variable-length-label")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel>();
        ent_->parent = this;
        variable_length_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    count_ = 0;
    for (auto ent_ : variable_length_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "label" || name == "is-label-variable-length")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/label-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
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
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
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

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs(this, {})
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs>();
        ent_->parent = this;
        srl_gs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srl_gs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/psb-info/rro/srlg-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::RsbInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    destination_address{YType::str, "destination-address"},
    out_interface{YType::str, "out-interface"},
    out_label{YType::uint32, "out-label"},
    backup_interface{YType::str, "backup-interface"},
    backup_label{YType::uint32, "backup-label"},
    is_rro_valid{YType::boolean, "is-rro-valid"},
    is_flow_spec_valid{YType::boolean, "is-flow-spec-valid"}
        ,
    generic_out_label(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel>())
    , flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec>())
    , generic_flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec>())
    , rro(this, {})
{
    generic_out_label->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;

    yang_name = "rsb-info"; yang_parent_name = "psb-rsb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::~RsbInfo()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rro.len(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    return is_valid.is_set
	|| destination_address.is_set
	|| out_interface.is_set
	|| out_label.is_set
	|| backup_interface.is_set
	|| backup_label.is_set
	|| is_rro_valid.is_set
	|| is_flow_spec_valid.is_set
	|| (generic_out_label !=  nullptr && generic_out_label->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_operation() const
{
    for (std::size_t index=0; index<rro.len(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(out_interface.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label.yfilter)
	|| ydk::is_set(is_rro_valid.yfilter)
	|| ydk::is_set(is_flow_spec_valid.yfilter)
	|| (generic_out_label !=  nullptr && generic_out_label->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation());
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

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.yfilter)) leaf_name_data.push_back(out_interface.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label.is_set || is_set(backup_label.yfilter)) leaf_name_data.push_back(backup_label.get_name_leafdata());
    if (is_rro_valid.is_set || is_set(is_rro_valid.yfilter)) leaf_name_data.push_back(is_rro_valid.get_name_leafdata());
    if (is_flow_spec_valid.is_set || is_set(is_flow_spec_valid.yfilter)) leaf_name_data.push_back(is_flow_spec_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-out-label")
    {
        if(generic_out_label == nullptr)
        {
            generic_out_label = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel>();
        }
        return generic_out_label;
    }

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

    if(child_yang_name == "rro")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro>();
        ent_->parent = this;
        rro.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_out_label != nullptr)
    {
        _children["generic-out-label"] = generic_out_label;
    }

    if(flow_spec != nullptr)
    {
        _children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        _children["generic-flow-spec"] = generic_flow_spec;
    }

    count_ = 0;
    for (auto ent_ : rro.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-rro-valid")
    {
        is_rro_valid = value;
        is_rro_valid.value_namespace = name_space;
        is_rro_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-spec-valid")
    {
        is_flow_spec_valid = value;
        is_flow_spec_valid.value_namespace = name_space;
        is_flow_spec_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "out-interface")
    {
        out_interface.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label")
    {
        backup_label.yfilter = yfilter;
    }
    if(value_path == "is-rro-valid")
    {
        is_rro_valid.yfilter = yfilter;
    }
    if(value_path == "is-flow-spec-valid")
    {
        is_flow_spec_valid.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-out-label" || name == "flow-spec" || name == "generic-flow-spec" || name == "rro" || name == "is-valid" || name == "destination-address" || name == "out-interface" || name == "out-label" || name == "backup-interface" || name == "backup-label" || name == "is-rro-valid" || name == "is-flow-spec-valid")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generalized_label != nullptr)
    {
        _children["generalized-label"] = generalized_label;
    }

    return _children;
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
    value_(this, {})
{

    yang_name = "generalized-label"; yang_parent_name = "generic-out-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<value_.len(); index++)
    {
        if(value_[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_operation() const
{
    for (std::size_t index=0; index<value_.len(); index++)
    {
        if(value_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value>();
        ent_->parent = this;
        value_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : value_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::Value()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "value"; yang_parent_name = "generalized-label"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::~Value()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/generic-out-label/generalized-label/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::FlowSpec()
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

    yang_name = "flow-spec"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::~FlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_data() const
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_operation() const
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
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
        ,
    g709otn_flow_spec(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_flow_spec != nullptr)
    {
        _children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return _children;
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::G709otnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::~G709otnFlowSpec()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709otnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"}
        ,
    ipv4rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject>())
    , label_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject>())
    , unnumbered_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject>())
    , srlg_rro_sub_object(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;

    yang_name = "rro"; yang_parent_name = "rsb-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::~Rro()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_data() const
{
    if (is_presence_container) return true;
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation());
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject>();
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

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4rro_sub_object != nullptr)
    {
        _children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        _children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        _children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        _children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    return _children;
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
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "srlg-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Ipv4rroSubObject()
    :
    rro_address{YType::str, "rro-address"}
        ,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::~Ipv4rroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::has_data() const
{
    if (is_presence_container) return true;
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/ipv4rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4rroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::LabelRroSubObject()
    :
    label{YType::uint32, "label"},
    is_label_variable_length{YType::boolean, "is-label-variable-length"}
        ,
    flags(std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags>())
    , variable_length_label(this, {})
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<variable_length_label.len(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return label.is_set
	|| is_label_variable_length.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.len(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
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

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "variable-length-label")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel>();
        ent_->parent = this;
        variable_length_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    count_ = 0;
    for (auto ent_ : variable_length_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "label" || name == "is-label-variable-length")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/label-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
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
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
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

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlgRroSubObject()
    :
    srl_gs(this, {})
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.len(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        auto ent_ = std::make_shared<Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs>();
        ent_->parent = this;
        srl_gs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srl_gs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/session-detaileds/session-detailed/psb-rsb-info/rsb-info/rro/srlg-rro-sub-object/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetails()
    :
    hello_instance_detail(this, {"source_address", "destination_address"})
{

    yang_name = "hello-instance-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::HelloInstanceDetails::~HelloInstanceDetails()
{
}

bool Rsvp::HelloInstanceDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_instance_detail.len(); index++)
    {
        if(hello_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<hello_instance_detail.len(); index++)
    {
        if(hello_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::HelloInstanceDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-instance-detail")
    {
        auto ent_ = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail>();
        ent_->parent = this;
        hello_instance_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_instance_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::HelloInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::HelloInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::HelloInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-instance-detail")
        return true;
    return false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::HelloInstanceDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    hello_instance_owner{YType::enumeration, "hello-instance-owner"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    instance_type{YType::enumeration, "instance-type"},
    hello_interface{YType::str, "hello-interface"},
    hello_interval{YType::uint32, "hello-interval"},
    missed_acks_allowed{YType::uint32, "missed-acks-allowed"},
    source_instance{YType::uint32, "source-instance"},
    destination_instance{YType::uint32, "destination-instance"},
    communication_lost_reason{YType::enumeration, "communication-lost-reason"},
    total_communication_lost{YType::uint16, "total-communication-lost"},
    communication_lost_hello_missed{YType::uint16, "communication-lost-hello-missed"},
    communication_lost_wrong_source_inst{YType::uint16, "communication-lost-wrong-source-inst"},
    communication_lost_wrong_destination_inst{YType::uint16, "communication-lost-wrong-destination-inst"},
    communication_lost_interface_down{YType::uint16, "communication-lost-interface-down"},
    communication_lost_neighbor_disabled_hello{YType::uint16, "communication-lost-neighbor-disabled-hello"},
    hello_messages_sent{YType::uint64, "hello-messages-sent"},
    hello_messages_received{YType::uint64, "hello-messages-received"},
    hello_request_suppressed{YType::uint64, "hello-request-suppressed"}
        ,
    up_time(std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime>())
    , communication_lost_time(std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime>())
{
    up_time->parent = this;
    communication_lost_time->parent = this;

    yang_name = "hello-instance-detail"; yang_parent_name = "hello-instance-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::~HelloInstanceDetail()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| hello_instance_owner.is_set
	|| neighbor_hello_state.is_set
	|| instance_type.is_set
	|| hello_interface.is_set
	|| hello_interval.is_set
	|| missed_acks_allowed.is_set
	|| source_instance.is_set
	|| destination_instance.is_set
	|| communication_lost_reason.is_set
	|| total_communication_lost.is_set
	|| communication_lost_hello_missed.is_set
	|| communication_lost_wrong_source_inst.is_set
	|| communication_lost_wrong_destination_inst.is_set
	|| communication_lost_interface_down.is_set
	|| communication_lost_neighbor_disabled_hello.is_set
	|| hello_messages_sent.is_set
	|| hello_messages_received.is_set
	|| hello_request_suppressed.is_set
	|| (up_time !=  nullptr && up_time->has_data())
	|| (communication_lost_time !=  nullptr && communication_lost_time->has_data());
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(hello_instance_owner.yfilter)
	|| ydk::is_set(neighbor_hello_state.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(hello_interface.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(missed_acks_allowed.yfilter)
	|| ydk::is_set(source_instance.yfilter)
	|| ydk::is_set(destination_instance.yfilter)
	|| ydk::is_set(communication_lost_reason.yfilter)
	|| ydk::is_set(total_communication_lost.yfilter)
	|| ydk::is_set(communication_lost_hello_missed.yfilter)
	|| ydk::is_set(communication_lost_wrong_source_inst.yfilter)
	|| ydk::is_set(communication_lost_wrong_destination_inst.yfilter)
	|| ydk::is_set(communication_lost_interface_down.yfilter)
	|| ydk::is_set(communication_lost_neighbor_disabled_hello.yfilter)
	|| ydk::is_set(hello_messages_sent.yfilter)
	|| ydk::is_set(hello_messages_received.yfilter)
	|| ydk::is_set(hello_request_suppressed.yfilter)
	|| (up_time !=  nullptr && up_time->has_operation())
	|| (communication_lost_time !=  nullptr && communication_lost_time->has_operation());
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-instance-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-detail";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (hello_instance_owner.is_set || is_set(hello_instance_owner.yfilter)) leaf_name_data.push_back(hello_instance_owner.get_name_leafdata());
    if (neighbor_hello_state.is_set || is_set(neighbor_hello_state.yfilter)) leaf_name_data.push_back(neighbor_hello_state.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (missed_acks_allowed.is_set || is_set(missed_acks_allowed.yfilter)) leaf_name_data.push_back(missed_acks_allowed.get_name_leafdata());
    if (source_instance.is_set || is_set(source_instance.yfilter)) leaf_name_data.push_back(source_instance.get_name_leafdata());
    if (destination_instance.is_set || is_set(destination_instance.yfilter)) leaf_name_data.push_back(destination_instance.get_name_leafdata());
    if (communication_lost_reason.is_set || is_set(communication_lost_reason.yfilter)) leaf_name_data.push_back(communication_lost_reason.get_name_leafdata());
    if (total_communication_lost.is_set || is_set(total_communication_lost.yfilter)) leaf_name_data.push_back(total_communication_lost.get_name_leafdata());
    if (communication_lost_hello_missed.is_set || is_set(communication_lost_hello_missed.yfilter)) leaf_name_data.push_back(communication_lost_hello_missed.get_name_leafdata());
    if (communication_lost_wrong_source_inst.is_set || is_set(communication_lost_wrong_source_inst.yfilter)) leaf_name_data.push_back(communication_lost_wrong_source_inst.get_name_leafdata());
    if (communication_lost_wrong_destination_inst.is_set || is_set(communication_lost_wrong_destination_inst.yfilter)) leaf_name_data.push_back(communication_lost_wrong_destination_inst.get_name_leafdata());
    if (communication_lost_interface_down.is_set || is_set(communication_lost_interface_down.yfilter)) leaf_name_data.push_back(communication_lost_interface_down.get_name_leafdata());
    if (communication_lost_neighbor_disabled_hello.is_set || is_set(communication_lost_neighbor_disabled_hello.yfilter)) leaf_name_data.push_back(communication_lost_neighbor_disabled_hello.get_name_leafdata());
    if (hello_messages_sent.is_set || is_set(hello_messages_sent.yfilter)) leaf_name_data.push_back(hello_messages_sent.get_name_leafdata());
    if (hello_messages_received.is_set || is_set(hello_messages_received.yfilter)) leaf_name_data.push_back(hello_messages_received.get_name_leafdata());
    if (hello_request_suppressed.is_set || is_set(hello_request_suppressed.yfilter)) leaf_name_data.push_back(hello_request_suppressed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up-time")
    {
        if(up_time == nullptr)
        {
            up_time = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime>();
        }
        return up_time;
    }

    if(child_yang_name == "communication-lost-time")
    {
        if(communication_lost_time == nullptr)
        {
            communication_lost_time = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime>();
        }
        return communication_lost_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(up_time != nullptr)
    {
        _children["up-time"] = up_time;
    }

    if(communication_lost_time != nullptr)
    {
        _children["communication-lost-time"] = communication_lost_time;
    }

    return _children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "hello-instance-owner")
    {
        hello_instance_owner = value;
        hello_instance_owner.value_namespace = name_space;
        hello_instance_owner.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missed-acks-allowed")
    {
        missed_acks_allowed = value;
        missed_acks_allowed.value_namespace = name_space;
        missed_acks_allowed.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "communication-lost-reason")
    {
        communication_lost_reason = value;
        communication_lost_reason.value_namespace = name_space;
        communication_lost_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-communication-lost")
    {
        total_communication_lost = value;
        total_communication_lost.value_namespace = name_space;
        total_communication_lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-hello-missed")
    {
        communication_lost_hello_missed = value;
        communication_lost_hello_missed.value_namespace = name_space;
        communication_lost_hello_missed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-wrong-source-inst")
    {
        communication_lost_wrong_source_inst = value;
        communication_lost_wrong_source_inst.value_namespace = name_space;
        communication_lost_wrong_source_inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-wrong-destination-inst")
    {
        communication_lost_wrong_destination_inst = value;
        communication_lost_wrong_destination_inst.value_namespace = name_space;
        communication_lost_wrong_destination_inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-interface-down")
    {
        communication_lost_interface_down = value;
        communication_lost_interface_down.value_namespace = name_space;
        communication_lost_interface_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-neighbor-disabled-hello")
    {
        communication_lost_neighbor_disabled_hello = value;
        communication_lost_neighbor_disabled_hello.value_namespace = name_space;
        communication_lost_neighbor_disabled_hello.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hello-request-suppressed")
    {
        hello_request_suppressed = value;
        hello_request_suppressed.value_namespace = name_space;
        hello_request_suppressed.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "hello-instance-owner")
    {
        hello_instance_owner.yfilter = yfilter;
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
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "missed-acks-allowed")
    {
        missed_acks_allowed.yfilter = yfilter;
    }
    if(value_path == "source-instance")
    {
        source_instance.yfilter = yfilter;
    }
    if(value_path == "destination-instance")
    {
        destination_instance.yfilter = yfilter;
    }
    if(value_path == "communication-lost-reason")
    {
        communication_lost_reason.yfilter = yfilter;
    }
    if(value_path == "total-communication-lost")
    {
        total_communication_lost.yfilter = yfilter;
    }
    if(value_path == "communication-lost-hello-missed")
    {
        communication_lost_hello_missed.yfilter = yfilter;
    }
    if(value_path == "communication-lost-wrong-source-inst")
    {
        communication_lost_wrong_source_inst.yfilter = yfilter;
    }
    if(value_path == "communication-lost-wrong-destination-inst")
    {
        communication_lost_wrong_destination_inst.yfilter = yfilter;
    }
    if(value_path == "communication-lost-interface-down")
    {
        communication_lost_interface_down.yfilter = yfilter;
    }
    if(value_path == "communication-lost-neighbor-disabled-hello")
    {
        communication_lost_neighbor_disabled_hello.yfilter = yfilter;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent.yfilter = yfilter;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received.yfilter = yfilter;
    }
    if(value_path == "hello-request-suppressed")
    {
        hello_request_suppressed.yfilter = yfilter;
    }
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-time" || name == "communication-lost-time" || name == "source-address" || name == "destination-address" || name == "source-address-xr" || name == "destination-address-xr" || name == "hello-instance-owner" || name == "neighbor-hello-state" || name == "instance-type" || name == "hello-interface" || name == "hello-interval" || name == "missed-acks-allowed" || name == "source-instance" || name == "destination-instance" || name == "communication-lost-reason" || name == "total-communication-lost" || name == "communication-lost-hello-missed" || name == "communication-lost-wrong-source-inst" || name == "communication-lost-wrong-destination-inst" || name == "communication-lost-interface-down" || name == "communication-lost-neighbor-disabled-hello" || name == "hello-messages-sent" || name == "hello-messages-received" || name == "hello-request-suppressed")
        return true;
    return false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::UpTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "up-time"; yang_parent_name = "hello-instance-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::~UpTime()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::CommunicationLostTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "communication-lost-time"; yang_parent_name = "hello-instance-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::~CommunicationLostTime()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "communication-lost-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetails()
    :
    global_neighbor_detail(this, {"neighbor_address"})
{

    yang_name = "global-neighbor-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::GlobalNeighborDetails::~GlobalNeighborDetails()
{
}

bool Rsvp::GlobalNeighborDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_neighbor_detail.len(); index++)
    {
        if(global_neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::GlobalNeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<global_neighbor_detail.len(); index++)
    {
        if(global_neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::GlobalNeighborDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalNeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-neighbor-detail")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail>();
        ent_->parent = this;
        global_neighbor_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : global_neighbor_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::GlobalNeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::GlobalNeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::GlobalNeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-neighbor-detail")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborDetail()
    :
    neighbor_address{YType::str, "neighbor-address"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    node_address{YType::str, "node-address"},
    restart_state{YType::enumeration, "restart-state"},
    restart_time{YType::uint32, "restart-time"},
    is_restart_timer_running{YType::boolean, "is-restart-timer-running"},
    recovery_time{YType::uint32, "recovery-time"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    hello_interval{YType::uint32, "hello-interval"},
    missed_hellos{YType::uint8, "missed-hellos"},
    pending_states{YType::uint32, "pending-states"}
        ,
    global_neighbor_flags(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags>())
    , restart_time_left(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft>())
    , restart_timer_expiry_time(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime>())
    , recovery_time_left(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft>())
    , recovery_timer_exp_time(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime>())
    , local_node_address(this, {})
    , interface_neighbor(this, {})
    , neighbor_hello_state(this, {})
    , lost_communication_reason(this, {})
    , lost_communication_total(this, {})
    , up_time(this, {})
    , lost_communication_time(this, {})
{
    global_neighbor_flags->parent = this;
    restart_time_left->parent = this;
    restart_timer_expiry_time->parent = this;
    recovery_time_left->parent = this;
    recovery_timer_exp_time->parent = this;

    yang_name = "global-neighbor-detail"; yang_parent_name = "global-neighbor-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::~GlobalNeighborDetail()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_node_address.len(); index++)
    {
        if(local_node_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.len(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_hello_state.len(); index++)
    {
        if(neighbor_hello_state[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_reason.len(); index++)
    {
        if(lost_communication_reason[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_total.len(); index++)
    {
        if(lost_communication_total[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<up_time.len(); index++)
    {
        if(up_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_time.len(); index++)
    {
        if(lost_communication_time[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| is_gr_enabled.is_set
	|| node_address.is_set
	|| restart_state.is_set
	|| restart_time.is_set
	|| is_restart_timer_running.is_set
	|| recovery_time.is_set
	|| is_recovery_timer_running.is_set
	|| hello_interval.is_set
	|| missed_hellos.is_set
	|| pending_states.is_set
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_data())
	|| (restart_time_left !=  nullptr && restart_time_left->has_data())
	|| (restart_timer_expiry_time !=  nullptr && restart_timer_expiry_time->has_data())
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_data())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_data());
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::has_operation() const
{
    for (std::size_t index=0; index<local_node_address.len(); index++)
    {
        if(local_node_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.len(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_hello_state.len(); index++)
    {
        if(neighbor_hello_state[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_reason.len(); index++)
    {
        if(lost_communication_reason[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_total.len(); index++)
    {
        if(lost_communication_total[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<up_time.len(); index++)
    {
        if(up_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_time.len(); index++)
    {
        if(lost_communication_time[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(node_address.yfilter)
	|| ydk::is_set(restart_state.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(is_restart_timer_running.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(is_recovery_timer_running.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(missed_hellos.yfilter)
	|| ydk::is_set(pending_states.yfilter)
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_operation())
	|| (restart_time_left !=  nullptr && restart_time_left->has_operation())
	|| (restart_timer_expiry_time !=  nullptr && restart_timer_expiry_time->has_operation())
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_operation())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_operation());
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/global-neighbor-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-detail";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (restart_state.is_set || is_set(restart_state.yfilter)) leaf_name_data.push_back(restart_state.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (is_restart_timer_running.is_set || is_set(is_restart_timer_running.yfilter)) leaf_name_data.push_back(is_restart_timer_running.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.yfilter)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (missed_hellos.is_set || is_set(missed_hellos.yfilter)) leaf_name_data.push_back(missed_hellos.get_name_leafdata());
    if (pending_states.is_set || is_set(pending_states.yfilter)) leaf_name_data.push_back(pending_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-neighbor-flags")
    {
        if(global_neighbor_flags == nullptr)
        {
            global_neighbor_flags = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags>();
        }
        return global_neighbor_flags;
    }

    if(child_yang_name == "restart-time-left")
    {
        if(restart_time_left == nullptr)
        {
            restart_time_left = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft>();
        }
        return restart_time_left;
    }

    if(child_yang_name == "restart-timer-expiry-time")
    {
        if(restart_timer_expiry_time == nullptr)
        {
            restart_timer_expiry_time = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime>();
        }
        return restart_timer_expiry_time;
    }

    if(child_yang_name == "recovery-time-left")
    {
        if(recovery_time_left == nullptr)
        {
            recovery_time_left = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft>();
        }
        return recovery_time_left;
    }

    if(child_yang_name == "recovery-timer-exp-time")
    {
        if(recovery_timer_exp_time == nullptr)
        {
            recovery_timer_exp_time = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime>();
        }
        return recovery_timer_exp_time;
    }

    if(child_yang_name == "local-node-address")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress>();
        ent_->parent = this;
        local_node_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "interface-neighbor")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor>();
        ent_->parent = this;
        interface_neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "neighbor-hello-state")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState>();
        ent_->parent = this;
        neighbor_hello_state.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lost-communication-reason")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason>();
        ent_->parent = this;
        lost_communication_reason.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lost-communication-total")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal>();
        ent_->parent = this;
        lost_communication_total.append(ent_);
        return ent_;
    }

    if(child_yang_name == "up-time")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime>();
        ent_->parent = this;
        up_time.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lost-communication-time")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime>();
        ent_->parent = this;
        lost_communication_time.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global_neighbor_flags != nullptr)
    {
        _children["global-neighbor-flags"] = global_neighbor_flags;
    }

    if(restart_time_left != nullptr)
    {
        _children["restart-time-left"] = restart_time_left;
    }

    if(restart_timer_expiry_time != nullptr)
    {
        _children["restart-timer-expiry-time"] = restart_timer_expiry_time;
    }

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

    count_ = 0;
    for (auto ent_ : interface_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : neighbor_hello_state.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lost_communication_reason.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lost_communication_total.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : up_time.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lost_communication_time.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-state")
    {
        restart_state = value;
        restart_state.value_namespace = name_space;
        restart_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-restart-timer-running")
    {
        is_restart_timer_running = value;
        is_restart_timer_running.value_namespace = name_space;
        is_restart_timer_running.value_namespace_prefix = name_space_prefix;
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

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
    if(value_path == "restart-state")
    {
        restart_state.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "is-restart-timer-running")
    {
        is_restart_timer_running.yfilter = yfilter;
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

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-neighbor-flags" || name == "restart-time-left" || name == "restart-timer-expiry-time" || name == "recovery-time-left" || name == "recovery-timer-exp-time" || name == "local-node-address" || name == "interface-neighbor" || name == "neighbor-hello-state" || name == "lost-communication-reason" || name == "lost-communication-total" || name == "up-time" || name == "lost-communication-time" || name == "neighbor-address" || name == "is-gr-enabled" || name == "node-address" || name == "restart-state" || name == "restart-time" || name == "is-restart-timer-running" || name == "recovery-time" || name == "is-recovery-timer-running" || name == "hello-interval" || name == "missed-hellos" || name == "pending-states")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::GlobalNeighborFlags()
    :
    is_application_ouni{YType::boolean, "is-application-ouni"},
    is_application_mpls{YType::boolean, "is-application-mpls"}
{

    yang_name = "global-neighbor-flags"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::~GlobalNeighborFlags()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::has_data() const
{
    if (is_presence_container) return true;
    return is_application_ouni.is_set
	|| is_application_mpls.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_application_ouni.yfilter)
	|| ydk::is_set(is_application_mpls.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_application_ouni.is_set || is_set(is_application_ouni.yfilter)) leaf_name_data.push_back(is_application_ouni.get_name_leafdata());
    if (is_application_mpls.is_set || is_set(is_application_mpls.yfilter)) leaf_name_data.push_back(is_application_mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-application-ouni")
    {
        is_application_ouni = value;
        is_application_ouni.value_namespace = name_space;
        is_application_ouni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-mpls")
    {
        is_application_mpls = value;
        is_application_mpls.value_namespace = name_space;
        is_application_mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-application-ouni")
    {
        is_application_ouni.yfilter = yfilter;
    }
    if(value_path == "is-application-mpls")
    {
        is_application_mpls.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-application-ouni" || name == "is-application-mpls")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::RestartTimeLeft()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "restart-time-left"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::~RestartTimeLeft()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart-time-left";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::RestartTimerExpiryTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "restart-timer-expiry-time"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::~RestartTimerExpiryTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart-timer-expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::RecoveryTimeLeft()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "recovery-time-left"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::~RecoveryTimeLeft()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-time-left";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::RecoveryTimerExpTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "recovery-timer-exp-time"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::~RecoveryTimerExpTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-timer-exp-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::LocalNodeAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "local-node-address"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::~LocalNodeAddress()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-node-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LocalNodeAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::InterfaceNeighbor()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-neighbor"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::InterfaceNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::NeighborHelloState()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "neighbor-hello-state"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::~NeighborHelloState()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-hello-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::NeighborHelloState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::LostCommunicationReason()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "lost-communication-reason"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::~LostCommunicationReason()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-reason";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationReason::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::LostCommunicationTotal()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "lost-communication-total"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::~LostCommunicationTotal()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::UpTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "up-time"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::~UpTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::LostCommunicationTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "lost-communication-time"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::~LostCommunicationTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBriefs()
    :
    psb_brief(this, {})
{

    yang_name = "psb-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::~PsbBriefs()
{
}

bool Rsvp::PsbBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psb_brief.len(); index++)
    {
        if(psb_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::PsbBriefs::has_operation() const
{
    for (std::size_t index=0; index<psb_brief.len(); index++)
    {
        if(psb_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::PsbBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psb-brief")
    {
        auto ent_ = std::make_shared<Rsvp::PsbBriefs::PsbBrief>();
        ent_->parent = this;
        psb_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : psb_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::PsbBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psb-brief")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::PsbBrief()
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
    input_interface{YType::str, "input-interface"}
        ,
    session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session>())
    , s2l_sub_lsp(std::make_shared<Rsvp::PsbBriefs::PsbBrief::S2lSubLsp>())
    , template_(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template>())
    , session_attribute(std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute>())
    , traffic_spec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::TrafficSpec>())
    , generic_traffic_spec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec>())
{
    session->parent = this;
    s2l_sub_lsp->parent = this;
    template_->parent = this;
    session_attribute->parent = this;
    traffic_spec->parent = this;
    generic_traffic_spec->parent = this;

    yang_name = "psb-brief"; yang_parent_name = "psb-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::~PsbBrief()
{
}

bool Rsvp::PsbBriefs::PsbBrief::has_data() const
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
	|| input_interface.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (session_attribute !=  nullptr && session_attribute->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::has_operation() const
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
	|| (template_ !=  nullptr && template_->has_operation())
	|| (session_attribute !=  nullptr && session_attribute->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::PsbBriefs::PsbBrief::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template>();
        }
        return template_;
    }

    if(child_yang_name == "session-attribute")
    {
        if(session_attribute == nullptr)
        {
            session_attribute = std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute>();
        }
        return session_attribute;
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec == nullptr)
        {
            traffic_spec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::TrafficSpec>();
        }
        return traffic_spec;
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec == nullptr)
        {
            generic_traffic_spec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec>();
        }
        return generic_traffic_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::get_children() const
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

    if(template_ != nullptr)
    {
        _children["template"] = template_;
    }

    if(session_attribute != nullptr)
    {
        _children["session-attribute"] = session_attribute;
    }

    if(traffic_spec != nullptr)
    {
        _children["traffic-spec"] = traffic_spec;
    }

    if(generic_traffic_spec != nullptr)
    {
        _children["generic-traffic-spec"] = generic_traffic_spec;
    }

    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "template" || name == "session-attribute" || name == "traffic-spec" || name == "generic-traffic-spec" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "input-interface")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Session::~Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbBriefs::PsbBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
        ,
    ipv4(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4>())
    , ipv4_lsp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::get_children() const
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

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::~S2lSubLsp()
{
}

bool Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Template::Template()
    :
    rsvp_filter(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "template"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Template::~Template()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Template::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Template::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_filter != nullptr)
    {
        _children["rsvp-filter"] = rsvp_filter;
    }

    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::PsbBriefs::PsbBrief::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
        ,
    udp_ipv4_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session>())
    , p2mp_ipv4_session(std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::has_data() const
{
    if (is_presence_container) return true;
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::get_children() const
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

void Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::P2mpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::~P2mpIpv4Session()
{
}

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/template/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::Template::RsvpFilter::P2mpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessionAttribute()
    :
    setup_priority{YType::uint8, "setup-priority"},
    reservation_priority{YType::uint8, "reservation-priority"}
        ,
    sess_attribute_flags(std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags>())
{
    sess_attribute_flags->parent = this;

    yang_name = "session-attribute"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::~SessionAttribute()
{
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| reservation_priority.is_set
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(reservation_priority.yfilter)
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (reservation_priority.is_set || is_set(reservation_priority.yfilter)) leaf_name_data.push_back(reservation_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sess-attribute-flags")
    {
        if(sess_attribute_flags == nullptr)
        {
            sess_attribute_flags = std::make_shared<Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags>();
        }
        return sess_attribute_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sess_attribute_flags != nullptr)
    {
        _children["sess-attribute-flags"] = sess_attribute_flags;
    }

    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sess-attribute-flags" || name == "setup-priority" || name == "reservation-priority")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::SessAttributeFlags()
    :
    is_local_protect{YType::boolean, "is-local-protect"},
    is_node_protect{YType::boolean, "is-node-protect"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_record_labels{YType::boolean, "is-record-labels"},
    is_shared_explicit_requested{YType::boolean, "is-shared-explicit-requested"}
{

    yang_name = "sess-attribute-flags"; yang_parent_name = "session-attribute"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::~SessAttributeFlags()
{
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::has_data() const
{
    if (is_presence_container) return true;
    return is_local_protect.is_set
	|| is_node_protect.is_set
	|| is_bandwidth_protect.is_set
	|| is_record_labels.is_set
	|| is_shared_explicit_requested.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_local_protect.yfilter)
	|| ydk::is_set(is_node_protect.yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(is_record_labels.yfilter)
	|| ydk::is_set(is_shared_explicit_requested.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/session-attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sess-attribute-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_local_protect.is_set || is_set(is_local_protect.yfilter)) leaf_name_data.push_back(is_local_protect.get_name_leafdata());
    if (is_node_protect.is_set || is_set(is_node_protect.yfilter)) leaf_name_data.push_back(is_node_protect.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_record_labels.is_set || is_set(is_record_labels.yfilter)) leaf_name_data.push_back(is_record_labels.get_name_leafdata());
    if (is_shared_explicit_requested.is_set || is_set(is_shared_explicit_requested.yfilter)) leaf_name_data.push_back(is_shared_explicit_requested.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-local-protect" || name == "is-node-protect" || name == "is-bandwidth-protect" || name == "is-record-labels" || name == "is-shared-explicit-requested")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"}
{

    yang_name = "traffic-spec"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::TrafficSpec::~TrafficSpec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::TrafficSpec::has_data() const
{
    if (is_presence_container) return true;
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_peak_rate.is_set
	|| traffic_min_unit.is_set
	|| traffic_max_unit.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::TrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::TrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::TrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::TrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::TrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-peak-rate" || name == "traffic-min-unit" || name == "traffic-max-unit")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
        ,
    g709otn_tspec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec>())
    , intsrv_tspec(std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    intsrv_tspec->parent = this;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::has_data() const
{
    if (is_presence_container) return true;
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec == nullptr)
        {
            g709otn_tspec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec>();
        }
        return g709otn_tspec;
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec == nullptr)
        {
            intsrv_tspec = std::make_shared<Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec>();
        }
        return intsrv_tspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_tspec != nullptr)
    {
        _children["g709otn-tspec"] = g709otn_tspec;
    }

    if(intsrv_tspec != nullptr)
    {
        _children["intsrv-tspec"] = intsrv_tspec;
    }

    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-tspec" || name == "intsrv-tspec" || name == "tspec-type")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::G709otnTspec()
    :
    traffic_signal_type{YType::uint8, "traffic-signal-type"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"}
{

    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::~G709otnTspec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::has_data() const
{
    if (is_presence_container) return true;
    return traffic_signal_type.is_set
	|| traffic_nvc.is_set
	|| traffic_multiplier.is_set
	|| traffic_bit_rate.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_signal_type.yfilter)
	|| ydk::is_set(traffic_nvc.yfilter)
	|| ydk::is_set(traffic_multiplier.yfilter)
	|| ydk::is_set(traffic_bit_rate.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_signal_type.is_set || is_set(traffic_signal_type.yfilter)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.yfilter)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.yfilter)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.yfilter)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709otnTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-signal-type" || name == "traffic-nvc" || name == "traffic-multiplier" || name == "traffic-bit-rate")
        return true;
    return false;
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"}
{

    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    if (is_presence_container) return true;
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_peak_rate.is_set
	|| traffic_min_unit.is_set
	|| traffic_max_unit.is_set;
}

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_average_rate.yfilter)
	|| ydk::is_set(traffic_max_burst.yfilter)
	|| ydk::is_set(traffic_peak_rate.yfilter)
	|| ydk::is_set(traffic_min_unit.yfilter)
	|| ydk::is_set(traffic_max_unit.yfilter);
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/psb-briefs/psb-brief/generic-traffic-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.yfilter)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.yfilter)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.yfilter)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.yfilter)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.yfilter)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-average-rate" || name == "traffic-max-burst" || name == "traffic-peak-rate" || name == "traffic-min-unit" || name == "traffic-max-unit")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBriefs()
    :
    global_neighbor_brief(this, {"neighbor_address"})
{

    yang_name = "global-neighbor-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::GlobalNeighborBriefs::~GlobalNeighborBriefs()
{
}

bool Rsvp::GlobalNeighborBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_neighbor_brief.len(); index++)
    {
        if(global_neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::GlobalNeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<global_neighbor_brief.len(); index++)
    {
        if(global_neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalNeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-neighbor-brief")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief>();
        ent_->parent = this;
        global_neighbor_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : global_neighbor_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::GlobalNeighborBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::GlobalNeighborBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::GlobalNeighborBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-neighbor-brief")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborBrief()
    :
    neighbor_address{YType::str, "neighbor-address"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    node_address{YType::str, "node-address"},
    restart_state{YType::enumeration, "restart-state"}
        ,
    global_neighbor_flags(std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags>())
    , local_node_address(this, {})
    , neighbor_hello_state(this, {})
    , lost_communication_reason(this, {})
    , lost_communication_total(this, {})
    , up_time(this, {})
    , lost_communication_time(this, {})
{
    global_neighbor_flags->parent = this;

    yang_name = "global-neighbor-brief"; yang_parent_name = "global-neighbor-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::~GlobalNeighborBrief()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_node_address.len(); index++)
    {
        if(local_node_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_hello_state.len(); index++)
    {
        if(neighbor_hello_state[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_reason.len(); index++)
    {
        if(lost_communication_reason[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_total.len(); index++)
    {
        if(lost_communication_total[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<up_time.len(); index++)
    {
        if(up_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_time.len(); index++)
    {
        if(lost_communication_time[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| is_gr_enabled.is_set
	|| node_address.is_set
	|| restart_state.is_set
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_data());
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<local_node_address.len(); index++)
    {
        if(local_node_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_hello_state.len(); index++)
    {
        if(neighbor_hello_state[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_reason.len(); index++)
    {
        if(lost_communication_reason[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_total.len(); index++)
    {
        if(lost_communication_total[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<up_time.len(); index++)
    {
        if(up_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lost_communication_time.len(); index++)
    {
        if(lost_communication_time[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(node_address.yfilter)
	|| ydk::is_set(restart_state.yfilter)
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_operation());
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/global-neighbor-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-brief";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (restart_state.is_set || is_set(restart_state.yfilter)) leaf_name_data.push_back(restart_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-neighbor-flags")
    {
        if(global_neighbor_flags == nullptr)
        {
            global_neighbor_flags = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags>();
        }
        return global_neighbor_flags;
    }

    if(child_yang_name == "local-node-address")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress>();
        ent_->parent = this;
        local_node_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "neighbor-hello-state")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState>();
        ent_->parent = this;
        neighbor_hello_state.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lost-communication-reason")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason>();
        ent_->parent = this;
        lost_communication_reason.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lost-communication-total")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal>();
        ent_->parent = this;
        lost_communication_total.append(ent_);
        return ent_;
    }

    if(child_yang_name == "up-time")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime>();
        ent_->parent = this;
        up_time.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lost-communication-time")
    {
        auto ent_ = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime>();
        ent_->parent = this;
        lost_communication_time.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global_neighbor_flags != nullptr)
    {
        _children["global-neighbor-flags"] = global_neighbor_flags;
    }

    count_ = 0;
    for (auto ent_ : local_node_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : neighbor_hello_state.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lost_communication_reason.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lost_communication_total.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : up_time.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lost_communication_time.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-state")
    {
        restart_state = value;
        restart_state.value_namespace = name_space;
        restart_state.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
    if(value_path == "restart-state")
    {
        restart_state.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-neighbor-flags" || name == "local-node-address" || name == "neighbor-hello-state" || name == "lost-communication-reason" || name == "lost-communication-total" || name == "up-time" || name == "lost-communication-time" || name == "neighbor-address" || name == "is-gr-enabled" || name == "node-address" || name == "restart-state")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::GlobalNeighborFlags()
    :
    is_application_ouni{YType::boolean, "is-application-ouni"},
    is_application_mpls{YType::boolean, "is-application-mpls"}
{

    yang_name = "global-neighbor-flags"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::~GlobalNeighborFlags()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::has_data() const
{
    if (is_presence_container) return true;
    return is_application_ouni.is_set
	|| is_application_mpls.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_application_ouni.yfilter)
	|| ydk::is_set(is_application_mpls.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_application_ouni.is_set || is_set(is_application_ouni.yfilter)) leaf_name_data.push_back(is_application_ouni.get_name_leafdata());
    if (is_application_mpls.is_set || is_set(is_application_mpls.yfilter)) leaf_name_data.push_back(is_application_mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-application-ouni")
    {
        is_application_ouni = value;
        is_application_ouni.value_namespace = name_space;
        is_application_ouni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-mpls")
    {
        is_application_mpls = value;
        is_application_mpls.value_namespace = name_space;
        is_application_mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-application-ouni")
    {
        is_application_ouni.yfilter = yfilter;
    }
    if(value_path == "is-application-mpls")
    {
        is_application_mpls.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-application-ouni" || name == "is-application-mpls")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::LocalNodeAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "local-node-address"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::~LocalNodeAddress()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-node-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LocalNodeAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::NeighborHelloState()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "neighbor-hello-state"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::~NeighborHelloState()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-hello-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::NeighborHelloState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::LostCommunicationReason()
    :
    entry{YType::enumeration, "entry"}
{

    yang_name = "lost-communication-reason"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::~LostCommunicationReason()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-reason";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationReason::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::LostCommunicationTotal()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "lost-communication-total"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::~LostCommunicationTotal()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::UpTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "up-time"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::~UpTime()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::LostCommunicationTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "lost-communication-time"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::~LostCommunicationTime()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}


}
}

