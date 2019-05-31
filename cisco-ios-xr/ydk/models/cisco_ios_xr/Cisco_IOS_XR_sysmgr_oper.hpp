#ifndef _CISCO_IOS_XR_SYSMGR_OPER_
#define _CISCO_IOS_XR_SYSMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysmgr_oper {

class SystemProcess : public ydk::Entity
{
    public:
        SystemProcess();
        ~SystemProcess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class NodeTable; //type: SystemProcess::NodeTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable> node_table;
        
}; // SystemProcess


class SystemProcess::NodeTable : public ydk::Entity
{
    public:
        NodeTable();
        ~NodeTable();

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

        class Node; //type: SystemProcess::NodeTable::Node

        ydk::YList node;
        
}; // SystemProcess::NodeTable


class SystemProcess::NodeTable::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class Name; //type: SystemProcess::NodeTable::Node::Name
        class Jids; //type: SystemProcess::NodeTable::Node::Jids
        class Dynamic; //type: SystemProcess::NodeTable::Node::Dynamic
        class BootStalled; //type: SystemProcess::NodeTable::Node::BootStalled
        class Processes; //type: SystemProcess::NodeTable::Node::Processes
        class Startup; //type: SystemProcess::NodeTable::Node::Startup
        class Mandatory; //type: SystemProcess::NodeTable::Node::Mandatory
        class Abort; //type: SystemProcess::NodeTable::Node::Abort
        class Failover; //type: SystemProcess::NodeTable::Node::Failover
        class Boot; //type: SystemProcess::NodeTable::Node::Boot
        class Logs; //type: SystemProcess::NodeTable::Node::Logs
        class Searchpath; //type: SystemProcess::NodeTable::Node::Searchpath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name> name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Jids> jids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Dynamic> dynamic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::BootStalled> boot_stalled;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Processes> processes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Startup> startup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Mandatory> mandatory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Abort> abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Failover> failover;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Boot> boot;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Logs> logs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Searchpath> searchpath;
        
}; // SystemProcess::NodeTable::Node


class SystemProcess::NodeTable::Node::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessNameRunInfos; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos
        class ProcessNameInfos; //type: SystemProcess::NodeTable::Node::Name::ProcessNameInfos
        class ProcessNameRunDetails; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails
        class ProcessNameRunverboses; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses
        class ProcessNameDetails; //type: SystemProcess::NodeTable::Node::Name::ProcessNameDetails
        class ProcessNameVerboses; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos> process_name_run_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameInfos> process_name_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails> process_name_run_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses> process_name_runverboses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameDetails> process_name_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameVerboses> process_name_verboses;
        
}; // SystemProcess::NodeTable::Node::Name


class SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos : public ydk::Entity
{
    public:
        ProcessNameRunInfos();
        ~ProcessNameRunInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessNameRunInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo

