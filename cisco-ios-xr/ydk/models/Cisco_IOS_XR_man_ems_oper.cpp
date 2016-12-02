
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_man_ems_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_ems_oper {

Grpc::Statistics::Statistics()
    :
    	address_family{YType::str, "address-family"},
	 ct_cli_config_req_recv{YType::uint64, "ct-cli-config-req-recv"},
	 ct_cli_config_res_sent{YType::uint64, "ct-cli-config-res-sent"},
	 ct_commit_replace_req_recv{YType::uint64, "ct-commit-replace-req-recv"},
	 ct_commit_replace_res_sent{YType::uint64, "ct-commit-replace-res-sent"},
	 ct_delete_config_req_recv{YType::uint64, "ct-delete-config-req-recv"},
	 ct_delete_config_res_sent{YType::uint64, "ct-delete-config-res-sent"},
	 ct_get_config_req_recv{YType::uint64, "ct-get-config-req-recv"},
	 ct_get_config_res_sent{YType::uint64, "ct-get-config-res-sent"},
	 ct_get_current_session{YType::uint32, "ct-get-current-session"},
	 ct_get_oper_req_recv{YType::uint64, "ct-get-oper-req-recv"},
	 ct_get_oper_res_sent{YType::uint64, "ct-get-oper-res-sent"},
	 ct_merge_config_req_recv{YType::uint64, "ct-merge-config-req-recv"},
	 ct_merge_config_res_sent{YType::uint64, "ct-merge-config-res-sent"},
	 ct_replace_config_req_recv{YType::uint64, "ct-replace-config-req-recv"},
	 ct_replace_config_res_sent{YType::uint64, "ct-replace-config-res-sent"},
	 ct_show_cmd_txt_req_recv{YType::uint64, "ct-show-cmd-txt-req-recv"},
	 ct_show_cmd_txt_res_sent{YType::uint64, "ct-show-cmd-txt-res-sent"},
	 listening_port{YType::int32, "listening-port"},
	 max_req_per_user{YType::uint32, "max-req-per-user"},
	 max_req_total{YType::uint32, "max-req-total"},
	 tls{YType::str, "tls"},
	 transport{YType::str, "transport"},
	 trustpoint{YType::str, "trustpoint"}
{
    yang_name = "statistics"; yang_parent_name = "grpc";
}

Grpc::Statistics::~Statistics()
{
}

bool Grpc::Statistics::has_data() const
{
    return address_family.is_set
	|| ct_cli_config_req_recv.is_set
	|| ct_cli_config_res_sent.is_set
	|| ct_commit_replace_req_recv.is_set
	|| ct_commit_replace_res_sent.is_set
	|| ct_delete_config_req_recv.is_set
	|| ct_delete_config_res_sent.is_set
	|| ct_get_config_req_recv.is_set
	|| ct_get_config_res_sent.is_set
	|| ct_get_current_session.is_set
	|| ct_get_oper_req_recv.is_set
	|| ct_get_oper_res_sent.is_set
	|| ct_merge_config_req_recv.is_set
	|| ct_merge_config_res_sent.is_set
	|| ct_replace_config_req_recv.is_set
	|| ct_replace_config_res_sent.is_set
	|| ct_show_cmd_txt_req_recv.is_set
	|| ct_show_cmd_txt_res_sent.is_set
	|| listening_port.is_set
	|| max_req_per_user.is_set
	|| max_req_total.is_set
	|| tls.is_set
	|| transport.is_set
	|| trustpoint.is_set;
}

bool Grpc::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ct_cli_config_req_recv.operation)
	|| is_set(ct_cli_config_res_sent.operation)
	|| is_set(ct_commit_replace_req_recv.operation)
	|| is_set(ct_commit_replace_res_sent.operation)
	|| is_set(ct_delete_config_req_recv.operation)
	|| is_set(ct_delete_config_res_sent.operation)
	|| is_set(ct_get_config_req_recv.operation)
	|| is_set(ct_get_config_res_sent.operation)
	|| is_set(ct_get_current_session.operation)
	|| is_set(ct_get_oper_req_recv.operation)
	|| is_set(ct_get_oper_res_sent.operation)
	|| is_set(ct_merge_config_req_recv.operation)
	|| is_set(ct_merge_config_res_sent.operation)
	|| is_set(ct_replace_config_req_recv.operation)
	|| is_set(ct_replace_config_res_sent.operation)
	|| is_set(ct_show_cmd_txt_req_recv.operation)
	|| is_set(ct_show_cmd_txt_res_sent.operation)
	|| is_set(listening_port.operation)
	|| is_set(max_req_per_user.operation)
	|| is_set(max_req_total.operation)
	|| is_set(tls.operation)
	|| is_set(transport.operation)
	|| is_set(trustpoint.operation);
}

