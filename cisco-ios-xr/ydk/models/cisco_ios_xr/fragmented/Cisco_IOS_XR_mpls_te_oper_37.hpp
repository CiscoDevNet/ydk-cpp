#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_37_
#define _CISCO_IOS_XR_MPLS_TE_OPER_37_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_35.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::Issu::Status::SyncStatusInformation : public ydk::Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

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

        ydk::YLeaf sync_show_type; //type: TeSyncStatusShow
        class SlaveSyncInformation; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

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

        class Idt; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

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

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

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

        ydk::YLeaf insync_tunnels; //type: uint32
        ydk::YLeaf insync_sub_ls_ps; //type: uint32
        ydk::YLeaf pending_tunnels; //type: uint32
        ydk::YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

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

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
{
    public:
        S2LPending();
        ~S2LPending();

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

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf s2l_role; //type: MplsTeTunnelRole

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
{
    public:
        VifPending();
        ~VifPending();

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

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf tunnel_name; //type: string

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::LspOutOfResources : public ydk::Entity
{
    public:
        LspOutOfResources();
        ~LspOutOfResources();

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

        class Summary; //type: MplsTeStandby::LspOutOfResources::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources::Summary> summary;
        
}; // MplsTeStandby::LspOutOfResources


class MplsTeStandby::LspOutOfResources::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf transit_lsp_total_count; //type: uint32
        ydk::YLeaf transit_lsp_unprotected_count; //type: uint32
        ydk::YLeaf lsp_oor_state; //type: LspOorState
        ydk::YLeaf lsp_oor_timestamp; //type: uint32
        ydk::YLeaf lsp_oor_green_recovery_time; //type: uint32
        class LspOorStateXr; //type: MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr> > lsp_oor_state_xr;
        
}; // MplsTeStandby::LspOutOfResources::Summary


class MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr : public ydk::Entity
{
    public:
        LspOorStateXr();
        ~LspOorStateXr();

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

        ydk::YLeaf lsp_oor_state; //type: LspOorState
        ydk::YLeaf threshold_transit_all; //type: uint32
        ydk::YLeaf threshold_transit_unprotected; //type: uint32
        ydk::YLeaf te_metric_penalty; //type: uint32
        ydk::YLeaf available_bw_percentage; //type: uint32
        ydk::YLeaf transition_duration; //type: uint32
        ydk::YLeaf minimum_lsp_bandwidth; //type: uint32
        ydk::YLeaf accept_reopt; //type: boolean
        class Statistics; //type: MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics> statistics;
        
}; // MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr


class MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        ydk::YLeaf transitions; //type: uint32
        ydk::YLeaf rejected_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_reopt_ls_ps_number; //type: uint32
        ydk::YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics


class MplsTeStandby::MaximumTunnels : public ydk::Entity
{
    public:
        MaximumTunnels();
        ~MaximumTunnels();

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

        ydk::YLeaf current_maximum_tunnels; //type: uint32
        ydk::YLeaf current_maximum_destinations; //type: uint32
        ydk::YLeaf current_maximum_p2mp_tunnels; //type: uint32
        ydk::YLeaf current_maximum_p2mp_destnation_per_tunnel; //type: uint32
        ydk::YLeaf absolute_maximum; //type: uint32
        ydk::YLeaf current_maximum_autobackups; //type: uint32
        ydk::YLeaf current_maximum_auto_mesh; //type: uint32
        ydk::YLeaf current_tunnel_count; //type: uint32
        ydk::YLeaf current_destination_count; //type: uint32
        ydk::YLeaf current_p2mp_tunnel_count; //type: uint32
        ydk::YLeaf current_p2mp_destnation_per_tunnel_count; //type: uint32
        ydk::YLeaf is_autobackup_range_configured; //type: boolean
        ydk::YLeaf current_autobackups; //type: uint32
        ydk::YLeaf is_auto_mesh_range_configured; //type: boolean
        ydk::YLeaf current_auto_mesh; //type: uint32
        ydk::YLeaf current_maximum_gmpls_unitunnels; //type: uint32
        ydk::YLeaf current_gmpls_uni; //type: uint32

}; // MplsTeStandby::MaximumTunnels


class MplsTeStandby::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

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

        class Status; //type: MplsTeStandby::Nsr::Status
        class Detail; //type: MplsTeStandby::Nsr::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status> status;
        
}; // MplsTeStandby::Nsr


