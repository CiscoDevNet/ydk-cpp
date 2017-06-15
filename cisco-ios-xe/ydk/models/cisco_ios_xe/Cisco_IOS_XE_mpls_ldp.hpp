#ifndef _CISCO_IOS_XE_MPLS_LDP_
#define _CISCO_IOS_XE_MPLS_LDP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_mpls_ldp {

class RoutePathLblOwnerIdentity : public virtual Identity
{
    public:
        RoutePathLblOwnerIdentity();
        ~RoutePathLblOwnerIdentity();


}; // RoutePathLblOwnerIdentity

class IgpSyncDownReasonIdentity : public virtual Identity
{
    public:
        IgpSyncDownReasonIdentity();
        ~IgpSyncDownReasonIdentity();


}; // IgpSyncDownReasonIdentity

class DownNbrReasonIdentity : public virtual Identity
{
    public:
        DownNbrReasonIdentity();
        ~DownNbrReasonIdentity();


}; // DownNbrReasonIdentity

class RoutePathTypeIdentity : public virtual Identity
{
    public:
        RoutePathTypeIdentity();
        ~RoutePathTypeIdentity();


}; // RoutePathTypeIdentity

class IcpmTypeIdentity : public virtual Identity
{
    public:
        IcpmTypeIdentity();
        ~IcpmTypeIdentity();


}; // IcpmTypeIdentity

class NsrPeerSyncErrIdentity : public virtual Identity
{
    public:
        NsrPeerSyncErrIdentity();
        ~NsrPeerSyncErrIdentity();


}; // NsrPeerSyncErrIdentity

class NsrPeerSyncStateIdentity : public virtual Identity
{
    public:
        NsrPeerSyncStateIdentity();
        ~NsrPeerSyncStateIdentity();


}; // NsrPeerSyncStateIdentity

class IccpTypeIdentity : public virtual Identity
{
    public:
        IccpTypeIdentity();
        ~IccpTypeIdentity();


}; // IccpTypeIdentity

class LabelTypeIdentity : public virtual Identity
{
    public:
        LabelTypeIdentity();
        ~LabelTypeIdentity();


}; // LabelTypeIdentity

class NsrStatusIdentity : public virtual Identity
{
    public:
        NsrStatusIdentity();
        ~NsrStatusIdentity();


}; // NsrStatusIdentity

class NsrSyncNackRsnIdentity : public virtual Identity
{
    public:
        NsrSyncNackRsnIdentity();
        ~NsrSyncNackRsnIdentity();


}; // NsrSyncNackRsnIdentity

class MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class MplsLdpState; //type: MplsLdp::MplsLdpState
        class MplsLdpConfig; //type: MplsLdp::MplsLdpConfig

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig> mpls_ldp_config_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState> mpls_ldp_state_;
        
}; // MplsLdp


class MplsLdp::MplsLdpState : public Entity
{
    public:
        MplsLdpState();
        ~MplsLdpState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::BackoffParameters> backoff_parameters_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings> bindings_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::BindingsSummary> bindings_summary_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Capabilities> capabilities_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery> discovery_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding> forwarding_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary> forwarding_summary_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::GracefulRestart> graceful_restart_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll> icpm_summary_all_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::LabelRanges> label_ranges_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors> neighbors_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::NsrSummaryAll> nsr_summary_all_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::OperSummary> oper_summary_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Parameters> parameters_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs> vrfs_;
        
}; // MplsLdp::MplsLdpState


class MplsLdp::MplsLdpState::OperSummary : public Entity
{
    public:
        OperSummary();
        ~OperSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_vrf; //type: uint32
        YLeaf number_of_vrf_oper; //type: uint32
        YLeaf number_of_interfaces; //type: uint32
        YLeaf number_of_fwd_ref_interfaces; //type: uint32
        YLeaf number_of_autocfg_interfaces; //type: uint32
        YLeaf no_of_ipv4_rib_tbl; //type: uint32
        YLeaf no_of_ipv4_rib_tbl_reg; //type: uint32
        class Common; //type: MplsLdp::MplsLdpState::OperSummary::Common

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::OperSummary::Common> common_;
        
}; // MplsLdp::MplsLdpState::OperSummary


class MplsLdp::MplsLdpState::OperSummary::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_families; //type: AfEnum
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf numberof_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32

}; // MplsLdp::MplsLdpState::OperSummary::Common


class MplsLdp::MplsLdpState::ForwardingSummary : public Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intfs_fwd_count; //type: uint16
        YLeaf local_lbls; //type: uint16
        class Pfxs; //type: MplsLdp::MplsLdpState::ForwardingSummary::Pfxs
        class Nhs; //type: MplsLdp::MplsLdpState::ForwardingSummary::Nhs

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Nhs> nhs_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Pfxs> pfxs_;
        
}; // MplsLdp::MplsLdpState::ForwardingSummary


class MplsLdp::MplsLdpState::ForwardingSummary::Pfxs : public Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_pfxs; //type: uint16
        YLeaf ecmp_pfxs; //type: uint16
        YLeaf protected_pfxs; //type: uint16
        class LabeledPfxsAggr; //type: MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary_;
        
}; // MplsLdp::MplsLdpState::ForwardingSummary::Pfxs


class MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr : public Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsAggr


class MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary : public Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsPrimary


class MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup : public Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::ForwardingSummary::Pfxs::LabeledPfxsBackup


class MplsLdp::MplsLdpState::ForwardingSummary::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_paths; //type: uint32
        YLeaf protected_paths; //type: uint32
        YLeaf backup_paths; //type: uint32
        YLeaf remote_backup_paths; //type: uint32
        YLeaf labeled_paths; //type: uint32
        YLeaf labeled_backup_paths; //type: uint32

}; // MplsLdp::MplsLdpState::ForwardingSummary::Nhs


class MplsLdp::MplsLdpState::BindingsSummary : public Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf binding_total; //type: uint32
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32
        YLeaf binding_remote; //type: uint32

}; // MplsLdp::MplsLdpState::BindingsSummary


class MplsLdp::MplsLdpState::NsrSummaryAll : public Entity
{
    public:
        NsrSummaryAll();
        ~NsrSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_sum_in_label_reqs_created; //type: uint32
        YLeaf nsr_sum_in_label_reqs_freed; //type: uint32
        YLeaf nsr_sum_in_label_withdraw_created; //type: uint32
        YLeaf nsr_sum_in_label_withdraw_freed; //type: uint32
        YLeaf nsr_sum_lcl_addr_withdraw_set; //type: uint32
        YLeaf nsr_sum_lcl_addr_withdraw_cleared; //type: uint32

}; // MplsLdp::MplsLdpState::NsrSummaryAll


