#ifndef _CISCO_IOS_XE_MPLS_LDP_
#define _CISCO_IOS_XE_MPLS_LDP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mpls_ldp {

class NsrSyncNackRsn : public virtual ydk::Identity
{
    public:
        NsrSyncNackRsn();
        ~NsrSyncNackRsn();


}; // NsrSyncNackRsn

class NsrPeerSyncErr : public virtual ydk::Identity
{
    public:
        NsrPeerSyncErr();
        ~NsrPeerSyncErr();


}; // NsrPeerSyncErr

class IcpmType : public virtual ydk::Identity
{
    public:
        IcpmType();
        ~IcpmType();


}; // IcpmType

class IccpType : public virtual ydk::Identity
{
    public:
        IccpType();
        ~IccpType();


}; // IccpType

class NsrPeerSyncState : public virtual ydk::Identity
{
    public:
        NsrPeerSyncState();
        ~NsrPeerSyncState();


}; // NsrPeerSyncState

class NsrStatus : public virtual ydk::Identity
{
    public:
        NsrStatus();
        ~NsrStatus();


}; // NsrStatus

class DownNbrReason : public virtual ydk::Identity
{
    public:
        DownNbrReason();
        ~DownNbrReason();


}; // DownNbrReason

class RoutePathLblOwner : public virtual ydk::Identity
{
    public:
        RoutePathLblOwner();
        ~RoutePathLblOwner();


}; // RoutePathLblOwner

class LabelType : public virtual ydk::Identity
{
    public:
        LabelType();
        ~LabelType();


}; // LabelType

class RoutePathType : public virtual ydk::Identity
{
    public:
        RoutePathType();
        ~RoutePathType();


}; // RoutePathType

class IgpSyncDownReason : public virtual ydk::Identity
{
    public:
        IgpSyncDownReason();
        ~IgpSyncDownReason();


}; // IgpSyncDownReason

class MplsLdp : public ydk::Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

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

        class MplsLdpState; //type: MplsLdp::MplsLdpState
        class MplsLdpConfig; //type: MplsLdp::MplsLdpConfig

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState> mpls_ldp_state;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig> mpls_ldp_config;
        
}; // MplsLdp


class MplsLdp::MplsLdpState : public ydk::Entity
{
    public:
        MplsLdpState();
        ~MplsLdpState();

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

        class OperSummary; //type: MplsLdp::MplsLdpState::OperSummary
        class ForwardingSummary; //type: MplsLdp::MplsLdpState::ForwardingSummary
        class BindingsSummary; //type: MplsLdp::MplsLdpState::BindingsSummary
        class NsrSummaryAll; //type: MplsLdp::MplsLdpState::NsrSummaryAll
        class IcpmSummaryAll; //type: MplsLdp::MplsLdpState::IcpmSummaryAll
        class Parameters; //type: MplsLdp::MplsLdpState::Parameters
        class Capabilities; //type: MplsLdp::MplsLdpState::Capabilities
        class BackoffParameters; //type: MplsLdp::MplsLdpState::BackoffParameters
        class GracefulRestart; //type: MplsLdp::MplsLdpState::GracefulRestart
        class Vrfs; //type: MplsLdp::MplsLdpState::Vrfs
        class Discovery; //type: MplsLdp::MplsLdpState::Discovery
        class Forwarding; //type: MplsLdp::MplsLdpState::Forwarding
        class Bindings; //type: MplsLdp::MplsLdpState::Bindings
        class Neighbors; //type: MplsLdp::MplsLdpState::Neighbors
        class LabelRanges; //type: MplsLdp::MplsLdpState::LabelRanges

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::OperSummary> oper_summary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary> forwarding_summary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::BindingsSummary> bindings_summary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::NsrSummaryAll> nsr_summary_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll> icpm_summary_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Parameters> parameters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Capabilities> capabilities;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::BackoffParameters> backoff_parameters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery> discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding> forwarding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings> bindings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::LabelRanges> label_ranges;
        
}; // MplsLdp::MplsLdpState


class MplsLdp::MplsLdpState::OperSummary : public ydk::Entity
{
    public:
        OperSummary();
        ~OperSummary();

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

        ydk::YLeaf number_of_vrf; //type: uint32
        ydk::YLeaf number_of_vrf_oper; //type: uint32
        ydk::YLeaf number_of_interfaces; //type: uint32
        ydk::YLeaf number_of_fwd_ref_interfaces; //type: uint32
        ydk::YLeaf number_of_autocfg_interfaces; //type: uint32
        ydk::YLeaf no_of_ipv4_rib_tbl; //type: uint32
        ydk::YLeaf no_of_ipv4_rib_tbl_reg; //type: uint32
        class Common; //type: MplsLdp::MplsLdpState::OperSummary::Common

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::OperSummary::Common> common;
        
}; // MplsLdp::MplsLdpState::OperSummary


class MplsLdp::MplsLdpState::OperSummary::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

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

        ydk::YLeaf address_families; //type: Af
        ydk::YLeaf number_of_neighbors; //type: uint32
        ydk::YLeaf number_of_graceful_restart_neighbors; //type: uint32
        ydk::YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        ydk::YLeaf numberof_ipv4_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv4_routes; //type: uint32
        ydk::YLeaf number_of_ipv4_local_addresses; //type: uint32
        ydk::YLeaf number_of_ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv4ldp_interfaces; //type: uint32

}; // MplsLdp::MplsLdpState::OperSummary::Common


class MplsLdp::MplsLdpState::ForwardingSummary : public ydk::Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

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

        ydk::YLeaf intfs_fwd_count; //type: uint16
        ydk::YLeaf local_lbls; //type: uint16
        class Pfxs; //type: MplsLdp::MplsLdpState::ForwardingSummary::Pfxs
        class Nhs; //type: MplsLdp::MplsLdpState::ForwardingSummary::Nhs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Pfxs> pfxs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Nhs> nhs;
        
}; // MplsLdp::MplsLdpState::ForwardingSummary


class MplsLdp::MplsLdpState::ForwardingSummary::Pfxs : public ydk::Entity
{
    public:
        Pfxs();
        ~Pfxs();

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

        ydk::YLeaf total_pfxs; //type: uint16
        ydk::YLeaf ecmp_pfxs; //type: uint16
        ydk::YLeaf protected_pfxs; //type: uint16
        class LabeledPfxsAggr; //type: MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        
}; // MplsLdp::MplsLdpState::ForwardingSummary::Pfxs


class MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr : public ydk::Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

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

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr


class MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary : public ydk::Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

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

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary


class MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup : public ydk::Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

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

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup


class MplsLdp::MplsLdpState::ForwardingSummary::Nhs : public ydk::Entity
{
    public:
        Nhs();
        ~Nhs();

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

        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf protected_paths; //type: uint32
        ydk::YLeaf backup_paths; //type: uint32
        ydk::YLeaf remote_backup_paths; //type: uint32
        ydk::YLeaf labeled_paths; //type: uint32
        ydk::YLeaf labeled_backup_paths; //type: uint32

}; // MplsLdp::MplsLdpState::ForwardingSummary::Nhs


class MplsLdp::MplsLdpState::BindingsSummary : public ydk::Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

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

        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::MplsLdpState::BindingsSummary


class MplsLdp::MplsLdpState::NsrSummaryAll : public ydk::Entity
{
    public:
        NsrSummaryAll();
        ~NsrSummaryAll();

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

        ydk::YLeaf nsr_sum_in_label_reqs_created; //type: uint32
        ydk::YLeaf nsr_sum_in_label_reqs_freed; //type: uint32
        ydk::YLeaf nsr_sum_in_label_withdraw_created; //type: uint32
        ydk::YLeaf nsr_sum_in_label_withdraw_freed; //type: uint32
        ydk::YLeaf nsr_sum_lcl_addr_withdraw_set; //type: uint32
        ydk::YLeaf nsr_sum_lcl_addr_withdraw_cleared; //type: uint32

}; // MplsLdp::MplsLdpState::NsrSummaryAll


