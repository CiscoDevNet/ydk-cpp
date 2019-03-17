#ifndef _CISCO_IOS_XR_SYSADMIN_ISSU_
#define _CISCO_IOS_XR_SYSADMIN_ISSU_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_issu {

class Issu : public ydk::Entity
{
    public:
        Issu();
        ~Issu();

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

        class Status; //type: Issu::Status
        class Clients; //type: Issu::Clients
        class Internals; //type: Issu::Internals

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Status> status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals> internals;
        
}; // Issu


class Issu::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        ydk::YLeaf operation_type; //type: OperationType
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf prepare_id; //type: uint32
        ydk::YLeaf activate_id; //type: uint32
        ydk::YLeaf complete; //type: boolean
        ydk::YLeaf result; //type: OpResult
        ydk::YLeaf recover_result; //type: OpResult
        ydk::YLeafList sysadmin_packages; //type: list of  string
        ydk::YLeafList host_packages; //type: list of  string
        class Prepare; //type: Issu::Status::Prepare
        class Activate; //type: Issu::Status::Activate
        class Error; //type: Issu::Status::Error

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Status::Prepare> prepare;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Status::Activate> activate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Status::Error> error;
                class OperationType;

}; // Issu::Status


class Issu::Status::Prepare : public ydk::Entity
{
    public:
        Prepare();
        ~Prepare();

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

        ydk::YLeaf stage; //type: OpStage
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf activity; //type: string
        ydk::YLeaf activity_start_time; //type: string

}; // Issu::Status::Prepare


class Issu::Status::Activate : public ydk::Entity
{
    public:
        Activate();
        ~Activate();

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

        ydk::YLeaf stage; //type: OpStage
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf activity; //type: string
        ydk::YLeaf activity_waiting_for; //type: string
        ydk::YLeaf activity_start_time; //type: string
        ydk::YLeafList activity_nodes; //type: list of  string

}; // Issu::Status::Activate


class Issu::Status::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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

        ydk::YLeaf result; //type: OpResult
        ydk::YLeaf stage; //type: OpStage
        ydk::YLeaf error_message; //type: string
        class Details; //type: Issu::Status::Error::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Status::Error::Details> details;
        
}; // Issu::Status::Error


class Issu::Status::Error::Details : public ydk::Entity
{
    public:
        Details();
        ~Details();

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

        ydk::YLeafList nodes; //type: list of  string
        ydk::YLeafList clients; //type: list of  string
        ydk::YLeafList packages; //type: list of  string
        ydk::YLeafList operation_ids; //type: list of  uint32

}; // Issu::Status::Error::Details


class Issu::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

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

        ydk::YLeaf announcement; //type: IssuNotif
        ydk::YLeaf announcement_status; //type: AnnouncementStatus
        class Client; //type: Issu::Clients::Client

        ydk::YList client;
                class AnnouncementStatus;

}; // Issu::Clients


class Issu::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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
        ydk::YLeaf location; //type: string
        ydk::YLeaf notif; //type: IssuNotif
        ydk::YLeaf response; //type: Response
        ydk::YLeaf aborted; //type: boolean
        ydk::YLeaf abort_reason; //type: string
        ydk::YLeafList registered_for; //type: list of  IssuNotif
        class Response;

}; // Issu::Clients::Client


class Issu::Internals : public ydk::Entity
{
    public:
        Internals();
        ~Internals();

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

        class Orchestrator; //type: Issu::Internals::Orchestrator
        class Agents; //type: Issu::Internals::Agents
        class InventoryMonitor; //type: Issu::Internals::InventoryMonitor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Orchestrator> orchestrator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Agents> agents;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::InventoryMonitor> inventory_monitor;
                class PhaseType;
        class OpRequestType;
        class StageType;

}; // Issu::Internals


class Issu::Internals::Orchestrator : public ydk::Entity
{
    public:
        Orchestrator();
        ~Orchestrator();

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

        ydk::YLeaf command; //type: OpRequestType
        ydk::YLeaf operation_type; //type: OpRequestType
        ydk::YLeaf current_operation; //type: OpRequestType
        ydk::YLeaf issu_completed; //type: boolean
        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf in_progress; //type: boolean
        class OperationStartDetails; //type: Issu::Internals::Orchestrator::OperationStartDetails
        class InternalPrepare; //type: Issu::Internals::Orchestrator::InternalPrepare
        class InternalActivate; //type: Issu::Internals::Orchestrator::InternalActivate
        class Error; //type: Issu::Internals::Orchestrator::Error

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Orchestrator::OperationStartDetails> operation_start_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Orchestrator::InternalPrepare> internal_prepare;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Orchestrator::InternalActivate> internal_activate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Orchestrator::Error> error;
        
}; // Issu::Internals::Orchestrator