std::string Grpc::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Grpc::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-ems-oper:grpc/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ct_cli_config_req_recv.is_set || is_set(ct_cli_config_req_recv.operation)) leaf_name_data.push_back(ct_cli_config_req_recv.get_name_leafdata());
    if (ct_cli_config_res_sent.is_set || is_set(ct_cli_config_res_sent.operation)) leaf_name_data.push_back(ct_cli_config_res_sent.get_name_leafdata());
    if (ct_commit_replace_req_recv.is_set || is_set(ct_commit_replace_req_recv.operation)) leaf_name_data.push_back(ct_commit_replace_req_recv.get_name_leafdata());
    if (ct_commit_replace_res_sent.is_set || is_set(ct_commit_replace_res_sent.operation)) leaf_name_data.push_back(ct_commit_replace_res_sent.get_name_leafdata());
    if (ct_delete_config_req_recv.is_set || is_set(ct_delete_config_req_recv.operation)) leaf_name_data.push_back(ct_delete_config_req_recv.get_name_leafdata());
    if (ct_delete_config_res_sent.is_set || is_set(ct_delete_config_res_sent.operation)) leaf_name_data.push_back(ct_delete_config_res_sent.get_name_leafdata());
    if (ct_get_config_req_recv.is_set || is_set(ct_get_config_req_recv.operation)) leaf_name_data.push_back(ct_get_config_req_recv.get_name_leafdata());
    if (ct_get_config_res_sent.is_set || is_set(ct_get_config_res_sent.operation)) leaf_name_data.push_back(ct_get_config_res_sent.get_name_leafdata());
    if (ct_get_current_session.is_set || is_set(ct_get_current_session.operation)) leaf_name_data.push_back(ct_get_current_session.get_name_leafdata());
    if (ct_get_oper_req_recv.is_set || is_set(ct_get_oper_req_recv.operation)) leaf_name_data.push_back(ct_get_oper_req_recv.get_name_leafdata());
    if (ct_get_oper_res_sent.is_set || is_set(ct_get_oper_res_sent.operation)) leaf_name_data.push_back(ct_get_oper_res_sent.get_name_leafdata());
    if (ct_merge_config_req_recv.is_set || is_set(ct_merge_config_req_recv.operation)) leaf_name_data.push_back(ct_merge_config_req_recv.get_name_leafdata());
    if (ct_merge_config_res_sent.is_set || is_set(ct_merge_config_res_sent.operation)) leaf_name_data.push_back(ct_merge_config_res_sent.get_name_leafdata());
    if (ct_replace_config_req_recv.is_set || is_set(ct_replace_config_req_recv.operation)) leaf_name_data.push_back(ct_replace_config_req_recv.get_name_leafdata());
    if (ct_replace_config_res_sent.is_set || is_set(ct_replace_config_res_sent.operation)) leaf_name_data.push_back(ct_replace_config_res_sent.get_name_leafdata());
    if (ct_show_cmd_txt_req_recv.is_set || is_set(ct_show_cmd_txt_req_recv.operation)) leaf_name_data.push_back(ct_show_cmd_txt_req_recv.get_name_leafdata());
    if (ct_show_cmd_txt_res_sent.is_set || is_set(ct_show_cmd_txt_res_sent.operation)) leaf_name_data.push_back(ct_show_cmd_txt_res_sent.get_name_leafdata());
    if (listening_port.is_set || is_set(listening_port.operation)) leaf_name_data.push_back(listening_port.get_name_leafdata());
    if (max_req_per_user.is_set || is_set(max_req_per_user.operation)) leaf_name_data.push_back(max_req_per_user.get_name_leafdata());
    if (max_req_total.is_set || is_set(max_req_total.operation)) leaf_name_data.push_back(max_req_total.get_name_leafdata());
    if (tls.is_set || is_set(tls.operation)) leaf_name_data.push_back(tls.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (trustpoint.is_set || is_set(trustpoint.operation)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Grpc::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Grpc::Statistics::get_children()
{
    return children;
}

void Grpc::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "ct-cli-config-req-recv")
    {
        ct_cli_config_req_recv = value;
    }
    if(value_path == "ct-cli-config-res-sent")
    {
        ct_cli_config_res_sent = value;
    }
    if(value_path == "ct-commit-replace-req-recv")
    {
        ct_commit_replace_req_recv = value;
    }
    if(value_path == "ct-commit-replace-res-sent")
    {
        ct_commit_replace_res_sent = value;
    }
    if(value_path == "ct-delete-config-req-recv")
    {
        ct_delete_config_req_recv = value;
    }
    if(value_path == "ct-delete-config-res-sent")
    {
        ct_delete_config_res_sent = value;
    }
    if(value_path == "ct-get-config-req-recv")
    {
        ct_get_config_req_recv = value;
    }
    if(value_path == "ct-get-config-res-sent")
    {
        ct_get_config_res_sent = value;
    }
    if(value_path == "ct-get-current-session")
    {
        ct_get_current_session = value;
    }
    if(value_path == "ct-get-oper-req-recv")
    {
        ct_get_oper_req_recv = value;
    }
    if(value_path == "ct-get-oper-res-sent")
    {
        ct_get_oper_res_sent = value;
    }
    if(value_path == "ct-merge-config-req-recv")
    {
        ct_merge_config_req_recv = value;
    }
    if(value_path == "ct-merge-config-res-sent")
    {
        ct_merge_config_res_sent = value;
    }
    if(value_path == "ct-replace-config-req-recv")
    {
        ct_replace_config_req_recv = value;
    }
    if(value_path == "ct-replace-config-res-sent")
    {
        ct_replace_config_res_sent = value;
    }
    if(value_path == "ct-show-cmd-txt-req-recv")
    {
        ct_show_cmd_txt_req_recv = value;
    }
    if(value_path == "ct-show-cmd-txt-res-sent")
    {
        ct_show_cmd_txt_res_sent = value;
    }
    if(value_path == "listening-port")
    {
        listening_port = value;
    }
    if(value_path == "max-req-per-user")
    {
        max_req_per_user = value;
    }
    if(value_path == "max-req-total")
    {
        max_req_total = value;
    }
    if(value_path == "tls")
    {
        tls = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "trustpoint")
    {
        trustpoint = value;
    }
}