class MplsLdp::MplsLdpState::IcpmSummaryAll : public ydk::Entity
{
    public:
        IcpmSummaryAll();
        ~IcpmSummaryAll();

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

        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32
        class IcpmRgidTableInfo; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo
        class IcpmSessionTable; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo> icpm_rgid_table_info;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable> icpm_session_table;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo : public ydk::Entity
{
    public:
        IcpmRgidTableInfo();
        ~IcpmRgidTableInfo();

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

        class RedGroup; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup> > red_group;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup : public ydk::Entity
{
    public:
        RedGroup();
        ~RedGroup();

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

        ydk::YLeaf rg_id; //type: uint32
        class IcpmProtocols; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols> > icpm_protocols;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols : public ydk::Entity
{
    public:
        IcpmProtocols();
        ~IcpmProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf icpm_type; //type: IcpmType
        class RedunGroups; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups> > redun_groups;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups : public ydk::Entity
{
    public:
        RedunGroups();
        ~RedunGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_id; //type: uint32
        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf state; //type: string
        class IccpApps; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps> > iccp_apps;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps : public ydk::Entity
{
    public:
        IccpApps();
        ~IccpApps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_app; //type: IccpType
        ydk::YLeaf app_state; //type: IccpState
        ydk::YLeaf ptcl_ver; //type: uint32

}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable : public ydk::Entity
{
    public:
        IcpmSessionTable();
        ~IcpmSessionTable();

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

        class SessionTable; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable> > session_table;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable : public ydk::Entity
{
    public:
        SessionTable();
        ~SessionTable();

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

        ydk::YLeaf session_id; //type: uint32
        class IcpmProtocols; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols> > icpm_protocols;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols : public ydk::Entity
{
    public:
        IcpmProtocols();
        ~IcpmProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf icpm_type; //type: IcpmType
        class RedunGroups; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups> > redun_groups;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups : public ydk::Entity
{
    public:
        RedunGroups();
        ~RedunGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_id; //type: uint32
        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf state; //type: string
        class IccpApps; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps> > iccp_apps;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps : public ydk::Entity
{
    public:
        IccpApps();
        ~IccpApps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_app; //type: IccpType
        ydk::YLeaf app_state; //type: IccpState
        ydk::YLeaf ptcl_ver; //type: uint32

}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps


class MplsLdp::MplsLdpState::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

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

        ydk::YLeaf global_md5_password_enabled; //type: boolean
        ydk::YLeaf protocol_version; //type: uint32
        ydk::YLeaf keepalive_interval; //type: uint32
        ydk::YLeaf session_hold_time; //type: uint32
        ydk::YLeaf le_no_route_timeout; //type: uint32
        ydk::YLeaf af_binding_withdraw_delay; //type: uint32
        ydk::YLeaf max_intf_attached; //type: uint32
        ydk::YLeaf max_intf_te; //type: uint32
        ydk::YLeaf max_peer; //type: uint32
        ydk::YLeaf out_of_mem_state; //type: uint32
        ydk::YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean
        ydk::YLeaf dod_max_hop; //type: uint32
        ydk::YLeaf loop_detection; //type: LoopDetectionType
        ydk::YLeafList feature; //type: list of  string
        class AddressFamilyParameter; //type: MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter> > address_family_parameter;
        
}; // MplsLdp::MplsLdpState::Parameters


class MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter : public ydk::Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

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

        ydk::YLeaf address_family; //type: Af
        ydk::YLeaf discovery_transport_address; //type: string
        ydk::YLeaf is_accepting_targeted_hellos; //type: boolean
        ydk::YLeaf targeted_hello_filter; //type: string

}; // MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter


class MplsLdp::MplsLdpState::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

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

        class Capability; //type: MplsLdp::MplsLdpState::Capabilities::Capability

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Capabilities::Capability> > capability;
        
}; // MplsLdp::MplsLdpState::Capabilities


class MplsLdp::MplsLdpState::Capabilities::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

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

        ydk::YLeaf cap_type; //type: uint16
        ydk::YLeaf capability_owner; //type: string
        ydk::YLeaf cap_des; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::MplsLdpState::Capabilities::Capability


class MplsLdp::MplsLdpState::BackoffParameters : public ydk::Entity
{
    public:
        BackoffParameters();
        ~BackoffParameters();

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

        ydk::YLeaf initial_seconds; //type: uint32
        ydk::YLeaf maximum_seconds; //type: uint32
        ydk::YLeaf backoff_seconds; //type: uint32
        ydk::YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::MplsLdpState::BackoffParameters


class MplsLdp::MplsLdpState::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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

        ydk::YLeaf is_graceful_restart_configured; //type: boolean
        ydk::YLeaf graceful_restart_reconnect_timeout; //type: uint32
        ydk::YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32
        ydk::YLeaf is_forwarding_state_hold_timer_running; //type: empty
        ydk::YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32

}; // MplsLdp::MplsLdpState::GracefulRestart


class MplsLdp::MplsLdpState::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: MplsLdp::MplsLdpState::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf> > vrf;
        
}; // MplsLdp::MplsLdpState::Vrfs


class MplsLdp::MplsLdpState::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        class VrfSummary; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary
        class Afs; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary> vrf_summary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs> afs;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf


class MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary : public ydk::Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_families; //type: Af
        ydk::YLeaf number_of_neighbors; //type: uint32
        ydk::YLeaf number_of_graceful_restart_neighbors; //type: uint32
        ydk::YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        ydk::YLeaf numberof_ipv4_hello_adj; //type: uint32
        ydk::YLeaf number_of_ipv4_routes; //type: uint32
        ydk::YLeaf number_of_ipv4_local_addresses; //type: uint32
        ydk::YLeaf number_of_ldp_interfaces; //type: uint32
        ydk::YLeaf number_of_ipv4ldp_interfaces; //type: uint32

}; // MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af> > af;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: Af
        class InterfaceSummary; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary
        class Igp; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp> igp;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf known_ip_interface_count; //type: uint32
        ydk::YLeaf known_ip_interface_ldp_enabled; //type: uint32
        ydk::YLeaf configured_attached_interface; //type: uint32
        ydk::YLeaf configured_te_interface; //type: uint32
        ydk::YLeaf forward_references; //type: uint32
        ydk::YLeaf auto_config_disabled; //type: uint32
        ydk::YLeaf auto_config; //type: uint32
        ydk::YLeaf auto_config_forward_reference_interfaces; //type: uint32

}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync> > sync;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf igp_sync_state; //type: IgpSyncState
        ydk::YLeaf is_delay_timer_running; //type: empty
        ydk::YLeaf delay_timer_remaining; //type: uint32
        ydk::YLeaf igp_sync_down_reason; //type: IgpSyncDownReason
        class Peers; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers> > peers;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf is_gr_enabled; //type: boolean
        ydk::YLeaf is_chkpt_created; //type: empty

}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers


class MplsLdp::MplsLdpState::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

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

        class DiscoveryStats; //type: MplsLdp::MplsLdpState::Discovery::DiscoveryStats
        class LinkHelloState; //type: MplsLdp::MplsLdpState::Discovery::LinkHelloState
        class TargetedHellos; //type: MplsLdp::MplsLdpState::Discovery::TargetedHellos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::DiscoveryStats> discovery_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::LinkHelloState> link_hello_state;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::TargetedHellos> targeted_hellos;
        
}; // MplsLdp::MplsLdpState::Discovery


class MplsLdp::MplsLdpState::Discovery::DiscoveryStats : public ydk::Entity
{
    public:
        DiscoveryStats();
        ~DiscoveryStats();

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