        ydk::YList process_name_run_info;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos


class SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo : public ydk::Entity
{
    public:
        ProcessNameRunInfo();
        ~ProcessNameRunInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proc_name; //type: string
        ydk::YLeaf job_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf executable; //type: string
        ydk::YLeaf active_path; //type: string
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf args; //type: string
        ydk::YLeaf version_id; //type: string
        ydk::YLeaf respawn; //type: string
        ydk::YLeaf respawn_count; //type: int32
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf process_state; //type: string
        ydk::YLeaf last_exit_status; //type: int32
        ydk::YLeaf last_exit_reason; //type: string
        ydk::YLeaf package_state; //type: string
        ydk::YLeaf started_on_config; //type: string
        ydk::YLeaf feature_name; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf core; //type: string
        ydk::YLeaf max_core; //type: int32
        ydk::YLeaf level; //type: string
        ydk::YLeaf mandatory; //type: boolean
        ydk::YLeaf maint_mode_proc; //type: boolean
        ydk::YLeaf placement_state; //type: string
        ydk::YLeaf start_up_path; //type: string
        ydk::YLeaf memory_limit; //type: uint32
        ydk::YLeaf ready; //type: string
        ydk::YLeaf available; //type: string
        class ProcCpuTime; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime
        class RegisteredItem; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime> proc_cpu_time;
        ydk::YList registered_item;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime : public ydk::Entity
{
    public:
        ProcCpuTime();
        ~ProcCpuTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf system; //type: string
        ydk::YLeaf total; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::ProcCpuTime


class SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem : public ydk::Entity
{
    public:
        RegisteredItem();
        ~RegisteredItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunInfos::ProcessNameRunInfo::RegisteredItem


class SystemProcess::NodeTable::Node::Name::ProcessNameInfos : public ydk::Entity
{
    public:
        ProcessNameInfos();
        ~ProcessNameInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessNameInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo

        ydk::YList process_name_info;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameInfos


class SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo : public ydk::Entity
{
    public:
        ProcessNameInfo();
        ~ProcessNameInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proc_name; //type: string
        ydk::YLeaf job_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf executable; //type: string
        ydk::YLeaf active_path; //type: string
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf args; //type: string
        ydk::YLeaf version_id; //type: string
        ydk::YLeaf respawn; //type: string
        ydk::YLeaf respawn_count; //type: int32
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf process_state; //type: string
        ydk::YLeaf last_exit_status; //type: int32
        ydk::YLeaf last_exit_reason; //type: string
        ydk::YLeaf package_state; //type: string
        ydk::YLeaf started_on_config; //type: string
        ydk::YLeaf feature_name; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf core; //type: string
        ydk::YLeaf max_core; //type: int32
        ydk::YLeaf level; //type: string
        ydk::YLeaf mandatory; //type: boolean
        ydk::YLeaf maint_mode_proc; //type: boolean
        ydk::YLeaf placement_state; //type: string
        ydk::YLeaf start_up_path; //type: string
        ydk::YLeaf memory_limit; //type: uint32
        ydk::YLeaf ready; //type: string
        ydk::YLeaf available; //type: string
        class ProcCpuTime; //type: SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime
        class RegisteredItem; //type: SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime> proc_cpu_time;
        ydk::YList registered_item;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime : public ydk::Entity
{
    public:
        ProcCpuTime();
        ~ProcCpuTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf system; //type: string
        ydk::YLeaf total; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::ProcCpuTime


class SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem : public ydk::Entity
{
    public:
        RegisteredItem();
        ~RegisteredItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameInfos::ProcessNameInfo::RegisteredItem


class SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails : public ydk::Entity
{
    public:
        ProcessNameRunDetails();
        ~ProcessNameRunDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessNameRunDetail; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail

        ydk::YList process_name_run_detail;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails


class SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail : public ydk::Entity
{
    public:
        ProcessNameRunDetail();
        ~ProcessNameRunDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proc_name; //type: string
        class BasicInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo
        class DetailInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo> detail_info;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail


class SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf job_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf executable; //type: string
        ydk::YLeaf active_path; //type: string
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf args; //type: string
        ydk::YLeaf version_id; //type: string
        ydk::YLeaf respawn; //type: string
        ydk::YLeaf respawn_count; //type: int32
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf process_state; //type: string
        ydk::YLeaf last_exit_status; //type: int32
        ydk::YLeaf last_exit_reason; //type: string
        ydk::YLeaf package_state; //type: string
        ydk::YLeaf started_on_config; //type: string
        ydk::YLeaf feature_name; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf core; //type: string
        ydk::YLeaf max_core; //type: int32
        ydk::YLeaf level; //type: string
        ydk::YLeaf mandatory; //type: boolean
        ydk::YLeaf maint_mode_proc; //type: boolean
        ydk::YLeaf placement_state; //type: string
        ydk::YLeaf start_up_path; //type: string
        ydk::YLeaf memory_limit; //type: uint32
        ydk::YLeaf ready; //type: string
        ydk::YLeaf available; //type: string
        class ProcCpuTime; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime
        class RegisteredItem; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime> proc_cpu_time;
        ydk::YList registered_item;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime : public ydk::Entity
{
    public:
        ProcCpuTime();
        ~ProcCpuTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf system; //type: string
        ydk::YLeaf total; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::ProcCpuTime


class SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem : public ydk::Entity
{
    public:
        RegisteredItem();
        ~RegisteredItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::BasicInfo::RegisteredItem


class SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo : public ydk::Entity
{
    public:
        DetailInfo();
        ~DetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf running_path; //type: string
        ydk::YLeaf package_path; //type: string
        ydk::YLeaf job_id_link; //type: int32
        ydk::YLeaf group_jid; //type: string
        ydk::YLeaf fail_count; //type: uint32
        ydk::YLeaf restart_needed; //type: boolean
        ydk::YLeaf init_process; //type: boolean
        ydk::YLeaf last_online; //type: string
        ydk::YLeaf this_pcb; //type: string
        ydk::YLeaf next_pcb; //type: string
        ydk::YLeaf envs; //type: string
        ydk::YLeaf wait_for; //type: string
        ydk::YLeaf job_id_on_rp; //type: int32
        ydk::YLeaf is_standby_capable; //type: boolean
        ydk::YLeaf disable_kill; //type: boolean
        ydk::YLeaf send_avail; //type: boolean
        ydk::YLeaf node_event_cli_info; //type: int32
        ydk::YLeaf node_redundancy_state; //type: string
        ydk::YLeaf role_event_cli_info; //type: int32
        ydk::YLeaf proc_role_state; //type: string
        ydk::YLeaf standby_event_cli_info; //type: int32
        ydk::YLeaf cleanup_event_cli_info; //type: int32
        ydk::YLeaf band_ready_event_cli_info; //type: int32
        ydk::YLeaf lr_event_cli_info; //type: int32
        ydk::YLeaf plane_ready_event_cli_info; //type: int32
        ydk::YLeaf mdr_is_done_cli_info; //type: int32

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunDetails::ProcessNameRunDetail::DetailInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses : public ydk::Entity
{
    public:
        ProcessNameRunverboses();
        ~ProcessNameRunverboses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessNameRunverbose; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose

        ydk::YList process_name_runverbose;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose : public ydk::Entity
{
    public:
        ProcessNameRunverbose();
        ~ProcessNameRunverbose();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proc_name; //type: string
        class BasicInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo
        class DetailInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo
        class VerboseInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo> detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo> verbose_info;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf job_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf executable; //type: string
        ydk::YLeaf active_path; //type: string
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf args; //type: string
        ydk::YLeaf version_id; //type: string
        ydk::YLeaf respawn; //type: string
        ydk::YLeaf respawn_count; //type: int32
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf process_state; //type: string
        ydk::YLeaf last_exit_status; //type: int32
        ydk::YLeaf last_exit_reason; //type: string
        ydk::YLeaf package_state; //type: string
        ydk::YLeaf started_on_config; //type: string
        ydk::YLeaf feature_name; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf core; //type: string
        ydk::YLeaf max_core; //type: int32
        ydk::YLeaf level; //type: string
        ydk::YLeaf mandatory; //type: boolean
        ydk::YLeaf maint_mode_proc; //type: boolean
        ydk::YLeaf placement_state; //type: string
        ydk::YLeaf start_up_path; //type: string
        ydk::YLeaf memory_limit; //type: uint32
        ydk::YLeaf ready; //type: string
        ydk::YLeaf available; //type: string
        class ProcCpuTime; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime
        class RegisteredItem; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime> proc_cpu_time;
        ydk::YList registered_item;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime : public ydk::Entity
{
    public:
        ProcCpuTime();
        ~ProcCpuTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf system; //type: string
        ydk::YLeaf total; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::ProcCpuTime


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem : public ydk::Entity
{
    public:
        RegisteredItem();
        ~RegisteredItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::BasicInfo::RegisteredItem


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo : public ydk::Entity
{
    public:
        DetailInfo();
        ~DetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf running_path; //type: string
        ydk::YLeaf package_path; //type: string
        ydk::YLeaf job_id_link; //type: int32
        ydk::YLeaf group_jid; //type: string
        ydk::YLeaf fail_count; //type: uint32
        ydk::YLeaf restart_needed; //type: boolean
        ydk::YLeaf init_process; //type: boolean
        ydk::YLeaf last_online; //type: string
        ydk::YLeaf this_pcb; //type: string
        ydk::YLeaf next_pcb; //type: string
        ydk::YLeaf envs; //type: string
        ydk::YLeaf wait_for; //type: string
        ydk::YLeaf job_id_on_rp; //type: int32
        ydk::YLeaf is_standby_capable; //type: boolean
        ydk::YLeaf disable_kill; //type: boolean
        ydk::YLeaf send_avail; //type: boolean
        ydk::YLeaf node_event_cli_info; //type: int32
        ydk::YLeaf node_redundancy_state; //type: string
        ydk::YLeaf role_event_cli_info; //type: int32
        ydk::YLeaf proc_role_state; //type: string
        ydk::YLeaf standby_event_cli_info; //type: int32
        ydk::YLeaf cleanup_event_cli_info; //type: int32
        ydk::YLeaf band_ready_event_cli_info; //type: int32
        ydk::YLeaf lr_event_cli_info; //type: int32
        ydk::YLeaf plane_ready_event_cli_info; //type: int32
        ydk::YLeaf mdr_is_done_cli_info; //type: int32

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::DetailInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo : public ydk::Entity
{
    public:
        VerboseInfo();
        ~VerboseInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_group; //type: string
        ydk::YLeaf respawn_allowed; //type: int32
        ydk::YLeaf wait_for_exit; //type: int32
        ydk::YLeaf dynamic_tag; //type: int32
        ydk::YLeaf forced_stop; //type: int32
        ydk::YLeaf critical_process; //type: int32
        ydk::YLeaf hold; //type: int32
        ydk::YLeaf transient; //type: int32
        ydk::YLeaf tuple_cfgmgr; //type: int32
        ydk::YLeaf standby_capable; //type: int32
        ydk::YLeaf edm_startup; //type: int32
        ydk::YLeaf placement; //type: int32
        ydk::YLeaf skip_kill_notif; //type: int32
        ydk::YLeaf init_proc; //type: int32
        ydk::YLeaf sysdb_event; //type: int32
        ydk::YLeaf level_started; //type: int32
        ydk::YLeaf proc_avail; //type: int32
        ydk::YLeaf tuples_scanned; //type: int32
        ydk::YLeaf no_chkpt_start; //type: int32
        ydk::YLeaf in_shut_down; //type: int32
        ydk::YLeaf sm_started; //type: int32
        ydk::YLeaf ignore_on_sc; //type: int32
        ydk::YLeaf ignore_on_easy_bake; //type: int32
        ydk::YLeaf pre_init; //type: int32
        ydk::YLeaf eoi_received; //type: int32
        ydk::YLeaf eoi_timeout; //type: int32
        ydk::YLeaf avail_timeout; //type: int32
        ydk::YLeaf reserved_memory; //type: int32
        ydk::YLeaf allow_warned; //type: int32
        ydk::YLeaf arg_change; //type: int32
        ydk::YLeaf restart_on_tuple; //type: int32
        ydk::YLeaf boot_hold; //type: int32
        ydk::YLeaf reg_id; //type: int32
        ydk::YLeaf memory_limit; //type: int32
        ydk::YLeaf parent_job_id; //type: int32
        ydk::YLeaf tuple_index; //type: int32
        ydk::YLeaf dump_count; //type: int32
        ydk::YLeaf respawn_interval_user; //type: int32
        ydk::YLeaf silent_restart_count; //type: int32
        ydk::YLeaf critical_tier; //type: int32
        ydk::YLeaf exit_type; //type: int32
        ydk::YLeaf init_timeout; //type: int32
        ydk::YLeaf restart_by_cmd; //type: int32
        ydk::YLeaf boot_pref; //type: int32
        ydk::YLeaf mdr_mbi_proc; //type: int32
        ydk::YLeaf mdr_non_mbi_kld; //type: int32
        ydk::YLeaf mdr_mbi_kld; //type: int32
        ydk::YLeaf mdr_shut_delay; //type: int32
        ydk::YLeaf mdr_keep_thru; //type: int32
        ydk::YLeaf mdr_spoofer; //type: int32
        ydk::YLeaf mdr_spoofed; //type: int32
        ydk::YLeaf mdr_spoofed_last; //type: int32
        ydk::YLeaf mdr_spoofed_ready; //type: int32
        ydk::YLeaf mdr_pcb_check; //type: int32
        ydk::YLeaf mdr_kill_tier; //type: int32
        ydk::YLeaf mdr_kld; //type: int32
        ydk::YLeaf mdr_level; //type: int32
        ydk::YLeaf fm_restart_cnt; //type: int32
        ydk::YLeaf self_managed; //type: int32
        class Tuple; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple
        class OrigTuple; //type: SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple

        ydk::YList tuple;
        ydk::YList orig_tuple;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple : public ydk::Entity
{
    public:
        Tuple();
        ~Tuple();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::Tuple


class SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple : public ydk::Entity
{
    public:
        OrigTuple();
        ~OrigTuple();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameRunverboses::ProcessNameRunverbose::VerboseInfo::OrigTuple


class SystemProcess::NodeTable::Node::Name::ProcessNameDetails : public ydk::Entity
{
    public:
        ProcessNameDetails();
        ~ProcessNameDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessNameDetail; //type: SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail

        ydk::YList process_name_detail;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameDetails


class SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail : public ydk::Entity
{
    public:
        ProcessNameDetail();
        ~ProcessNameDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proc_name; //type: string
        class BasicInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo
        class DetailInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo> detail_info;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail


class SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf job_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf executable; //type: string
        ydk::YLeaf active_path; //type: string
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf args; //type: string
        ydk::YLeaf version_id; //type: string
        ydk::YLeaf respawn; //type: string
        ydk::YLeaf respawn_count; //type: int32
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf process_state; //type: string
        ydk::YLeaf last_exit_status; //type: int32
        ydk::YLeaf last_exit_reason; //type: string
        ydk::YLeaf package_state; //type: string
        ydk::YLeaf started_on_config; //type: string
        ydk::YLeaf feature_name; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf core; //type: string
        ydk::YLeaf max_core; //type: int32
        ydk::YLeaf level; //type: string
        ydk::YLeaf mandatory; //type: boolean
        ydk::YLeaf maint_mode_proc; //type: boolean
        ydk::YLeaf placement_state; //type: string
        ydk::YLeaf start_up_path; //type: string
        ydk::YLeaf memory_limit; //type: uint32
        ydk::YLeaf ready; //type: string
        ydk::YLeaf available; //type: string
        class ProcCpuTime; //type: SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime
        class RegisteredItem; //type: SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime> proc_cpu_time;
        ydk::YList registered_item;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime : public ydk::Entity
{
    public:
        ProcCpuTime();
        ~ProcCpuTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf system; //type: string
        ydk::YLeaf total; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::ProcCpuTime


class SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem : public ydk::Entity
{
    public:
        RegisteredItem();
        ~RegisteredItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::BasicInfo::RegisteredItem


class SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo : public ydk::Entity
{
    public:
        DetailInfo();
        ~DetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf running_path; //type: string
        ydk::YLeaf package_path; //type: string
        ydk::YLeaf job_id_link; //type: int32
        ydk::YLeaf group_jid; //type: string
        ydk::YLeaf fail_count; //type: uint32
        ydk::YLeaf restart_needed; //type: boolean
        ydk::YLeaf init_process; //type: boolean
        ydk::YLeaf last_online; //type: string
        ydk::YLeaf this_pcb; //type: string
        ydk::YLeaf next_pcb; //type: string
        ydk::YLeaf envs; //type: string
        ydk::YLeaf wait_for; //type: string
        ydk::YLeaf job_id_on_rp; //type: int32
        ydk::YLeaf is_standby_capable; //type: boolean
        ydk::YLeaf disable_kill; //type: boolean
        ydk::YLeaf send_avail; //type: boolean
        ydk::YLeaf node_event_cli_info; //type: int32
        ydk::YLeaf node_redundancy_state; //type: string
        ydk::YLeaf role_event_cli_info; //type: int32
        ydk::YLeaf proc_role_state; //type: string
        ydk::YLeaf standby_event_cli_info; //type: int32
        ydk::YLeaf cleanup_event_cli_info; //type: int32
        ydk::YLeaf band_ready_event_cli_info; //type: int32
        ydk::YLeaf lr_event_cli_info; //type: int32
        ydk::YLeaf plane_ready_event_cli_info; //type: int32
        ydk::YLeaf mdr_is_done_cli_info; //type: int32

}; // SystemProcess::NodeTable::Node::Name::ProcessNameDetails::ProcessNameDetail::DetailInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses : public ydk::Entity
{
    public:
        ProcessNameVerboses();
        ~ProcessNameVerboses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessNameVerbose; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose

        ydk::YList process_name_verbose;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose : public ydk::Entity
{
    public:
        ProcessNameVerbose();
        ~ProcessNameVerbose();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proc_name; //type: string
        class BasicInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo
        class DetailInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo
        class VerboseInfo; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo> basic_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo> detail_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo> verbose_info;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo : public ydk::Entity
{
    public:
        BasicInfo();
        ~BasicInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf job_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf executable; //type: string
        ydk::YLeaf active_path; //type: string
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf args; //type: string
        ydk::YLeaf version_id; //type: string
        ydk::YLeaf respawn; //type: string
        ydk::YLeaf respawn_count; //type: int32
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf process_state; //type: string
        ydk::YLeaf last_exit_status; //type: int32
        ydk::YLeaf last_exit_reason; //type: string
        ydk::YLeaf package_state; //type: string
        ydk::YLeaf started_on_config; //type: string
        ydk::YLeaf feature_name; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf core; //type: string
        ydk::YLeaf max_core; //type: int32
        ydk::YLeaf level; //type: string
        ydk::YLeaf mandatory; //type: boolean
        ydk::YLeaf maint_mode_proc; //type: boolean
        ydk::YLeaf placement_state; //type: string
        ydk::YLeaf start_up_path; //type: string
        ydk::YLeaf memory_limit; //type: uint32
        ydk::YLeaf ready; //type: string
        ydk::YLeaf available; //type: string
        class ProcCpuTime; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime
        class RegisteredItem; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime> proc_cpu_time;
        ydk::YList registered_item;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime : public ydk::Entity
{
    public:
        ProcCpuTime();
        ~ProcCpuTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf system; //type: string
        ydk::YLeaf total; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::ProcCpuTime


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem : public ydk::Entity
{
    public:
        RegisteredItem();
        ~RegisteredItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::BasicInfo::RegisteredItem


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo : public ydk::Entity
{
    public:
        DetailInfo();
        ~DetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf running_path; //type: string
        ydk::YLeaf package_path; //type: string
        ydk::YLeaf job_id_link; //type: int32
        ydk::YLeaf group_jid; //type: string
        ydk::YLeaf fail_count; //type: uint32
        ydk::YLeaf restart_needed; //type: boolean
        ydk::YLeaf init_process; //type: boolean
        ydk::YLeaf last_online; //type: string
        ydk::YLeaf this_pcb; //type: string
        ydk::YLeaf next_pcb; //type: string
        ydk::YLeaf envs; //type: string
        ydk::YLeaf wait_for; //type: string
        ydk::YLeaf job_id_on_rp; //type: int32
        ydk::YLeaf is_standby_capable; //type: boolean
        ydk::YLeaf disable_kill; //type: boolean
        ydk::YLeaf send_avail; //type: boolean
        ydk::YLeaf node_event_cli_info; //type: int32
        ydk::YLeaf node_redundancy_state; //type: string
        ydk::YLeaf role_event_cli_info; //type: int32
        ydk::YLeaf proc_role_state; //type: string
        ydk::YLeaf standby_event_cli_info; //type: int32
        ydk::YLeaf cleanup_event_cli_info; //type: int32
        ydk::YLeaf band_ready_event_cli_info; //type: int32
        ydk::YLeaf lr_event_cli_info; //type: int32
        ydk::YLeaf plane_ready_event_cli_info; //type: int32
        ydk::YLeaf mdr_is_done_cli_info; //type: int32

}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::DetailInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo : public ydk::Entity
{
    public:
        VerboseInfo();
        ~VerboseInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_group; //type: string
        ydk::YLeaf respawn_allowed; //type: int32
        ydk::YLeaf wait_for_exit; //type: int32
        ydk::YLeaf dynamic_tag; //type: int32
        ydk::YLeaf forced_stop; //type: int32
        ydk::YLeaf critical_process; //type: int32
        ydk::YLeaf hold; //type: int32
        ydk::YLeaf transient; //type: int32
        ydk::YLeaf tuple_cfgmgr; //type: int32
        ydk::YLeaf standby_capable; //type: int32
        ydk::YLeaf edm_startup; //type: int32
        ydk::YLeaf placement; //type: int32
        ydk::YLeaf skip_kill_notif; //type: int32
        ydk::YLeaf init_proc; //type: int32
        ydk::YLeaf sysdb_event; //type: int32
        ydk::YLeaf level_started; //type: int32
        ydk::YLeaf proc_avail; //type: int32
        ydk::YLeaf tuples_scanned; //type: int32
        ydk::YLeaf no_chkpt_start; //type: int32
        ydk::YLeaf in_shut_down; //type: int32
        ydk::YLeaf sm_started; //type: int32
        ydk::YLeaf ignore_on_sc; //type: int32
        ydk::YLeaf ignore_on_easy_bake; //type: int32
        ydk::YLeaf pre_init; //type: int32
        ydk::YLeaf eoi_received; //type: int32
        ydk::YLeaf eoi_timeout; //type: int32
        ydk::YLeaf avail_timeout; //type: int32
        ydk::YLeaf reserved_memory; //type: int32
        ydk::YLeaf allow_warned; //type: int32
        ydk::YLeaf arg_change; //type: int32
        ydk::YLeaf restart_on_tuple; //type: int32
        ydk::YLeaf boot_hold; //type: int32
        ydk::YLeaf reg_id; //type: int32
        ydk::YLeaf memory_limit; //type: int32
        ydk::YLeaf parent_job_id; //type: int32
        ydk::YLeaf tuple_index; //type: int32
        ydk::YLeaf dump_count; //type: int32
        ydk::YLeaf respawn_interval_user; //type: int32
        ydk::YLeaf silent_restart_count; //type: int32
        ydk::YLeaf critical_tier; //type: int32
        ydk::YLeaf exit_type; //type: int32
        ydk::YLeaf init_timeout; //type: int32
        ydk::YLeaf restart_by_cmd; //type: int32
        ydk::YLeaf boot_pref; //type: int32
        ydk::YLeaf mdr_mbi_proc; //type: int32
        ydk::YLeaf mdr_non_mbi_kld; //type: int32
        ydk::YLeaf mdr_mbi_kld; //type: int32
        ydk::YLeaf mdr_shut_delay; //type: int32
        ydk::YLeaf mdr_keep_thru; //type: int32
        ydk::YLeaf mdr_spoofer; //type: int32
        ydk::YLeaf mdr_spoofed; //type: int32
        ydk::YLeaf mdr_spoofed_last; //type: int32
        ydk::YLeaf mdr_spoofed_ready; //type: int32
        ydk::YLeaf mdr_pcb_check; //type: int32
        ydk::YLeaf mdr_kill_tier; //type: int32
        ydk::YLeaf mdr_kld; //type: int32
        ydk::YLeaf mdr_level; //type: int32
        ydk::YLeaf fm_restart_cnt; //type: int32
        ydk::YLeaf self_managed; //type: int32
        class Tuple; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple
        class OrigTuple; //type: SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple

        ydk::YList tuple;
        ydk::YList orig_tuple;
        
}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple : public ydk::Entity
{
    public:
        Tuple();
        ~Tuple();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::Tuple


class SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple : public ydk::Entity
{
    public:
        OrigTuple();
        ~OrigTuple();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Name::ProcessNameVerboses::ProcessNameVerbose::VerboseInfo::OrigTuple


class SystemProcess::NodeTable::Node::Jids : public ydk::Entity
{
    public:
        Jids();
        ~Jids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Jid; //type: SystemProcess::NodeTable::Node::Jids::Jid

        ydk::YList jid;
        
}; // SystemProcess::NodeTable::Node::Jids


class SystemProcess::NodeTable::Node::Jids::Jid : public ydk::Entity
{
    public:
        Jid();
        ~Jid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf job_id; //type: uint32
        ydk::YLeaf job_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf executable; //type: string
        ydk::YLeaf active_path; //type: string
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf args; //type: string
        ydk::YLeaf version_id; //type: string
        ydk::YLeaf respawn; //type: string
        ydk::YLeaf respawn_count; //type: int32
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf process_state; //type: string
        ydk::YLeaf last_exit_status; //type: int32
        ydk::YLeaf last_exit_reason; //type: string
        ydk::YLeaf package_state; //type: string
        ydk::YLeaf started_on_config; //type: string
        ydk::YLeaf feature_name; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf core; //type: string
        ydk::YLeaf max_core; //type: int32
        ydk::YLeaf level; //type: string
        ydk::YLeaf mandatory; //type: boolean
        ydk::YLeaf maint_mode_proc; //type: boolean
        ydk::YLeaf placement_state; //type: string
        ydk::YLeaf start_up_path; //type: string
        ydk::YLeaf memory_limit; //type: uint32
        ydk::YLeaf ready; //type: string
        ydk::YLeaf available; //type: string
        class ProcCpuTime; //type: SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime
        class RegisteredItem; //type: SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysmgr_oper::SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime> proc_cpu_time;
        ydk::YList registered_item;
        
}; // SystemProcess::NodeTable::Node::Jids::Jid


class SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime : public ydk::Entity
{
    public:
        ProcCpuTime();
        ~ProcCpuTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user; //type: string
        ydk::YLeaf system; //type: string
        ydk::YLeaf total; //type: string

}; // SystemProcess::NodeTable::Node::Jids::Jid::ProcCpuTime


class SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem : public ydk::Entity
{
    public:
        RegisteredItem();
        ~RegisteredItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tuple; //type: string

}; // SystemProcess::NodeTable::Node::Jids::Jid::RegisteredItem


class SystemProcess::NodeTable::Node::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_count; //type: uint32
        class Process; //type: SystemProcess::NodeTable::Node::Dynamic::Process

        ydk::YList process;
        
}; // SystemProcess::NodeTable::Node::Dynamic


class SystemProcess::NodeTable::Node::Dynamic::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf args; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf state; //type: ProcessState
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf respawn_count; //type: uint8
        ydk::YLeaf placement_state; //type: PlacementState
        ydk::YLeaf is_mandatory; //type: boolean
        ydk::YLeaf is_maintenance; //type: boolean

}; // SystemProcess::NodeTable::Node::Dynamic::Process


class SystemProcess::NodeTable::Node::BootStalled : public ydk::Entity
{
    public:
        BootStalled();
        ~BootStalled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spawn_status; //type: string
        class BootHold; //type: SystemProcess::NodeTable::Node::BootStalled::BootHold

        ydk::YList boot_hold;
        
}; // SystemProcess::NodeTable::Node::BootStalled


class SystemProcess::NodeTable::Node::BootStalled::BootHold : public ydk::Entity
{
    public:
        BootHold();
        ~BootHold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boot_held_by_name; //type: string
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf jid; //type: uint32

}; // SystemProcess::NodeTable::Node::BootStalled::BootHold


class SystemProcess::NodeTable::Node::Processes : public ydk::Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_count; //type: uint32
        class Process; //type: SystemProcess::NodeTable::Node::Processes::Process

        ydk::YList process;
        
}; // SystemProcess::NodeTable::Node::Processes


class SystemProcess::NodeTable::Node::Processes::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf args; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf state; //type: ProcessState
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf respawn_count; //type: uint8
        ydk::YLeaf placement_state; //type: PlacementState
        ydk::YLeaf is_mandatory; //type: boolean
        ydk::YLeaf is_maintenance; //type: boolean

}; // SystemProcess::NodeTable::Node::Processes::Process


class SystemProcess::NodeTable::Node::Startup : public ydk::Entity
{
    public:
        Startup();
        ~Startup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_count; //type: uint32
        class Process; //type: SystemProcess::NodeTable::Node::Startup::Process

        ydk::YList process;
        
}; // SystemProcess::NodeTable::Node::Startup


class SystemProcess::NodeTable::Node::Startup::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf args; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf state; //type: ProcessState
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf respawn_count; //type: uint8
        ydk::YLeaf placement_state; //type: PlacementState
        ydk::YLeaf is_mandatory; //type: boolean
        ydk::YLeaf is_maintenance; //type: boolean

}; // SystemProcess::NodeTable::Node::Startup::Process


class SystemProcess::NodeTable::Node::Mandatory : public ydk::Entity
{
    public:
        Mandatory();
        ~Mandatory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_count; //type: uint32
        class Process; //type: SystemProcess::NodeTable::Node::Mandatory::Process

        ydk::YList process;
        
}; // SystemProcess::NodeTable::Node::Mandatory


class SystemProcess::NodeTable::Node::Mandatory::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf args; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf state; //type: ProcessState
        ydk::YLeaf last_started; //type: string
        ydk::YLeaf respawn_count; //type: uint8
        ydk::YLeaf placement_state; //type: PlacementState
        ydk::YLeaf is_mandatory; //type: boolean
        ydk::YLeaf is_maintenance; //type: boolean

}; // SystemProcess::NodeTable::Node::Mandatory::Process


class SystemProcess::NodeTable::Node::Abort : public ydk::Entity
{
    public:
        Abort();
        ~Abort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_abort_count; //type: uint32
        class Process; //type: SystemProcess::NodeTable::Node::Abort::Process

        ydk::YList process;
        
}; // SystemProcess::NodeTable::Node::Abort


class SystemProcess::NodeTable::Node::Abort::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf timebuf; //type: string
        ydk::YLeaf job_id; //type: uint32
        ydk::YLeaf is_respawned; //type: string

}; // SystemProcess::NodeTable::Node::Abort::Process


class SystemProcess::NodeTable::Node::Failover : public ydk::Entity
{
    public:
        Failover();
        ~Failover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failover_log; //type: string
        ydk::YLeaf critical_failover_elapsed_time; //type: string
        ydk::YLeaf last_process_started; //type: string
        ydk::YLeaf primary_failover_elapsed_time; //type: string
        ydk::YLeaf last_primary_proc_started; //type: string
        class StandbyBandStatistic; //type: SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic
        class ActiveBandStatistic; //type: SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic
        class ActiveTsBootProc; //type: SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc
        class StartTsBootProc; //type: SystemProcess::NodeTable::Node::Failover::StartTsBootProc
        class PrimaryBandStatistic; //type: SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic
        class PrimaryTsBootProc; //type: SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc
        class PrimaryStartTsBootProc; //type: SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc

        ydk::YList standby_band_statistic;
        ydk::YList active_band_statistic;
        ydk::YList active_ts_boot_proc;
        ydk::YList start_ts_boot_proc;
        ydk::YList primary_band_statistic;
        ydk::YList primary_ts_boot_proc;
        ydk::YList primary_start_ts_boot_proc;
        
}; // SystemProcess::NodeTable::Node::Failover


class SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic : public ydk::Entity
{
    public:
        StandbyBandStatistic();
        ~StandbyBandStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: string
        ydk::YLeaf band_name; //type: string
        ydk::YLeaf band_finish_time; //type: string
        ydk::YLeaf band_time; //type: string
        ydk::YLeaf finish_time; //type: string
        ydk::YLeaf idle_percentage; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf ready_time; //type: string
        ydk::YLeaf last_process; //type: string

}; // SystemProcess::NodeTable::Node::Failover::StandbyBandStatistic


class SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic : public ydk::Entity
{
    public:
        ActiveBandStatistic();
        ~ActiveBandStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: string
        ydk::YLeaf band_name; //type: string
        ydk::YLeaf band_finish_time; //type: string
        ydk::YLeaf band_time; //type: string
        ydk::YLeaf finish_time; //type: string
        ydk::YLeaf idle_percentage; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf ready_time; //type: string
        ydk::YLeaf last_process; //type: string

}; // SystemProcess::NodeTable::Node::Failover::ActiveBandStatistic


class SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc : public ydk::Entity
{
    public:
        ActiveTsBootProc();
        ~ActiveTsBootProc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_time_stamp; //type: string
        ydk::YLeaf go_active; //type: string
        ydk::YLeaf level; //type: string
        ydk::YLeaf band_name; //type: string
        ydk::YLeaf job_id; //type: int32
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf avail_time_stamp; //type: string
        ydk::YLeaf avail; //type: string
        ydk::YLeaf is_avail_timeout; //type: boolean
        ydk::YLeaf process_name; //type: string

}; // SystemProcess::NodeTable::Node::Failover::ActiveTsBootProc


class SystemProcess::NodeTable::Node::Failover::StartTsBootProc : public ydk::Entity
{
    public:
        StartTsBootProc();
        ~StartTsBootProc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time_stamp; //type: string
        ydk::YLeaf started; //type: string
        ydk::YLeaf level; //type: string
        ydk::YLeaf jid; //type: int32
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf ready_time_stamp; //type: string
        ydk::YLeaf ready; //type: string
        ydk::YLeaf is_eoi_timeout; //type: boolean
        ydk::YLeaf process_name; //type: string

}; // SystemProcess::NodeTable::Node::Failover::StartTsBootProc


class SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic : public ydk::Entity
{
    public:
        PrimaryBandStatistic();
        ~PrimaryBandStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: string
        ydk::YLeaf band_name; //type: string
        ydk::YLeaf band_finish_time; //type: string
        ydk::YLeaf band_time; //type: string
        ydk::YLeaf finish_time; //type: string
        ydk::YLeaf idle_percentage; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf ready_time; //type: string
        ydk::YLeaf last_process; //type: string

}; // SystemProcess::NodeTable::Node::Failover::PrimaryBandStatistic


class SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc : public ydk::Entity
{
    public:
        PrimaryTsBootProc();
        ~PrimaryTsBootProc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prim_time_stamp; //type: string
        ydk::YLeaf go_primary; //type: string
        ydk::YLeaf level; //type: string
        ydk::YLeaf band_name; //type: string
        ydk::YLeaf jid; //type: int32
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf avail_time_stamp; //type: string
        ydk::YLeaf avail; //type: string
        ydk::YLeaf is_avail_timeout; //type: boolean
        ydk::YLeaf process_name; //type: string

}; // SystemProcess::NodeTable::Node::Failover::PrimaryTsBootProc


class SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc : public ydk::Entity
{
    public:
        PrimaryStartTsBootProc();
        ~PrimaryStartTsBootProc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time_stamp; //type: string
        ydk::YLeaf started; //type: string
        ydk::YLeaf level; //type: string
        ydk::YLeaf jid; //type: int32
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf ready_time_stamp; //type: string
        ydk::YLeaf ready; //type: string
        ydk::YLeaf is_eoi_timeout; //type: boolean
        ydk::YLeaf process_name; //type: string

}; // SystemProcess::NodeTable::Node::Failover::PrimaryStartTsBootProc


class SystemProcess::NodeTable::Node::Boot : public ydk::Entity
{
    public:
        Boot();
        ~Boot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_process_started; //type: string
        class StandbyBandStatistic; //type: SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic
        class ActiveBandStatistic; //type: SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic
        class BootedProcess; //type: SystemProcess::NodeTable::Node::Boot::BootedProcess

        ydk::YList standby_band_statistic;
        ydk::YList active_band_statistic;
        ydk::YList booted_process;
        
}; // SystemProcess::NodeTable::Node::Boot


class SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic : public ydk::Entity
{
    public:
        StandbyBandStatistic();
        ~StandbyBandStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: string
        ydk::YLeaf band_name; //type: string
        ydk::YLeaf band_finish_time; //type: string
        ydk::YLeaf band_time; //type: string
        ydk::YLeaf finish_time; //type: string
        ydk::YLeaf idle_percentage; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf ready_time; //type: string
        ydk::YLeaf last_process; //type: string

}; // SystemProcess::NodeTable::Node::Boot::StandbyBandStatistic


class SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic : public ydk::Entity
{
    public:
        ActiveBandStatistic();
        ~ActiveBandStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: string
        ydk::YLeaf band_name; //type: string
        ydk::YLeaf band_finish_time; //type: string
        ydk::YLeaf band_time; //type: string
        ydk::YLeaf finish_time; //type: string
        ydk::YLeaf idle_percentage; //type: string
        ydk::YLeaf jid; //type: uint32
        ydk::YLeaf ready_time; //type: string
        ydk::YLeaf last_process; //type: string

}; // SystemProcess::NodeTable::Node::Boot::ActiveBandStatistic


class SystemProcess::NodeTable::Node::Boot::BootedProcess : public ydk::Entity
{
    public:
        BootedProcess();
        ~BootedProcess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time_stamp; //type: string
        ydk::YLeaf started; //type: string
        ydk::YLeaf level; //type: string
        ydk::YLeaf jid; //type: int32
        ydk::YLeaf instance_id; //type: int32
        ydk::YLeaf ready_time_stamp; //type: string
        ydk::YLeaf ready; //type: string
        ydk::YLeaf is_eoi_timeout; //type: boolean
        ydk::YLeaf process_name; //type: string

}; // SystemProcess::NodeTable::Node::Boot::BootedProcess


class SystemProcess::NodeTable::Node::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log; //type: string

}; // SystemProcess::NodeTable::Node::Logs


class SystemProcess::NodeTable::Node::Searchpath : public ydk::Entity
{
    public:
        Searchpath();
        ~Searchpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string

}; // SystemProcess::NodeTable::Node::Searchpath

class PlacementState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf place_null;
        static const ydk::Enum::YLeaf place_placeable;
        static const ydk::Enum::YLeaf place_dlrsc_tracker;
        static const ydk::Enum::YLeaf place_rack_centric;
        static const ydk::Enum::YLeaf place_dsc_tracker;

};

class ProcessState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf run;
        static const ydk::Enum::YLeaf exited;
        static const ydk::Enum::YLeaf hold;
        static const ydk::Enum::YLeaf wait;
        static const ydk::Enum::YLeaf restart;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf killed;
        static const ydk::Enum::YLeaf queued;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf tuple_set;
        static const ydk::Enum::YLeaf unknown;

};


}
}

#endif /* _CISCO_IOS_XR_SYSMGR_OPER_ */