class MplsLdp::MplsLdpState::IcpmSummaryAll : public Entity
{
    public:
        IcpmSummaryAll();
        ~IcpmSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_rg_conn_count; //type: uint32
        YLeaf iccp_rg_disconn_count; //type: uint32
        YLeaf iccp_rg_notif_count; //type: uint32
        YLeaf iccp_rg_app_data_count; //type: uint32
        class IcpmRgidTableInfo; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo
        class IcpmSessionTable; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo> icpm_rgid_table_info_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable> icpm_session_table_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo : public Entity
{
    public:
        IcpmRgidTableInfo();
        ~IcpmRgidTableInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RedGroup; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup> > red_group_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup : public Entity
{
    public:
        RedGroup();
        ~RedGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_id; //type: uint32
        class IcpmProtocols; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols> > icpm_protocols_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols : public Entity
{
    public:
        IcpmProtocols();
        ~IcpmProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf icpm_type; //type: IcpmTypeIdentity
        class RedunGroups; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups> > redun_groups_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups : public Entity
{
    public:
        RedunGroups();
        ~RedunGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_id; //type: uint32
        YLeaf peer_id; //type: string
        YLeaf client_id; //type: uint32
        YLeaf state; //type: string
        class IccpApps; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps> > iccp_apps_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps : public Entity
{
    public:
        IccpApps();
        ~IccpApps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_app; //type: IccpTypeIdentity
        YLeaf app_state; //type: IccpStateEnum
        YLeaf ptcl_ver; //type: uint32

}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmRgidTableInfo::RedGroup::IcpmProtocols::RedunGroups::IccpApps


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable : public Entity
{
    public:
        IcpmSessionTable();
        ~IcpmSessionTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionTable; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable> > session_table_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable : public Entity
{
    public:
        SessionTable();
        ~SessionTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        class IcpmProtocols; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols> > icpm_protocols_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols : public Entity
{
    public:
        IcpmProtocols();
        ~IcpmProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf icpm_type; //type: IcpmTypeIdentity
        class RedunGroups; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups> > redun_groups_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups : public Entity
{
    public:
        RedunGroups();
        ~RedunGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_id; //type: uint32
        YLeaf peer_id; //type: string
        YLeaf client_id; //type: uint32
        YLeaf state; //type: string
        class IccpApps; //type: MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps> > iccp_apps_;
        
}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups


class MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps : public Entity
{
    public:
        IccpApps();
        ~IccpApps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_app; //type: IccpTypeIdentity
        YLeaf app_state; //type: IccpStateEnum
        YLeaf ptcl_ver; //type: uint32

}; // MplsLdp::MplsLdpState::IcpmSummaryAll::IcpmSessionTable::SessionTable::IcpmProtocols::RedunGroups::IccpApps


class MplsLdp::MplsLdpState::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf global_md5_password_enabled; //type: boolean
        YLeaf protocol_version; //type: uint32
        YLeaf keepalive_interval; //type: uint32
        YLeaf session_hold_time; //type: uint32
        YLeaf le_no_route_timeout; //type: uint32
        YLeaf af_binding_withdraw_delay; //type: uint32
        YLeaf max_intf_attached; //type: uint32
        YLeaf max_intf_te; //type: uint32
        YLeaf max_peer; //type: uint32
        YLeaf out_of_mem_state; //type: uint32
        YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean
        YLeaf dod_max_hop; //type: uint32
        YLeaf loop_detection; //type: LoopDetectionTypeEnum
        YLeafList feature; //type: list of  string
        class AddressFamilyParameter; //type: MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter> > address_family_parameter_;
        
}; // MplsLdp::MplsLdpState::Parameters


class MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter : public Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: AfEnum
        YLeaf discovery_transport_address; //type: string
        YLeaf is_accepting_targeted_hellos; //type: boolean
        YLeaf targeted_hello_filter; //type: string

}; // MplsLdp::MplsLdpState::Parameters::AddressFamilyParameter


class MplsLdp::MplsLdpState::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Capability; //type: MplsLdp::MplsLdpState::Capabilities::Capability

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Capabilities::Capability> > capability_;
        
}; // MplsLdp::MplsLdpState::Capabilities


class MplsLdp::MplsLdpState::Capabilities::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cap_type; //type: uint16
        YLeaf capability_owner; //type: string
        YLeaf cap_des; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::MplsLdpState::Capabilities::Capability


class MplsLdp::MplsLdpState::BackoffParameters : public Entity
{
    public:
        BackoffParameters();
        ~BackoffParameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initial_seconds; //type: uint32
        YLeaf maximum_seconds; //type: uint32
        YLeaf backoff_seconds; //type: uint32
        YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::MplsLdpState::BackoffParameters


class MplsLdp::MplsLdpState::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_graceful_restart_configured; //type: boolean
        YLeaf graceful_restart_reconnect_timeout; //type: uint32
        YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32
        YLeaf is_forwarding_state_hold_timer_running; //type: empty
        YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32

}; // MplsLdp::MplsLdpState::GracefulRestart


class MplsLdp::MplsLdpState::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: MplsLdp::MplsLdpState::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf> > vrf_;
        
}; // MplsLdp::MplsLdpState::Vrfs


class MplsLdp::MplsLdpState::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class VrfSummary; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary
        class Afs; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs> afs_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary> vrf_summary_;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf


class MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary : public Entity
{
    public:
        VrfSummary();
        ~VrfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_families; //type: AfEnum
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf numberof_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32

}; // MplsLdp::MplsLdpState::Vrfs::Vrf::VrfSummary


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Af; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af> > af_;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: AfEnum
        class InterfaceSummary; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary
        class Igp; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp> igp_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary> interface_summary_;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary : public Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf known_ip_interface_count; //type: uint32
        YLeaf known_ip_interface_ldp_enabled; //type: uint32
        YLeaf configured_attached_interface; //type: uint32
        YLeaf configured_te_interface; //type: uint32
        YLeaf forward_references; //type: uint32
        YLeaf auto_config_disabled; //type: uint32
        YLeaf auto_config; //type: uint32
        YLeaf auto_config_forward_reference_interfaces; //type: uint32

}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::InterfaceSummary


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sync; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync> > sync_;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync : public Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf igp_sync_state; //type: IgpSyncStateEnum
        YLeaf is_delay_timer_running; //type: empty
        YLeaf delay_timer_remaining; //type: uint32
        YLeaf igp_sync_down_reason; //type: IgpSyncDownReasonIdentity
        class Peers; //type: MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers> > peers_;
        
}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync


class MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_id; //type: string
        YLeaf is_gr_enabled; //type: boolean
        YLeaf is_chkpt_created; //type: empty

}; // MplsLdp::MplsLdpState::Vrfs::Vrf::Afs::Af::Igp::Sync::Peers


class MplsLdp::MplsLdpState::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DiscoveryStats; //type: MplsLdp::MplsLdpState::Discovery::DiscoveryStats
        class LinkHelloState; //type: MplsLdp::MplsLdpState::Discovery::LinkHelloState
        class TargetedHellos; //type: MplsLdp::MplsLdpState::Discovery::TargetedHellos

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::DiscoveryStats> discovery_stats_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::LinkHelloState> link_hello_state_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::TargetedHellos> targeted_hellos_;
        
}; // MplsLdp::MplsLdpState::Discovery


class MplsLdp::MplsLdpState::Discovery::DiscoveryStats : public Entity
{
    public:
        DiscoveryStats();
        ~DiscoveryStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_of_ldp_interfaces; //type: uint32
        YLeaf num_of_active_ldp_interfaces; //type: uint32
        YLeaf num_of_lnk_disc_xmit; //type: uint32
        YLeaf num_of_tgt_disc_xmit; //type: uint32
        YLeaf num_of_lnk_disc_recv; //type: uint32
        YLeaf num_of_tgt_disc_recv; //type: uint32

}; // MplsLdp::MplsLdpState::Discovery::DiscoveryStats


class MplsLdp::MplsLdpState::Discovery::LinkHelloState : public Entity
{
    public:
        LinkHelloState();
        ~LinkHelloState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkHellos; //type: MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos> > link_hellos_;
        
}; // MplsLdp::MplsLdpState::Discovery::LinkHelloState


class MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos : public Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf nbr_transport_addr; //type: string
        YLeaf hello_interval; //type: uint32
        YLeaf local_src_addr; //type: string
        YLeaf local_transport_addr; //type: string
        YLeaf nbr_src_addr; //type: string
        YLeaf nbr_ldp_id; //type: string
        YLeaf session_up; //type: empty
        YLeaf nbr_hold_time; //type: uint32
        YLeaf next_hello; //type: uint32
        YLeaf hold_time_remaining; //type: uint32

}; // MplsLdp::MplsLdpState::Discovery::LinkHelloState::LinkHellos


class MplsLdp::MplsLdpState::Discovery::TargetedHellos : public Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf targeted_hello_interval; //type: uint32
        YLeaf targeted_hello_hold_time; //type: uint32
        class TargetedHello; //type: MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello> > targeted_hello_;
        
}; // MplsLdp::MplsLdpState::Discovery::TargetedHellos


class MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf target_address; //type: string
        YLeaf local_address; //type: string
        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf state; //type: DhcStateEnum
        YLeaf nbr_hold_time; //type: uint32
        YLeaf next_hello; //type: uint32
        YLeaf hold_time_remaining; //type: uint32

}; // MplsLdp::MplsLdpState::Discovery::TargetedHellos::TargetedHello