        ydk::YLeaf num_of_ldp_interfaces; //type: uint32
        ydk::YLeaf num_of_active_ldp_interfaces; //type: uint32
        ydk::YLeaf num_of_lnk_disc_xmit; //type: uint32
        ydk::YLeaf num_of_tgt_disc_xmit; //type: uint32
        ydk::YLeaf num_of_lnk_disc_recv; //type: uint32
        ydk::YLeaf num_of_tgt_disc_recv; //type: uint32

}; // MplsLdp::MplsLdpState::Discovery::DiscoveryStats


class MplsLdp::MplsLdpState::Discovery::LinkHelloState : public ydk::Entity
{
    public:
        LinkHelloState();
        ~LinkHelloState();

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

        class LinkHellos; //type: MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos> > link_hellos;
        
}; // MplsLdp::MplsLdpState::Discovery::LinkHelloState


class MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos : public ydk::Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

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

        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf nbr_transport_addr; //type: string
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf local_src_addr; //type: string
        ydk::YLeaf local_transport_addr; //type: string
        ydk::YLeaf nbr_src_addr; //type: string
        ydk::YLeaf nbr_ldp_id; //type: string
        ydk::YLeaf session_up; //type: empty
        ydk::YLeaf nbr_hold_time; //type: uint32
        ydk::YLeaf next_hello; //type: uint32
        ydk::YLeaf hold_time_remaining; //type: uint32

}; // MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos


class MplsLdp::MplsLdpState::Discovery::TargetedHellos : public ydk::Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

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

        ydk::YLeaf targeted_hello_interval; //type: uint32
        ydk::YLeaf targeted_hello_hold_time; //type: uint32
        class TargetedHello; //type: MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello> > targeted_hello;
        
}; // MplsLdp::MplsLdpState::Discovery::TargetedHellos


class MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello : public ydk::Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf target_address; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf neighbor_ldp_identifier; //type: string
        ydk::YLeaf state; //type: DhcState
        ydk::YLeaf nbr_hold_time; //type: uint32
        ydk::YLeaf next_hello; //type: uint32
        ydk::YLeaf hold_time_remaining; //type: uint32

}; // MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello


class MplsLdp::MplsLdpState::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

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

        class ForwardingVrfSumms; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms
        class ForwardingDetail; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms> forwarding_vrf_summs;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail> > forwarding_detail;
        
}; // MplsLdp::MplsLdpState::Forwarding


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms : public ydk::Entity
{
    public:
        ForwardingVrfSumms();
        ~ForwardingVrfSumms();

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

        class ForwardingVrfSumm; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm> > forwarding_vrf_summ;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm : public ydk::Entity
{
    public:
        ForwardingVrfSumm();
        ~ForwardingVrfSumm();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf intfs_fwd_count; //type: uint16
        ydk::YLeaf local_lbls; //type: uint16
        class Pfxs; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs
        class Nhs; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs> pfxs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs> nhs;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs : public ydk::Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_pfxs; //type: uint16
        ydk::YLeaf ecmp_pfxs; //type: uint16
        ydk::YLeaf protected_pfxs; //type: uint16
        class LabeledPfxsAggr; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr : public ydk::Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary : public ydk::Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup : public ydk::Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf labeled_pfxs; //type: uint16
        ydk::YLeaf labeled_pfxs_partial; //type: uint16
        ydk::YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs : public ydk::Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf protected_paths; //type: uint32
        ydk::YLeaf backup_paths; //type: uint32
        ydk::YLeaf remote_backup_paths; //type: uint32
        ydk::YLeaf labeled_paths; //type: uint32
        ydk::YLeaf labeled_backup_paths; //type: uint32

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail : public ydk::Entity
{
    public:
        ForwardingDetail();
        ~ForwardingDetail();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf fwd_prefix; //type: string
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix_length; //type: uint8
        class Route; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route
        class Paths; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route> route;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths> > paths;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf source; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_local_vrf_leaked; //type: boolean
        ydk::YLeaf routing_update_count; //type: uint32
        ydk::YLeaf routing_update_timestamp; //type: uint64
        ydk::YLeaf routing_update_age; //type: uint64
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf forwarding_update_count; //type: uint32
        ydk::YLeaf forwarding_update_timestamp; //type: uint64
        ydk::YLeaf forwarding_update_age; //type: uint64

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routing; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing
        class Mpls; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing> routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls> mpls;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf remote_node_id; //type: string
        ydk::YLeaf has_remote_lfa_bkup; //type: boolean
        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf nh_is_overriden; //type: empty
        ydk::YLeaf nexthop_id; //type: uint32
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf bkup_path_id; //type: uint8
        ydk::YLeaf path_type; //type: RoutePathType

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsOutgoingInfo; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa> remote_lfa;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo : public ydk::Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_type; //type: LabelType
        ydk::YLeaf out_label_owner; //type: RoutePathLblOwner
        ydk::YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public ydk::Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_remote_lfa_bkup; //type: boolean
        class MplsOutgoingInfo; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public ydk::Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_type; //type: LabelType
        ydk::YLeaf out_label_owner; //type: RoutePathLblOwner
        ydk::YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent : public ydk::Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::MplsLdpState::Bindings : public ydk::Entity
{
    public:
        Bindings();
        ~Bindings();

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

        class BindingsSumAfs; //type: MplsLdp::MplsLdpState::Bindings::BindingsSumAfs
        class Binding; //type: MplsLdp::MplsLdpState::Bindings::Binding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::BindingsSumAfs> bindings_sum_afs;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::Binding> > binding;
        
}; // MplsLdp::MplsLdpState::Bindings


class MplsLdp::MplsLdpState::Bindings::BindingsSumAfs : public ydk::Entity
{
    public:
        BindingsSumAfs();
        ~BindingsSumAfs();

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

        class BindingSumAf; //type: MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf> > binding_sum_af;
        
}; // MplsLdp::MplsLdpState::Bindings::BindingsSumAfs


class MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf : public ydk::Entity
{
    public:
        BindingSumAf();
        ~BindingSumAf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf af_name; //type: Af
        ydk::YLeaf binding_total; //type: uint32
        ydk::YLeaf binding_no_route; //type: uint32
        ydk::YLeaf binding_local_no_route; //type: uint32
        ydk::YLeaf binding_local; //type: uint32
        ydk::YLeaf binding_local_null; //type: uint32
        ydk::YLeaf binding_local_implicit_null; //type: uint32
        ydk::YLeaf binding_local_explicit_null; //type: uint32
        ydk::YLeaf binding_local_non_null; //type: uint32
        ydk::YLeaf binding_local_oor; //type: uint32
        ydk::YLeaf lowest_allocated_label; //type: uint32
        ydk::YLeaf highest_allocated_label; //type: uint32
        ydk::YLeaf binding_remote; //type: uint32

}; // MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf


class MplsLdp::MplsLdpState::Bindings::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf fwd_prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf le_local_binding_revision; //type: uint32
        ydk::YLeaf le_local_label_state; //type: LocalLabelState
        ydk::YLeaf is_no_route; //type: boolean
        ydk::YLeaf label_oor; //type: boolean
        ydk::YLeaf advertise_prefix_filter; //type: string
        ydk::YLeaf advertise_lsr_filter; //type: string
        ydk::YLeaf config_enforced_local_label_value; //type: boolean
        class RemoteBinding; //type: MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding> > remote_binding;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        
}; // MplsLdp::MplsLdpState::Bindings::Binding


class MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding : public ydk::Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf is_stale; //type: boolean
        class AssigningPeerLdpIdent; //type: MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;
        
}; // MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding


class MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public ydk::Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16

}; // MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo : public ydk::Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint16

}; // MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::MplsLdpState::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor
        class NbrAdjs; //type: MplsLdp::MplsLdpState::Neighbors::NbrAdjs
        class StatsInfo; //type: MplsLdp::MplsLdpState::Neighbors::StatsInfo
        class Backoffs; //type: MplsLdp::MplsLdpState::Neighbors::Backoffs
        class NsrNbrDetail; //type: MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::NbrAdjs> > nbr_adjs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::StatsInfo> stats_info;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Backoffs> backoffs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail> nsr_nbr_detail;
        
}; // MplsLdp::MplsLdpState::Neighbors


