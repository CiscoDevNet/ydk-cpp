#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_55_
#define _CISCO_IOS_XR_MPLS_TE_OPER_55_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_52.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_54.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
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
        class SignalledName; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList tunnel_id;
        ydk::YList protected_interface;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
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
        ydk::YLeaf is_forward_class_configured; //type: boolean
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
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList mesh_group_id;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xro; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

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
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte : public ydk::Entity
{
    public:
        AttributeSetP2mpte();
        ~AttributeSetP2mpte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity> affinity;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
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
        class RevertSchedule; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe : public ydk::Entity
{
    public:
        AttributeSetP2pTe();
        ~AttributeSetP2pTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2lSrPathSelection
        ydk::YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_selection_invalidation_action; //type: TePathInvalAction
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf path_selection_metric; //type: MplsTeMetric
        ydk::YLeaf is_path_selection_metric_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_margin; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        ydk::YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        ydk::YLeaf is_path_select_configured; //type: boolean
        ydk::YLeaf is_prepend_list_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging
        class PrependList; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList> prepend_list;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList : public ydk::Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrependEntry; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry

        ydk::YList prepend_entry;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry : public ydk::Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAttributeSetSrPrepend
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf next_label; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::PathCalculationError : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::PathCalculationError


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::RemergeError : public ydk::Entity
{
    public:
        RemergeError();
        ~RemergeError();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::RemergeError


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::SignallingError : public ydk::Entity
{
    public:
        SignallingError();
        ~SignallingError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_node; //type: uint32
        ydk::YLeaf error; //type: uint8
        ydk::YLeaf sub_code; //type: uint16
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32
        ydk::YLeaf signalling_lsp_id; //type: uint16
        ydk::YLeaf error_message; //type: string
        ydk::YLeaf reverse_lsp; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ActivePathOption::SignallingError


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro : public ydk::Entity
{
    public:
        OutXro();
        ~OutXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::AsSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

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
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro : public ydk::Entity
{
    public:
        InXro();
        ~InXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::AsSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

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
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Tspec : public ydk::Entity
{
    public:
        Tspec();
        ~Tspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Tspec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericTspec : public ydk::Entity
{
    public:
        GenericTspec();
        ~GenericTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tspec_type; //type: TeMgmtGenericTspec
        class Otntspec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericTspec::Otntspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericTspec::Otntspec> otntspec;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericTspec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericTspec::Otntspec : public ydk::Entity
{
    public:
        Otntspec();
        ~Otntspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf nmc_or_tolerance; //type: uint16
        ydk::YLeaf nvc; //type: uint16
        ydk::YLeaf multiplier; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericTspec::Otntspec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Fspec : public ydk::Entity
{
    public:
        Fspec();
        ~Fspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Fspec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericFspec : public ydk::Entity
{
    public:
        GenericFspec();
        ~GenericFspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fspec_type; //type: TeMgmtGenericFspec
        class Otnfspec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericFspec::Otnfspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericFspec::Otnfspec> otnfspec;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericFspec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericFspec::Otnfspec : public ydk::Entity
{
    public:
        Otnfspec();
        ~Otnfspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf nmc_or_tolerance; //type: uint16
        ydk::YLeaf nvc; //type: uint16
        ydk::YLeaf multiplier; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GenericFspec::Otnfspec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric : public ydk::Entity
{
    public:
        NextHopAddressGeneric();
        ~NextHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric::TeAddr


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric : public ydk::Entity
{
    public:
        PreviousHopAddressGeneric();
        ~PreviousHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric::TeAddr


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric : public ydk::Entity
{
    public:
        IncomingAddressGeneric();
        ~IncomingAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric::TeAddr


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::S2lConvergence : public ydk::Entity
{
    public:
        S2lConvergence();
        ~S2lConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_in; //type: uint64
        ydk::YLeaf path_out; //type: uint64
        ydk::YLeaf resv_in; //type: uint64
        ydk::YLeaf resv_out; //type: uint64
        ydk::YLeaf label_rewrite; //type: uint64
        ydk::YLeaf tunnel_rewrite; //type: uint64
        ydk::YLeaf creation_time; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::S2lConvergence


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: MplsTeSoftPreemptionState
        ydk::YLeaf soft_preemption_timestamp; //type: uint32
        ydk::YLeaf soft_preemption_link; //type: string
        ydk::YLeaf preempting_link_address; //type: string
        ydk::YLeaf time_to_hard_preemption; //type: uint16
        ydk::YLeaf fr_rrewrite; //type: boolean
        ydk::YLeaf fr_rrewrite_tunnel_name; //type: string

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::SoftPreemption


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels : public ydk::Entity
{
    public:
        GmplsLabels();
        ~GmplsLabels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel : public ydk::Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Otn> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Otn


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathIngressLabel::Otn::BitMap


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel : public ydk::Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Otn> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Otn


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::PathEgressLabel::Otn::BitMap


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel : public ydk::Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Otn> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Otn


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvIngressLabel::Otn::BitMap


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Otn> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Otn


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::GmplsLabels::ResvEgressLabel::Otn::BitMap


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l : public ydk::Entity
{
    public:
        OtnS2l();
        ~OtnS2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Otn; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn
        class Aps; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Aps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Aps> aps;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incoming_controller; //type: string
        ydk::YLeaf incoming_controller_state; //type: TeControllerState
        ydk::YLeaf incoming_sub_controller; //type: string
        ydk::YLeaf incoming_sub_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_controller; //type: string
        ydk::YLeaf outgoing_controller_state; //type: TeControllerState
        ydk::YLeaf outgoing_sub_controller; //type: string
        ydk::YLeaf outgoing_sub_controller_state; //type: TeControllerState
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf outgoing_controller_ifhandle; //type: string
        ydk::YLeaf outgoing_sub_controller_ifhandle; //type: string
        ydk::YLeaf incoming_controller_ifhandle; //type: string
        ydk::YLeaf incoming_sub_controller_ifhandle; //type: string
        ydk::YLeaf gpid; //type: uint16
        class Bandwidth; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth
        class Labels; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels> labels;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexCbr


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFRes


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Bandwidth::OduFlexGfpFNonRes


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIngressLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel> path_egress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel> resv_ingress_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel> resv_egress_label;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel : public ydk::Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathIngressLabel::Otn_::BitMap


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel : public ydk::Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::PathEgressLabel::Otn_::BitMap


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel : public ydk::Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvIngressLabel::Otn_::BitMap


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel : public ydk::Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_type; //type: MplsTeMgmtGmplsLabel
        class Wdm; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm> wdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_> otn;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm : public ydk::Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_set; //type: boolean
        ydk::YLeaf grid; //type: GmplsUniMgmtWdmGrid
        ydk::YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCs
        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf channel; //type: int16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Wdm


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_ : public ydk::Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tpn; //type: uint16
        ydk::YLeaf bit_map_length; //type: uint16
        class BitMap; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap

        ydk::YList bit_map;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap : public ydk::Entity
{
    public:
        BitMap();
        ~BitMap();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Otn::Labels::ResvEgressLabel::Otn_::BitMap


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectionInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Aps::ProtectionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Aps::ProtectionInfo> protection_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Aps


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Aps::ProtectionInfo : public ydk::Entity
{
    public:
        ProtectionInfo();
        ~ProtectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf pbit; //type: boolean
        ydk::YLeaf nbit; //type: boolean
        ydk::YLeaf obit; //type: boolean
        ydk::YLeaf protect_type; //type: TeProtect
        ydk::YLeaf is_wtr_present; //type: boolean
        ydk::YLeaf wtr_timeout; //type: uint32
        ydk::YLeaf is_hopresent; //type: boolean
        ydk::YLeaf ho_timeout; //type: uint32
        ydk::YLeaf is_snc_mode_present; //type: boolean
        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::OtnS2l::Aps::ProtectionInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo : public ydk::Entity
{
    public:
        HeadEndBfdInfo();
        ~HeadEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf creation_time; //type: uint32
        ydk::YLeaf lspbfd_type; //type: TeVifBfd
        ydk::YLeaf is_redundant; //type: boolean
        ydk::YLeaf bfd_reverse_path_stale; //type: boolean
        class SessionInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::SessionInfo
        class DeletionHistory; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::DeletionHistory
        class BfdReversePathLabel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::SessionInfo> session_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::DeletionHistory> deletion_history;
        ydk::YList bfd_reverse_path_label;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::SessionInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::DeletionHistory : public ydk::Entity
{
    public:
        DeletionHistory();
        ~DeletionHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf deletion_time; //type: uint32
        ydk::YLeaf deletion_reason; //type: string
        ydk::YLeaf deletion_diagnostic_code; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::DeletionHistory


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel : public ydk::Entity
{
    public:
        BfdReversePathLabel();
        ~BfdReversePathLabel();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::HeadEndBfdInfo::BfdReversePathLabel


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::TailEndBfdInfo : public ydk::Entity
{
    public:
        TailEndBfdInfo();
        ~TailEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf min_interval; //type: uint32
        ydk::YLeaf min_interval_default; //type: boolean
        ydk::YLeaf multiplier; //type: uint8
        ydk::YLeaf multiplier_default; //type: boolean
        class SessionInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::TailEndBfdInfo::SessionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::TailEndBfdInfo::SessionInfo> session_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::TailEndBfdInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::TailEndBfdInfo::SessionInfo : public ydk::Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TeBfdLspSessionState
        ydk::YLeaf state_change_time; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::TailEndBfdInfo::SessionInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::SrlgCollection : public ydk::Entity
{
    public:
        SrlgCollection();
        ~SrlgCollection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_collect_type; //type: TeSrlgCollectRequest
        class DiscoveredSrlg; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::SrlgCollection::DiscoveredSrlg

        ydk::YList discovered_srlg;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::SrlgCollection


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::SrlgCollection::DiscoveredSrlg : public ydk::Entity
{
    public:
        DiscoveredSrlg();
        ~DiscoveredSrlg();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::SrlgCollection::DiscoveredSrlg


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2lExtendedId; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Association::S2lExtendedId

        ydk::YList s2l_extended_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Association


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Association::S2lExtendedId : public ydk::Entity
{
    public:
        S2lExtendedId();
        ~S2lExtendedId();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Association::S2lExtendedId


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Protection : public ydk::Entity
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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::Protection


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

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
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ReverseLspFec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ReverseTspec : public ydk::Entity
{
    public:
        ReverseTspec();
        ~ReverseTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf average_rate; //type: uint64
        ydk::YLeaf maximum_burst; //type: uint64
        ydk::YLeaf peak_rate; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::ReverseTspec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::FlexInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::FlexInfo::FlexFec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::LspWrapInfo : public ydk::Entity
{
    public:
        LspWrapInfo();
        ~LspWrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_wrap_protection_enable; //type: boolean
        ydk::YLeaf lsp_wrap_protection_label; //type: uint32
        ydk::YLeaf reverse_egress_interface; //type: string
        ydk::YLeaf reverse_lsp_label; //type: uint32
        ydk::YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapState

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::LspWrapInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::DiversityInfo : public ydk::Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diversity_type; //type: TePpDiversity

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::DiversityInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::AccumulatedPathMetrics : public ydk::Entity
{
    public:
        AccumulatedPathMetrics();
        ~AccumulatedPathMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_metric; //type: uint64
        ydk::YLeaf igp_metric; //type: uint64
        ydk::YLeaf delay_metric; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::AccumulatedPathMetrics


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::AccumulatedReversePathMetrics : public ydk::Entity
{
    public:
        AccumulatedReversePathMetrics();
        ~AccumulatedReversePathMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_metric; //type: uint64
        ydk::YLeaf igp_metric; //type: uint64
        ydk::YLeaf delay_metric; //type: uint64

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::AccumulatedReversePathMetrics


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::S2lReverseLspSubObj : public ydk::Entity
{
    public:
        S2lReverseLspSubObj();
        ~S2lReverseLspSubObj();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp::S2l::S2lReverseLspSubObj


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_55_ */