class MplsTeStandby::Nsr::Detail : public ydk::Entity
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

        ydk::YLeaf role; //type: TeProcRole
        class SyncStatusInformation; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation> sync_status_information;
        
}; // MplsTeStandby::Nsr::Detail


class MplsTeStandby::Nsr::Detail::SyncStatusInformation : public ydk::Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

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

        ydk::YLeaf sync_show_type; //type: TeSyncStatusShow
        class SlaveSyncInformation; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

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

        class Idt; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

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

        class CurrentIdtInfo; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

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

        ydk::YLeaf insync_tunnels; //type: uint32
        ydk::YLeaf insync_sub_ls_ps; //type: uint32
        ydk::YLeaf pending_tunnels; //type: uint32
        ydk::YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

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

        class CurrentIdtInfo; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
{
    public:
        S2LPending();
        ~S2LPending();

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

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf s2l_role; //type: MplsTeTunnelRole

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
{
    public:
        VifPending();
        ~VifPending();

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

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf tunnel_name; //type: string

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::Nsr::Status : public ydk::Entity
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

        ydk::YLeaf role; //type: TeProcRole
        class SyncStatusInformation; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation> sync_status_information;
        
}; // MplsTeStandby::Nsr::Status


class MplsTeStandby::Nsr::Status::SyncStatusInformation : public ydk::Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

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

        ydk::YLeaf sync_show_type; //type: TeSyncStatusShow
        class SlaveSyncInformation; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation


class MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation : public ydk::Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

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

        class Idt; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

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

        class CurrentIdtInfo; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation : public ydk::Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

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