class MplsLdp::MplsLdpState::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf lsr_id; //type: string
        ydk::YLeaf label_space_id; //type: uint32
        ydk::YLeaf session_role; //type: SessionRole
        ydk::YLeaf session_prot_ver; //type: uint32
        ydk::YLeaf up_time_seconds; //type: uint32
        ydk::YLeaf nbr_path_vector_limit; //type: int32
        ydk::YLeaf downstream_on_demand; //type: boolean
        ydk::YLeaf peer_hold_time; //type: uint32
        ydk::YLeaf peer_keep_alive_interval; //type: uint32
        ydk::YLeaf peer_state; //type: AdjState
        ydk::YLeaf inbound_ipv4; //type: string
        ydk::YLeaf inbound_ipv6_filter; //type: string
        ydk::YLeaf outbound_ipv4_filter; //type: string
        ydk::YLeaf outbound_ipv6_filter; //type: string
        ydk::YLeaf has_sp; //type: boolean
        ydk::YLeaf sp_state; //type: string
        ydk::YLeaf sp_filter; //type: string
        ydk::YLeaf sp_has_duration; //type: boolean
        ydk::YLeaf sp_duration; //type: uint32
        ydk::YLeaf spht_running; //type: boolean
        ydk::YLeaf spht_remaining; //type: uint32
        ydk::YLeaf bgp_advertisement_state; //type: NbrBgpAdvtState
        ydk::YLeaf advertise_bgp_prefixes; //type: boolean
        ydk::YLeafList client; //type: list of  string
        ydk::YLeafList duplicate_address; //type: list of  string
        ydk::YLeafList nbr_bound_address; //type: list of  string
        class NbrStats; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats
        class GracefulRestartAdjacency; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency
        class TcpInformation; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation
        class Capabilities; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats> nbr_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency> graceful_restart_adjacency;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation> tcp_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities> capabilities;
                class SessionRole;

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor


class MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats : public ydk::Entity
{
    public:
        NbrStats();
        ~NbrStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ta_pies_sent; //type: uint32
        ydk::YLeaf ta_pies_rcvd; //type: uint32
        ydk::YLeaf num_of_nbr_ipv4_discovery; //type: uint32
        ydk::YLeaf num_of_nbr_ipv6_discovery; //type: uint32
        ydk::YLeaf num_of_nbr_ipv4_addresses; //type: uint32
        ydk::YLeaf num_of_nbr_ipv6_addresses; //type: uint32
        ydk::YLeaf num_of_nbr_ipv4_lbl; //type: uint32
        ydk::YLeaf num_of_nbr_ipv6_lbl; //type: uint32

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats


class MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency : public ydk::Entity
{
    public:
        GracefulRestartAdjacency();
        ~GracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf reconnect_timeout; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf is_liveness_timer_running; //type: empty
        ydk::YLeaf liveness_timer_remaining_seconds; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: empty
        ydk::YLeaf recovery_timer_remaining_seconds; //type: uint32
        ydk::YLeaf down_nbr_flap_count; //type: uint32
        ydk::YLeaf down_nbr_down_reason; //type: DownNbrReason

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency


class MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation : public ydk::Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf foreign_host; //type: string
        ydk::YLeaf local_host; //type: string
        ydk::YLeaf foreign_port; //type: uint16
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf is_md5_on; //type: boolean
        ydk::YLeaf up_time; //type: string

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation


class MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SentCaps; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps
        class ReceivedCaps; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps> > sent_caps;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps> > received_caps;
        
}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities


class MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps : public ydk::Entity
{
    public:
        SentCaps();
        ~SentCaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cap_type; //type: uint16
        ydk::YLeaf cap_des; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps


class MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps : public ydk::Entity
{
    public:
        ReceivedCaps();
        ~ReceivedCaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cap_type; //type: uint16
        ydk::YLeaf cap_des; //type: string
        ydk::YLeaf capability_data_length; //type: uint16
        ydk::YLeaf capability_data; //type: string

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps


class MplsLdp::MplsLdpState::Neighbors::NbrAdjs : public ydk::Entity
{
    public:
        NbrAdjs();
        ~NbrAdjs();

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

        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf target_address; //type: string
        ydk::YLeaf target_state; //type: DhcState

}; // MplsLdp::MplsLdpState::Neighbors::NbrAdjs


class MplsLdp::MplsLdpState::Neighbors::StatsInfo : public ydk::Entity
{
    public:
        StatsInfo();
        ~StatsInfo();

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

        ydk::YLeaf discon_time; //type: uint32
        ydk::YLeaf session_attempts; //type: uint32
        ydk::YLeaf sess_reject_no_hello; //type: uint32
        ydk::YLeaf sess_rej_ad; //type: uint32
        ydk::YLeaf sess_rej_max_pdu; //type: uint32
        ydk::YLeaf sess_rej_lr; //type: uint32
        ydk::YLeaf bad_ldpid; //type: uint32
        ydk::YLeaf bad_pdu_len; //type: uint32
        ydk::YLeaf bad_msg_len; //type: uint32
        ydk::YLeaf bad_tlv_len; //type: uint32
        ydk::YLeaf malformed_tlv_val; //type: uint32
        ydk::YLeaf keep_alive_exp; //type: uint32
        ydk::YLeaf shutdown_notif_rec; //type: uint32
        ydk::YLeaf shutdow_notif_sent; //type: uint32
        class MessageOut; //type: MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut
        class MessageIn; //type: MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut> message_out;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn> message_in;
        
}; // MplsLdp::MplsLdpState::Neighbors::StatsInfo


class MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut : public ydk::Entity
{
    public:
        MessageOut();
        ~MessageOut();

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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut


class MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn : public ydk::Entity
{
    public:
        MessageIn();
        ~MessageIn();

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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf init_count; //type: uint32
        ydk::YLeaf address_count; //type: uint32
        ydk::YLeaf address_withdraw_count; //type: uint32
        ydk::YLeaf label_map_count; //type: uint32
        ydk::YLeaf label_withdraw_count; //type: uint32
        ydk::YLeaf label_release_count; //type: uint32
        ydk::YLeaf label_request_count; //type: uint32
        ydk::YLeaf label_abort_request_count; //type: uint32
        ydk::YLeaf notification_count; //type: uint32
        ydk::YLeaf keep_alive_count; //type: uint32
        ydk::YLeaf iccp_rg_conn_count; //type: uint32
        ydk::YLeaf iccp_rg_disconn_count; //type: uint32
        ydk::YLeaf iccp_rg_notif_count; //type: uint32
        ydk::YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn


class MplsLdp::MplsLdpState::Neighbors::Backoffs : public ydk::Entity
{
    public:
        Backoffs();
        ~Backoffs();

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

        ydk::YLeaf backoff_seconds; //type: uint32
        ydk::YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::MplsLdpState::Neighbors::Backoffs


class MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail : public ydk::Entity
{
    public:
        NsrNbrDetail();
        ~NsrNbrDetail();

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

        ydk::YLeaf nsr_state; //type: NsrStatus
        ydk::YLeaf nsr_nbr_sync_state; //type: NsrPeerSyncState
        ydk::YLeaf nsr_nbr_last_sync_error; //type: NsrPeerSyncErr
        ydk::YLeaf nsr_nbr_last_sync_nack_reason; //type: NsrSyncNackRsn
        ydk::YLeaf nsr_nbr_pend_label_req_resps; //type: uint32
        ydk::YLeaf nsr_nbr_pend_label_withdraw_resps; //type: uint32
        ydk::YLeaf nsr_nbr_pend_lcl_addr_withdraw_acks; //type: uint32
        ydk::YLeaf nsr_nbr_in_label_reqs_created; //type: uint32
        ydk::YLeaf nsr_nbr_in_label_reqs_freed; //type: uint32
        ydk::YLeaf nsr_nbr_in_label_withdraw_created; //type: uint32
        ydk::YLeaf nsr_nbr_in_label_withdraw_freed; //type: uint32
        ydk::YLeaf nsr_nbr_lcl_addr_withdraw_set; //type: uint32
        ydk::YLeaf nsr_nbr_lcl_addr_withdraw_cleared; //type: uint32
        ydk::YLeaf nsr_nbr_xmit_ctxt_enq; //type: uint32
        ydk::YLeaf nsr_nbr_xmit_ctxt_deq; //type: uint32
        ydk::YLeaf path_vector_limit; //type: int32
        class NbrSess; //type: MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess> nbr_sess;
        
}; // MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail


class MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess : public ydk::Entity
{
    public:
        NbrSess();
        ~NbrSess();

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