Grpc::Status::Status()
    :
    	address_family{YType::str, "address-family"},
	 ct_cli_config_req_recv{YType::uint64, "ct-cli-config-req-recv"},
	 ct_cli_config_res_sent{YType::uint64, "ct-cli-config-res-sent"},
	 ct_commit_replace_req_recv{YType::uint64, "ct-commit-replace-req-recv"},
	 ct_commit_replace_res_sent{YType::uint64, "ct-commit-replace-res-sent"},
	 ct_delete_config_req_recv{YType::uint64, "ct-delete-config-req-recv"},
	 ct_delete_config_res_sent{YType::uint64, "ct-delete-config-res-sent"},
	 ct_get_config_req_recv{YType::uint64, "ct-get-config-req-recv"},
	 ct_get_config_res_sent{YType::uint64, "ct-get-config-res-sent"},
	 ct_get_current_session{YType::uint32, "ct-get-current-session"},
	 ct_get_oper_req_recv{YType::uint64, "ct-get-oper-req-recv"},
	 ct_get_oper_res_sent{YType::uint64, "ct-get-oper-res-sent"},
	 ct_merge_config_req_recv{YType::uint64, "ct-merge-config-req-recv"},
	 ct_merge_config_res_sent{YType::uint64, "ct-merge-config-res-sent"},
	 ct_replace_config_req_recv{YType::uint64, "ct-replace-config-req-recv"},
	 ct_replace_config_res_sent{YType::uint64, "ct-replace-config-res-sent"},
	 ct_show_cmd_txt_req_recv{YType::uint64, "ct-show-cmd-txt-req-recv"},
	 ct_show_cmd_txt_res_sent{YType::uint64, "ct-show-cmd-txt-res-sent"},
	 listening_port{YType::int32, "listening-port"},
	 max_req_per_user{YType::uint32, "max-req-per-user"},
	 max_req_total{YType::uint32, "max-req-total"},
	 tls{YType::str, "tls"},
	 transport{YType::str, "transport"},
	 trustpoint{YType::str, "trustpoint"}
{
    yang_name = "status"; yang_parent_name = "grpc";
}

