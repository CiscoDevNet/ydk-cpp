#ifndef _CISCO_IOS_XR_INFRA_RCMD_OPER_2_
#define _CISCO_IOS_XR_INFRA_RCMD_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_rcmd_oper_0.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {


class Rcmd::Process::Ldp::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol_id; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        class InstanceName; //type: Rcmd::Process::Ldp::Process_::InstanceName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_::InstanceName> > instance_name;
        
}; // Rcmd::Process::Ldp::Process_


class Rcmd::Process::Ldp::Process_::InstanceName : public ydk::Entity
{
    public:
        InstanceName();
        ~InstanceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf lsp_regeneration_count; //type: uint32
        ydk::YLeaf lsp_regeneration_serial; //type: uint32
        ydk::YLeaf arch_spf_event; //type: uint32
        ydk::YLeaf arch_lsp_regeneration; //type: uint32
        class Instance; //type: Rcmd::Process::Ldp::Process_::InstanceName::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_::InstanceName::Instance> > instance;
        
}; // Rcmd::Process::Ldp::Process_::InstanceName


class Rcmd::Process::Ldp::Process_::InstanceName::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_state; //type: RcmdShowInstState
        ydk::YLeaf instance_deleted; //type: RcmdBoolYesNo
        ydk::YLeaf fwd_referenced; //type: RcmdBoolYesNo
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf spf_offset; //type: uint32
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf arch_spf_run; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf total_spt_nos; //type: uint32

}; // Rcmd::Process::Ldp::Process_::InstanceName::Instance


class Rcmd::Process::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Process_; //type: Rcmd::Process::Ospf::Process_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_> > process;
        
}; // Rcmd::Process::Ospf


class Rcmd::Process::Ospf::Process_ : public ydk::Entity
{
    public:
        Process_();
        ~Process_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol_id; //type: RcmdProtocolId
        ydk::YLeaf process_name; //type: string
        class InstanceName; //type: Rcmd::Process::Ospf::Process_::InstanceName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_::InstanceName> > instance_name;
        
}; // Rcmd::Process::Ospf::Process_


class Rcmd::Process::Ospf::Process_::InstanceName : public ydk::Entity
{
    public:
        InstanceName();
        ~InstanceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf lsp_regeneration_count; //type: uint32
        ydk::YLeaf lsp_regeneration_serial; //type: uint32
        ydk::YLeaf arch_spf_event; //type: uint32
        ydk::YLeaf arch_lsp_regeneration; //type: uint32
        class Instance; //type: Rcmd::Process::Ospf::Process_::InstanceName::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_::InstanceName::Instance> > instance;
        
}; // Rcmd::Process::Ospf::Process_::InstanceName


class Rcmd::Process::Ospf::Process_::InstanceName::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_state; //type: RcmdShowInstState
        ydk::YLeaf instance_deleted; //type: RcmdBoolYesNo
        ydk::YLeaf fwd_referenced; //type: RcmdBoolYesNo
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf spf_offset; //type: uint32
        ydk::YLeaf total_spf_nos; //type: uint32
        ydk::YLeaf arch_spf_run; //type: uint32
        ydk::YLeaf route_change_spf_nos; //type: uint32
        ydk::YLeaf no_route_change_spf_nos; //type: uint32
        ydk::YLeaf not_interested_spf_nos; //type: uint32
        ydk::YLeaf total_spt_nos; //type: uint32

}; // Rcmd::Process::Ospf::Process_::InstanceName::Instance


class Rcmd::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Normal; //type: Rcmd::Server::Normal
        class Detail; //type: Rcmd::Server::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal> normal;
        
}; // Rcmd::Server


class Rcmd::Server::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf status; //type: RcmdBagEnableDisable
        ydk::YLeaf max_events; //type: uint32
        ydk::YLeaf event_buffer_size; //type: uint32
        ydk::YLeaf monitoring_interval; //type: uint32
        ydk::YLeaf next_interval; //type: uint32
        ydk::YLeaf max_interface_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf node_rp_count; //type: uint32
        ydk::YLeaf node_lc_count; //type: uint32
        ydk::YLeaf diag_node_count; //type: uint32
        ydk::YLeaf disabled_node_count; //type: uint32
        ydk::YLeaf in_active_node_count; //type: uint32
        ydk::YLeaf last_process_start_time; //type: string
        ydk::YLeaf last_process_duration; //type: string
        ydk::YLeaf last_process_state; //type: RcmdShowPrcsState
        ydk::YLeaf process_count; //type: uint32
        ydk::YLeaf spf_process_count; //type: uint32
        ydk::YLeaf reports_archive_path; //type: string
        ydk::YLeaf reports_archive_node; //type: string
        ydk::YLeaf last_archival_status; //type: string
        ydk::YLeaf last_archival_error; //type: string
        ydk::YLeaf last_archival_error_time; //type: string
        ydk::YLeaf archive_count; //type: uint32
        ydk::YLeaf diagnostics_archive_path; //type: string
        ydk::YLeaf diagnostics_archive_node; //type: string
        class ProtocolConfig; //type: Rcmd::Server::Detail::ProtocolConfig
        class ServerDetail; //type: Rcmd::Server::Detail::ServerDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ProtocolConfig> > protocol_config;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ServerDetail> > server_detail;
        
}; // Rcmd::Server::Detail