        ydk::YLeaf insync_tunnels; //type: uint32
        ydk::YLeaf insync_sub_ls_ps; //type: uint32
        ydk::YLeaf pending_tunnels; //type: uint32
        ydk::YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public ydk::Entity
{
    public:
        Idt();
        ~Idt();

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

        class CurrentIdtInfo; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public ydk::Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

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

        ydk::YLeaf is_ready_status; //type: boolean
        ydk::YLeaf reason; //type: TeSyncNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public ydk::Entity
{
    public:
        S2LPending();
        ~S2LPending();

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

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf s2l_role; //type: MplsTeTunnelRole

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public ydk::Entity
{
    public:
        VifPending();
        ~VifPending();

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

        ydk::YLeaf pending_reason; //type: TeSyncPendingReason
        ydk::YLeaf tunnel_name; //type: string

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::OpenConfig : public ydk::Entity
{
    public:
        OpenConfig();
        ~OpenConfig();

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

        class LspStates; //type: MplsTeStandby::OpenConfig::LspStates
        class LspCounters; //type: MplsTeStandby::OpenConfig::LspCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig::LspCounters> lsp_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig::LspStates> lsp_states;
        
}; // MplsTeStandby::OpenConfig


class MplsTeStandby::OpenConfig::LspCounters : public ydk::Entity
{
    public:
        LspCounters();
        ~LspCounters();

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

        class LspCounter; //type: MplsTeStandby::OpenConfig::LspCounters::LspCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig::LspCounters::LspCounter> > lsp_counter;
        
}; // MplsTeStandby::OpenConfig::LspCounters


class MplsTeStandby::OpenConfig::LspCounters::LspCounter : public ydk::Entity
{
    public:
        LspCounter();
        ~LspCounter();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_type; //type: OcMplsTeTunnel
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: OcMplsTeLsp
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf path_changes; //type: uint64
        ydk::YLeaf state_changes; //type: uint64
        ydk::YLeaf online_time; //type: string
        ydk::YLeaf current_path_time; //type: string
        ydk::YLeaf next_reoptimization_time; //type: string

}; // MplsTeStandby::OpenConfig::LspCounters::LspCounter


class MplsTeStandby::OpenConfig::LspStates : public ydk::Entity
{
    public:
        LspStates();
        ~LspStates();

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

        class LspState; //type: MplsTeStandby::OpenConfig::LspStates::LspState

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig::LspStates::LspState> > lsp_state;
        
}; // MplsTeStandby::OpenConfig::LspStates


class MplsTeStandby::OpenConfig::LspStates::LspState : public ydk::Entity
{
    public:
        LspState();
        ~LspState();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_type; //type: OcMplsTeTunnel
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: OcMplsTeLsp
        ydk::YLeaf signaling_protocol; //type: MplsTeProtocol
        ydk::YLeaf local_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_status; //type: LspAdminStatus
        ydk::YLeaf oper_status; //type: LspOperStatus
        ydk::YLeaf metric; //type: OcMplsTeMetric
        ydk::YLeaf protection_style_requested; //type: MplsProtection
        ydk::YLeaf reoptimize_timer; //type: uint16
        ydk::YLeaf role; //type: MplsTeLspRole
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf soft_preemption; //type: boolean

}; // MplsTeStandby::OpenConfig::LspStates::LspState


class MplsTeStandby::P2Mp : public ydk::Entity
{
    public:
        P2Mp();
        ~P2Mp();

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

        class TunnelRewrites; //type: MplsTeStandby::P2Mp::TunnelRewrites
        class CollaboratorTimers; //type: MplsTeStandby::P2Mp::CollaboratorTimers
        class ForwardingOutputLabelRewrites; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites> forwarding_output_label_rewrites;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites> tunnel_rewrites;
        
}; // MplsTeStandby::P2Mp


class MplsTeStandby::P2Mp::CollaboratorTimers : public ydk::Entity
{
    public:
        CollaboratorTimers();
        ~CollaboratorTimers();

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

        class P2MpTimer; //type: MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer> > p2mp_timer;
        
}; // MplsTeStandby::P2Mp::CollaboratorTimers


class MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer : public ydk::Entity
{
    public:
        P2MpTimer();
        ~P2MpTimer();

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

        ydk::YLeaf timer_type; //type: MplsTeP2MpTimer
        ydk::YLeaf timer_name; //type: string
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf expiry_time; //type: uint32
        ydk::YLeaf stop_time; //type: uint32
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf is_running; //type: boolean

}; // MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites : public ydk::Entity
{
    public:
        ForwardingOutputLabelRewrites();
        ~ForwardingOutputLabelRewrites();

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

        class ForwardingOutputLabelRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite> > forwarding_output_label_rewrite;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite : public ydk::Entity
{
    public:
        ForwardingOutputLabelRewrite();
        ~ForwardingOutputLabelRewrite();

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

        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        ydk::YLeaf is_segment_routing; //type: boolean
        class S2LOutputRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite
        class S2L; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L
        class S2LsrPath; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L> > s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite> s2l_output_rewrite;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath> > s2lsr_path;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L : public ydk::Entity
{
    public:
        S2L();
        ~S2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf sub_group_original_id; //type: string

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite : public ydk::Entity
{
    public:
        S2LOutputRewrite();
        ~S2LOutputRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subfamily; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily
        class SuccessfulRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite> pending_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily> subfamily;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite> successful_rewrite;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite : public ydk::Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2LOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite : public ydk::Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2LOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily : public ydk::Entity
{
    public:
        Subfamily();
        ~Subfamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        class LspFec; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec> lsp_fec;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite : public ydk::Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf out_rewrite_role; //type: MplsTeTunnelRole
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf s2l_source; //type: string
        ydk::YLeaf explicit_null; //type: TeS2LOutputRwExplicitNull
        ydk::YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath : public ydk::Entity
{
    public:
        S2LsrPath();
        ~S2LsrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_primary; //type: boolean
        ydk::YLeaf is_backup; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf backup_path_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        class OutgoingLabelsStack; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack> > outgoing_labels_stack;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack : public ydk::Entity
{
    public:
        OutgoingLabelsStack();
        ~OutgoingLabelsStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack


class MplsTeStandby::P2Mp::TunnelRewrites : public ydk::Entity
{
    public:
        TunnelRewrites();
        ~TunnelRewrites();

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

        class TunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite> > tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite : public ydk::Entity
{
    public:
        TunnelRewrite();
        ~TunnelRewrite();

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

        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf tunnel_signal_name; //type: string
        ydk::YLeaf is_segment_routing; //type: boolean
        class SuccessfulRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite> pending_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite> successful_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite : public ydk::Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        class TunnelRewrite_; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        class P2PTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite : public ydk::Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite : public ydk::Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite : public ydk::Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        class TunnelRewrite_; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        class P2PTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite : public ydk::Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite : public ydk::Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite : public ydk::Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        class TunnelRewrite_; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_ : public ydk::Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        class P2PTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite : public ydk::Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite : public ydk::Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf source_pe; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf backup_active; //type: boolean
        ydk::YLeaf original_input_interface; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf output_interface_name; //type: string
        ydk::YLeaf backup_tunnel_name; //type: string
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public ydk::Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf physica_interface_name; //type: string
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf out_label; //type: uint32
        class SrLabelStack; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
{
    public:
        SrLabelStack();
        ~SrLabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack


class MplsTeStandby::P2PP2MpTunnel : public ydk::Entity
{
    public:
        P2PP2MpTunnel();
        ~P2PP2MpTunnel();

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

        class TunnelRemoteBriefs; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemoteBriefs
        class TunnelRemotes; //type: MplsTeStandby::P2PP2MpTunnel::TunnelRemotes
        class NniTunnels; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels
        class TunnelHeads; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels> nni_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads> tunnel_heads;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemoteBriefs> tunnel_remote_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelRemotes> tunnel_remotes;
        
}; // MplsTeStandby::P2PP2MpTunnel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels : public ydk::Entity
{
    public:
        NniTunnels();
        ~NniTunnels();

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

        class NniTunnel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel> > nni_tunnel;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel : public ydk::Entity
{
    public:
        NniTunnel();
        ~NniTunnel();

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

        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf role_standby; //type: boolean
        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf admin_state; //type: MteTunnelAdminState
        ydk::YLeaf operational_state; //type: MteTunnelOperState
        ydk::YLeaf operational_state_changes; //type: uint32
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf fail_reason; //type: MplsMteTunnelFailReason
        ydk::YLeaf destination_up_count; //type: uint32
        ydk::YLeaf destination_disabled_count; //type: uint32
        ydk::YLeaf destination_down_count; //type: uint32
        ydk::YLeaf re_opt_hold_down_timer_remaining; //type: uint32
        ydk::YLeaf bandwidth_requested; //type: uint32
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_node_protected; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf tunnel_recovering; //type: boolean
        ydk::YLeaf reroute_pending; //type: boolean
        ydk::YLeaf explicit_path_change; //type: boolean
        ydk::YLeaf path_option_change; //type: boolean
        ydk::YLeaf affinity_failure_reopt_disabled; //type: boolean
        ydk::YLeaf affinity_failure_reopt_time_remained; //type: uint32
        ydk::YLeaf affinity_failure_delayed_tear_time_remained; //type: uint32
        ydk::YLeaf invalidation_time_remained; //type: uint32
        ydk::YLeaf drop_mode; //type: boolean
        ydk::YLeaf auto_route; //type: boolean
        ydk::YLeaf forwarding_adjacency; //type: boolean
        ydk::YLeaf load_share_factor; //type: uint32
        ydk::YLeaf load_share_type; //type: MplsTeLoadshare
        ydk::YLeaf create_time; //type: uint32
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf metric_type; //type: MplsTeMetric
        ydk::YLeaf tie_breaker; //type: TePathSelectionTiebreaker
        ydk::YLeaf tiebreaker_type; //type: uint32
        ydk::YLeaf tiebreaker_qualifier; //type: MplsTeMetricQualifier
        ydk::YLeaf metric_qualifier; //type: MplsTeMetricQualifier
        ydk::YLeaf is_hop_limit_ignore; //type: boolean
        ydk::YLeaf hop_limit_ignored_reason; //type: TeHopLimitIgnore
        ydk::YLeaf outbound_frr_state; //type: MplsTeFrrState
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf pce_fail_reason; //type: MplsTePceFailReasons
        ydk::YLeaf snmp_index; //type: uint32
        ydk::YLeaf is_inter_area_tunnel; //type: boolean
        ydk::YLeaf is_auto_backup; //type: boolean
        ydk::YLeaf is_auto_pcc; //type: boolean
        ydk::YLeaf is_pce_delegated; //type: boolean
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        ydk::YLeaf xro_attribute_set_name; //type: string
        ydk::YLeaf is_passive; //type: boolean
        ydk::YLeaf passive_tunnel_name; //type: string
        ydk::YLeaf binding_label_exists; //type: boolean
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf last_hop_ifindex; //type: uint32
        ydk::YLeaf is_named; //type: boolean
        ydk::YLeaf lsp_wrap_protection_enabled; //type: boolean
        ydk::YLeaf lsp_wrap_label; //type: uint32
        ydk::YLeaf is_interface; //type: boolean
        ydk::YLeaf last_path_change; //type: uint32
        ydk::YLeaf persistent_bytes; //type: uint64
        ydk::YLeaf persistent_packets; //type: uint64
        ydk::YLeaf autoroute_announce_exclude_segment_routing; //type: boolean
        class Config; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Config
        class TunnelCurrentLsp; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelCurrentLsp
        class ReoptimizedP2MpLsp; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedP2MpLsp
        class TunnelStandbyLsp; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp
        class ReoptimizedStandbyP2MpLsp; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp
        class TunnelRestorationLsp; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp
        class DelayCleanPpLsp; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp
        class CleanedLsp; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp
        class P2PInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo
        class History; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History
        class PathProtection; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection
        class AutoBackup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup
        class AutoMesh; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh
        class AutoPcc; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc
        class PceDelegation; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PceDelegation
        class SoftPreemption; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption
        class WdmUnitunnel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::WdmUnitunnel
        class TransportTunnelInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo
        class BfdInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo
        class OtnBidir; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir
        class Bidir; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir
        class XroAttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet
        class TeTunnelConvergence; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence
        class FlexInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo
        class Destination; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup> auto_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh> auto_mesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc> auto_pcc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo> bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir> bidir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp> cleaned_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::DelayCleanPpLsp> delay_clean_pp_lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Destination> > destination;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::OtnBidir> otn_bidir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo> p2p_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PceDelegation> pce_delegation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedP2MpLsp> reoptimized_p2mp_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::ReoptimizedStandbyP2MpLsp> reoptimized_standby_p2mp_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TeTunnelConvergence> te_tunnel_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TransportTunnelInfo> transport_tunnel_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelCurrentLsp> tunnel_current_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelRestorationLsp> tunnel_restoration_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::TunnelStandbyLsp> tunnel_standby_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::WdmUnitunnel> wdm_unitunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::XroAttributeSet> xro_attribute_set;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup : public ydk::Entity
{
    public:
        AutoBackup();
        ~AutoBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_ls_ps; //type: uint32
        ydk::YLeaf protected_s2_ls; //type: uint32
        ydk::YLeaf sharing_families; //type: uint32
        ydk::YLeaf ab_protection_type; //type: AutoBackupProtection
        ydk::YLeaf is_using_srlg; //type: boolean
        ydk::YLeaf srlg_prot_type; //type: AutoBackupSrlgMode
        ydk::YLeaf ab_protected_interface; //type: string
        ydk::YLeaf protected_address; //type: string
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf is_unused_removal_timer_running; //type: boolean
        ydk::YLeaf unused_removal_remaining_time; //type: uint32
        class WeightedSrlgInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo
        class Iep; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep> > iep;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo> weighted_srlg_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep : public ydk::Entity
{
    public:
        Iep();
        ~Iep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_id; //type: uint32
        class IepHop; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop> > iep_hop;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop : public ydk::Entity
{
    public:
        IepHop();
        ~IepHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_index; //type: uint32
        ydk::YLeaf iep_hop_type; //type: MplsTeIepHop
        ydk::YLeaf iep_hop_address; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo : public ydk::Entity
{
    public:
        WeightedSrlgInfo();
        ~WeightedSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectedInterfaceSrlg; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg
        class WeightedSrlgHop; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg> > protected_interface_srlg;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop> > weighted_srlg_hop;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg : public ydk::Entity
{
    public:
        ProtectedInterfaceSrlg();
        ~ProtectedInterfaceSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg; //type: uint32
        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop : public ydk::Entity
{
    public:
        WeightedSrlgHop();
        ~WeightedSrlgHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string
        ydk::YLeaf aggregate_admin_weight; //type: uint64
        class CommonSrlg; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg> > common_srlg;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg : public ydk::Entity
{
    public:
        CommonSrlg();
        ~CommonSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh : public ydk::Entity
{
    public:
        AutoMesh();
        ~AutoMesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mesh_group_id; //type: uint32
        ydk::YLeaf tunnel_destination_list_name; //type: string
        ydk::YLeaf is_tunnel_unused_timer_running; //type: boolean
        ydk::YLeaf remaining_unused_time; //type: uint32
        ydk::YLeaf mesh_group_type; //type: TeMeshgroup

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoMesh


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc : public ydk::Entity
{
    public:
        AutoPcc();
        ~AutoPcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf creator_address; //type: string
        ydk::YLeaf has_creator_id; //type: boolean
        ydk::YLeaf creator_id; //type: string
        ydk::YLeaf plspid; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoPcc


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo : public ydk::Entity
{
    public:
        BfdInfo();
        ~BfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_session_up; //type: boolean
        ydk::YLeaf session_up_time; //type: uint32
        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf minimum_session_up_interval; //type: uint32
        ydk::YLeaf maximum_session_up_interval; //type: uint32
        class EventCounters; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters
        class DampeningInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo> > dampening_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters> event_counters;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo : public ydk::Entity
{
    public:
        DampeningInfo();
        ~DampeningInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf hold_down_time; //type: uint32
        ydk::YLeaf remained_time; //type: uint32
        ydk::YLeaf backoff_count; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::DampeningInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters : public ydk::Entity
{
    public:
        EventCounters();
        ~EventCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_create_events; //type: uint32
        ydk::YLeaf session_up_events; //type: uint32
        ydk::YLeaf session_creation_failed_events; //type: uint32
        ydk::YLeaf session_down_events; //type: uint32
        ydk::YLeaf session_admin_down_events; //type: uint32
        ydk::YLeaf session_gracefully_delete_events; //type: uint32
        ydk::YLeaf session_non_gracefully_delete_events; //type: uint32
        ydk::YLeaf session_create_timeout_events; //type: uint32
        ydk::YLeaf session_replay_events; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::BfdInfo::EventCounters


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir : public ydk::Entity
{
    public:
        Bidir();
        ~Bidir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_bandwidth; //type: uint32
        ydk::YLeaf reverse_bandwidth_standby; //type: uint32
        class ReverseEroErrorCurrent; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent
        class ReverseEroErrorReopt; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt
        class ReverseEroErrorStandby; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby
        class ReverseEroErrorStandbyReopt; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent> reverse_ero_error_current;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt> reverse_ero_error_reopt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby> reverse_ero_error_standby;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt> reverse_ero_error_standby_reopt;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent : public ydk::Entity
{
    public:
        ReverseEroErrorCurrent();
        ~ReverseEroErrorCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError> > path_calculation_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorCurrent::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt : public ydk::Entity
{
    public:
        ReverseEroErrorReopt();
        ~ReverseEroErrorReopt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError> > path_calculation_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorReopt::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby : public ydk::Entity
{
    public:
        ReverseEroErrorStandby();
        ~ReverseEroErrorStandby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError> > path_calculation_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandby::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt : public ydk::Entity
{
    public:
        ReverseEroErrorStandbyReopt();
        ~ReverseEroErrorStandbyReopt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError> > path_calculation_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp : public ydk::Entity
{
    public:
        CleanedLsp();
        ~CleanedLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf is_frr_failed; //type: boolean
        ydk::YLeaf frr_active_reason; //type: uint32
        ydk::YLeaf lsp_bandwidth; //type: uint32
        ydk::YLeaf lsp_setup_priority; //type: uint8
        ydk::YLeaf lsp_hold_priority; //type: uint8
        ydk::YLeaf lsp_bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf dste_class_match; //type: boolean
        ydk::YLeaf dste_class_index; //type: uint8
        ydk::YLeaf type; //type: MplsTeLsp
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf s2_ls_up; //type: uint32
        ydk::YLeaf s2_ls_proceeding; //type: uint32
        ydk::YLeaf s2_ls_down; //type: uint32
        ydk::YLeaf reoptimize_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf reoptimize_trigger; //type: MteReoptTrigger
        ydk::YLeaf timer_left; //type: uint32
        ydk::YLeaf is_passive; //type: boolean
        ydk::YLeaf is_interface; //type: boolean
        ydk::YLeaf last_path_change; //type: uint32
        ydk::YLeaf persistent_bytes; //type: uint64
        ydk::YLeaf persistent_packets; //type: uint64
        class LspFec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::LspFec
        class S2L; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::LspFec> lsp_fec;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L> > s2l;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::LspFec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::LspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::LspFec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L : public ydk::Entity
{
    public:
        S2L();
        ~S2L();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcalc_area; //type: string
        ydk::YLeaf is_expanded_ero; //type: boolean
        ydk::YLeaf path_reeval_query_mid; //type: uint32
        ydk::YLeaf time_since_last_query_received_mid; //type: uint32
        ydk::YLeaf time_since_last_preferred_path_exists_send_mid; //type: uint32
        ydk::YLeaf time_since_last_preferred_tree_exists_send_mid; //type: uint32
        ydk::YLeaf expanded_ero_area_id; //type: string
        ydk::YLeaf expanded_ero_affinity_bits; //type: uint32
        ydk::YLeaf expanded_ero_affinity_mask; //type: uint32
        ydk::YLeaf expanded_ero_metric_type; //type: MplsTeMetric
        ydk::YLeaf expanded_ero_metric; //type: uint32
        ydk::YLeaf abr_auto_discovered; //type: string
        ydk::YLeaf is_frr_enabled; //type: boolean
        ydk::YLeaf is_node_protected; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf path_rro_enabled; //type: boolean
        ydk::YLeaf weight; //type: uint64
        ydk::YLeaf reverse_weight; //type: uint64
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf egress_interface_state; //type: TeControllerState
        ydk::YLeaf egress_interface_brief; //type: string
        ydk::YLeaf ingress_interface; //type: string
        ydk::YLeaf ingress_interface_state; //type: TeControllerState
        ydk::YLeaf ingress_interface_brief; //type: string
        ydk::YLeaf s2l_local_label; //type: uint32
        ydk::YLeaf s2l_out_label; //type: uint32
        ydk::YLeaf outbound_frr_state; //type: MplsTeFrrState
        ydk::YLeaf frr_out_tunnel_interface; //type: string
        ydk::YLeaf role; //type: MplsTeTunnelRole
        ydk::YLeaf signalling_status; //type: MplsTeTunnelsSignalingStatus
        ydk::YLeaf local_router_id; //type: string
        ydk::YLeaf upstream_router_id; //type: string
        ydk::YLeaf downstream_router_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf incoming_address; //type: string
        ydk::YLeaf backup_tunnel_interface; //type: string
        ydk::YLeaf node_hop_count; //type: uint8
        ydk::YLeaf is_optical; //type: boolean
        ydk::YLeaf s2l_reverse_ero_obj_present; //type: boolean
        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        ydk::YLeaf reverse_lsp_name; //type: string
        ydk::YLeaf s2l_reverse_tspec_obj_present; //type: boolean
        ydk::YLeaf path_using_strict_spf; //type: boolean
        class S2LFec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LFec
        class ActivePathOption; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption
        class OutXro; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro
        class InXro; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro
        class Tspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Tspec
        class GenericTspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec
        class Fspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Fspec
        class GenericFspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec
        class NextHopAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric
        class PreviousHopAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric
        class IncomingAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric
        class S2LConvergence; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LConvergence
        class SoftPreemption; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SoftPreemption
        class GmplsLabels; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels
        class OtnS2L; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L
        class HeadEndBfdInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo
        class TailEndBfdInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo
        class SrlgCollection; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection
        class Association; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association
        class Protection; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Protection
        class ReverseLspFec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec
        class ReverseTspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseTspec
        class FlexInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo
        class LspWrapInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::LspWrapInfo
        class DiversityInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::DiversityInfo
        class S2LReverseLspSubObj; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LReverseLspSubObj
        class SharedRiskLinkGroup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SharedRiskLinkGroup
        class OutEro; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro
        class InEro; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro
        class PathRro; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro
        class ResvRro; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro
        class PathAffinityArray; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray
        class ReverseEroIn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn
        class S2LSegmentRoutingPath; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LSegmentRoutingPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption> active_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::DiversityInfo> diversity_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Fspec> fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec> generic_fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec> generic_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels> gmpls_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo> head_end_bfd_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro> > in_ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro> in_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric> incoming_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::LspWrapInfo> lsp_wrap_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric> next_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L> otn_s2l;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro> > out_ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro> out_xro;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray> > path_affinity_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro> > path_rro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric> previous_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Protection> protection;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro> > resv_rro;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn> > reverse_ero_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseTspec> reverse_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LConvergence> s2l_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LFec> s2l_fec;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LReverseLspSubObj> > s2l_reverse_lsp_sub_obj;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LSegmentRoutingPath> > s2l_segment_routing_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection> srlg_collection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo> tail_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Tspec> tspec;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption : public ydk::Entity
{
    public:
        ActivePathOption();
        ~ActivePathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index_is_valid; //type: boolean
        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf path_option_name; //type: string
        ydk::YLeaf path_option_type; //type: MplsTePathoption
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf explicit_path_id; //type: uint16
        ydk::YLeaf holddown_duration; //type: uint16
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf path_option_area_id; //type: string
        ydk::YLeaf is_strict_explicit_path; //type: boolean
        ydk::YLeaf is_helddown; //type: boolean
        ydk::YLeaf is_lockdown; //type: boolean
        ydk::YLeaf is_verbatim; //type: boolean
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf has_attribute_set; //type: boolean
        ydk::YLeaf attribute_set_found; //type: boolean
        ydk::YLeaf has_xro_attribute_set; //type: boolean
        ydk::YLeaf xro_attribute_set_found; //type: boolean
        ydk::YLeaf is_segment_routing; //type: boolean
        ydk::YLeaf protected_by_path_option_index; //type: uint32
        ydk::YLeaf restored_from_path_option_index; //type: uint32
        class AttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet
        class XroAttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::PathCalculationError
        class RemergeError; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::RemergeError
        class SignallingError; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::SignallingError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet> attribute_set;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::PathCalculationError> > path_calculation_error;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::RemergeError> > remerge_error;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::SignallingError> > signalling_error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet> xro_attribute_set;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_signalled_name_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        class SignalledName; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_interface; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
{
    public:
        SignalledName();
        ~SignalledName();

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
        ydk::YLeaf source_type; //type: TeSigNameAppend
        ydk::YLeaf protected_interface_type; //type: TeSigNameAppend
        ydk::YLeaf is_mp_addresses; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_node_protection; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf auto_bandwidth_collect; //type: boolean
        ydk::YLeaf auto_route_announce; //type: boolean
        ydk::YLeaf soft_preemption_configured; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf is_interface_bw_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId> > mesh_group_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
{
    public:
        MeshGroupId();
        ~MeshGroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_37_ */