class MplsLdp::MplsLdpState::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardingVrfSumms; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms
        class ForwardingDetail; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail> > forwarding_detail_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms> forwarding_vrf_summs_;
        
}; // MplsLdp::MplsLdpState::Forwarding


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms : public Entity
{
    public:
        ForwardingVrfSumms();
        ~ForwardingVrfSumms();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardingVrfSumm; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm> > forwarding_vrf_summ_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm : public Entity
{
    public:
        ForwardingVrfSumm();
        ~ForwardingVrfSumm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf intfs_fwd_count; //type: uint16
        YLeaf local_lbls; //type: uint16
        class Pfxs; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs
        class Nhs; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs> nhs_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs> pfxs_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs : public Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_pfxs; //type: uint16
        YLeaf ecmp_pfxs; //type: uint16
        YLeaf protected_pfxs; //type: uint16
        class LabeledPfxsAggr; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr : public Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsAggr


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary : public Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsPrimary


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup : public Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Pfxs::LabeledPfxsBackup


class MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_paths; //type: uint32
        YLeaf protected_paths; //type: uint32
        YLeaf backup_paths; //type: uint32
        YLeaf remote_backup_paths; //type: uint32
        YLeaf labeled_paths; //type: uint32
        YLeaf labeled_backup_paths; //type: uint32

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingVrfSumms::ForwardingVrfSumm::Nhs


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail : public Entity
{
    public:
        ForwardingDetail();
        ~ForwardingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf prefix; //type: string
        YLeaf fwd_prefix; //type: string
        YLeaf table_id; //type: uint32
        YLeaf prefix_length; //type: uint8
        class Route; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route
        class Paths; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths> > paths_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route> route_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf source; //type: uint16
        YLeaf type; //type: uint16
        YLeaf metric; //type: uint32
        YLeaf is_local_vrf_leaked; //type: boolean
        YLeaf routing_update_count; //type: uint32
        YLeaf routing_update_timestamp; //type: uint64
        YLeaf routing_update_age; //type: uint64
        YLeaf local_label; //type: uint32
        YLeaf forwarding_update_count; //type: uint32
        YLeaf forwarding_update_timestamp; //type: uint64
        YLeaf forwarding_update_age; //type: uint64

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Route


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Routing; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing
        class Mpls; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls> mpls_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing> routing_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeaf remote_node_id; //type: string
        YLeaf has_remote_lfa_bkup; //type: boolean
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf nh_is_overriden; //type: empty
        YLeaf nexthop_id; //type: uint32
        YLeaf next_hop_table_id; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf path_id; //type: uint8
        YLeaf bkup_path_id; //type: uint8
        YLeaf path_type; //type: RoutePathTypeIdentity

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Routing


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MplsOutgoingInfo; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa> remote_lfa_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out_label; //type: uint32
        YLeaf out_label_type; //type: LabelTypeIdentity
        YLeaf out_label_owner; //type: RoutePathLblOwnerIdentity
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf has_remote_lfa_bkup; //type: boolean
        class MplsOutgoingInfo; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out_label; //type: uint32
        YLeaf out_label_type; //type: LabelTypeIdentity
        YLeaf out_label_owner; //type: RoutePathLblOwnerIdentity
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident_;
        
}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16

}; // MplsLdp::MplsLdpState::Forwarding::ForwardingDetail::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::MplsLdpState::Bindings : public Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BindingsSumAfs; //type: MplsLdp::MplsLdpState::Bindings::BindingsSumAfs
        class Binding; //type: MplsLdp::MplsLdpState::Bindings::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::Binding> > binding_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::BindingsSumAfs> bindings_sum_afs_;
        
}; // MplsLdp::MplsLdpState::Bindings


class MplsLdp::MplsLdpState::Bindings::BindingsSumAfs : public Entity
{
    public:
        BindingsSumAfs();
        ~BindingsSumAfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BindingSumAf; //type: MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf> > binding_sum_af_;
        
}; // MplsLdp::MplsLdpState::Bindings::BindingsSumAfs


class MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf : public Entity
{
    public:
        BindingSumAf();
        ~BindingSumAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf af_name; //type: AfEnum
        YLeaf binding_total; //type: uint32
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32
        YLeaf binding_remote; //type: uint32

}; // MplsLdp::MplsLdpState::Bindings::BindingsSumAfs::BindingSumAf


class MplsLdp::MplsLdpState::Bindings::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf prefix; //type: string
        YLeaf fwd_prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf local_label; //type: uint32
        YLeaf le_local_binding_revision; //type: uint32
        YLeaf le_local_label_state; //type: LocalLabelStateEnum
        YLeaf is_no_route; //type: boolean
        YLeaf label_oor; //type: boolean
        YLeaf advertise_prefix_filter; //type: string
        YLeaf advertise_lsr_filter; //type: string
        YLeaf config_enforced_local_label_value; //type: boolean
        class RemoteBinding; //type: MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding> > remote_binding_;
        
}; // MplsLdp::MplsLdpState::Bindings::Binding


class MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding : public Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_label; //type: uint32
        YLeaf is_stale; //type: boolean
        class AssigningPeerLdpIdent; //type: MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident_;
        
}; // MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding


class MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16

}; // MplsLdp::MplsLdpState::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo : public Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16

}; // MplsLdp::MplsLdpState::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::MplsLdpState::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor
        class NbrAdjs; //type: MplsLdp::MplsLdpState::Neighbors::NbrAdjs
        class StatsInfo; //type: MplsLdp::MplsLdpState::Neighbors::StatsInfo
        class Backoffs; //type: MplsLdp::MplsLdpState::Neighbors::Backoffs
        class NsrNbrDetail; //type: MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Backoffs> backoffs_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::NbrAdjs> > nbr_adjs_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor> > neighbor_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail> nsr_nbr_detail_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::StatsInfo> stats_info_;
        
}; // MplsLdp::MplsLdpState::Neighbors


class MplsLdp::MplsLdpState::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf session_role; //type: SessionRoleEnum
        YLeaf session_prot_ver; //type: uint32
        YLeaf up_time_seconds; //type: uint32
        YLeaf nbr_path_vector_limit; //type: int32
        YLeaf downstream_on_demand; //type: boolean
        YLeaf peer_hold_time; //type: uint32
        YLeaf peer_keep_alive_interval; //type: uint32
        YLeaf peer_state; //type: AdjStateEnum
        YLeaf inbound_ipv4; //type: string
        YLeaf inbound_ipv6_filter; //type: string
        YLeaf outbound_ipv4_filter; //type: string
        YLeaf outbound_ipv6_filter; //type: string
        YLeaf has_sp; //type: boolean
        YLeaf sp_state; //type: string
        YLeaf sp_filter; //type: string
        YLeaf sp_has_duration; //type: boolean
        YLeaf sp_duration; //type: uint32
        YLeaf spht_running; //type: boolean
        YLeaf spht_remaining; //type: uint32
        YLeaf bgp_advertisement_state; //type: NbrBgpAdvtStateEnum
        YLeaf advertise_bgp_prefixes; //type: boolean
        YLeafList client; //type: list of  string
        YLeafList duplicate_address; //type: list of  string
        YLeafList nbr_bound_address; //type: list of  string
        class NbrStats; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats
        class GracefulRestartAdjacency; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency
        class TcpInformation; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation
        class Capabilities; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities> capabilities_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency> graceful_restart_adjacency_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats> nbr_stats_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation> tcp_information_;
                class SessionRoleEnum;

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor


class MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats : public Entity
{
    public:
        NbrStats();
        ~NbrStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ta_pies_sent; //type: uint32
        YLeaf ta_pies_rcvd; //type: uint32
        YLeaf num_of_nbr_ipv4_discovery; //type: uint32
        YLeaf num_of_nbr_ipv6_discovery; //type: uint32
        YLeaf num_of_nbr_ipv4_addresses; //type: uint32
        YLeaf num_of_nbr_ipv6_addresses; //type: uint32
        YLeaf num_of_nbr_ipv4_lbl; //type: uint32
        YLeaf num_of_nbr_ipv6_lbl; //type: uint32

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::NbrStats


class MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency : public Entity
{
    public:
        GracefulRestartAdjacency();
        ~GracefulRestartAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_graceful_restartable; //type: boolean
        YLeaf reconnect_timeout; //type: uint32
        YLeaf recovery_time; //type: uint32
        YLeaf is_liveness_timer_running; //type: empty
        YLeaf liveness_timer_remaining_seconds; //type: uint32
        YLeaf is_recovery_timer_running; //type: empty
        YLeaf recovery_timer_remaining_seconds; //type: uint32
        YLeaf down_nbr_flap_count; //type: uint32
        YLeaf down_nbr_down_reason; //type: DownNbrReasonIdentity

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::GracefulRestartAdjacency


class MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation : public Entity
{
    public:
        TcpInformation();
        ~TcpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf foreign_host; //type: string
        YLeaf local_host; //type: string
        YLeaf foreign_port; //type: uint16
        YLeaf local_port; //type: uint16
        YLeaf is_md5_on; //type: boolean
        YLeaf up_time; //type: string

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::TcpInformation


class MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SentCaps; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps
        class ReceivedCaps; //type: MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps> > received_caps_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps> > sent_caps_;
        
}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities


class MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps : public Entity
{
    public:
        SentCaps();
        ~SentCaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cap_type; //type: uint16
        YLeaf cap_des; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::SentCaps


class MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps : public Entity
{
    public:
        ReceivedCaps();
        ~ReceivedCaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cap_type; //type: uint16
        YLeaf cap_des; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::MplsLdpState::Neighbors::Neighbor::Capabilities::ReceivedCaps


class MplsLdp::MplsLdpState::Neighbors::NbrAdjs : public Entity
{
    public:
        NbrAdjs();
        ~NbrAdjs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf target_state; //type: DhcStateEnum

}; // MplsLdp::MplsLdpState::Neighbors::NbrAdjs


class MplsLdp::MplsLdpState::Neighbors::StatsInfo : public Entity
{
    public:
        StatsInfo();
        ~StatsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf discon_time; //type: uint32
        YLeaf session_attempts; //type: uint32
        YLeaf sess_reject_no_hello; //type: uint32
        YLeaf sess_rej_ad; //type: uint32
        YLeaf sess_rej_max_pdu; //type: uint32
        YLeaf sess_rej_lr; //type: uint32
        YLeaf bad_ldpid; //type: uint32
        YLeaf bad_pdu_len; //type: uint32
        YLeaf bad_msg_len; //type: uint32
        YLeaf bad_tlv_len; //type: uint32
        YLeaf malformed_tlv_val; //type: uint32
        YLeaf keep_alive_exp; //type: uint32
        YLeaf shutdown_notif_rec; //type: uint32
        YLeaf shutdow_notif_sent; //type: uint32
        class MessageOut; //type: MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut
        class MessageIn; //type: MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn> message_in_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut> message_out_;
        
}; // MplsLdp::MplsLdpState::Neighbors::StatsInfo


class MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut : public Entity
{
    public:
        MessageOut();
        ~MessageOut();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf init_count; //type: uint32
        YLeaf address_count; //type: uint32
        YLeaf address_withdraw_count; //type: uint32
        YLeaf label_map_count; //type: uint32
        YLeaf label_withdraw_count; //type: uint32
        YLeaf label_release_count; //type: uint32
        YLeaf label_request_count; //type: uint32
        YLeaf label_abort_request_count; //type: uint32
        YLeaf notification_count; //type: uint32
        YLeaf keep_alive_count; //type: uint32
        YLeaf iccp_rg_conn_count; //type: uint32
        YLeaf iccp_rg_disconn_count; //type: uint32
        YLeaf iccp_rg_notif_count; //type: uint32
        YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageOut


class MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn : public Entity
{
    public:
        MessageIn();
        ~MessageIn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf init_count; //type: uint32
        YLeaf address_count; //type: uint32
        YLeaf address_withdraw_count; //type: uint32
        YLeaf label_map_count; //type: uint32
        YLeaf label_withdraw_count; //type: uint32
        YLeaf label_release_count; //type: uint32
        YLeaf label_request_count; //type: uint32
        YLeaf label_abort_request_count; //type: uint32
        YLeaf notification_count; //type: uint32
        YLeaf keep_alive_count; //type: uint32
        YLeaf iccp_rg_conn_count; //type: uint32
        YLeaf iccp_rg_disconn_count; //type: uint32
        YLeaf iccp_rg_notif_count; //type: uint32
        YLeaf iccp_rg_app_data_count; //type: uint32

}; // MplsLdp::MplsLdpState::Neighbors::StatsInfo::MessageIn


class MplsLdp::MplsLdpState::Neighbors::Backoffs : public Entity
{
    public:
        Backoffs();
        ~Backoffs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backoff_seconds; //type: uint32
        YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::MplsLdpState::Neighbors::Backoffs


class MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail : public Entity
{
    public:
        NsrNbrDetail();
        ~NsrNbrDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_state; //type: NsrStatusIdentity
        YLeaf nsr_nbr_sync_state; //type: NsrPeerSyncStateIdentity
        YLeaf nsr_nbr_last_sync_error; //type: NsrPeerSyncErrIdentity
        YLeaf nsr_nbr_last_sync_nack_reason; //type: NsrSyncNackRsnIdentity
        YLeaf nsr_nbr_pend_label_req_resps; //type: uint32
        YLeaf nsr_nbr_pend_label_withdraw_resps; //type: uint32
        YLeaf nsr_nbr_pend_lcl_addr_withdraw_acks; //type: uint32
        YLeaf nsr_nbr_in_label_reqs_created; //type: uint32
        YLeaf nsr_nbr_in_label_reqs_freed; //type: uint32
        YLeaf nsr_nbr_in_label_withdraw_created; //type: uint32
        YLeaf nsr_nbr_in_label_withdraw_freed; //type: uint32
        YLeaf nsr_nbr_lcl_addr_withdraw_set; //type: uint32
        YLeaf nsr_nbr_lcl_addr_withdraw_cleared; //type: uint32
        YLeaf nsr_nbr_xmit_ctxt_enq; //type: uint32
        YLeaf nsr_nbr_xmit_ctxt_deq; //type: uint32
        YLeaf path_vector_limit; //type: int32
        class NbrSess; //type: MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess> nbr_sess_;
        
}; // MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail


class MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess : public Entity
{
    public:
        NbrSess();
        ~NbrSess();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_stat_change; //type: uint32
        YLeaf state; //type: StateEnum
        YLeaf keep_alive_remain; //type: uint32
        YLeaf keep_alive_time; //type: uint32
        YLeaf max_pdu; //type: uint32
        YLeaf discon_time; //type: uint32
        YLeaf unknown_mess_err; //type: uint32
        YLeaf unknown_tlv; //type: uint32
        class StateEnum;

}; // MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess


class MplsLdp::MplsLdpState::LabelRanges : public Entity
{
    public:
        LabelRanges();
        ~LabelRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelRange; //type: MplsLdp::MplsLdpState::LabelRanges::LabelRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpState::LabelRanges::LabelRange> > label_range_;
        
}; // MplsLdp::MplsLdpState::LabelRanges


class MplsLdp::MplsLdpState::LabelRanges::LabelRange : public Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lr_min; //type: uint32
        YLeaf lr_max; //type: uint32

}; // MplsLdp::MplsLdpState::LabelRanges::LabelRange


class MplsLdp::MplsLdpConfig : public Entity
{
    public:
        MplsLdpConfig();
        ~MplsLdpConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery> discovery_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::DualStack> dual_stack_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg> global_cfg_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GracefulRestart> graceful_restart_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces> interfaces_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::LabelCfg> label_cfg_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Logging> logging_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::NbrTable> nbr_table_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Passwords> passwords_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Routing> routing_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Session> session_;
        
}; // MplsLdp::MplsLdpConfig


class MplsLdp::MplsLdpConfig::GlobalCfg : public Entity
{
    public:
        GlobalCfg();
        ~GlobalCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty
        YLeaf enable_nsr; //type: boolean
        YLeaf disable_quick_start; //type: boolean
        YLeaf loop_detection; //type: boolean
        YLeaf admin_status; //type: AdminStatusEnum
        YLeaf dcsp_val; //type: uint32
        YLeaf high_priority; //type: boolean
        YLeaf seconds; //type: uint32
        YLeaf disable_delay; //type: empty
        YLeaf seconds_delay_proc; //type: uint32
        YLeaf disable_delay_proc; //type: empty
        YLeaf protocol; //type: ProtocolEnum
        YLeaf init_sess_thresh; //type: int32
        class RouterId; //type: MplsLdp::MplsLdpConfig::GlobalCfg::RouterId
        class Session; //type: MplsLdp::MplsLdpConfig::GlobalCfg::Session
        class PerAf; //type: MplsLdp::MplsLdpConfig::GlobalCfg::PerAf

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::PerAf> per_af_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::RouterId> > router_id_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::Session> session_;
                class AdminStatusEnum;
        class ProtocolEnum;

}; // MplsLdp::MplsLdpConfig::GlobalCfg


class MplsLdp::MplsLdpConfig::GlobalCfg::RouterId : public Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf lsr_id_if;
        YLeaf lsr_id_ip; //type: string
        YLeaf force; //type: empty

}; // MplsLdp::MplsLdpConfig::GlobalCfg::RouterId


class MplsLdp::MplsLdpConfig::GlobalCfg::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backoff_init; //type: uint32
        YLeaf backoff_max; //type: uint32
        YLeaf seconds; //type: uint16
        YLeaf infinite; //type: boolean
        class DownstreamOnDemand; //type: MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand
        class Protection; //type: MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand> > downstream_on_demand_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection> protection_;
        
}; // MplsLdp::MplsLdpConfig::GlobalCfg::Session


class MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand : public Entity
{
    public:
        DownstreamOnDemand();
        ~DownstreamOnDemand();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf enabled; //type: boolean
        YLeaf filter; //type: string

}; // MplsLdp::MplsLdpConfig::GlobalCfg::Session::DownstreamOnDemand


class MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable_prot; //type: boolean
        YLeaf peer_filter; //type: string
        YLeaf seconds; //type: uint32
        YLeaf inf; //type: empty

}; // MplsLdp::MplsLdpConfig::GlobalCfg::Session::Protection


class MplsLdp::MplsLdpConfig::GlobalCfg::PerAf : public Entity
{
    public:
        PerAf();
        ~PerAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AfCfg; //type: MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg> > af_cfg_;
        
}; // MplsLdp::MplsLdpConfig::GlobalCfg::PerAf


class MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg : public Entity
{
    public:
        AfCfg();
        ~AfCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf af_name; //type: AfEnum
        YLeaf default_route; //type: boolean
        YLeaf ipaddr; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf implicit; //type: empty

}; // MplsLdp::MplsLdpConfig::GlobalCfg::PerAf::AfCfg


class MplsLdp::MplsLdpConfig::NbrTable : public Entity
{
    public:
        NbrTable();
        ~NbrTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NbrCfg; //type: MplsLdp::MplsLdpConfig::NbrTable::NbrCfg

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::NbrTable::NbrCfg> > nbr_cfg_;
        
}; // MplsLdp::MplsLdpConfig::NbrTable


class MplsLdp::MplsLdpConfig::NbrTable::NbrCfg : public Entity
{
    public:
        NbrCfg();
        ~NbrCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nbr_vrf; //type: string
        YLeaf nbr_ip; //type: string
        YLeaf admin_status; //type: AdminStatusEnum
        YLeaf implicit_withdraw; //type: boolean
        YLeaf targeted; //type: boolean
        YLeaf label_protocol; //type: LabelProtocolEnum
        YLeaf label_binding_filter; //type: string
        YLeaf password; //type: string
        class AdminStatusEnum;
        class LabelProtocolEnum;

}; // MplsLdp::MplsLdpConfig::NbrTable::NbrCfg


class MplsLdp::MplsLdpConfig::Passwords : public Entity
{
    public:
        Passwords();
        ~Passwords();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Password; //type: MplsLdp::MplsLdpConfig::Passwords::Password

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Passwords::Password> > password_;
        
}; // MplsLdp::MplsLdpConfig::Passwords


class MplsLdp::MplsLdpConfig::Passwords::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nbr_vrf; //type: string
        YLeaf nbr_id; //type: one of union, string
        YLeaf password_num; //type: uint32
        YLeaf pass_required; //type: boolean
        YLeaf clear_pass; //type: string
        YLeaf encrypt_pass; //type: string
        YLeaf keychain_pass; //type: string

}; // MplsLdp::MplsLdpConfig::Passwords::Password


class MplsLdp::MplsLdpConfig::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backoff; //type: uint32
        YLeaf seconds; //type: uint16
        YLeaf infinite; //type: empty

}; // MplsLdp::MplsLdpConfig::Session