class Issu::Internals::Orchestrator::OperationStartDetails : public ydk::Entity
{
    public:
        OperationStartDetails();
        ~OperationStartDetails();

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

        ydk::YLeafList input_package; //type: list of  string
        ydk::YLeafList input_operation_id; //type: list of  uint32

}; // Issu::Internals::Orchestrator::OperationStartDetails


class Issu::Internals::Orchestrator::InternalPrepare : public ydk::Entity
{
    public:
        InternalPrepare();
        ~InternalPrepare();

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

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf complete; //type: boolean
        ydk::YLeaf current_stage; //type: StageType
        ydk::YLeafList host_package; //type: list of  string
        ydk::YLeafList calvados_package; //type: list of  string
        class PrepareStageHistory; //type: Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory> prepare_stage_history;
        
}; // Issu::Internals::Orchestrator::InternalPrepare


class Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory : public ydk::Entity
{
    public:
        PrepareStageHistory();
        ~PrepareStageHistory();

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

        class HistoricalStage; //type: Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage

        ydk::YList historical_stage;
        
}; // Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory


class Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage : public ydk::Entity
{
    public:
        HistoricalStage();
        ~HistoricalStage();

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

        ydk::YLeaf stage_index; //type: uint32
        ydk::YLeaf external_stage; //type: OpStage
        ydk::YLeaf internal_stage_details; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf error_details; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf complete; //type: boolean

}; // Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage


class Issu::Internals::Orchestrator::InternalActivate : public ydk::Entity
{
    public:
        InternalActivate();
        ~InternalActivate();

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

        ydk::YLeaf operation_id; //type: uint32
        ydk::YLeaf complete; //type: boolean
        ydk::YLeaf current_stage; //type: StageType
        ydk::YLeaf current_phase; //type: PhaseType
        ydk::YLeaf host_prepared; //type: boolean
        ydk::YLeaf calvados_prepared; //type: boolean
        ydk::YLeafList host_node; //type: list of  string
        ydk::YLeafList calvados_phase_one_node; //type: list of  string
        ydk::YLeafList calvados_phase_two_node; //type: list of  string
        class ActivateStageHistory; //type: Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory> activate_stage_history;
        
}; // Issu::Internals::Orchestrator::InternalActivate


class Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory : public ydk::Entity
{
    public:
        ActivateStageHistory();
        ~ActivateStageHistory();

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

        class HistoricalStage; //type: Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage

        ydk::YList historical_stage;
        
}; // Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory


class Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage : public ydk::Entity
{
    public:
        HistoricalStage();
        ~HistoricalStage();

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

        ydk::YLeaf stage_index; //type: uint32
        ydk::YLeaf external_stage; //type: OpStage
        ydk::YLeaf internal_stage_details; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf error_details; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf end_time; //type: string
        ydk::YLeaf complete; //type: boolean

}; // Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage


class Issu::Internals::Orchestrator::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

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

        ydk::YLeaf operation_status; //type: string
        ydk::YLeaf failure_operation; //type: OpRequestType
        ydk::YLeaf failure_external_stage; //type: StageType
        ydk::YLeaf failure_internal_stage_details; //type: string
        ydk::YLeaf error_details; //type: string
        ydk::YLeaf recovery_attempted; //type: boolean
        ydk::YLeaf recovery_status; //type: string
        ydk::YLeafList failed_node; //type: list of  string
        ydk::YLeafList failed_package; //type: list of  string
        ydk::YLeafList failed_operation_id; //type: list of  uint32
        ydk::YLeafList failed_client; //type: list of  string

}; // Issu::Internals::Orchestrator::Error


class Issu::Internals::Agents : public ydk::Entity
{
    public:
        Agents();
        ~Agents();

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

        class Requests; //type: Issu::Internals::Agents::Requests
        class Inventory; //type: Issu::Internals::Agents::Inventory
        class ReloadTracking; //type: Issu::Internals::Agents::ReloadTracking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Agents::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Agents::Inventory> inventory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Agents::ReloadTracking> reload_tracking;
        
}; // Issu::Internals::Agents


class Issu::Internals::Agents::Requests : public ydk::Entity
{
    public:
        Requests();
        ~Requests();

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

        class Request; //type: Issu::Internals::Agents::Requests::Request

        ydk::YList request;
        
}; // Issu::Internals::Agents::Requests


class Issu::Internals::Agents::Requests::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

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

        ydk::YLeaf request_index; //type: uint32
        ydk::YLeaf request_type; //type: RequestType
        ydk::YLeaf requests_sent; //type: uint32
        ydk::YLeaf responses_received; //type: uint32
        class Checkpoint; //type: Issu::Internals::Agents::Requests::Request::Checkpoint
        class Agents_; //type: Issu::Internals::Agents::Requests::Request::Agents_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Agents::Requests::Request::Checkpoint> checkpoint;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Agents::Requests::Request::Agents_> agents;
                class RequestType;

}; // Issu::Internals::Agents::Requests::Request