Grpc::Status::~Status()
{
}

bool Grpc::Status::has_data() const
{
    return address_family.is_set
	|| ct_cli_config_req_recv.is_set
	|| ct_cli_config_res_sent.is_set
	|| ct_commit_replace_req_recv.is_set
	|| ct_commit_replace_res_sent.is_set
	|| ct_delete_config_req_recv.is_set
	|| ct_delete_config_res_sent.is_set
	|| ct_get_config_req_recv.is_set
	|| ct_get_config_res_sent.is_set
	|| ct_get_current_session.is_set
	|| ct_get_oper_req_recv.is_set
	|| ct_get_oper_res_sent.is_set
	|| ct_merge_config_req_recv.is_set
	|| ct_merge_config_res_sent.is_set
	|| ct_replace_config_req_recv.is_set
	|| ct_replace_config_res_sent.is_set
	|| ct_show_cmd_txt_req_recv.is_set
	|| ct_show_cmd_txt_res_sent.is_set
	|| listening_port.is_set
	|| max_req_per_user.is_set
	|| max_req_total.is_set
	|| tls.is_set
	|| transport.is_set
	|| trustpoint.is_set;
}

bool Grpc::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ct_cli_config_req_recv.operation)
	|| is_set(ct_cli_config_res_sent.operation)
	|| is_set(ct_commit_replace_req_recv.operation)
	|| is_set(ct_commit_replace_res_sent.operation)
	|| is_set(ct_delete_config_req_recv.operation)
	|| is_set(ct_delete_config_res_sent.operation)
	|| is_set(ct_get_config_req_recv.operation)
	|| is_set(ct_get_config_res_sent.operation)
	|| is_set(ct_get_current_session.operation)
	|| is_set(ct_get_oper_req_recv.operation)
	|| is_set(ct_get_oper_res_sent.operation)
	|| is_set(ct_merge_config_req_recv.operation)
	|| is_set(ct_merge_config_res_sent.operation)
	|| is_set(ct_replace_config_req_recv.operation)
	|| is_set(ct_replace_config_res_sent.operation)
	|| is_set(ct_show_cmd_txt_req_recv.operation)
	|| is_set(ct_show_cmd_txt_res_sent.operation)
	|| is_set(listening_port.operation)
	|| is_set(max_req_per_user.operation)
	|| is_set(max_req_total.operation)
	|| is_set(tls.operation)
	|| is_set(transport.operation)
	|| is_set(trustpoint.operation);
}