        ydk::YLeaf last_stat_change; //type: uint32
        ydk::YLeaf state; //type: State
        ydk::YLeaf keep_alive_remain; //type: uint32
        ydk::YLeaf keep_alive_time; //type: uint32
        ydk::YLeaf max_pdu; //type: uint32
        ydk::YLeaf discon_time; //type: uint32
        ydk::YLeaf unknown_mess_err; //type: uint32
        ydk::YLeaf unknown_tlv; //type: uint32
        class State;

}; // MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess


class MplsLdp::MplsLdpState::LabelRanges : public ydk::Entity
{
    public:
        LabelRanges();
        ~LabelRanges();

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

        class LabelRange; //type: MplsLdp::MplsLdpState::LabelRanges::LabelRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::LabelRanges::LabelRange> > label_range;
        
}; // MplsLdp::MplsLdpState::LabelRanges


class MplsLdp::MplsLdpState::LabelRanges::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

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

        ydk::YLeaf lr_min; //type: uint32
        ydk::YLeaf lr_max; //type: uint32

}; // MplsLdp::MplsLdpState::LabelRanges::LabelRange


class MplsLdp::MplsLdpConfig : public ydk::Entity
{
    public:
        MplsLdpConfig();
        ~MplsLdpConfig();

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

        class GlobalCfg; //type: MplsLdp::MplsLdpConfig::GlobalCfg
        class NbrTable; //type: MplsLdp::MplsLdpConfig::NbrTable
        class Passwords; //type: MplsLdp::MplsLdpConfig::Passwords
        class Session; //type: MplsLdp::MplsLdpConfig::Session
        class LabelCfg; //type: MplsLdp::MplsLdpConfig::LabelCfg
        class Discovery; //type: MplsLdp::MplsLdpConfig::Discovery
        class GracefulRestart; //type: MplsLdp::MplsLdpConfig::GracefulRestart
        class Logging; //type: MplsLdp::MplsLdpConfig::Logging
        class Interfaces; //type: MplsLdp::MplsLdpConfig::Interfaces
        class Routing; //type: MplsLdp::MplsLdpConfig::Routing
        class DualStack; //type: MplsLdp::MplsLdpConfig::DualStack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg> global_cfg;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::NbrTable> nbr_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Passwords> passwords;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Session> session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::LabelCfg> label_cfg;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery> discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Routing> routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::DualStack> dual_stack;
        
}; // MplsLdp::MplsLdpConfig


class MplsLdp::MplsLdpConfig::GlobalCfg : public ydk::Entity
{
    public:
        GlobalCfg();
        ~GlobalCfg();

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

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf enable_nsr; //type: boolean
        ydk::YLeaf disable_quick_start; //type: boolean
        ydk::YLeaf loop_detection; //type: boolean
        ydk::YLeaf admin_status; //type: AdminStatus
        ydk::YLeaf dcsp_val; //type: uint32
        ydk::YLeaf high_priority; //type: boolean
        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf disable_delay; //type: empty
        ydk::YLeaf seconds_delay_proc; //type: uint32
        ydk::YLeaf disable_delay_proc; //type: empty
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf init_sess_thresh; //type: int32
        class RouterId; //type: MplsLdp::MplsLdpConfig::GlobalCfg::RouterId
        class Session; //type: MplsLdp::MplsLdpConfig::GlobalCfg::Session
        class PerAf; //type: MplsLdp::MplsLdpConfig::GlobalCfg::PerAf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::RouterId> > router_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::Session> session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::PerAf> per_af;
                class AdminStatus;
        class Protocol;

}; // MplsLdp::MplsLdpConfig::GlobalCfg


class MplsLdp::MplsLdpConfig::GlobalCfg::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

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

        ydk::YLeaf vrf_name; //type: string
        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf lsr_id_if;
        ydk::YLeaf lsr_id_ip; //type: string
        ydk::YLeaf force; //type: empty

}; // MplsLdp::MplsLdpConfig::GlobalCfg::RouterId


class MplsLdp::MplsLdpConfig::GlobalCfg::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf backoff_init; //type: uint32
        ydk::YLeaf backoff_max; //type: uint32
        ydk::YLeaf seconds; //type: uint16
        ydk::YLeaf infinite; //type: boolean
        class DownstreamOnDemand; //type: MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand
        class Protection; //type: MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand> > downstream_on_demand;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection> protection;
        
}; // MplsLdp::MplsLdpConfig::GlobalCfg::Session


class MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand : public ydk::Entity
{
    public:
        DownstreamOnDemand();
        ~DownstreamOnDemand();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf filter; //type: string

}; // MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand


class MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf enable_prot; //type: boolean
        ydk::YLeaf peer_filter; //type: string
        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf inf; //type: empty

}; // MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection


class MplsLdp::MplsLdpConfig::GlobalCfg::PerAf : public ydk::Entity
{
    public:
        PerAf();
        ~PerAf();

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

        class AfCfg; //type: MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg> > af_cfg;
        
}; // MplsLdp::MplsLdpConfig::GlobalCfg::PerAf


class MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg : public ydk::Entity
{
    public:
        AfCfg();
        ~AfCfg();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf af_name; //type: Af
        ydk::YLeaf default_route; //type: boolean
        ydk::YLeaf ipaddr; //type: string
        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf implicit; //type: empty

}; // MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg


class MplsLdp::MplsLdpConfig::NbrTable : public ydk::Entity
{
    public:
        NbrTable();
        ~NbrTable();

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

        class NbrCfg; //type: MplsLdp::MplsLdpConfig::NbrTable::NbrCfg

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::NbrTable::NbrCfg> > nbr_cfg;
        
}; // MplsLdp::MplsLdpConfig::NbrTable


class MplsLdp::MplsLdpConfig::NbrTable::NbrCfg : public ydk::Entity
{
    public:
        NbrCfg();
        ~NbrCfg();

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

        ydk::YLeaf nbr_vrf; //type: string
        ydk::YLeaf nbr_ip; //type: string
        ydk::YLeaf admin_status; //type: AdminStatus
        ydk::YLeaf implicit_withdraw; //type: boolean
        ydk::YLeaf targeted; //type: boolean
        ydk::YLeaf label_protocol; //type: LabelProtocol
        ydk::YLeaf label_binding_filter; //type: string
        ydk::YLeaf password; //type: string
        class AdminStatus;
        class LabelProtocol;

}; // MplsLdp::MplsLdpConfig::NbrTable::NbrCfg


class MplsLdp::MplsLdpConfig::Passwords : public ydk::Entity
{
    public:
        Passwords();
        ~Passwords();

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

        class Password; //type: MplsLdp::MplsLdpConfig::Passwords::Password

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Passwords::Password> > password;
        
}; // MplsLdp::MplsLdpConfig::Passwords


class MplsLdp::MplsLdpConfig::Passwords::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        ydk::YLeaf nbr_vrf; //type: string
        ydk::YLeaf nbr_id; //type: one of string, union
        ydk::YLeaf password_num; //type: uint32
        ydk::YLeaf pass_required; //type: boolean
        ydk::YLeaf clear_pass; //type: string
        ydk::YLeaf encrypt_pass; //type: string
        ydk::YLeaf keychain_pass; //type: string

}; // MplsLdp::MplsLdpConfig::Passwords::Password


class MplsLdp::MplsLdpConfig::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf backoff; //type: uint32
        ydk::YLeaf seconds; //type: uint16
        ydk::YLeaf infinite; //type: empty

}; // MplsLdp::MplsLdpConfig::Session