class MplsLdp::MplsLdpConfig::LabelCfg : public Entity
{
    public:
        LabelCfg();
        ~LabelCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelAfCfg; //type: MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg> > label_af_cfg_;
        
}; // MplsLdp::MplsLdpConfig::LabelCfg


class MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg : public Entity
{
    public:
        LabelAfCfg();
        ~LabelAfCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf af_name; //type: AfEnum
        YLeaf prefix_filter; //type: string
        YLeaf host_route_enable; //type: boolean
        class AdvtFilter; //type: MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter> > advt_filter_;
        
}; // MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg


class MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter : public Entity
{
    public:
        AdvtFilter();
        ~AdvtFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_filter; //type: string
        YLeaf peer_filter; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf adv_label_cfg; //type: AdvLabelTypeEnum

}; // MplsLdp::MplsLdpConfig::LabelCfg::LabelAfCfg::AdvtFilter


class MplsLdp::MplsLdpConfig::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_tlv; //type: boolean
        class LinkHello; //type: MplsLdp::MplsLdpConfig::Discovery::LinkHello
        class TargetedHello; //type: MplsLdp::MplsLdpConfig::Discovery::TargetedHello
        class IntTransAddrs; //type: MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs> int_trans_addrs_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::LinkHello> link_hello_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::TargetedHello> targeted_hello_;
        
}; // MplsLdp::MplsLdpConfig::Discovery


class MplsLdp::MplsLdpConfig::Discovery::LinkHello : public Entity
{
    public:
        LinkHello();
        ~LinkHello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf holdtime; //type: uint16
        YLeaf interval; //type: uint16

}; // MplsLdp::MplsLdpConfig::Discovery::LinkHello


class MplsLdp::MplsLdpConfig::Discovery::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf holdtime; //type: uint16
        YLeaf interval; //type: uint16
        YLeaf enable; //type: boolean
        class Accept; //type: MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept> accept_;
        
}; // MplsLdp::MplsLdpConfig::Discovery::TargetedHello


class MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept : public Entity
{
    public:
        Accept();
        ~Accept();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf src_filter; //type: string

}; // MplsLdp::MplsLdpConfig::Discovery::TargetedHello::Accept


class MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs : public Entity
{
    public:
        IntTransAddrs();
        ~IntTransAddrs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IntTransAddr; //type: MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr> > int_trans_addr_;
        
}; // MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs


class MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr : public Entity
{
    public:
        IntTransAddr();
        ~IntTransAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: AfEnum
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf int_name;
        YLeaf trans_ip; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf trans_int;

}; // MplsLdp::MplsLdpConfig::Discovery::IntTransAddrs::IntTransAddr


class MplsLdp::MplsLdpConfig::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_graceful_restartable; //type: boolean
        YLeaf forwarding_holding; //type: uint32
        YLeaf max_recovery; //type: uint32
        YLeaf nbr_liveness; //type: uint32
        class Helper; //type: MplsLdp::MplsLdpConfig::GracefulRestart::Helper

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::GracefulRestart::Helper> > helper_;
        
}; // MplsLdp::MplsLdpConfig::GracefulRestart


class MplsLdp::MplsLdpConfig::GracefulRestart::Helper : public Entity
{
    public:
        Helper();
        ~Helper();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf helper_vrf; //type: string
        YLeaf helper_filter; //type: string

}; // MplsLdp::MplsLdpConfig::GracefulRestart::Helper