class Issu::Internals::Agents::Requests::Request::Checkpoint : public ydk::Entity
{
    public:
        Checkpoint();
        ~Checkpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_type; //type: MessageType
        ydk::YLeaf data_length; //type: uint32
        ydk::YLeaf filename; //type: string
        class MessageType;

}; // Issu::Internals::Agents::Requests::Request::Checkpoint


class Issu::Internals::Agents::Requests::Request::Agents_ : public ydk::Entity
{
    public:
        Agents_();
        ~Agents_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Agent; //type: Issu::Internals::Agents::Requests::Request::Agents_::Agent

        ydk::YList agent;
        
}; // Issu::Internals::Agents::Requests::Request::Agents_


class Issu::Internals::Agents::Requests::Request::Agents_::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf agent_index; //type: uint32
        ydk::YLeaf node; //type: string
        ydk::YLeaf waiting_for_response; //type: boolean
        class ResponseContents; //type: Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents> response_contents;
        
}; // Issu::Internals::Agents::Requests::Request::Agents_::Agent


class Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents : public ydk::Entity
{
    public:
        ResponseContents();
        ~ResponseContents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf agent_status; //type: AgentStatus
        ydk::YLeaf error_details; //type: string
        class AgentStatus;

}; // Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents


class Issu::Internals::Agents::Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

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

        class Agent; //type: Issu::Internals::Agents::Inventory::Agent

        ydk::YList agent;
        
}; // Issu::Internals::Agents::Inventory


class Issu::Internals::Agents::Inventory::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

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

        ydk::YLeaf agent_index; //type: uint32
        ydk::YLeaf agent_node; //type: string
        ydk::YLeaf reloaded; //type: boolean

}; // Issu::Internals::Agents::Inventory::Agent


class Issu::Internals::Agents::ReloadTracking : public ydk::Entity
{
    public:
        ReloadTracking();
        ~ReloadTracking();

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

        ydk::YLeaf in_progress; //type: boolean
        ydk::YLeaf remaining_nodes_count; //type: uint32
        class Node; //type: Issu::Internals::Agents::ReloadTracking::Node

        ydk::YList node;
        
}; // Issu::Internals::Agents::ReloadTracking


class Issu::Internals::Agents::ReloadTracking::Node : public ydk::Entity
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

        ydk::YLeaf node_index; //type: uint32
        ydk::YLeaf id; //type: string
        ydk::YLeaf reloaded; //type: boolean

}; // Issu::Internals::Agents::ReloadTracking::Node


class Issu::Internals::InventoryMonitor : public ydk::Entity
{
    public:
        InventoryMonitor();
        ~InventoryMonitor();

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

        class Inventory; //type: Issu::Internals::InventoryMonitor::Inventory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_issu::Issu::Internals::InventoryMonitor::Inventory> inventory;
        
}; // Issu::Internals::InventoryMonitor


class Issu::Internals::InventoryMonitor::Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

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

        class Node; //type: Issu::Internals::InventoryMonitor::Inventory::Node

        ydk::YList node;
        
}; // Issu::Internals::InventoryMonitor::Inventory


class Issu::Internals::InventoryMonitor::Inventory::Node : public ydk::Entity
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

        ydk::YLeaf node; //type: string
        ydk::YLeaf ip; //type: string

}; // Issu::Internals::InventoryMonitor::Inventory::Node

class OpStage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prepare_preamble;
        static const ydk::Enum::YLeaf prepare_host;
        static const ydk::Enum::YLeaf prepare_sysadmin;
        static const ydk::Enum::YLeaf prepare_aborting;
        static const ydk::Enum::YLeaf prepare_postamble;
        static const ydk::Enum::YLeaf prepare_complete;
        static const ydk::Enum::YLeaf activate_preamble;
        static const ydk::Enum::YLeaf activate_sysadmin_phase_one;
        static const ydk::Enum::YLeaf activate_sysadmin_phase_two;
        static const ydk::Enum::YLeaf activate_host;
        static const ydk::Enum::YLeaf activate_aborting;
        static const ydk::Enum::YLeaf activate_paused;
        static const ydk::Enum::YLeaf activate_postamble;
        static const ydk::Enum::YLeaf activate_complete;

};

class IssuNotif : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notif_sysadmin_op_start;
        static const ydk::Enum::YLeaf notif_sysadmin_phase_start;
        static const ydk::Enum::YLeaf notif_sysadmin_op_end;

};

class OpResult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf error_input;
        static const ydk::Enum::YLeaf error_orchestration;
        static const ydk::Enum::YLeaf error_install;
        static const ydk::Enum::YLeaf error_node_redundancy;

};