class MplsLdp::MplsLdpConfig::LabelCfg : public ydk::Entity
{
    public:
        LabelCfg();
        ~LabelCfg();

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

        class LabelAfCfg; //type: MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg> > label_af_cfg;
        
}; // MplsLdp::MplsLdpConfig::LabelCfg


class MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg : public ydk::Entity
{
    public:
        LabelAfCfg();
        ~LabelAfCfg();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf af_name; //type: Af
        ydk::YLeaf prefix_filter; //type: string
        ydk::YLeaf host_route_enable; //type: boolean
        class AdvtFilter; //type: MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter> > advt_filter;
        
}; // MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg


class MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter : public ydk::Entity
{
    public:
        AdvtFilter();
        ~AdvtFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_filter; //type: string
        ydk::YLeaf peer_filter; //type: string
        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf adv_label_cfg; //type: AdvLabelType

}; // MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter


class MplsLdp::MplsLdpConfig::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

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

        ydk::YLeaf instance_tlv; //type: boolean
        class LinkHello; //type: MplsLdp::MplsLdpConfig::Discovery::LinkHello
        class TargetedHello; //type: MplsLdp::MplsLdpConfig::Discovery::TargetedHello
        class IntTransAddrs; //type: MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::LinkHello> link_hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::TargetedHello> targeted_hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs> int_trans_addrs;
        
}; // MplsLdp::MplsLdpConfig::Discovery


class MplsLdp::MplsLdpConfig::Discovery::LinkHello : public ydk::Entity
{
    public:
        LinkHello();
        ~LinkHello();

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

        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf interval; //type: uint16

}; // MplsLdp::MplsLdpConfig::Discovery::LinkHello


class MplsLdp::MplsLdpConfig::Discovery::TargetedHello : public ydk::Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

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

        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf enable; //type: boolean
        class Accept; //type: MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept> accept;
        
}; // MplsLdp::MplsLdpConfig::Discovery::TargetedHello


class MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf src_filter; //type: string

}; // MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept


class MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs : public ydk::Entity
{
    public:
        IntTransAddrs();
        ~IntTransAddrs();

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

        class IntTransAddr; //type: MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr> > int_trans_addr;
        
}; // MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs


class MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr : public ydk::Entity
{
    public:
        IntTransAddr();
        ~IntTransAddr();

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

        ydk::YLeaf af_name; //type: Af
        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf int_name;
        ydk::YLeaf trans_ip; //type: string
        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf trans_int;

}; // MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr


class MplsLdp::MplsLdpConfig::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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

        ydk::YLeaf is_graceful_restartable; //type: boolean
        ydk::YLeaf forwarding_holding; //type: uint32
        ydk::YLeaf max_recovery; //type: uint32
        ydk::YLeaf nbr_liveness; //type: uint32
        class Helper; //type: MplsLdp::MplsLdpConfig::GracefulRestart::Helper

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GracefulRestart::Helper> > helper;
        
}; // MplsLdp::MplsLdpConfig::GracefulRestart


class MplsLdp::MplsLdpConfig::GracefulRestart::Helper : public ydk::Entity
{
    public:
        Helper();
        ~Helper();

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

        ydk::YLeaf helper_vrf; //type: string
        ydk::YLeaf helper_filter; //type: string

}; // MplsLdp::MplsLdpConfig::GracefulRestart::Helper


class MplsLdp::MplsLdpConfig::Logging : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf graceful_restart; //type: boolean
        ydk::YLeaf neighbor; //type: boolean
        ydk::YLeaf nsr; //type: boolean
        ydk::YLeaf adjacency; //type: boolean
        ydk::YLeaf session_protection; //type: boolean
        class Password; //type: MplsLdp::MplsLdpConfig::Logging::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Logging::Password> password;
        
}; // MplsLdp::MplsLdpConfig::Logging


class MplsLdp::MplsLdpConfig::Logging::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        class ConfigMsg; //type: MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg
        class RolloverMsg; //type: MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg> config_msg;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg> rollover_msg;
        
}; // MplsLdp::MplsLdpConfig::Logging::Password


class MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg : public ydk::Entity
{
    public:
        ConfigMsg();
        ~ConfigMsg();

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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf rate_limit; //type: uint32

}; // MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg


class MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg : public ydk::Entity
{
    public:
        RolloverMsg();
        ~RolloverMsg();

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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf rate_limit; //type: uint32

}; // MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg


class MplsLdp::MplsLdpConfig::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: MplsLdp::MplsLdpConfig::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces::Interface> > interface;
        
}; // MplsLdp::MplsLdpConfig::Interfaces


class MplsLdp::MplsLdpConfig::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf vrf; //type: string
        //type: string (refers to ietf::ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        ydk::YLeaf link_hello_int; //type: uint32
        ydk::YLeaf link_hello_hold; //type: uint32
        ydk::YLeaf disable_quick_start_int; //type: boolean
        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf disable_delay; //type: empty
        class Afs; //type: MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs> afs;
        
}; // MplsLdp::MplsLdpConfig::Interfaces::Interface


class MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af> > af;
        
}; // MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs


class MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: Af
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf autoconfig_disable; //type: boolean
        class BgpRedist; //type: MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist> bgp_redist;
        
}; // MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af


class MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist : public ydk::Entity
{
    public:
        BgpRedist();
        ~BgpRedist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf advertise_to; //type: string
        ydk::YLeaf enable; //type: boolean

}; // MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist


class MplsLdp::MplsLdpConfig::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

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

        class RoutingInst; //type: MplsLdp::MplsLdpConfig::Routing::RoutingInst

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Routing::RoutingInst> > routing_inst;
        
}; // MplsLdp::MplsLdpConfig::Routing


class MplsLdp::MplsLdpConfig::Routing::RoutingInst : public ydk::Entity
{
    public:
        RoutingInst();
        ~RoutingInst();

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

        ydk::YLeaf routing_inst_name; //type: string
        ydk::YLeaf autoconfig_enable; //type: boolean
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf level_id; //type: LevelId
        ydk::YLeaf sync; //type: boolean
        class LevelId;

}; // MplsLdp::MplsLdpConfig::Routing::RoutingInst


class MplsLdp::MplsLdpConfig::DualStack : public ydk::Entity
{
    public:
        DualStack();
        ~DualStack();

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

        ydk::YLeaf max_wait; //type: uint32
        ydk::YLeaf prefer_ipv4_peers; //type: string

}; // MplsLdp::MplsLdpConfig::DualStack

class ClearMsgCounters : public ydk::Entity
{
    public:
        ClearMsgCounters();
        ~ClearMsgCounters();

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

        class Input; //type: ClearMsgCounters::Input
        class Output; //type: ClearMsgCounters::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::ClearMsgCounters::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::ClearMsgCounters::Output> output;
        
}; // ClearMsgCounters


class ClearMsgCounters::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf nbr_ip; //type: string
        ydk::YLeaf all; //type: empty

}; // ClearMsgCounters::Input


class ClearMsgCounters::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf status; //type: string

}; // ClearMsgCounters::Output

class RestartNeighbor : public ydk::Entity
{
    public:
        RestartNeighbor();
        ~RestartNeighbor();

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

        class Input; //type: RestartNeighbor::Input
        class Output; //type: RestartNeighbor::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RestartNeighbor::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RestartNeighbor::Output> output;
        
}; // RestartNeighbor


class RestartNeighbor::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf nbr_ip; //type: string
        ydk::YLeaf all; //type: empty

}; // RestartNeighbor::Input


class RestartNeighbor::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf status; //type: string

}; // RestartNeighbor::Output

class ClearForwarding : public ydk::Entity
{
    public:
        ClearForwarding();
        ~ClearForwarding();

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