class Rcmd::Server::Detail::ProtocolConfig : public ydk::Entity
{
    public:
        ProtocolConfig();
        ~ProtocolConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol_name; //type: string
        class Priority; //type: Rcmd::Server::Detail::ProtocolConfig::Priority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ProtocolConfig::Priority> > priority;
        
}; // Rcmd::Server::Detail::ProtocolConfig


class Rcmd::Server::Detail::ProtocolConfig::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf priority_name; //type: RcmdPriorityLevel
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf disable; //type: RcmdBoolYesNo

}; // Rcmd::Server::Detail::ProtocolConfig::Priority


class Rcmd::Server::Detail::ServerDetail : public ydk::Entity
{
    public:
        ServerDetail();
        ~ServerDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf overload_suspend; //type: uint32
        ydk::YLeaf memory_suspend; //type: uint32
        class TraceInformation; //type: Rcmd::Server::Detail::ServerDetail::TraceInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ServerDetail::TraceInformation> > trace_information;
        
}; // Rcmd::Server::Detail::ServerDetail


class Rcmd::Server::Detail::ServerDetail::TraceInformation : public ydk::Entity
{
    public:
        TraceInformation();
        ~TraceInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trace_name; //type: string
        ydk::YLeaf total_stats; //type: uint32
        ydk::YLeaf last_run_stats; //type: uint32
        ydk::YLeaf error_stats; //type: uint32

}; // Rcmd::Server::Detail::ServerDetail::TraceInformation


class Rcmd::Server::Normal : public ydk::Entity
{
    public:
        Normal();
        ~Normal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf status; //type: RcmdBagEnableDisable
        ydk::YLeaf max_events; //type: uint32
        ydk::YLeaf event_buffer_size; //type: uint32
        ydk::YLeaf monitoring_interval; //type: uint32
        ydk::YLeaf next_interval; //type: uint32
        ydk::YLeaf max_interface_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf node_rp_count; //type: uint32
        ydk::YLeaf node_lc_count; //type: uint32
        ydk::YLeaf diag_node_count; //type: uint32
        ydk::YLeaf disabled_node_count; //type: uint32
        ydk::YLeaf in_active_node_count; //type: uint32
        ydk::YLeaf last_process_start_time; //type: string
        ydk::YLeaf last_process_duration; //type: string
        ydk::YLeaf last_process_state; //type: RcmdShowPrcsState
        ydk::YLeaf process_count; //type: uint32
        ydk::YLeaf spf_process_count; //type: uint32
        ydk::YLeaf reports_archive_path; //type: string
        ydk::YLeaf reports_archive_node; //type: string
        ydk::YLeaf last_archival_status; //type: string
        ydk::YLeaf last_archival_error; //type: string
        ydk::YLeaf last_archival_error_time; //type: string
        ydk::YLeaf archive_count; //type: uint32
        ydk::YLeaf diagnostics_archive_path; //type: string
        ydk::YLeaf diagnostics_archive_node; //type: string
        class ProtocolConfig; //type: Rcmd::Server::Normal::ProtocolConfig
        class ServerDetail; //type: Rcmd::Server::Normal::ServerDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ProtocolConfig> > protocol_config;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ServerDetail> > server_detail;
        
}; // Rcmd::Server::Normal


class Rcmd::Server::Normal::ProtocolConfig : public ydk::Entity
{
    public:
        ProtocolConfig();
        ~ProtocolConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol_name; //type: string
        class Priority; //type: Rcmd::Server::Normal::ProtocolConfig::Priority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ProtocolConfig::Priority> > priority;
        
}; // Rcmd::Server::Normal::ProtocolConfig


class Rcmd::Server::Normal::ProtocolConfig::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf priority_name; //type: RcmdPriorityLevel
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf disable; //type: RcmdBoolYesNo

}; // Rcmd::Server::Normal::ProtocolConfig::Priority


class Rcmd::Server::Normal::ServerDetail : public ydk::Entity
{
    public:
        ServerDetail();
        ~ServerDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf overload_suspend; //type: uint32
        ydk::YLeaf memory_suspend; //type: uint32
        class TraceInformation; //type: Rcmd::Server::Normal::ServerDetail::TraceInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ServerDetail::TraceInformation> > trace_information;
        
}; // Rcmd::Server::Normal::ServerDetail


class Rcmd::Server::Normal::ServerDetail::TraceInformation : public ydk::Entity
{
    public:
        TraceInformation();
        ~TraceInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trace_name; //type: string
        ydk::YLeaf total_stats; //type: uint32
        ydk::YLeaf last_run_stats; //type: uint32
        ydk::YLeaf error_stats; //type: uint32

}; // Rcmd::Server::Normal::ServerDetail::TraceInformation


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_OPER_2_ */

