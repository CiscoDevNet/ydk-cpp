#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_6_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls : public Entity
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

        class MplsOutgoingInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa> remote_lfa;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo : public Entity
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
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public Entity
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
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa : public Entity
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
        class MplsOutgoingInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public Entity
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

        class Stack; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack> > stack;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean
        class NexthopPeerLdpIdent; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent : public Entity
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
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec : public Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllocationAcl; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl> > advt_acl;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf has_acl; //type: boolean
        YLeaf prefix_acl; //type: string
        YLeaf is_host_route_only; //type: boolean

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_acl; //type: string
        YLeaf peer_acl; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary : public Entity
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

        YLeaf is_lsd_bound; //type: boolean
        YLeaf fsht; //type: uint16
        YLeaf intfs; //type: uint16
        YLeaf lbls; //type: uint16
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf
        class Rws; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws> rws;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws : public Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pfxs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs
        class Nhs; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs> pfxs;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs : public Entity
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
        class LabeledPfxsAggr; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr : public Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary : public Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup : public Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs : public Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs


class MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs : public Entity
{
    public:
        NeighborBriefs();
        ~NeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborBrief; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief> > neighbor_brief;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs


class MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief : public Entity
{
    public:
        NeighborBrief();
        ~NeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf is_graceful_restartable; //type: boolean
        YLeaf nsr_state; //type: ShowNsrStateEnum
        YLeaf up_time_seconds; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf
        class NbrBrAfInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo> > nbr_br_af_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief


class MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo : public Entity
{
    public:
        NbrBrAfInfo();
        ~NbrBrAfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf num_of_nbr_discovery; //type: uint32
        YLeaf num_of_nbr_addresses; //type: uint32
        YLeaf num_of_nbr_lbl; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo


class MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters : public Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::BackoffParameters


class MplsLdp::Nodes::Node::DefaultVrf::Backoffs : public Entity
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

        class Backoff; //type: MplsLdp::Nodes::Node::DefaultVrf::Backoffs::Backoff

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Backoffs::Backoff> > backoff;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Backoffs


class MplsLdp::Nodes::Node::DefaultVrf::Backoffs::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf backoff_seconds; //type: uint32
        YLeaf waiting_seconds; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Backoffs::Backoff


class MplsLdp::Nodes::Node::DefaultVrf::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NsrPending; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending> nsr_pending;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending : public Entity
{
    public:
        NsrPending();
        ~NsrPending();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaNeighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaSummary::Sessions


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaGlobal; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InitSync; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_cfged; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_peers; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_pfx; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_lcl_addr_wd; //type: uint32
        YLeaf num_lbl_adv; //type: uint32
        YLeaf ipc_msg_tx_cnt; //type: uint32
        YLeaf ipc_msg_tx_bytes; //type: uint32
        YLeaf ipc_msg_rx_cnt; //type: uint32
        YLeaf ipc_msg_rx_bytes; //type: uint32
        YLeaf ipc_max_tx_batch_bytes; //type: uint32
        YLeaf ipc_max_rx_batch_bytes; //type: uint32
        YLeaf ipc_tx_fail_cnt; //type: uint32
        YLeaf total_ipc_tx_fail_cnt; //type: uint32
        YLeaf ipc_restart_cnt; //type: uint32
        YLeaf ipc_default_mtu; //type: uint32
        YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Parameters : public Entity
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