        class Input; //type: ClearForwarding::Input
        class Output; //type: ClearForwarding::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::ClearForwarding::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::ClearForwarding::Output> output;
        
}; // ClearForwarding


class ClearForwarding::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf prefix_ip; //type: string
        ydk::YLeaf all; //type: empty

}; // ClearForwarding::Input


class ClearForwarding::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf status; //type: string

}; // ClearForwarding::Output

class NsrSyncNackRsnNone : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnNone();
        ~NsrSyncNackRsnNone();


}; // NsrSyncNackRsnNone

class NsrSyncNackRsnTblIdMismatch : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnTblIdMismatch();
        ~NsrSyncNackRsnTblIdMismatch();


}; // NsrSyncNackRsnTblIdMismatch

class NsrSyncNackRsnPpExists : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnPpExists();
        ~NsrSyncNackRsnPpExists();


}; // NsrSyncNackRsnPpExists

class NsrSyncNackRsnMissingElem : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnMissingElem();
        ~NsrSyncNackRsnMissingElem();


}; // NsrSyncNackRsnMissingElem

class NsrSyncNackRsnNoPEndSock : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnNoPEndSock();
        ~NsrSyncNackRsnNoPEndSock();


}; // NsrSyncNackRsnNoPEndSock

class NsrSyncNackRsnPEndSockNotSynced : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnPEndSockNotSynced();
        ~NsrSyncNackRsnPEndSockNotSynced();


}; // NsrSyncNackRsnPEndSockNotSynced

class NsrSyncNackRsnErrAdjAdd : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrAdjAdd();
        ~NsrSyncNackRsnErrAdjAdd();


}; // NsrSyncNackRsnErrAdjAdd

class NsrSyncNackRsnErrDhcAdd : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrDhcAdd();
        ~NsrSyncNackRsnErrDhcAdd();


}; // NsrSyncNackRsnErrDhcAdd

class NsrSyncNackRsnEnomem : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnEnomem();
        ~NsrSyncNackRsnEnomem();


}; // NsrSyncNackRsnEnomem

class NsrSyncNackRsnErrTpCreate : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrTpCreate();
        ~NsrSyncNackRsnErrTpCreate();


}; // NsrSyncNackRsnErrTpCreate

class NsrSyncNackRsnErrPpCreate : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrPpCreate();
        ~NsrSyncNackRsnErrPpCreate();


}; // NsrSyncNackRsnErrPpCreate

class NsrSyncNackRsnErrAddrBind : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrAddrBind();
        ~NsrSyncNackRsnErrAddrBind();


}; // NsrSyncNackRsnErrAddrBind

class NsrSyncNackRsnErrRxBadPie : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrRxBadPie();
        ~NsrSyncNackRsnErrRxBadPie();


}; // NsrSyncNackRsnErrRxBadPie

class NsrSyncNackRsnErrRxNotif : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrRxNotif();
        ~NsrSyncNackRsnErrRxNotif();


}; // NsrSyncNackRsnErrRxNotif

class NsrSyncNackRsnErrRxUnexpOpen : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrRxUnexpOpen();
        ~NsrSyncNackRsnErrRxUnexpOpen();


}; // NsrSyncNackRsnErrRxUnexpOpen

class NsrSyncNackRsnErrUnexpPeerDown : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrUnexpPeerDown();
        ~NsrSyncNackRsnErrUnexpPeerDown();


}; // NsrSyncNackRsnErrUnexpPeerDown

class NsrSyncNackRsnErrAppNotFound : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrAppNotFound();
        ~NsrSyncNackRsnErrAppNotFound();


}; // NsrSyncNackRsnErrAppNotFound

class NsrSyncNackRsnErrAppInvalid : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnErrAppInvalid();
        ~NsrSyncNackRsnErrAppInvalid();


}; // NsrSyncNackRsnErrAppInvalid

class NsrSyncNackRsnNoCtx : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsn, virtual ydk::Identity
{
    public:
        NsrSyncNackRsnNoCtx();
        ~NsrSyncNackRsnNoCtx();


}; // NsrSyncNackRsnNoCtx

class NsrPeerSyncErrNone : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErr, virtual ydk::Identity
{
    public:
        NsrPeerSyncErrNone();
        ~NsrPeerSyncErrNone();


}; // NsrPeerSyncErrNone

class NsrPeerSyncErrLdpSyncNack : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErr, virtual ydk::Identity
{
    public:
        NsrPeerSyncErrLdpSyncNack();
        ~NsrPeerSyncErrLdpSyncNack();


}; // NsrPeerSyncErrLdpSyncNack

class NsrPeerSyncErrSyncPrep : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErr, virtual ydk::Identity
{
    public:
        NsrPeerSyncErrSyncPrep();
        ~NsrPeerSyncErrSyncPrep();


}; // NsrPeerSyncErrSyncPrep

class NsrPeerSyncErrTcpPeer : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErr, virtual ydk::Identity
{
    public:
        NsrPeerSyncErrTcpPeer();
        ~NsrPeerSyncErrTcpPeer();


}; // NsrPeerSyncErrTcpPeer

class NsrPeerSyncErrTcpGbl : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErr, virtual ydk::Identity
{
    public:
        NsrPeerSyncErrTcpGbl();
        ~NsrPeerSyncErrTcpGbl();


}; // NsrPeerSyncErrTcpGbl

class NsrPeerSyncErrLdpPeer : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErr, virtual ydk::Identity
{
    public:
        NsrPeerSyncErrLdpPeer();
        ~NsrPeerSyncErrLdpPeer();


}; // NsrPeerSyncErrLdpPeer

class NsrPeerSyncErrLdpGbl : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErr, virtual ydk::Identity
{
    public:
        NsrPeerSyncErrLdpGbl();
        ~NsrPeerSyncErrLdpGbl();


}; // NsrPeerSyncErrLdpGbl

class NsrPeerSyncErrAppFail : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErr, virtual ydk::Identity
{
    public:
        NsrPeerSyncErrAppFail();
        ~NsrPeerSyncErrAppFail();


}; // NsrPeerSyncErrAppFail

class IcpmTypeIccp : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::IcpmType, virtual ydk::Identity
{
    public:
        IcpmTypeIccp();
        ~IcpmTypeIccp();


}; // IcpmTypeIccp

class IccpTypeMlacp : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::IccpType, virtual ydk::Identity
{
    public:
        IccpTypeMlacp();
        ~IccpTypeMlacp();


}; // IccpTypeMlacp

class LdpNsrPeerSyncStNone : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncState, virtual ydk::Identity
{
    public:
        LdpNsrPeerSyncStNone();
        ~LdpNsrPeerSyncStNone();


}; // LdpNsrPeerSyncStNone

class LdpNsrPeerSyncStWait : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncState, virtual ydk::Identity
{
    public:
        LdpNsrPeerSyncStWait();
        ~LdpNsrPeerSyncStWait();


}; // LdpNsrPeerSyncStWait

class LdpNsrPeerSyncStReady : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncState, virtual ydk::Identity
{
    public:
        LdpNsrPeerSyncStReady();
        ~LdpNsrPeerSyncStReady();


}; // LdpNsrPeerSyncStReady

class LdpNsrPeerSyncStPrep : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncState, virtual ydk::Identity
{
    public:
        LdpNsrPeerSyncStPrep();
        ~LdpNsrPeerSyncStPrep();


}; // LdpNsrPeerSyncStPrep

class LdpNsrPeerSyncStAppWait : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncState, virtual ydk::Identity
{
    public:
        LdpNsrPeerSyncStAppWait();
        ~LdpNsrPeerSyncStAppWait();


}; // LdpNsrPeerSyncStAppWait

class LdpNsrPeerSyncStOper : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrPeerSyncState, virtual ydk::Identity
{
    public:
        LdpNsrPeerSyncStOper();
        ~LdpNsrPeerSyncStOper();


}; // LdpNsrPeerSyncStOper