std::string Grpc::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

EntityPath Grpc::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-ems-oper:grpc/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ct_cli_config_req_recv.is_set || is_set(ct_cli_config_req_recv.operation)) leaf_name_data.push_back(ct_cli_config_req_recv.get_name_leafdata());
    if (ct_cli_config_res_sent.is_set || is_set(ct_cli_config_res_sent.operation)) leaf_name_data.push_back(ct_cli_config_res_sent.get_name_leafdata());
    if (ct_commit_replace_req_recv.is_set || is_set(ct_commit_replace_req_recv.operation)) leaf_name_data.push_back(ct_commit_replace_req_recv.get_name_leafdata());
    if (ct_commit_replace_res_sent.is_set || is_set(ct_commit_replace_res_sent.operation)) leaf_name_data.push_back(ct_commit_replace_res_sent.get_name_leafdata());
    if (ct_delete_config_req_recv.is_set || is_set(ct_delete_config_req_recv.operation)) leaf_name_data.push_back(ct_delete_config_req_recv.get_name_leafdata());
    if (ct_delete_config_res_sent.is_set || is_set(ct_delete_config_res_sent.operation)) leaf_name_data.push_back(ct_delete_config_res_sent.get_name_leafdata());
    if (ct_get_config_req_recv.is_set || is_set(ct_get_config_req_recv.operation)) leaf_name_data.push_back(ct_get_config_req_recv.get_name_leafdata());
    if (ct_get_config_res_sent.is_set || is_set(ct_get_config_res_sent.operation)) leaf_name_data.push_back(ct_get_config_res_sent.get_name_leafdata());
    if (ct_get_current_session.is_set || is_set(ct_get_current_session.operation)) leaf_name_data.push_back(ct_get_current_session.get_name_leafdata());
    if (ct_get_oper_req_recv.is_set || is_set(ct_get_oper_req_recv.operation)) leaf_name_data.push_back(ct_get_oper_req_recv.get_name_leafdata());
    if (ct_get_oper_res_sent.is_set || is_set(ct_get_oper_res_sent.operation)) leaf_name_data.push_back(ct_get_oper_res_sent.get_name_leafdata());
    if (ct_merge_config_req_recv.is_set || is_set(ct_merge_config_req_recv.operation)) leaf_name_data.push_back(ct_merge_config_req_recv.get_name_leafdata());
    if (ct_merge_config_res_sent.is_set || is_set(ct_merge_config_res_sent.operation)) leaf_name_data.push_back(ct_merge_config_res_sent.get_name_leafdata());
    if (ct_replace_config_req_recv.is_set || is_set(ct_replace_config_req_recv.operation)) leaf_name_data.push_back(ct_replace_config_req_recv.get_name_leafdata());
    if (ct_replace_config_res_sent.is_set || is_set(ct_replace_config_res_sent.operation)) leaf_name_data.push_back(ct_replace_config_res_sent.get_name_leafdata());
    if (ct_show_cmd_txt_req_recv.is_set || is_set(ct_show_cmd_txt_req_recv.operation)) leaf_name_data.push_back(ct_show_cmd_txt_req_recv.get_name_leafdata());
    if (ct_show_cmd_txt_res_sent.is_set || is_set(ct_show_cmd_txt_res_sent.operation)) leaf_name_data.push_back(ct_show_cmd_txt_res_sent.get_name_leafdata());
    if (listening_port.is_set || is_set(listening_port.operation)) leaf_name_data.push_back(listening_port.get_name_leafdata());
    if (max_req_per_user.is_set || is_set(max_req_per_user.operation)) leaf_name_data.push_back(max_req_per_user.get_name_leafdata());
    if (max_req_total.is_set || is_set(max_req_total.operation)) leaf_name_data.push_back(max_req_total.get_name_leafdata());
    if (tls.is_set || is_set(tls.operation)) leaf_name_data.push_back(tls.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (trustpoint.is_set || is_set(trustpoint.operation)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Grpc::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Grpc::Status::get_children()
{
    return children;
}

void Grpc::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "ct-cli-config-req-recv")
    {
        ct_cli_config_req_recv = value;
    }
    if(value_path == "ct-cli-config-res-sent")
    {
        ct_cli_config_res_sent = value;
    }
    if(value_path == "ct-commit-replace-req-recv")
    {
        ct_commit_replace_req_recv = value;
    }
    if(value_path == "ct-commit-replace-res-sent")
    {
        ct_commit_replace_res_sent = value;
    }
    if(value_path == "ct-delete-config-req-recv")
    {
        ct_delete_config_req_recv = value;
    }
    if(value_path == "ct-delete-config-res-sent")
    {
        ct_delete_config_res_sent = value;
    }
    if(value_path == "ct-get-config-req-recv")
    {
        ct_get_config_req_recv = value;
    }
    if(value_path == "ct-get-config-res-sent")
    {
        ct_get_config_res_sent = value;
    }
    if(value_path == "ct-get-current-session")
    {
        ct_get_current_session = value;
    }
    if(value_path == "ct-get-oper-req-recv")
    {
        ct_get_oper_req_recv = value;
    }
    if(value_path == "ct-get-oper-res-sent")
    {
        ct_get_oper_res_sent = value;
    }
    if(value_path == "ct-merge-config-req-recv")
    {
        ct_merge_config_req_recv = value;
    }
    if(value_path == "ct-merge-config-res-sent")
    {
        ct_merge_config_res_sent = value;
    }
    if(value_path == "ct-replace-config-req-recv")
    {
        ct_replace_config_req_recv = value;
    }
    if(value_path == "ct-replace-config-res-sent")
    {
        ct_replace_config_res_sent = value;
    }
    if(value_path == "ct-show-cmd-txt-req-recv")
    {
        ct_show_cmd_txt_req_recv = value;
    }
    if(value_path == "ct-show-cmd-txt-res-sent")
    {
        ct_show_cmd_txt_res_sent = value;
    }
    if(value_path == "listening-port")
    {
        listening_port = value;
    }
    if(value_path == "max-req-per-user")
    {
        max_req_per_user = value;
    }
    if(value_path == "max-req-total")
    {
        max_req_total = value;
    }
    if(value_path == "tls")
    {
        tls = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "trustpoint")
    {
        trustpoint = value;
    }
}

