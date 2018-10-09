
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_ems_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ems_oper {

Grpc::Grpc()
    :
    statistics(std::make_shared<Grpc::Statistics>())
    , status(std::make_shared<Grpc::Status>())
{
    statistics->parent = this;
    status->parent = this;

    yang_name = "grpc"; yang_parent_name = "Cisco-IOS-XR-man-ems-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Grpc::~Grpc()
{
}

bool Grpc::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Grpc::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Grpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-oper:grpc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grpc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Grpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Grpc::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Grpc::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Grpc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Grpc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Grpc::clone_ptr() const
{
    return std::make_shared<Grpc>();
}

std::string Grpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Grpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Grpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Grpc::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Grpc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "status")
        return true;
    return false;
}

Grpc::Statistics::Statistics()
    :
    ct_show_cmd_txt_req_recv{YType::uint64, "ct-show-cmd-txt-req-recv"},
    ct_show_cmd_txt_res_sent{YType::uint64, "ct-show-cmd-txt-res-sent"},
    ct_get_config_req_recv{YType::uint64, "ct-get-config-req-recv"},
    ct_get_config_res_sent{YType::uint64, "ct-get-config-res-sent"},
    ct_cli_config_req_recv{YType::uint64, "ct-cli-config-req-recv"},
    ct_cli_config_res_sent{YType::uint64, "ct-cli-config-res-sent"},
    ct_merge_config_req_recv{YType::uint64, "ct-merge-config-req-recv"},
    ct_merge_config_res_sent{YType::uint64, "ct-merge-config-res-sent"},
    ct_commit_replace_req_recv{YType::uint64, "ct-commit-replace-req-recv"},
    ct_commit_replace_res_sent{YType::uint64, "ct-commit-replace-res-sent"},
    ct_delete_config_req_recv{YType::uint64, "ct-delete-config-req-recv"},
    ct_delete_config_res_sent{YType::uint64, "ct-delete-config-res-sent"},
    ct_replace_config_req_recv{YType::uint64, "ct-replace-config-req-recv"},
    ct_replace_config_res_sent{YType::uint64, "ct-replace-config-res-sent"},
    ct_get_oper_req_recv{YType::uint64, "ct-get-oper-req-recv"},
    ct_get_oper_res_sent{YType::uint64, "ct-get-oper-res-sent"},
    ct_get_current_session{YType::uint32, "ct-get-current-session"},
    ct_commit_config_req_recv{YType::uint64, "ct-commit-config-req-recv"},
    ct_commit_config_res_sent{YType::uint64, "ct-commit-config-res-sent"},
    ct_action_json_req_recv{YType::uint64, "ct-action-json-req-recv"},
    ct_action_json_res_sent{YType::uint64, "ct-action-json-res-sent"}
{

    yang_name = "statistics"; yang_parent_name = "grpc"; is_top_level_class = false; has_list_ancestor = false; 
}

Grpc::Statistics::~Statistics()
{
}

bool Grpc::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return ct_show_cmd_txt_req_recv.is_set
	|| ct_show_cmd_txt_res_sent.is_set
	|| ct_get_config_req_recv.is_set
	|| ct_get_config_res_sent.is_set
	|| ct_cli_config_req_recv.is_set
	|| ct_cli_config_res_sent.is_set
	|| ct_merge_config_req_recv.is_set
	|| ct_merge_config_res_sent.is_set
	|| ct_commit_replace_req_recv.is_set
	|| ct_commit_replace_res_sent.is_set
	|| ct_delete_config_req_recv.is_set
	|| ct_delete_config_res_sent.is_set
	|| ct_replace_config_req_recv.is_set
	|| ct_replace_config_res_sent.is_set
	|| ct_get_oper_req_recv.is_set
	|| ct_get_oper_res_sent.is_set
	|| ct_get_current_session.is_set
	|| ct_commit_config_req_recv.is_set
	|| ct_commit_config_res_sent.is_set
	|| ct_action_json_req_recv.is_set
	|| ct_action_json_res_sent.is_set;
}