class OpStartResult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start_success;
        static const ydk::Enum::YLeaf error_operation_in_progress;
        static const ydk::Enum::YLeaf activate_error_no_prepare;
        static const ydk::Enum::YLeaf prepare_error_previous_prepare;
        static const ydk::Enum::YLeaf recover_error_unrecoverable;
        static const ydk::Enum::YLeaf start_error_internal;
        static const ydk::Enum::YLeaf prepare_error_previous_operation_not_committed;
        static const ydk::Enum::YLeaf prepare_error_already_in_progress;

};

class Issu::Status::OperationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_operation;
        static const ydk::Enum::YLeaf activate_operation;
        static const ydk::Enum::YLeaf deactivate_operation;

};

class Issu::Clients::AnnouncementStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf announce_no_notif;
        static const ydk::Enum::YLeaf announce_in_progress;
        static const ydk::Enum::YLeaf announce_success;
        static const ydk::Enum::YLeaf announce_veto;
        static const ydk::Enum::YLeaf announce_disconnect;
        static const ydk::Enum::YLeaf announce_timeout;
        static const ydk::Enum::YLeaf announce_send_error;
        static const ydk::Enum::YLeaf announce_client_error;

};

class Issu::Clients::Client::Response : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notif_resp_no_notif;
        static const ydk::Enum::YLeaf notif_resp_pending;
        static const ydk::Enum::YLeaf notif_resp_ack;
        static const ydk::Enum::YLeaf notif_resp_veto;
        static const ydk::Enum::YLeaf notif_resp_disconnect;
        static const ydk::Enum::YLeaf notif_resp_timeout;
        static const ydk::Enum::YLeaf notif_resp_send_error;
        static const ydk::Enum::YLeaf notif_resp_client_error;
        static const ydk::Enum::YLeaf notif_resp_client_abort;

};

class Issu::Internals::PhaseType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf calvados_activate_phase_one;
        static const ydk::Enum::YLeaf calvados_activate_phase_two;

};

class Issu::Internals::OpRequestType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operation_request_prepare;
        static const ydk::Enum::YLeaf operation_request_activate;
        static const ydk::Enum::YLeaf operation_request_deactivate;
        static const ydk::Enum::YLeaf operation_request_recover;

};

class Issu::Internals::StageType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf end;
        static const ydk::Enum::YLeaf prepare_inventory_precheck;
        static const ydk::Enum::YLeaf prepare_expand_operation_ids;
        static const ydk::Enum::YLeaf prepare_get_metadata;
        static const ydk::Enum::YLeaf prepare_extract_composite;
        static const ydk::Enum::YLeaf prepare_verify_packages;
        static const ydk::Enum::YLeaf prepare_host;
        static const ydk::Enum::YLeaf prepare_calvados;
        static const ydk::Enum::YLeaf prepare_deactivate_verify_packages;
        static const ydk::Enum::YLeaf prepare_deactivate_calvados;
        static const ydk::Enum::YLeaf prepare_abort;
        static const ydk::Enum::YLeaf prepare_clean;
        static const ydk::Enum::YLeaf activate_preamble;
        static const ydk::Enum::YLeaf deactivate_preamble;
        static const ydk::Enum::YLeaf activate_calvados_preamble;
        static const ydk::Enum::YLeaf activate_calvados_phase;
        static const ydk::Enum::YLeaf activate_calvados_phase_reload;
        static const ydk::Enum::YLeaf activate_calvados_phase_postamble;
        static const ydk::Enum::YLeaf activate_calvados_postamble;
        static const ydk::Enum::YLeaf activate_host;
        static const ydk::Enum::YLeaf activate_postamble;
        static const ydk::Enum::YLeaf deactivate_calvados;
        static const ydk::Enum::YLeaf activate_abort_no_recovery;
        static const ydk::Enum::YLeaf activate_abort_unrecoverable;
        static const ydk::Enum::YLeaf activate_error_pause;
        static const ydk::Enum::YLeaf activate_calvados_recovery;
        static const ydk::Enum::YLeaf activate_recovery_postamble;

};

class Issu::Internals::Agents::Requests::Request::RequestType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf requests_node_ready;
        static const ydk::Enum::YLeaf requests_checkpoint;
        static const ydk::Enum::YLeaf requests_post_upgrade_cleanup;

};

class Issu::Internals::Agents::Requests::Request::Checkpoint::MessageType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf requests_checkpoint_start;
        static const ydk::Enum::YLeaf requests_checkpoint_end;
        static const ydk::Enum::YLeaf requests_checkpoint_update;

};

class Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::AgentStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf agent_response_ok;
        static const ydk::Enum::YLeaf agent_response_error;
        static const ydk::Enum::YLeaf agent_response_timeout;
        static const ydk::Enum::YLeaf agent_response_send_failure;

};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ISSU_ */