class MplsLdp::MplsLdpConfig::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf graceful_restart; //type: boolean
        YLeaf neighbor; //type: boolean
        YLeaf nsr; //type: boolean
        YLeaf adjacency; //type: boolean
        YLeaf session_protection; //type: boolean
        class Password; //type: MplsLdp::MplsLdpConfig::Logging::Password

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Logging::Password> password_;
        
}; // MplsLdp::MplsLdpConfig::Logging


class MplsLdp::MplsLdpConfig::Logging::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConfigMsg; //type: MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg
        class RolloverMsg; //type: MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg> config_msg_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg> rollover_msg_;
        
}; // MplsLdp::MplsLdpConfig::Logging::Password


class MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg : public Entity
{
    public:
        ConfigMsg();
        ~ConfigMsg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf rate_limit; //type: uint32

}; // MplsLdp::MplsLdpConfig::Logging::Password::ConfigMsg


class MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg : public Entity
{
    public:
        RolloverMsg();
        ~RolloverMsg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf rate_limit; //type: uint32

}; // MplsLdp::MplsLdpConfig::Logging::Password::RolloverMsg


class MplsLdp::MplsLdpConfig::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: MplsLdp::MplsLdpConfig::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces::Interface> > interface_;
        
}; // MplsLdp::MplsLdpConfig::Interfaces


class MplsLdp::MplsLdpConfig::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf interface;
        YLeaf link_hello_int; //type: uint32
        YLeaf link_hello_hold; //type: uint32
        YLeaf disable_quick_start_int; //type: boolean
        YLeaf seconds; //type: uint32
        YLeaf disable_delay; //type: empty
        class Afs; //type: MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs> afs_;
        
}; // MplsLdp::MplsLdpConfig::Interfaces::Interface


class MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Af; //type: MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af> > af_;
        
}; // MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs


class MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: AfEnum
        YLeaf enable; //type: boolean
        YLeaf autoconfig_disable; //type: boolean
        class BgpRedist; //type: MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist> bgp_redist_;
        
}; // MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af


class MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist : public Entity
{
    public:
        BgpRedist();
        ~BgpRedist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf advertise_to; //type: string
        YLeaf enable; //type: boolean

}; // MplsLdp::MplsLdpConfig::Interfaces::Interface::Afs::Af::BgpRedist


class MplsLdp::MplsLdpConfig::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RoutingInst; //type: MplsLdp::MplsLdpConfig::Routing::RoutingInst

        std::vector<std::shared_ptr<Cisco_IOS_XE_mpls_ldp::MplsLdp::MplsLdpConfig::Routing::RoutingInst> > routing_inst_;
        
}; // MplsLdp::MplsLdpConfig::Routing


class MplsLdp::MplsLdpConfig::Routing::RoutingInst : public Entity
{
    public:
        RoutingInst();
        ~RoutingInst();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf routing_inst_name; //type: string
        YLeaf autoconfig_enable; //type: boolean
        YLeaf area_id; //type: uint32
        YLeaf level_id; //type: LevelIdEnum
        YLeaf sync; //type: boolean
        class LevelIdEnum;

}; // MplsLdp::MplsLdpConfig::Routing::RoutingInst


class MplsLdp::MplsLdpConfig::DualStack : public Entity
{
    public:
        DualStack();
        ~DualStack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_wait; //type: uint32
        YLeaf prefer_ipv4_peers; //type: string

}; // MplsLdp::MplsLdpConfig::DualStack

class ClearMsgCountersRpc : public Entity
{
    public:
        ClearMsgCountersRpc();
        ~ClearMsgCountersRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearMsgCountersRpc::Input
        class Output; //type: ClearMsgCountersRpc::Output

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::ClearMsgCountersRpc::Input> input_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::ClearMsgCountersRpc::Output> output_;
        
}; // ClearMsgCountersRpc


class ClearMsgCountersRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf nbr_ip; //type: string
        YLeaf all; //type: empty

}; // ClearMsgCountersRpc::Input


class ClearMsgCountersRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: string

}; // ClearMsgCountersRpc::Output

class RestartNeighborRpc : public Entity
{
    public:
        RestartNeighborRpc();
        ~RestartNeighborRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: RestartNeighborRpc::Input
        class Output; //type: RestartNeighborRpc::Output

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::RestartNeighborRpc::Input> input_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::RestartNeighborRpc::Output> output_;
        
}; // RestartNeighborRpc


class RestartNeighborRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf nbr_ip; //type: string
        YLeaf all; //type: empty

}; // RestartNeighborRpc::Input


class RestartNeighborRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: string

}; // RestartNeighborRpc::Output

class ClearForwardingRpc : public Entity
{
    public:
        ClearForwardingRpc();
        ~ClearForwardingRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearForwardingRpc::Input
        class Output; //type: ClearForwardingRpc::Output

        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::ClearForwardingRpc::Input> input_;
        std::shared_ptr<Cisco_IOS_XE_mpls_ldp::ClearForwardingRpc::Output> output_;
        
}; // ClearForwardingRpc


class ClearForwardingRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf prefix_ip; //type: string
        YLeaf all; //type: empty

}; // ClearForwardingRpc::Input


class ClearForwardingRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: string

}; // ClearForwardingRpc::Output

class DownNbrReasonDiscHelloIdentity : public Cisco_IOS_XE_mpls_ldp::DownNbrReasonIdentity, virtual Identity
{
    public:
        DownNbrReasonDiscHelloIdentity();
        ~DownNbrReasonDiscHelloIdentity();


}; // DownNbrReasonDiscHelloIdentity

class NsrPeerSyncErrAppFailIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErrIdentity, virtual Identity
{
    public:
        NsrPeerSyncErrAppFailIdentity();
        ~NsrPeerSyncErrAppFailIdentity();


}; // NsrPeerSyncErrAppFailIdentity

class RoutePathLblOwnerBgpIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathLblOwnerIdentity, virtual Identity
{
    public:
        RoutePathLblOwnerBgpIdentity();
        ~RoutePathLblOwnerBgpIdentity();


}; // RoutePathLblOwnerBgpIdentity

class NsrSyncNackRsnErrAppNotFoundIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrAppNotFoundIdentity();
        ~NsrSyncNackRsnErrAppNotFoundIdentity();


}; // NsrSyncNackRsnErrAppNotFoundIdentity

class LdpNsrPeerSyncStOperIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncStateIdentity, virtual Identity
{
    public:
        LdpNsrPeerSyncStOperIdentity();
        ~LdpNsrPeerSyncStOperIdentity();


}; // LdpNsrPeerSyncStOperIdentity

class IgpSyncDownReasonNaIdentity : public Cisco_IOS_XE_mpls_ldp::IgpSyncDownReasonIdentity, virtual Identity
{
    public:
        IgpSyncDownReasonNaIdentity();
        ~IgpSyncDownReasonNaIdentity();


}; // IgpSyncDownReasonNaIdentity

class NsrSyncNackRsnNoPEndSockIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnNoPEndSockIdentity();
        ~NsrSyncNackRsnNoPEndSockIdentity();


}; // NsrSyncNackRsnNoPEndSockIdentity

class NsrPeerSyncErrLdpGblIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErrIdentity, virtual Identity
{
    public:
        NsrPeerSyncErrLdpGblIdentity();
        ~NsrPeerSyncErrLdpGblIdentity();


}; // NsrPeerSyncErrLdpGblIdentity

class DownNbrReasonNbrHoldIdentity : public Cisco_IOS_XE_mpls_ldp::DownNbrReasonIdentity, virtual Identity
{
    public:
        DownNbrReasonNbrHoldIdentity();
        ~DownNbrReasonNbrHoldIdentity();


}; // DownNbrReasonNbrHoldIdentity

class NsrPeerSyncErrTcpGblIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErrIdentity, virtual Identity
{
    public:
        NsrPeerSyncErrTcpGblIdentity();
        ~NsrPeerSyncErrTcpGblIdentity();


}; // NsrPeerSyncErrTcpGblIdentity

class IgpSyncDownReasonPeerUpdateNotReceivedIdentity : public Cisco_IOS_XE_mpls_ldp::IgpSyncDownReasonIdentity, virtual Identity
{
    public:
        IgpSyncDownReasonPeerUpdateNotReceivedIdentity();
        ~IgpSyncDownReasonPeerUpdateNotReceivedIdentity();


}; // IgpSyncDownReasonPeerUpdateNotReceivedIdentity