bool Grpc::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ct_show_cmd_txt_req_recv.yfilter)
	|| ydk::is_set(ct_show_cmd_txt_res_sent.yfilter)
	|| ydk::is_set(ct_get_config_req_recv.yfilter)
	|| ydk::is_set(ct_get_config_res_sent.yfilter)
	|| ydk::is_set(ct_cli_config_req_recv.yfilter)
	|| ydk::is_set(ct_cli_config_res_sent.yfilter)
	|| ydk::is_set(ct_merge_config_req_recv.yfilter)
	|| ydk::is_set(ct_merge_config_res_sent.yfilter)
	|| ydk::is_set(ct_commit_replace_req_recv.yfilter)
	|| ydk::is_set(ct_commit_replace_res_sent.yfilter)
	|| ydk::is_set(ct_delete_config_req_recv.yfilter)
	|| ydk::is_set(ct_delete_config_res_sent.yfilter)
	|| ydk::is_set(ct_replace_config_req_recv.yfilter)
	|| ydk::is_set(ct_replace_config_res_sent.yfilter)
	|| ydk::is_set(ct_get_oper_req_recv.yfilter)
	|| ydk::is_set(ct_get_oper_res_sent.yfilter)
	|| ydk::is_set(ct_get_current_session.yfilter)
	|| ydk::is_set(ct_commit_config_req_recv.yfilter)
	|| ydk::is_set(ct_commit_config_res_sent.yfilter)
	|| ydk::is_set(ct_action_json_req_recv.yfilter)
	|| ydk::is_set(ct_action_json_res_sent.yfilter);
}

std::string Grpc::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-oper:grpc/" << get_segment_path();
    return path_buffer.str();
}