Grpc::Grpc()
    :
    statistics(std::make_unique<Grpc::Statistics>())
	,status(std::make_unique<Grpc::Status>())
{
    statistics->parent = this;
    children["statistics"] = statistics.get();

    status->parent = this;
    children["status"] = status.get();

    yang_name = "grpc"; yang_parent_name = "Cisco-IOS-XR-man-ems-oper";
}

Grpc::~Grpc()
{
}

bool Grpc::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Grpc::has_operation() const
{
    return is_set(operation)
	|| (statistics !=  nullptr && is_set(statistics->operation))
	|| (status !=  nullptr && is_set(status->operation));
}

std::string Grpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-ems-oper:grpc";

    return path_buffer.str();

}

EntityPath Grpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Grpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<Grpc::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    if(child_yang_name == "status")
    {
        if(status != nullptr)
        {
            children["status"] = status.get();
        }
        else
        {
            status = std::make_unique<Grpc::Status>();
            status->parent = this;
            children["status"] = status.get();
        }
        return children.at("status");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Grpc::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    if(children.find("status") == children.end())
    {
        if(status != nullptr)
        {
            children["status"] = status.get();
        }
    }

    return children;
}

void Grpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Grpc::clone_ptr()
{
    return std::make_unique<Grpc>();
}


}
}