class IcpmTypeIccpIdentity : public Cisco_IOS_XE_mpls_ldp::IcpmTypeIdentity, virtual Identity
{
    public:
        IcpmTypeIccpIdentity();
        ~IcpmTypeIccpIdentity();


}; // IcpmTypeIccpIdentity

class NsrStatusReadyIdentity : public Cisco_IOS_XE_mpls_ldp::NsrStatusIdentity, virtual Identity
{
    public:
        NsrStatusReadyIdentity();
        ~NsrStatusReadyIdentity();


}; // NsrStatusReadyIdentity

class NsrSyncNackRsnErrAdjAddIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrAdjAddIdentity();
        ~NsrSyncNackRsnErrAdjAddIdentity();


}; // NsrSyncNackRsnErrAdjAddIdentity

class NsrSyncNackRsnErrUnexpPeerDownIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrUnexpPeerDownIdentity();
        ~NsrSyncNackRsnErrUnexpPeerDownIdentity();


}; // NsrSyncNackRsnErrUnexpPeerDownIdentity

class NsrSyncNackRsnNoneIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnNoneIdentity();
        ~NsrSyncNackRsnNoneIdentity();


}; // NsrSyncNackRsnNoneIdentity

class NsrSyncNackRsnNoCtxIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnNoCtxIdentity();
        ~NsrSyncNackRsnNoCtxIdentity();


}; // NsrSyncNackRsnNoCtxIdentity

class NsrSyncNackRsnMissingElemIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnMissingElemIdentity();
        ~NsrSyncNackRsnMissingElemIdentity();


}; // NsrSyncNackRsnMissingElemIdentity

class NsrPeerSyncErrLdpPeerIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErrIdentity, virtual Identity
{
    public:
        NsrPeerSyncErrLdpPeerIdentity();
        ~NsrPeerSyncErrLdpPeerIdentity();


}; // NsrPeerSyncErrLdpPeerIdentity

class NsrSyncNackRsnErrAppInvalidIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrAppInvalidIdentity();
        ~NsrSyncNackRsnErrAppInvalidIdentity();


}; // NsrSyncNackRsnErrAppInvalidIdentity

class NsrStatusDisabledIdentity : public Cisco_IOS_XE_mpls_ldp::NsrStatusIdentity, virtual Identity
{
    public:
        NsrStatusDisabledIdentity();
        ~NsrStatusDisabledIdentity();


}; // NsrStatusDisabledIdentity

class RoutePathIpNoFlagIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathTypeIdentity, virtual Identity
{
    public:
        RoutePathIpNoFlagIdentity();
        ~RoutePathIpNoFlagIdentity();


}; // RoutePathIpNoFlagIdentity

class NsrPeerSyncErrTcpPeerIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErrIdentity, virtual Identity
{
    public:
        NsrPeerSyncErrTcpPeerIdentity();
        ~NsrPeerSyncErrTcpPeerIdentity();


}; // NsrPeerSyncErrTcpPeerIdentity

class NsrPeerSyncErrNoneIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErrIdentity, virtual Identity
{
    public:
        NsrPeerSyncErrNoneIdentity();
        ~NsrPeerSyncErrNoneIdentity();


}; // NsrPeerSyncErrNoneIdentity

class LdpNsrPeerSyncStNoneIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncStateIdentity, virtual Identity
{
    public:
        LdpNsrPeerSyncStNoneIdentity();
        ~LdpNsrPeerSyncStNoneIdentity();


}; // LdpNsrPeerSyncStNoneIdentity

class NsrSyncNackRsnErrPpCreateIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrPpCreateIdentity();
        ~NsrSyncNackRsnErrPpCreateIdentity();


}; // NsrSyncNackRsnErrPpCreateIdentity

class NsrSyncNackRsnErrRxUnexpOpenIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrRxUnexpOpenIdentity();
        ~NsrSyncNackRsnErrRxUnexpOpenIdentity();


}; // NsrSyncNackRsnErrRxUnexpOpenIdentity

class LabelTypeUnknownIdentity : public Cisco_IOS_XE_mpls_ldp::LabelTypeIdentity, virtual Identity
{
    public:
        LabelTypeUnknownIdentity();
        ~LabelTypeUnknownIdentity();


}; // LabelTypeUnknownIdentity

class IgpSyncDownReasonNoPeerSessIdentity : public Cisco_IOS_XE_mpls_ldp::IgpSyncDownReasonIdentity, virtual Identity
{
    public:
        IgpSyncDownReasonNoPeerSessIdentity();
        ~IgpSyncDownReasonNoPeerSessIdentity();


}; // IgpSyncDownReasonNoPeerSessIdentity

class LdpNsrPeerSyncStPrepIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncStateIdentity, virtual Identity
{
    public:
        LdpNsrPeerSyncStPrepIdentity();
        ~LdpNsrPeerSyncStPrepIdentity();


}; // LdpNsrPeerSyncStPrepIdentity

class RoutePathLblOwnerStaticIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathLblOwnerIdentity, virtual Identity
{
    public:
        RoutePathLblOwnerStaticIdentity();
        ~RoutePathLblOwnerStaticIdentity();


}; // RoutePathLblOwnerStaticIdentity

class NsrPeerSyncErrLdpSyncNackIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErrIdentity, virtual Identity
{
    public:
        NsrPeerSyncErrLdpSyncNackIdentity();
        ~NsrPeerSyncErrLdpSyncNackIdentity();


}; // NsrPeerSyncErrLdpSyncNackIdentity

class NsrSyncNackRsnTblIdMismatchIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnTblIdMismatchIdentity();
        ~NsrSyncNackRsnTblIdMismatchIdentity();


}; // NsrSyncNackRsnTblIdMismatchIdentity

class NsrSyncNackRsnErrAddrBindIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrAddrBindIdentity();
        ~NsrSyncNackRsnErrAddrBindIdentity();


}; // NsrSyncNackRsnErrAddrBindIdentity

class RoutePathIpBackupIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathTypeIdentity, virtual Identity
{
    public:
        RoutePathIpBackupIdentity();
        ~RoutePathIpBackupIdentity();


}; // RoutePathIpBackupIdentity

class LabelTypeMplsIdentity : public Cisco_IOS_XE_mpls_ldp::LabelTypeIdentity, virtual Identity
{
    public:
        LabelTypeMplsIdentity();
        ~LabelTypeMplsIdentity();


}; // LabelTypeMplsIdentity

class NsrSyncNackRsnErrDhcAddIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrDhcAddIdentity();
        ~NsrSyncNackRsnErrDhcAddIdentity();


}; // NsrSyncNackRsnErrDhcAddIdentity

class NsrSyncNackRsnErrRxNotifIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrRxNotifIdentity();
        ~NsrSyncNackRsnErrRxNotifIdentity();


}; // NsrSyncNackRsnErrRxNotifIdentity

class RoutePathLblOwnerNoneIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathLblOwnerIdentity, virtual Identity
{
    public:
        RoutePathLblOwnerNoneIdentity();
        ~RoutePathLblOwnerNoneIdentity();


}; // RoutePathLblOwnerNoneIdentity

class LdpNsrPeerSyncStWaitIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncStateIdentity, virtual Identity
{
    public:
        LdpNsrPeerSyncStWaitIdentity();
        ~LdpNsrPeerSyncStWaitIdentity();


}; // LdpNsrPeerSyncStWaitIdentity

class NsrSyncNackRsnErrTpCreateIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrTpCreateIdentity();
        ~NsrSyncNackRsnErrTpCreateIdentity();


}; // NsrSyncNackRsnErrTpCreateIdentity

class NsrStatusNotReadyIdentity : public Cisco_IOS_XE_mpls_ldp::NsrStatusIdentity, virtual Identity
{
    public:
        NsrStatusNotReadyIdentity();
        ~NsrStatusNotReadyIdentity();


}; // NsrStatusNotReadyIdentity

class NsrSyncNackRsnPEndSockNotSyncedIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnPEndSockNotSyncedIdentity();
        ~NsrSyncNackRsnPEndSockNotSyncedIdentity();


}; // NsrSyncNackRsnPEndSockNotSyncedIdentity