std::string Grpc::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grpc::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ct_show_cmd_txt_req_recv.is_set || is_set(ct_show_cmd_txt_req_recv.yfilter)) leaf_name_data.push_back(ct_show_cmd_txt_req_recv.get_name_leafdata());
    if (ct_show_cmd_txt_res_sent.is_set || is_set(ct_show_cmd_txt_res_sent.yfilter)) leaf_name_data.push_back(ct_show_cmd_txt_res_sent.get_name_leafdata());
    if (ct_get_config_req_recv.is_set || is_set(ct_get_config_req_recv.yfilter)) leaf_name_data.push_back(ct_get_config_req_recv.get_name_leafdata());
    if (ct_get_config_res_sent.is_set || is_set(ct_get_config_res_sent.yfilter)) leaf_name_data.push_back(ct_get_config_res_sent.get_name_leafdata());
    if (ct_cli_config_req_recv.is_set || is_set(ct_cli_config_req_recv.yfilter)) leaf_name_data.push_back(ct_cli_config_req_recv.get_name_leafdata());
    if (ct_cli_config_res_sent.is_set || is_set(ct_cli_config_res_sent.yfilter)) leaf_name_data.push_back(ct_cli_config_res_sent.get_name_leafdata());
    if (ct_merge_config_req_recv.is_set || is_set(ct_merge_config_req_recv.yfilter)) leaf_name_data.push_back(ct_merge_config_req_recv.get_name_leafdata());
    if (ct_merge_config_res_sent.is_set || is_set(ct_merge_config_res_sent.yfilter)) leaf_name_data.push_back(ct_merge_config_res_sent.get_name_leafdata());
    if (ct_commit_replace_req_recv.is_set || is_set(ct_commit_replace_req_recv.yfilter)) leaf_name_data.push_back(ct_commit_replace_req_recv.get_name_leafdata());
    if (ct_commit_replace_res_sent.is_set || is_set(ct_commit_replace_res_sent.yfilter)) leaf_name_data.push_back(ct_commit_replace_res_sent.get_name_leafdata());
    if (ct_delete_config_req_recv.is_set || is_set(ct_delete_config_req_recv.yfilter)) leaf_name_data.push_back(ct_delete_config_req_recv.get_name_leafdata());
    if (ct_delete_config_res_sent.is_set || is_set(ct_delete_config_res_sent.yfilter)) leaf_name_data.push_back(ct_delete_config_res_sent.get_name_leafdata());
    if (ct_replace_config_req_recv.is_set || is_set(ct_replace_config_req_recv.yfilter)) leaf_name_data.push_back(ct_replace_config_req_recv.get_name_leafdata());
    if (ct_replace_config_res_sent.is_set || is_set(ct_replace_config_res_sent.yfilter)) leaf_name_data.push_back(ct_replace_config_res_sent.get_name_leafdata());
    if (ct_get_oper_req_recv.is_set || is_set(ct_get_oper_req_recv.yfilter)) leaf_name_data.push_back(ct_get_oper_req_recv.get_name_leafdata());
    if (ct_get_oper_res_sent.is_set || is_set(ct_get_oper_res_sent.yfilter)) leaf_name_data.push_back(ct_get_oper_res_sent.get_name_leafdata());
    if (ct_get_current_session.is_set || is_set(ct_get_current_session.yfilter)) leaf_name_data.push_back(ct_get_current_session.get_name_leafdata());
    if (ct_commit_config_req_recv.is_set || is_set(ct_commit_config_req_recv.yfilter)) leaf_name_data.push_back(ct_commit_config_req_recv.get_name_leafdata());
    if (ct_commit_config_res_sent.is_set || is_set(ct_commit_config_res_sent.yfilter)) leaf_name_data.push_back(ct_commit_config_res_sent.get_name_leafdata());
    if (ct_action_json_req_recv.is_set || is_set(ct_action_json_req_recv.yfilter)) leaf_name_data.push_back(ct_action_json_req_recv.get_name_leafdata());
    if (ct_action_json_res_sent.is_set || is_set(ct_action_json_res_sent.yfilter)) leaf_name_data.push_back(ct_action_json_res_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grpc::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grpc::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Grpc::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ct-show-cmd-txt-req-recv")
    {
        ct_show_cmd_txt_req_recv = value;
        ct_show_cmd_txt_req_recv.value_namespace = name_space;
        ct_show_cmd_txt_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-show-cmd-txt-res-sent")
    {
        ct_show_cmd_txt_res_sent = value;
        ct_show_cmd_txt_res_sent.value_namespace = name_space;
        ct_show_cmd_txt_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-get-config-req-recv")
    {
        ct_get_config_req_recv = value;
        ct_get_config_req_recv.value_namespace = name_space;
        ct_get_config_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-get-config-res-sent")
    {
        ct_get_config_res_sent = value;
        ct_get_config_res_sent.value_namespace = name_space;
        ct_get_config_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-cli-config-req-recv")
    {
        ct_cli_config_req_recv = value;
        ct_cli_config_req_recv.value_namespace = name_space;
        ct_cli_config_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-cli-config-res-sent")
    {
        ct_cli_config_res_sent = value;
        ct_cli_config_res_sent.value_namespace = name_space;
        ct_cli_config_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-merge-config-req-recv")
    {
        ct_merge_config_req_recv = value;
        ct_merge_config_req_recv.value_namespace = name_space;
        ct_merge_config_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-merge-config-res-sent")
    {
        ct_merge_config_res_sent = value;
        ct_merge_config_res_sent.value_namespace = name_space;
        ct_merge_config_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-commit-replace-req-recv")
    {
        ct_commit_replace_req_recv = value;
        ct_commit_replace_req_recv.value_namespace = name_space;
        ct_commit_replace_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-commit-replace-res-sent")
    {
        ct_commit_replace_res_sent = value;
        ct_commit_replace_res_sent.value_namespace = name_space;
        ct_commit_replace_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-delete-config-req-recv")
    {
        ct_delete_config_req_recv = value;
        ct_delete_config_req_recv.value_namespace = name_space;
        ct_delete_config_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-delete-config-res-sent")
    {
        ct_delete_config_res_sent = value;
        ct_delete_config_res_sent.value_namespace = name_space;
        ct_delete_config_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-replace-config-req-recv")
    {
        ct_replace_config_req_recv = value;
        ct_replace_config_req_recv.value_namespace = name_space;
        ct_replace_config_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-replace-config-res-sent")
    {
        ct_replace_config_res_sent = value;
        ct_replace_config_res_sent.value_namespace = name_space;
        ct_replace_config_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-get-oper-req-recv")
    {
        ct_get_oper_req_recv = value;
        ct_get_oper_req_recv.value_namespace = name_space;
        ct_get_oper_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-get-oper-res-sent")
    {
        ct_get_oper_res_sent = value;
        ct_get_oper_res_sent.value_namespace = name_space;
        ct_get_oper_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-get-current-session")
    {
        ct_get_current_session = value;
        ct_get_current_session.value_namespace = name_space;
        ct_get_current_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-commit-config-req-recv")
    {
        ct_commit_config_req_recv = value;
        ct_commit_config_req_recv.value_namespace = name_space;
        ct_commit_config_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-commit-config-res-sent")
    {
        ct_commit_config_res_sent = value;
        ct_commit_config_res_sent.value_namespace = name_space;
        ct_commit_config_res_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-action-json-req-recv")
    {
        ct_action_json_req_recv = value;
        ct_action_json_req_recv.value_namespace = name_space;
        ct_action_json_req_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ct-action-json-res-sent")
    {
        ct_action_json_res_sent = value;
        ct_action_json_res_sent.value_namespace = name_space;
        ct_action_json_res_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Grpc::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ct-show-cmd-txt-req-recv")
    {
        ct_show_cmd_txt_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-show-cmd-txt-res-sent")
    {
        ct_show_cmd_txt_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-get-config-req-recv")
    {
        ct_get_config_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-get-config-res-sent")
    {
        ct_get_config_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-cli-config-req-recv")
    {
        ct_cli_config_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-cli-config-res-sent")
    {
        ct_cli_config_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-merge-config-req-recv")
    {
        ct_merge_config_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-merge-config-res-sent")
    {
        ct_merge_config_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-commit-replace-req-recv")
    {
        ct_commit_replace_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-commit-replace-res-sent")
    {
        ct_commit_replace_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-delete-config-req-recv")
    {
        ct_delete_config_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-delete-config-res-sent")
    {
        ct_delete_config_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-replace-config-req-recv")
    {
        ct_replace_config_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-replace-config-res-sent")
    {
        ct_replace_config_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-get-oper-req-recv")
    {
        ct_get_oper_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-get-oper-res-sent")
    {
        ct_get_oper_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-get-current-session")
    {
        ct_get_current_session.yfilter = yfilter;
    }
    if(value_path == "ct-commit-config-req-recv")
    {
        ct_commit_config_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-commit-config-res-sent")
    {
        ct_commit_config_res_sent.yfilter = yfilter;
    }
    if(value_path == "ct-action-json-req-recv")
    {
        ct_action_json_req_recv.yfilter = yfilter;
    }
    if(value_path == "ct-action-json-res-sent")
    {
        ct_action_json_res_sent.yfilter = yfilter;
    }
}

bool Grpc::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ct-show-cmd-txt-req-recv" || name == "ct-show-cmd-txt-res-sent" || name == "ct-get-config-req-recv" || name == "ct-get-config-res-sent" || name == "ct-cli-config-req-recv" || name == "ct-cli-config-res-sent" || name == "ct-merge-config-req-recv" || name == "ct-merge-config-res-sent" || name == "ct-commit-replace-req-recv" || name == "ct-commit-replace-res-sent" || name == "ct-delete-config-req-recv" || name == "ct-delete-config-res-sent" || name == "ct-replace-config-req-recv" || name == "ct-replace-config-res-sent" || name == "ct-get-oper-req-recv" || name == "ct-get-oper-res-sent" || name == "ct-get-current-session" || name == "ct-commit-config-req-recv" || name == "ct-commit-config-res-sent" || name == "ct-action-json-req-recv" || name == "ct-action-json-res-sent")
        return true;
    return false;
}

Grpc::Status::Status()
    :
    transport{YType::str, "transport"},
    address_family{YType::str, "address-family"},
    tls{YType::str, "tls"},
    trustpoint{YType::str, "trustpoint"},
    listening_port{YType::int32, "listening-port"},
    vrf_socket_ns_path{YType::str, "vrf-socket-ns-path"},
    max_req_per_user{YType::uint32, "max-req-per-user"},
    max_req_total{YType::uint32, "max-req-total"},
    max_streams{YType::uint32, "max-streams"},
    max_streams_per_user{YType::uint32, "max-streams-per-user"}
{

    yang_name = "status"; yang_parent_name = "grpc"; is_top_level_class = false; has_list_ancestor = false; 
}

Grpc::Status::~Status()
{
}

bool Grpc::Status::has_data() const
{
    if (is_presence_container) return true;
    return transport.is_set
	|| address_family.is_set
	|| tls.is_set
	|| trustpoint.is_set
	|| listening_port.is_set
	|| vrf_socket_ns_path.is_set
	|| max_req_per_user.is_set
	|| max_req_total.is_set
	|| max_streams.is_set
	|| max_streams_per_user.is_set;
}

bool Grpc::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(tls.yfilter)
	|| ydk::is_set(trustpoint.yfilter)
	|| ydk::is_set(listening_port.yfilter)
	|| ydk::is_set(vrf_socket_ns_path.yfilter)
	|| ydk::is_set(max_req_per_user.yfilter)
	|| ydk::is_set(max_req_total.yfilter)
	|| ydk::is_set(max_streams.yfilter)
	|| ydk::is_set(max_streams_per_user.yfilter);
}

std::string Grpc::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-oper:grpc/" << get_segment_path();
    return path_buffer.str();
}

std::string Grpc::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Grpc::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (tls.is_set || is_set(tls.yfilter)) leaf_name_data.push_back(tls.get_name_leafdata());
    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());
    if (listening_port.is_set || is_set(listening_port.yfilter)) leaf_name_data.push_back(listening_port.get_name_leafdata());
    if (vrf_socket_ns_path.is_set || is_set(vrf_socket_ns_path.yfilter)) leaf_name_data.push_back(vrf_socket_ns_path.get_name_leafdata());
    if (max_req_per_user.is_set || is_set(max_req_per_user.yfilter)) leaf_name_data.push_back(max_req_per_user.get_name_leafdata());
    if (max_req_total.is_set || is_set(max_req_total.yfilter)) leaf_name_data.push_back(max_req_total.get_name_leafdata());
    if (max_streams.is_set || is_set(max_streams.yfilter)) leaf_name_data.push_back(max_streams.get_name_leafdata());
    if (max_streams_per_user.is_set || is_set(max_streams_per_user.yfilter)) leaf_name_data.push_back(max_streams_per_user.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Grpc::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Grpc::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Grpc::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tls")
    {
        tls = value;
        tls.value_namespace = name_space;
        tls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listening-port")
    {
        listening_port = value;
        listening_port.value_namespace = name_space;
        listening_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-socket-ns-path")
    {
        vrf_socket_ns_path = value;
        vrf_socket_ns_path.value_namespace = name_space;
        vrf_socket_ns_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-req-per-user")
    {
        max_req_per_user = value;
        max_req_per_user.value_namespace = name_space;
        max_req_per_user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-req-total")
    {
        max_req_total = value;
        max_req_total.value_namespace = name_space;
        max_req_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-streams")
    {
        max_streams = value;
        max_streams.value_namespace = name_space;
        max_streams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-streams-per-user")
    {
        max_streams_per_user = value;
        max_streams_per_user.value_namespace = name_space;
        max_streams_per_user.value_namespace_prefix = name_space_prefix;
    }
}

void Grpc::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "tls")
    {
        tls.yfilter = yfilter;
    }
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
    if(value_path == "listening-port")
    {
        listening_port.yfilter = yfilter;
    }
    if(value_path == "vrf-socket-ns-path")
    {
        vrf_socket_ns_path.yfilter = yfilter;
    }
    if(value_path == "max-req-per-user")
    {
        max_req_per_user.yfilter = yfilter;
    }
    if(value_path == "max-req-total")
    {
        max_req_total.yfilter = yfilter;
    }
    if(value_path == "max-streams")
    {
        max_streams.yfilter = yfilter;
    }
    if(value_path == "max-streams-per-user")
    {
        max_streams_per_user.yfilter = yfilter;
    }
}

bool Grpc::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "address-family" || name == "tls" || name == "trustpoint" || name == "listening-port" || name == "vrf-socket-ns-path" || name == "max-req-per-user" || name == "max-req-total" || name == "max-streams" || name == "max-streams-per-user")
        return true;
    return false;
}


}
}