class NsrStatusReady : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrStatus, virtual ydk::Identity
{
    public:
        NsrStatusReady();
        ~NsrStatusReady();


}; // NsrStatusReady

class NsrStatusNotReady : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrStatus, virtual ydk::Identity
{
    public:
        NsrStatusNotReady();
        ~NsrStatusNotReady();


}; // NsrStatusNotReady

class NsrStatusDisabled : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::NsrStatus, virtual ydk::Identity
{
    public:
        NsrStatusDisabled();
        ~NsrStatusDisabled();


}; // NsrStatusDisabled

class DownNbrReasonNa : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::DownNbrReason, virtual ydk::Identity
{
    public:
        DownNbrReasonNa();
        ~DownNbrReasonNa();


}; // DownNbrReasonNa

class DownNbrReasonNbrHold : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::DownNbrReason, virtual ydk::Identity
{
    public:
        DownNbrReasonNbrHold();
        ~DownNbrReasonNbrHold();


}; // DownNbrReasonNbrHold

class DownNbrReasonDiscHello : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::DownNbrReason, virtual ydk::Identity
{
    public:
        DownNbrReasonDiscHello();
        ~DownNbrReasonDiscHello();


}; // DownNbrReasonDiscHello

class RoutePathLblOwnerNone : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathLblOwner, virtual ydk::Identity
{
    public:
        RoutePathLblOwnerNone();
        ~RoutePathLblOwnerNone();


}; // RoutePathLblOwnerNone

class RoutePathLblOwnerLdp : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathLblOwner, virtual ydk::Identity
{
    public:
        RoutePathLblOwnerLdp();
        ~RoutePathLblOwnerLdp();


}; // RoutePathLblOwnerLdp

class RoutePathLblOwnerBgp : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathLblOwner, virtual ydk::Identity
{
    public:
        RoutePathLblOwnerBgp();
        ~RoutePathLblOwnerBgp();


}; // RoutePathLblOwnerBgp

class RoutePathLblOwnerStatic : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathLblOwner, virtual ydk::Identity
{
    public:
        RoutePathLblOwnerStatic();
        ~RoutePathLblOwnerStatic();


}; // RoutePathLblOwnerStatic

class LabelTypeMpls : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::LabelType, virtual ydk::Identity
{
    public:
        LabelTypeMpls();
        ~LabelTypeMpls();


}; // LabelTypeMpls

class LabelTypeUnLabeled : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::LabelType, virtual ydk::Identity
{
    public:
        LabelTypeUnLabeled();
        ~LabelTypeUnLabeled();


}; // LabelTypeUnLabeled

class LabelTypeUnknown : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::LabelType, virtual ydk::Identity
{
    public:
        LabelTypeUnknown();
        ~LabelTypeUnknown();


}; // LabelTypeUnknown

class RoutePathIpNoFlag : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathType, virtual ydk::Identity
{
    public:
        RoutePathIpNoFlag();
        ~RoutePathIpNoFlag();


}; // RoutePathIpNoFlag

class RoutePathIpProtected : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathType, virtual ydk::Identity
{
    public:
        RoutePathIpProtected();
        ~RoutePathIpProtected();


}; // RoutePathIpProtected

class RoutePathIpBackup : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathType, virtual ydk::Identity
{
    public:
        RoutePathIpBackup();
        ~RoutePathIpBackup();


}; // RoutePathIpBackup

class RoutePathIpBackupRemote : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathType, virtual ydk::Identity
{
    public:
        RoutePathIpBackupRemote();
        ~RoutePathIpBackupRemote();


}; // RoutePathIpBackupRemote

class RoutePathIpBgpBackup : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::RoutePathType, virtual ydk::Identity
{
    public:
        RoutePathIpBgpBackup();
        ~RoutePathIpBgpBackup();


}; // RoutePathIpBgpBackup

class IgpSyncDownReasonNa : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::IgpSyncDownReason, virtual ydk::Identity
{
    public:
        IgpSyncDownReasonNa();
        ~IgpSyncDownReasonNa();


}; // IgpSyncDownReasonNa

class IgpSyncDownReasonNoHelloAdj : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::IgpSyncDownReason, virtual ydk::Identity
{
    public:
        IgpSyncDownReasonNoHelloAdj();
        ~IgpSyncDownReasonNoHelloAdj();


}; // IgpSyncDownReasonNoHelloAdj

class IgpSyncDownReasonNoPeerSess : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::IgpSyncDownReason, virtual ydk::Identity
{
    public:
        IgpSyncDownReasonNoPeerSess();
        ~IgpSyncDownReasonNoPeerSess();


}; // IgpSyncDownReasonNoPeerSess

class IgpSyncDownReasonPeerUpdateNotDone : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::IgpSyncDownReason, virtual ydk::Identity
{
    public:
        IgpSyncDownReasonPeerUpdateNotDone();
        ~IgpSyncDownReasonPeerUpdateNotDone();


}; // IgpSyncDownReasonPeerUpdateNotDone

class IgpSyncDownReasonPeerUpdateNotReceived : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::IgpSyncDownReason, virtual ydk::Identity
{
    public:
        IgpSyncDownReasonPeerUpdateNotReceived();
        ~IgpSyncDownReasonPeerUpdateNotReceived();


}; // IgpSyncDownReasonPeerUpdateNotReceived

class IgpSyncDownReasonInternal : public cisco_ios_xe::Cisco_IOS_XE_mpls_ldp::IgpSyncDownReason, virtual ydk::Identity
{
    public:
        IgpSyncDownReasonInternal();
        ~IgpSyncDownReasonInternal();


}; // IgpSyncDownReasonInternal

class LoopDetectionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf hop_count;
        static const ydk::Enum::YLeaf path_vector;
        static const ydk::Enum::YLeaf hop_count_and_path_vector;

};

class SessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonexistent;
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf openrec;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf operational;

};

class AdjState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonex;
        static const ydk::Enum::YLeaf unsol_op_pdg;
        static const ydk::Enum::YLeaf deferred;
        static const ydk::Enum::YLeaf estab;
        static const ydk::Enum::YLeaf lib_exp_wait;
        static const ydk::Enum::YLeaf destroyed;

};

class AdvLabelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf use_lable;
        static const ydk::Enum::YLeaf use_explicit;
        static const ydk::Enum::YLeaf use_implicit;
        static const ydk::Enum::YLeaf none;

};

class NbrBgpAdvtState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};

class IccpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonexistent;
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf capsent;
        static const ydk::Enum::YLeaf caprec;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf operational;

};

class DhcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dhc_active;
        static const ydk::Enum::YLeaf dhc_passive;
        static const ydk::Enum::YLeaf dhc_active_passive;

};

class IgpSyncState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isync_ready;
        static const ydk::Enum::YLeaf isync_not_ready;
        static const ydk::Enum::YLeaf isync_deferred;

};

class LocalLabelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local_label_state_none;
        static const ydk::Enum::YLeaf local_label_state_assigned;
        static const ydk::Enum::YLeaf local_label_state_withdrawn;

};

class Af : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp_af_none;
        static const ydk::Enum::YLeaf ldp_af_ipv4;
        static const ydk::Enum::YLeaf ldp_af_ipv6;
        static const ydk::Enum::YLeaf ldp_af_ipv4_ipv6;

};

class AfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp_af_id_none;
        static const ydk::Enum::YLeaf ldp_af_id_ipv4;
        static const ydk::Enum::YLeaf ldp_af_id_ipv6;

};

class MplsLdp::MplsLdpState::Neighbors::Neighbor::SessionRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonexistent;
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf openrec;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf operational;

};

class MplsLdp::MplsLdpConfig::GlobalCfg::AdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class MplsLdp::MplsLdpConfig::GlobalCfg::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;
        static const ydk::Enum::YLeaf both;

};

class MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::AdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::LabelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class MplsLdp::MplsLdpConfig::Routing::RoutingInst::LevelId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};


}
}

#endif /* _CISCO_IOS_XE_MPLS_LDP_ */