class IgpSyncDownReasonInternalIdentity : public Cisco_IOS_XE_mpls_ldp::IgpSyncDownReasonIdentity, virtual Identity
{
    public:
        IgpSyncDownReasonInternalIdentity();
        ~IgpSyncDownReasonInternalIdentity();


}; // IgpSyncDownReasonInternalIdentity

class NsrSyncNackRsnPpExistsIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnPpExistsIdentity();
        ~NsrSyncNackRsnPpExistsIdentity();


}; // NsrSyncNackRsnPpExistsIdentity

class LdpNsrPeerSyncStReadyIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncStateIdentity, virtual Identity
{
    public:
        LdpNsrPeerSyncStReadyIdentity();
        ~LdpNsrPeerSyncStReadyIdentity();


}; // LdpNsrPeerSyncStReadyIdentity

class IgpSyncDownReasonNoHelloAdjIdentity : public Cisco_IOS_XE_mpls_ldp::IgpSyncDownReasonIdentity, virtual Identity
{
    public:
        IgpSyncDownReasonNoHelloAdjIdentity();
        ~IgpSyncDownReasonNoHelloAdjIdentity();


}; // IgpSyncDownReasonNoHelloAdjIdentity

class LabelTypeUnLabeledIdentity : public Cisco_IOS_XE_mpls_ldp::LabelTypeIdentity, virtual Identity
{
    public:
        LabelTypeUnLabeledIdentity();
        ~LabelTypeUnLabeledIdentity();


}; // LabelTypeUnLabeledIdentity

class IccpTypeMlacpIdentity : public Cisco_IOS_XE_mpls_ldp::IccpTypeIdentity, virtual Identity
{
    public:
        IccpTypeMlacpIdentity();
        ~IccpTypeMlacpIdentity();


}; // IccpTypeMlacpIdentity

class NsrPeerSyncErrSyncPrepIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncErrIdentity, virtual Identity
{
    public:
        NsrPeerSyncErrSyncPrepIdentity();
        ~NsrPeerSyncErrSyncPrepIdentity();


}; // NsrPeerSyncErrSyncPrepIdentity

class LdpNsrPeerSyncStAppWaitIdentity : public Cisco_IOS_XE_mpls_ldp::NsrPeerSyncStateIdentity, virtual Identity
{
    public:
        LdpNsrPeerSyncStAppWaitIdentity();
        ~LdpNsrPeerSyncStAppWaitIdentity();


}; // LdpNsrPeerSyncStAppWaitIdentity

class RoutePathIpBgpBackupIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathTypeIdentity, virtual Identity
{
    public:
        RoutePathIpBgpBackupIdentity();
        ~RoutePathIpBgpBackupIdentity();


}; // RoutePathIpBgpBackupIdentity

class DownNbrReasonNaIdentity : public Cisco_IOS_XE_mpls_ldp::DownNbrReasonIdentity, virtual Identity
{
    public:
        DownNbrReasonNaIdentity();
        ~DownNbrReasonNaIdentity();


}; // DownNbrReasonNaIdentity

class NsrSyncNackRsnErrRxBadPieIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnErrRxBadPieIdentity();
        ~NsrSyncNackRsnErrRxBadPieIdentity();


}; // NsrSyncNackRsnErrRxBadPieIdentity

class IgpSyncDownReasonPeerUpdateNotDoneIdentity : public Cisco_IOS_XE_mpls_ldp::IgpSyncDownReasonIdentity, virtual Identity
{
    public:
        IgpSyncDownReasonPeerUpdateNotDoneIdentity();
        ~IgpSyncDownReasonPeerUpdateNotDoneIdentity();


}; // IgpSyncDownReasonPeerUpdateNotDoneIdentity

class NsrSyncNackRsnEnomemIdentity : public Cisco_IOS_XE_mpls_ldp::NsrSyncNackRsnIdentity, virtual Identity
{
    public:
        NsrSyncNackRsnEnomemIdentity();
        ~NsrSyncNackRsnEnomemIdentity();


}; // NsrSyncNackRsnEnomemIdentity

class RoutePathIpProtectedIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathTypeIdentity, virtual Identity
{
    public:
        RoutePathIpProtectedIdentity();
        ~RoutePathIpProtectedIdentity();


}; // RoutePathIpProtectedIdentity

class RoutePathIpBackupRemoteIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathTypeIdentity, virtual Identity
{
    public:
        RoutePathIpBackupRemoteIdentity();
        ~RoutePathIpBackupRemoteIdentity();


}; // RoutePathIpBackupRemoteIdentity

class RoutePathLblOwnerLdpIdentity : public Cisco_IOS_XE_mpls_ldp::RoutePathLblOwnerIdentity, virtual Identity
{
    public:
        RoutePathLblOwnerLdpIdentity();
        ~RoutePathLblOwnerLdpIdentity();


}; // RoutePathLblOwnerLdpIdentity

class SessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nonexistent;
        static const Enum::YLeaf initialized;
        static const Enum::YLeaf openrec;
        static const Enum::YLeaf opensent;
        static const Enum::YLeaf operational;

};

class LoopDetectionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf other;
        static const Enum::YLeaf hop_count;
        static const Enum::YLeaf path_vector;
        static const Enum::YLeaf hop_count_and_path_vector;

};

class AdvLabelTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf use_lable;
        static const Enum::YLeaf use_explicit;
        static const Enum::YLeaf use_implicit;
        static const Enum::YLeaf none;

};

class AfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp_af_id_none;
        static const Enum::YLeaf ldp_af_id_ipv4;
        static const Enum::YLeaf ldp_af_id_ipv6;

};

class IgpSyncStateEnum : public Enum
{
    public:
        static const Enum::YLeaf isync_ready;
        static const Enum::YLeaf isync_not_ready;
        static const Enum::YLeaf isync_deferred;

};

class AfEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp_af_none;
        static const Enum::YLeaf ldp_af_ipv4;
        static const Enum::YLeaf ldp_af_ipv6;
        static const Enum::YLeaf ldp_af_ipv4_ipv6;

};

class NbrBgpAdvtStateEnum : public Enum
{
    public:
        static const Enum::YLeaf not_applicable;
        static const Enum::YLeaf permit;
        static const Enum::YLeaf deny;

};

class AdjStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nonex;
        static const Enum::YLeaf unsol_op_pdg;
        static const Enum::YLeaf deferred;
        static const Enum::YLeaf estab;
        static const Enum::YLeaf lib_exp_wait;
        static const Enum::YLeaf destroyed;

};

class LocalLabelStateEnum : public Enum
{
    public:
        static const Enum::YLeaf local_label_state_none;
        static const Enum::YLeaf local_label_state_assigned;
        static const Enum::YLeaf local_label_state_withdrawn;

};

class DhcStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf dhc_active;
        static const Enum::YLeaf dhc_passive;
        static const Enum::YLeaf dhc_active_passive;

};

class IccpStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nonexistent;
        static const Enum::YLeaf initialized;
        static const Enum::YLeaf capsent;
        static const Enum::YLeaf caprec;
        static const Enum::YLeaf connecting;
        static const Enum::YLeaf operational;

};

class MplsLdp::MplsLdpState::Neighbors::Neighbor::SessionRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class MplsLdp::MplsLdpState::Neighbors::NsrNbrDetail::NbrSess::StateEnum : public Enum
{
    public:
        static const Enum::YLeaf nonexistent;
        static const Enum::YLeaf initialized;
        static const Enum::YLeaf openrec;
        static const Enum::YLeaf opensent;
        static const Enum::YLeaf operational;

};

class MplsLdp::MplsLdpConfig::GlobalCfg::AdminStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class MplsLdp::MplsLdpConfig::GlobalCfg::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf tdp;
        static const Enum::YLeaf both;

};

class MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::AdminStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class MplsLdp::MplsLdpConfig::NbrTable::NbrCfg::LabelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf tdp;

};

class MplsLdp::MplsLdpConfig::Routing::RoutingInst::LevelIdEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};


}
}

#endif /* _CISCO_IOS_XE_MPLS_LDP_ */