        YLeaf role_is_active; //type: boolean
        YLeaf global_md5_password_enabled; //type: boolean
        YLeaf protocol_version; //type: uint32
        YLeaf router_id; //type: string
        YLeaf keepalive_interval; //type: uint32
        YLeaf hello_hold_time; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf targeted_hello_hold_time; //type: uint32
        YLeaf targeted_hello_interval; //type: uint32
        YLeaf session_hold_time; //type: uint32
        YLeaf housekeeping_timer_interval; //type: uint32
        YLeaf le_no_route_timeout; //type: uint32
        YLeaf ldp_recovery_timeout; //type: uint32
        YLeaf af_binding_withdraw_delay; //type: uint32
        YLeaf max_intf_attached; //type: uint32
        YLeaf max_intf_te; //type: uint32
        YLeaf max_peer; //type: uint32
        YLeaf ldp_out_of_mem_state; //type: uint32
        YLeaf nsr_enabled; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf igp_sync_delay_time_for_interface; //type: uint32
        YLeaf igp_sync_delay_time_on_restart; //type: uint32
        YLeaf global_discovery_quick_start_disabled; //type: boolean
        YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean
        class GracefulRestartInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters::GracefulRestartInformation
        class AddressFamilyParameter; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter> > address_family_parameter;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters::GracefulRestartInformation> graceful_restart_information;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Parameters


class MplsLdp::Nodes::Node::DefaultVrf::Parameters::GracefulRestartInformation : public Entity
{
    public:
        GracefulRestartInformation();
        ~GracefulRestartInformation();

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

}; // MplsLdp::Nodes::Node::DefaultVrf::Parameters::GracefulRestartInformation


class MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter : public Entity
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

        YLeaf address_family; //type: LdpAfEnum
        YLeaf null_label; //type: string
        YLeaf label_imp_null_override_acl; //type: string
        YLeaf is_accepting_targeted_hellos; //type: boolean
        YLeaf targeted_hello_acl; //type: string
        class DiscoveryTransportAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress> discovery_transport_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter


class MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress : public Entity
{
    public:
        DiscoveryTransportAddress();
        ~DiscoveryTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress


class MplsLdp::Nodes::Node::DefaultVrf::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaSummary; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary
        class HaStatistics; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary> ha_summary;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Vrf


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaSummary::Sessions


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaGlobal; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InitSync; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_cfged; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_peers; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_pfx; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_lcl_addr_wd; //type: uint32
        YLeaf num_lbl_adv; //type: uint32
        YLeaf ipc_msg_tx_cnt; //type: uint32
        YLeaf ipc_msg_tx_bytes; //type: uint32
        YLeaf ipc_msg_rx_cnt; //type: uint32
        YLeaf ipc_msg_rx_bytes; //type: uint32
        YLeaf ipc_max_tx_batch_bytes; //type: uint32
        YLeaf ipc_max_rx_batch_bytes; //type: uint32
        YLeaf ipc_tx_fail_cnt; //type: uint32
        YLeaf total_ipc_tx_fail_cnt; //type: uint32
        YLeaf ipc_restart_cnt; //type: uint32
        YLeaf ipc_default_mtu; //type: uint32
        YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HaNeighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32
        class InitSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32

}; // MplsLdp::Nodes::Node::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities : public Entity
{
    public:
        NeighborCapabilities();
        ~NeighborCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborCapability; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability> > neighbor_capability;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities


class MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability : public Entity
{
    public:
        NeighborCapability();
        ~NeighborCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        class Sent; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent> > sent;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors : public Entity
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

        class Neighbor; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor> > neighbor;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor : public Entity
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

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        class ProtocolInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation
        class TcpInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation
        class DetailedInformation; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation
        class LdpNbrBoundIpv4AddressInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo
        class LdpNbrBoundIpv6AddressInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo
        class LdpNbrIpv4AdjInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo
        class LdpNbrIpv6AdjInfo; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation> detailed_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo> > ldp_nbr_bound_ipv4_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo> > ldp_nbr_bound_ipv6_address_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo> > ldp_nbr_ipv4_adj_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo> > ldp_nbr_ipv6_adj_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation> protocol_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation> tcp_information;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation : public Entity
{
    public:
        ProtocolInformation();
        ~ProtocolInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ta_holdtime; //type: uint32
        YLeaf ta_state; //type: string
        YLeaf ta_pies_sent; //type: uint32
        YLeaf ta_pies_rcvd; //type: uint32
        YLeaf ta_up_time_seconds; //type: uint32
        YLeaf downstream_on_demand; //type: boolean
        class TaGracefulRestartAdjacency; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency> ta_graceful_restart_adjacency;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency : public Entity
{
    public:
        TaGracefulRestartAdjacency();
        ~TaGracefulRestartAdjacency();

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

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation : public Entity
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

        YLeaf foreign_port; //type: uint16
        YLeaf local_port; //type: uint16
        YLeaf is_md5_on; //type: boolean
        class ForeignHost; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost
        class LocalHost; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost> foreign_host;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost> local_host;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost : public Entity
{
    public:
        ForeignHost();
        ~ForeignHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::ForeignHost


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost : public Entity
{
    public:
        LocalHost();
        ~LocalHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::TcpInformation::LocalHost


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation : public Entity
{
    public:
        DetailedInformation();
        ~DetailedInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_holdtime; //type: uint32
        YLeaf keep_alive_interval; //type: uint32
        YLeaf peer_state; //type: string
        YLeaf has_ipv4_inbound; //type: boolean
        YLeaf inbound_ipv4acl; //type: string
        YLeaf has_ipv6_inbound; //type: boolean
        YLeaf inbound_ipv6acl; //type: string
        YLeaf has_ipv4_outbound; //type: boolean
        YLeaf outbound_ipv4acl; //type: string
        YLeaf has_ipv6_outbound; //type: boolean
        YLeaf outbound_ipv6acl; //type: string
        YLeaf has_sp; //type: boolean
        YLeaf sp_state; //type: string
        YLeaf sp_has_acl; //type: boolean
        YLeaf spacl; //type: string
        YLeaf sp_has_duration; //type: boolean
        YLeaf sp_duration; //type: uint32
        YLeaf spht_running; //type: boolean
        YLeaf spht_remaining; //type: uint32
        YLeaf nsr_sync_state; //type: MgmtLdpNsrPeerSyncStateEnum
        YLeaf nsr_last_sync_error; //type: MgmtLdpNsrPeerSyncErrEnum
        YLeaf nsr_last_sync_nack_reason; //type: MgmtLdpNsrPeerLdpSyncNackRsnEnum
        YLeaf bgp_advertisement_state; //type: MgmtLdpNbrBgpAdvtStateEnum
        YLeaf advertise_bgp_prefixes; //type: boolean
        class Capabilities; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities
        class Client; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client
        class Ipv4DuplicateAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress
        class Ipv6DuplicateAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities> capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client> > client;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress> > ipv4_duplicate_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress> > ipv6_duplicate_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities : public Entity
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

        class Sent; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent
        class Received; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent> > sent;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Client


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress : public Entity
{
    public:
        Ipv4DuplicateAddress();
        ~Ipv4DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address> address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress : public Entity
{
    public:
        Ipv6DuplicateAddress();
        ~Ipv6DuplicateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address> address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv4AddressInfo();
        ~LdpNbrBoundIpv4AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address> address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo : public Entity
{
    public:
        LdpNbrBoundIpv6AddressInfo();
        ~LdpNbrBoundIpv6AddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address> address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo : public Entity
{
    public:
        LdpNbrIpv4AdjInfo();
        ~LdpNbrIpv4AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AdjacencyGroup; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup : public Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_type; //type: LdpAdjUnionDiscrimEnum
        class LinkHelloData; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData : public Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf interface_name; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData : public Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: DhcbStateEnum
        class LocalAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo : public Entity
{
    public:
        LdpNbrIpv6AdjInfo();
        ~LdpNbrIpv6AdjInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AdjacencyGroup; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup> adjacency_group;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup : public Entity
{
    public:
        AdjacencyGroup();
        ~AdjacencyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_type; //type: LdpAdjUnionDiscrimEnum
        class LinkHelloData; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData
        class TargetHelloData; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData> link_hello_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData> target_hello_data;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData : public Entity
{
    public:
        LinkHelloData();
        ~LinkHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf interface_name; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData : public Entity
{
    public:
        TargetHelloData();
        ~TargetHelloData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: DhcbStateEnum
        class LocalAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress
        class TargetAddress; //type: MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress> local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress> target_address;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress : public Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress


class MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress


class MplsLdp::Nodes::Node::DefaultVrf::LdpId : public Entity
{
    public:
        LdpId();
        ~LdpId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::DefaultVrf::LdpId


class MplsLdp::Nodes::Node::DefaultVrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Statistic; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic> > statistic;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Statistics


class MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic : public Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf iccp_enabled; //type: boolean
        class MessageOut; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageOut
        class MessageIn; //type: MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageIn

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageIn> message_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageOut> message_out;
        
}; // MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic


class MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageOut : public Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageOut


class MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageIn : public Entity
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

}; // MplsLdp::Nodes::Node::DefaultVrf::Statistics::Statistic::MessageIn


class MplsLdp::Nodes::Node::ForwardingSummaryAll : public Entity
{
    public:
        ForwardingSummaryAll();
        ~ForwardingSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_lsd_bound; //type: boolean
        YLeaf fsht; //type: uint16
        YLeaf intfs; //type: uint16
        YLeaf lbls; //type: uint16
        class Vrf; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Vrf
        class Rws; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws> rws;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::ForwardingSummaryAll


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Vrf


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws : public Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pfxs; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs
        class Nhs; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Nhs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs> pfxs;
        
}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs : public Entity
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
        class LabeledPfxsAggr; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;
        
}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr : public Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary : public Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup : public Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Nhs : public Entity
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

}; // MplsLdp::Nodes::Node::ForwardingSummaryAll::Rws::Nhs


class MplsLdp::Nodes::Node::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32
        class Vrf; //type: MplsLdp::Nodes::Node::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Nodes::Node::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::BindingsSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::BindingsSummaryAll


class MplsLdp::Nodes::Node::BindingsSummaryAll::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::BindingsSummaryAll::Vrf


class MplsLdp::Nodes::Node::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32

}; // MplsLdp::Nodes::Node::BindingsSummaryAll::BindAf


class MplsLdp::Nodes::Node::AtoMdbTableEntries : public Entity
{
    public:
        AtoMdbTableEntries();
        ~AtoMdbTableEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AtoMdbTableEntry; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry> > ato_mdb_table_entry;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry : public Entity
{
    public:
        AtoMdbTableEntry();
        ~AtoMdbTableEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_id; //type: string
        YLeaf fe_ctype; //type: int32
        YLeaf pw_id; //type: int32
        YLeaf agi_type; //type: int32
        YLeaf agi; //type: int32
        YLeaf saii_type; //type: int32
        YLeaf saii_local_id; //type: string
        YLeaf saii_global_id; //type: int32
        YLeaf saii_prefix; //type: string
        YLeaf saii_ac_id; //type: int32
        YLeaf taii_type; //type: int32
        YLeaf taii_local_id; //type: string
        YLeaf taii_global_id; //type: int32
        YLeaf taii_prefix; //type: string
        YLeaf taii_ac_id; //type: int32
        YLeaf peer_id_xr; //type: string
        YLeaf mapping_tlv_count; //type: uint32
        YLeaf notification_tlv_count; //type: uint32
        class FecInfo; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo> fec_info;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo : public Entity
{
    public:
        FecInfo();
        ~FecInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fe_ctype; //type: L2VpnLdpPwFecEnum
        class Fec128; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128
        class Fec129; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129
        class Fec130; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128> fec128;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129> fec129;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130> fec130;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128 : public Entity
{
    public:
        Fec128();
        ~Fec128();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pseudowire_id; //type: uint32

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129 : public Entity
{
    public:
        Fec129();
        ~Fec129();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Agi; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi
        class Saii; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii
        class Taii; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi> agi;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii> saii;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii> taii;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi : public Entity
{
    public:
        Agi();
        ~Agi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf agi_type; //type: L2VpnLdpPwAgiEnum
        class Agi1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1> agi1;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1 : public Entity
{
    public:
        Agi1();
        ~Agi1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rd; //type: uint64

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii : public Entity
{
    public:
        Saii();
        ~Saii();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum
        class Aii1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1
        class Aii2; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2> aii2;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_id; //type: string

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii : public Entity
{
    public:
        Taii();
        ~Taii();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum
        class Aii1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1
        class Aii2; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2> aii2;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_id; //type: string

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130 : public Entity
{
    public:
        Fec130();
        ~Fec130();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Agi; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi
        class Saii; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi> agi;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii> saii;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi : public Entity
{
    public:
        Agi();
        ~Agi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf agi_type; //type: L2VpnLdpPwAgiEnum
        class Agi1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1> agi1;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1 : public Entity
{
    public:
        Agi1();
        ~Agi1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rd; //type: uint64

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii : public Entity
{
    public:
        Saii();
        ~Saii();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum
        class Aii1; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1
        class Aii2; //type: MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2> aii2;
        
}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_id; //type: string

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1


class MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32

}; // MplsLdp::Nodes::Node::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2


class MplsLdp::Nodes::Node::NsrSummaryAll : public Entity
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

        class Vrf; //type: MplsLdp::Nodes::Node::NsrSummaryAll::Vrf
        class Sessions; //type: MplsLdp::Nodes::Node::NsrSummaryAll::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::NsrSummaryAll::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::NsrSummaryAll::Vrf> vrf;
        
}; // MplsLdp::Nodes::Node::NsrSummaryAll


class MplsLdp::Nodes::Node::NsrSummaryAll::Vrf : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::NsrSummaryAll::Vrf


class MplsLdp::Nodes::Node::NsrSummaryAll::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32

}; // MplsLdp::Nodes::Node::NsrSummaryAll::Sessions


class MplsLdp::Nodes::Node::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

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
        YLeaf is_bound_with_sysdb; //type: boolean
        YLeaf is_registered_with_sysdb; //type: boolean
        YLeaf is_bound_with_rsi; //type: boolean
        YLeaf is_bound_with_interface_manager; //type: boolean
        YLeaf is_registered_with_interface_manager; //type: boolean
        YLeaf is_bound_with_ip_arm; //type: boolean
        YLeaf is_bound_with_lsd; //type: boolean
        YLeaf is_registered_with_lsd; //type: boolean
        YLeaf is_bound_with_ipv4_rib; //type: boolean
        YLeaf is_registered_with_ipv4_rib; //type: boolean
        YLeaf number_of_ipv4rib_tables; //type: uint32
        YLeaf number_of_registered_ipv4rib_tables; //type: uint32
        YLeaf is_bound_with_ipv6_rib; //type: boolean
        YLeaf is_registered_with_ipv6_rib; //type: boolean
        YLeaf number_of_ipv6rib_tables; //type: uint32
        YLeaf number_of_registered_ipv6rib_tables; //type: uint32
        YLeaf is_bound_with_atom; //type: boolean
        YLeaf is_bound_with_nsr_mate; //type: boolean
        YLeaf is_nsr_configured; //type: boolean
        YLeaf is_mldp_registered; //type: boolean
        class Common; //type: MplsLdp::Nodes::Node::Summary::Common

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Summary::Common> common;
        
}; // MplsLdp::Nodes::Node::Summary


class MplsLdp::Nodes::Node::Summary::Common : public Entity
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

        YLeaf address_families; //type: LdpAfEnum
        YLeaf number_of_ipv4af; //type: uint32
        YLeaf number_of_ipv6af; //type: uint32
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_nsr_synced_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf number_of_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv6_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv6_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ipv6_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        YLeaf number_of_bindings_ipv4; //type: uint32
        YLeaf number_of_bindings_ipv6; //type: uint32
        YLeaf number_of_local_bindings_ipv4; //type: uint32
        YLeaf number_of_local_bindings_ipv6; //type: uint32
        YLeaf number_of_remote_bindings_ipv4; //type: uint32
        YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Nodes::Node::Summary::Common


class MplsLdp::Nodes::Node::Vrfs : public Entity
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

        class Vrf; //type: MplsLdp::Nodes::Node::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf> > vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs


class MplsLdp::Nodes::Node::Vrfs::Vrf : public Entity
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
        class GracefulRestart; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities
        class Summary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Summary
        class Afs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs
        class NeighborBriefs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs
        class Nsr; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr
        class Parameters; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters
        class Issu; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors
        class LdpId; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::LdpId
        class Statistics; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Backoffs> backoffs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities> capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::LdpId> ldp_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Parameters> parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Summary> summary;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf


class MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart : public Entity
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

        YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32
        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::Vrf_
        class GracefulRestartableNeighbor; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor> > graceful_restartable_neighbor;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart


class MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor : public Entity
{
    public:
        GracefulRestartableNeighbor();
        ~GracefulRestartableNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf connect_count; //type: uint32
        YLeaf is_neighbor_up; //type: boolean
        YLeaf is_liveness_timer_running; //type: boolean
        YLeaf liveness_timer_remaining_seconds; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf recovery_timer_remaining_seconds; //type: uint32
        YLeaf down_nbr_flap_count; //type: uint8
        YLeaf down_nbr_flags; //type: uint32
        YLeaf down_nbr_down_reason; //type: uint32
        class GrPeer; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress> > down_nbr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface> > down_nbr_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public Entity
{
    public:
        GrPeer();
        ~GrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public Entity
{
    public:
        DownNbrInterface();
        ~DownNbrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: LdpAfIdEnum
        YLeaf interface_handle; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public Entity
{
    public:
        DownNbrAddress();
        ~DownNbrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities : public Entity
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

        class Capability; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities::Capability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities::Capability> > capability;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities


class MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities::Capability : public Entity
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

        YLeaf capability_type; //type: int32
        YLeaf capability_owner; //type: string
        class Capability_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities::Capability::Capability_

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities::Capability::Capability_> capability;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities::Capability


class MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities::Capability::Capability_ : public Entity
{
    public:
        Capability_();
        ~Capability_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Capabilities::Capability::Capability_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf_; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_
        class Common; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common> common;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_> vrf;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Summary


class MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Vrf_


class MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common : public Entity
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

        YLeaf address_families; //type: LdpAfEnum
        YLeaf number_of_ipv4af; //type: uint32
        YLeaf number_of_ipv6af; //type: uint32
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_nsr_synced_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf number_of_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv6_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv6_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ipv6_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        YLeaf number_of_bindings_ipv4; //type: uint32
        YLeaf number_of_bindings_ipv6; //type: uint32
        YLeaf number_of_local_bindings_ipv4; //type: uint32
        YLeaf number_of_local_bindings_ipv6; //type: uint32
        YLeaf number_of_remote_bindings_ipv4; //type: uint32
        YLeaf number_of_remote_bindings_ipv6; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Summary::Common


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs : public Entity
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

        class Af; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af> > af;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af : public Entity
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

        YLeaf af_name; //type: MplsLdpOperAfNameEnum
        class InterfaceSummary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery
        class BindingsSummaryAll; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll
        class Forwardings; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::ForwardingSummary> forwarding_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Igp> igp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Interfaces> interfaces;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::InterfaceSummary : public Entity
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
        YLeaf ldp_configured_attached_interface; //type: uint32
        YLeaf ldp_configured_te_interface; //type: uint32
        YLeaf forward_references; //type: uint32
        YLeaf auto_config_disabled; //type: uint32
        YLeaf auto_config; //type: uint32
        YLeaf auto_config_forward_reference_interfaces; //type: uint32

}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::InterfaceSummary


class MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings : public Entity
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

        class Binding; //type: MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings::Binding> > binding;
        
}; // MplsLdp::Nodes::Node::Vrfs::Vrf::Afs::Af::Bindings


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_6_ */

