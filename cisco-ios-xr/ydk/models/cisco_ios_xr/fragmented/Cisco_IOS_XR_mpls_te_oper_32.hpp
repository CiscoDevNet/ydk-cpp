#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_32_
#define _CISCO_IOS_XR_MPLS_TE_OPER_32_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_31.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
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
        class Affinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId> > mesh_group_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId> > tunnel_id;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
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

        class Xro; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
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
        class XroSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
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
        class Ipv4Subobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
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
        class Fec; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
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
        class FecDestinationInfo; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public ydk::Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

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
        class Affinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity
        class TunnelId; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId> > tunnel_id;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
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
        class RevertSchedule; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe : public ydk::Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

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
        ydk::YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelection
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
        class Affinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList
        class TunnelId; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId> > tunnel_id;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public ydk::Entity
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

        class PrependEntry; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;
        
}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId : public ydk::Entity
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

}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId


class MplsTe::IgpAreaBriefs : public ydk::Entity
{
    public:
        IgpAreaBriefs();
        ~IgpAreaBriefs();

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

        class IgpAreaBrief; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief> > igp_area_brief;
        
}; // MplsTe::IgpAreaBriefs


class MplsTe::IgpAreaBriefs::IgpAreaBrief : public ydk::Entity
{
    public:
        IgpAreaBrief();
        ~IgpAreaBrief();

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

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf process_tag; //type: string
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf igp_system_id; //type: string
        ydk::YLeaf configured_te_router_id; //type: string
        ydk::YLeaf global_router_id; //type: string
        ydk::YLeaf globall_router_id_optical; //type: string
        ydk::YLeaf in_use_te_router_id; //type: string
        ydk::YLeaf is_connection_up; //type: boolean
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        class SecondaryRouterId; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId
        class Area; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId> > secondary_router_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area> > area;
        
}; // MplsTe::IgpAreaBriefs::IgpAreaBrief


class MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId : public ydk::Entity
{
    public:
        SecondaryRouterId();
        ~SecondaryRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_index; //type: uint32
        ydk::YLeaf area_number; //type: uint32
        ydk::YLeaf area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf is_config_ready; //type: boolean
        class ActiveData; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData> active_data;
        
}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData : public ydk::Entity
{
    public:
        ActiveData();
        ~ActiveData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interfaces_count; //type: uint32
        ydk::YLeaf link_idt_received; //type: boolean
        ydk::YLeaf topology_idt_received; //type: boolean
        ydk::YLeaf sr_strict; //type: boolean
        ydk::YLeaf p2p_heads_count; //type: uint32
        ydk::YLeaf p2p_autoroute_announced_count; //type: uint32
        ydk::YLeaf p2p_forwarding_adjacency_count; //type: uint32
        ydk::YLeaf p2mp_destination_count; //type: uint32
        ydk::YLeaf tunnel_loose_hops; //type: uint32
        class AreaStatistics; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics> area_statistics;
        
}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics : public ydk::Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_adjacency_request_messages; //type: uint32
        ydk::YLeaf area_adjacency_announce_messages; //type: uint32
        ydk::YLeaf area_flood_messages; //type: uint32
        ydk::YLeaf area_lsa_announce_messages; //type: uint32
        ydk::YLeaf area_lsa_fragment_announce_messages; //type: uint32
        ydk::YLeaf area_lsa_delete_messages; //type: uint32
        ydk::YLeaf area_lsa_fragment_delete_messages; //type: uint32
        ydk::YLeaf area_tunnel_announce_messages; //type: uint32

}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics


class MplsTe::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class TunnelFlexLsps; //type: MplsTe::Tunnels::TunnelFlexLsps
        class TunnelAutoBandwidths; //type: MplsTe::Tunnels::TunnelAutoBandwidths
        class Summary; //type: MplsTe::Tunnels::Summary
        class TunnelPathProtections; //type: MplsTe::Tunnels::TunnelPathProtections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps> tunnel_flex_lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths> tunnel_auto_bandwidths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections> tunnel_path_protections;
        
}; // MplsTe::Tunnels


class MplsTe::Tunnels::TunnelFlexLsps : public ydk::Entity
{
    public:
        TunnelFlexLsps();
        ~TunnelFlexLsps();

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

        class TunnelFlexLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp> > tunnel_flex_lsp;
        
}; // MplsTe::Tunnels::TunnelFlexLsps


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp : public ydk::Entity
{
    public:
        TunnelFlexLsp();
        ~TunnelFlexLsp();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf tun_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        class WorkingLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp
        class ProtectLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp> working_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp> protect_lsp;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

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

        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class FlexInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection
        class ReverseLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp
        class LspHop; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp> reverse_lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop> > lsp_hop;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class FlexFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection : public ydk::Entity
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

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

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

        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        class ReverseLspFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection> protection;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection : public ydk::Entity
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

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

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

        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class FlexInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection
        class ReverseLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp
        class LspHop; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp> reverse_lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop> > lsp_hop;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class FlexFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec : public ydk::Entity
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
        std::string get_absolute_path() const override;

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

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection : public ydk::Entity
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

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

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

        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        class ReverseLspFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection> protection;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection : public ydk::Entity
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

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelAutoBandwidths : public ydk::Entity
{
    public:
        TunnelAutoBandwidths();
        ~TunnelAutoBandwidths();

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

        class TunnelAutoBandwidth; //type: MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth> > tunnel_auto_bandwidth;
        
}; // MplsTe::Tunnels::TunnelAutoBandwidths


class MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth : public ydk::Entity
{
    public:
        TunnelAutoBandwidth();
        ~TunnelAutoBandwidth();

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
        ydk::YLeaf tunnel_name_xr; //type: string
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf bandwidth_applications; //type: uint32
        ydk::YLeaf last_bandwidth_applied; //type: uint32
        ydk::YLeaf tunnel_requested_bandwidth; //type: uint32
        ydk::YLeaf signalled_bandwidth; //type: uint32
        ydk::YLeaf highest_bandwidth; //type: uint32
        ydk::YLeaf last_sample_bandwidth; //type: uint32
        ydk::YLeaf samples_collected; //type: uint32
        ydk::YLeaf time_left_application; //type: uint32
        class AutoBandwidthStatus; //type: MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus> auto_bandwidth_status;
        
}; // MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth


class MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus : public ydk::Entity
{
    public:
        AutoBandwidthStatus();
        ~AutoBandwidthStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_enabled; //type: boolean
        ydk::YLeaf reactivation_time; //type: uint32

}; // MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus


class MplsTe::Tunnels::Summary : public ydk::Entity
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

        ydk::YLeaf pcalc_tie_breaker_type; //type: TePathSelectionTiebreaker
        ydk::YLeaf pcalc_tiebreaker; //type: uint32
        ydk::YLeaf tiebreaker_qualifier; //type: MplsTeMetricQualifier
        ydk::YLeaf te_process_status; //type: MplsTeTunnelsProcessStatus
        ydk::YLeaf is_rsvp_process_enabled; //type: boolean
        ydk::YLeaf is_forwarding_enabled; //type: boolean
        ydk::YLeaf activated_heads; //type: uint32
        ydk::YLeaf deactivated_heads; //type: uint32
        ydk::YLeaf recovered_heads; //type: uint32
        ydk::YLeaf is_periodic_reoptimization_on; //type: boolean
        ydk::YLeaf reoptimization_period; //type: uint32
        ydk::YLeaf next_reoptimization_timer; //type: uint32
        ydk::YLeaf auto_bandwidth_tunnels; //type: uint32
        ydk::YLeaf auto_bandwidth_collection_period; //type: uint32
        ydk::YLeaf is_promotion_on; //type: boolean
        ydk::YLeaf promotion_period; //type: uint32
        ydk::YLeaf next_promotion_timer; //type: uint32
        ydk::YLeaf tunnel_check_period; //type: uint32
        ydk::YLeaf next_check_time; //type: uint32
        ydk::YLeaf tunnel_verify_period; //type: uint32
        ydk::YLeaf next_verify_timer; //type: uint32
        ydk::YLeaf frr_head_tunnels; //type: uint32
        ydk::YLeaf protected_head_tunnels; //type: uint32
        ydk::YLeaf rerouted_head_tunnels; //type: uint32
        ydk::YLeaf frr_mid_point_tunnels; //type: uint32
        ydk::YLeaf protected_mid_point_tunnels; //type: uint32
        ydk::YLeaf rerouted_mid_point_tunnels; //type: uint32
        ydk::YLeaf link_protected_tunnels; //type: uint32
        ydk::YLeaf node_protected_tunnels; //type: uint32
        ydk::YLeaf bw_protected_tunnels; //type: uint32
        ydk::YLeaf frr_p2p_head_tunnels; //type: uint32
        ydk::YLeaf protected_p2p_head_tunnels; //type: uint32
        ydk::YLeaf rerouted_p2p_head_tunnels; //type: uint32
        ydk::YLeaf frr_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf protected_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf rerouted_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf link_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf node_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf bw_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf backup_tunnels; //type: uint32
        ydk::YLeaf backups_assigned; //type: uint32
        ydk::YLeaf frr_protected_interfaces; //type: uint32
        ydk::YLeaf rerouted_interfaces; //type: uint32
        ydk::YLeaf p2p_head_tunnels; //type: uint32
        ydk::YLeaf up_p2p_head_tunnels; //type: uint32
        ydk::YLeaf dynamic_up_p2p_head_tunnels; //type: uint32
        ydk::YLeaf frr_config_p2p_head_tunnels; //type: uint32
        ydk::YLeaf p2p_head_destinations; //type: uint32
        ydk::YLeaf p2p_head_destinations_up; //type: uint32
        ydk::YLeaf bw_protected_p2p_s2_ls; //type: uint32
        ydk::YLeaf link_protected_p2p_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf recovering_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf frr_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf protected_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf frr_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf protected_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf p2p_tail_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_tail_s2_ls; //type: uint32
        ydk::YLeaf p2p_tail_tunnels; //type: uint32
        ydk::YLeaf path_protect_configured_tunnels; //type: uint16
        ydk::YLeaf path_protect_configured_tunnels_up; //type: uint16
        ydk::YLeaf path_protect_configured_tunnels_standby_up; //type: uint16
        ydk::YLeaf link_diverse_paths; //type: uint16
        ydk::YLeaf node_diverse_paths; //type: uint16
        ydk::YLeaf link_and_node_diverse_paths; //type: uint16
        ydk::YLeaf user_defined_paths; //type: uint16
        ydk::YLeaf p2mp_head_tunnels; //type: uint32
        ydk::YLeaf up_p2mp_head_tunnels; //type: uint32
        ydk::YLeaf frr_config_p2mp_head_tunnels; //type: uint32
        ydk::YLeaf p2mp_head_destinations; //type: uint32
        ydk::YLeaf up_p2mp_head_destinations; //type: uint32
        ydk::YLeaf bw_protected_p2mp_s2_ls; //type: uint32
        ydk::YLeaf link_protected_p2mp_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf frr_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf protected_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf frr_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf protected_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf p2mp_tail_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_tail_s2_ls; //type: uint32
        ydk::YLeaf bidir_head_tunnels; //type: uint32
        ydk::YLeaf bidir_head_tunnels_up; //type: uint32
        ydk::YLeaf bidir_head_tunnels_associated; //type: uint32
        ydk::YLeaf bidir_head_tunnels_corouted; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_up; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_mid_tunnels; //type: uint32
        ydk::YLeaf bidir_mid_tunnels_up; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_up; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_corouted; //type: uint32
        class AutobackupSummary; //type: MplsTe::Tunnels::Summary::AutobackupSummary
        class AutoMeshSummary; //type: MplsTe::Tunnels::Summary::AutoMeshSummary
        class AutoMeshOneHopSummary; //type: MplsTe::Tunnels::Summary::AutoMeshOneHopSummary
        class GmplsUniSummary; //type: MplsTe::Tunnels::Summary::GmplsUniSummary
        class GmplsNniSummary; //type: MplsTe::Tunnels::Summary::GmplsNniSummary
        class CurrentTunnelConvergenceSummary; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary
        class LastTunnelConvergenceSummary; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary
        class AutoTunServerSummary; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutobackupSummary> autobackup_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoMeshSummary> auto_mesh_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoMeshOneHopSummary> auto_mesh_one_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::GmplsUniSummary> gmpls_uni_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::GmplsNniSummary> gmpls_nni_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary> current_tunnel_convergence_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary> last_tunnel_convergence_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary> auto_tun_server_summary;
        
}; // MplsTe::Tunnels::Summary


class MplsTe::Tunnels::Summary::AutobackupSummary : public ydk::Entity
{
    public:
        AutobackupSummary();
        ~AutobackupSummary();

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

        ydk::YLeaf autobackups; //type: uint32
        ydk::YLeaf up_autobackups; //type: uint32
        ydk::YLeaf down_autobackups; //type: uint32
        ydk::YLeaf unused_autobackups; //type: uint32
        ydk::YLeaf next_hop_autobackups; //type: uint32
        ydk::YLeaf next_next_hop_autobackups; //type: uint32
        ydk::YLeaf srlg_strict_autobackups; //type: uint32
        ydk::YLeaf srlg_preferred_autobackups; //type: uint32
        ydk::YLeaf srlg_weighted_autobackups; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_s2_ls; //type: uint32

}; // MplsTe::Tunnels::Summary::AutobackupSummary


class MplsTe::Tunnels::Summary::AutoMeshSummary : public ydk::Entity
{
    public:
        AutoMeshSummary();
        ~AutoMeshSummary();

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

        ydk::YLeaf auto_mesh_tunnels; //type: uint32
        ydk::YLeaf up_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf down_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf frr_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf auto_mesh_groups; //type: uint32
        ydk::YLeaf auto_mesh_destinations; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoMeshSummary


class MplsTe::Tunnels::Summary::AutoMeshOneHopSummary : public ydk::Entity
{
    public:
        AutoMeshOneHopSummary();
        ~AutoMeshOneHopSummary();

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

        ydk::YLeaf auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf up_auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf down_auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf frr_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf auto_mesh_one_hop_groups; //type: uint32
        ydk::YLeaf auto_mesh_one_hop_destinations; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoMeshOneHopSummary


class MplsTe::Tunnels::Summary::GmplsUniSummary : public ydk::Entity
{
    public:
        GmplsUniSummary();
        ~GmplsUniSummary();

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

        ydk::YLeaf heads_up; //type: uint32
        ydk::YLeaf heads_down; //type: uint32
        ydk::YLeaf tails_up; //type: uint32
        ydk::YLeaf tails_down; //type: uint32

}; // MplsTe::Tunnels::Summary::GmplsUniSummary


class MplsTe::Tunnels::Summary::GmplsNniSummary : public ydk::Entity
{
    public:
        GmplsNniSummary();
        ~GmplsNniSummary();

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

        ydk::YLeaf heads_up; //type: uint32
        ydk::YLeaf heads_down; //type: uint32
        ydk::YLeaf mids_up; //type: uint32
        ydk::YLeaf mids_down; //type: uint32
        ydk::YLeaf tails_up; //type: uint32
        ydk::YLeaf tails_down; //type: uint32

}; // MplsTe::Tunnels::Summary::GmplsNniSummary


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary : public ydk::Entity
{
    public:
        CurrentTunnelConvergenceSummary();
        ~CurrentTunnelConvergenceSummary();

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

        ydk::YLeaf tunnel_frr_active_count; //type: uint32
        ydk::YLeaf tunnel_frr_total_count; //type: uint32
        ydk::YLeaf tunnel_converged_count; //type: uint32
        ydk::YLeaf tunnel_total_convergence_complete_time; //type: uint64
        class TablePathOut; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        
}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut : public ydk::Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn : public ydk::Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite : public ydk::Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc : public ydk::Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite : public ydk::Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger : public ydk::Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary : public ydk::Entity
{
    public:
        LastTunnelConvergenceSummary();
        ~LastTunnelConvergenceSummary();

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

        ydk::YLeaf tunnel_frr_active_count; //type: uint32
        ydk::YLeaf tunnel_frr_total_count; //type: uint32
        ydk::YLeaf tunnel_converged_count; //type: uint32
        ydk::YLeaf tunnel_total_convergence_complete_time; //type: uint64
        class TablePathOut; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        
}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut : public ydk::Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn : public ydk::Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite : public ydk::Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc : public ydk::Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite : public ydk::Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger : public ydk::Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger


class MplsTe::Tunnels::Summary::AutoTunServerSummary : public ydk::Entity
{
    public:
        AutoTunServerSummary();
        ~AutoTunServerSummary();

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

        class TotalAutoP2MpTunnels; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels
        class TotalAutoP2PTunnels; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels
        class ClientsSummary; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels> total_auto_p2mp_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels> total_auto_p2p_tunnels;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary> > clients_summary;
        
}; // MplsTe::Tunnels::Summary::AutoTunServerSummary


class MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels : public ydk::Entity
{
    public:
        TotalAutoP2MpTunnels();
        ~TotalAutoP2MpTunnels();

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

        ydk::YLeaf auto_p2mp_tunnel; //type: uint32
        ydk::YLeaf auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf down_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf frr_auto_p2mp_tunnels; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels


class MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels : public ydk::Entity
{
    public:
        TotalAutoP2PTunnels();
        ~TotalAutoP2PTunnels();

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

        ydk::YLeaf auto_p2p_tunnel; //type: uint32
        ydk::YLeaf up_auto_p2p_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2p_tunnels; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary : public ydk::Entity
{
    public:
        ClientsSummary();
        ~ClientsSummary();

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

        ydk::YLeaf protocol_type; //type: TeServTunClient
        ydk::YLeaf client_instance_name; //type: string
        ydk::YLeaf client_id; //type: uint32
        class P2MpInfo; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo
        class P2PInfo; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo> p2mp_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo> p2p_info;
        
}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo : public ydk::Entity
{
    public:
        P2MpInfo();
        ~P2MpInfo();

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

        ydk::YLeaf auto_p2mp_tunnel; //type: uint32
        ydk::YLeaf auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf down_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf frr_auto_p2mp_tunnels; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo : public ydk::Entity
{
    public:
        P2PInfo();
        ~P2PInfo();

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

        ydk::YLeaf auto_p2p_tunnel; //type: uint32
        ydk::YLeaf up_auto_p2p_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2p_tunnels; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo


class MplsTe::Tunnels::TunnelPathProtections : public ydk::Entity
{
    public:
        TunnelPathProtections();
        ~TunnelPathProtections();

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

        class TunnelPathProtection; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection> > tunnel_path_protection;
        
}; // MplsTe::Tunnels::TunnelPathProtections


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection : public ydk::Entity
{
    public:
        TunnelPathProtection();
        ~TunnelPathProtection();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        class PathProtection; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection
        class CurrentLsp; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp
        class StandbyLsp; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp> current_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp> standby_lsp;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection : public ydk::Entity
{
    public:
        PathProtection();
        ~PathProtection();

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

        ydk::YLeaf time_of_switchover_sec; //type: uint32
        ydk::YLeaf switchover_total; //type: uint16
        ydk::YLeaf switchover_ready; //type: uint16
        ydk::YLeaf standby_reoptimized_number; //type: uint16
        ydk::YLeaf switchover_reason; //type: uint16
        ydk::YLeaf diversity_type; //type: TePpDiversity
        ydk::YLeaf is_path_protect_configured; //type: boolean
        ydk::YLeaf path_protection_protected_by_id; //type: uint32
        ydk::YLeaf valid_path_protection_path_option_exists; //type: boolean
        ydk::YLeaf is_path_protect_switch_over_underway; //type: boolean
        ydk::YLeaf reoptimization_time_remaining; //type: uint32
        class Switchover; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover> switchover;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover : public ydk::Entity
{
    public:
        Switchover();
        ~Switchover();

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

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcause

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp : public ydk::Entity
{
    public:
        CurrentLsp();
        ~CurrentLsp();

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

        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class SrlspOutgoingInfo; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop> > lsp_hop;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo : public ydk::Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

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

        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp : public ydk::Entity
{
    public:
        StandbyLsp();
        ~StandbyLsp();

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

        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class SrlspOutgoingInfo; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop> > lsp_hop;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo : public ydk::Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

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

        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

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

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject


class MplsTe::MaximumTunnels : public ydk::Entity
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

}; // MplsTe::MaximumTunnels


class MplsTe::PathProtection : public ydk::Entity
{
    public:
        PathProtection();
        ~PathProtection();

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

        class SwitchoverLog; //type: MplsTe::PathProtection::SwitchoverLog

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection::SwitchoverLog> switchover_log;
        
}; // MplsTe::PathProtection


class MplsTe::PathProtection::SwitchoverLog : public ydk::Entity
{
    public:
        SwitchoverLog();
        ~SwitchoverLog();

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

        ydk::YLeaf path_protection_switchovers; //type: uint32
        ydk::YLeaf maximum_switchover_millisec; //type: uint32
        ydk::YLeaf average_switchover_millisec; //type: uint32
        class PathProtectionSwitchoverEntry; //type: MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry> > path_protection_switchover_entry;
        
}; // MplsTe::PathProtection::SwitchoverLog


class MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry : public ydk::Entity
{
    public:
        PathProtectionSwitchoverEntry();
        ~PathProtectionSwitchoverEntry();

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

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcause

}; // MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry


class MplsTe::FibNextHopLabelRoutes : public ydk::Entity
{
    public:
        FibNextHopLabelRoutes();
        ~FibNextHopLabelRoutes();

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

        class FibNextHopLabelRoute; //type: MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute> > fib_next_hop_label_route;
        
}; // MplsTe::FibNextHopLabelRoutes


class MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute : public ydk::Entity
{
    public:
        FibNextHopLabelRoute();
        ~FibNextHopLabelRoute();

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

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf prefix_addr; //type: string
        ydk::YLeaf create_time; //type: uint32
        ydk::YLeaf last_used_time; //type: uint32
        ydk::YLeaf last_update_time; //type: uint32
        ydk::YLeaf expire_time; //type: uint32
        ydk::YLeaf is_registered; //type: boolean
        ydk::YLeaf is_notified; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf route_version; //type: uint64
        class TargetAddress; //type: MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress
        class NextHopPath; //type: MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress> target_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath> > next_hop_path;
        
}; // MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute


class MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeTargetAddr
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress


class MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath : public ydk::Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf backup_path_id; //type: uint32
        ydk::YLeaf pure_backup; //type: boolean
        class LabelStack; //type: MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack> > label_stack;
        
}; // MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath


class MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

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

}; // MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack


class MplsTe::P2Mp : public ydk::Entity
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

        class TunnelRewrites; //type: MplsTe::P2Mp::TunnelRewrites
        class CollaboratorTimers; //type: MplsTe::P2Mp::CollaboratorTimers
        class ForwardingOutputLabelRewrites; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites> tunnel_rewrites;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites> forwarding_output_label_rewrites;
        
}; // MplsTe::P2Mp


class MplsTe::P2Mp::TunnelRewrites : public ydk::Entity
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

        class TunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite> > tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite : public ydk::Entity
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
        class SuccessfulRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite> successful_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite> pending_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite : public ydk::Entity
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
        class TunnelRewrite_; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_ : public ydk::Entity
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
        class P2PTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite : public ydk::Entity
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
        class PrimaryS2L; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public ydk::Entity
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
        class SrLabelStack; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack : public ydk::Entity
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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public ydk::Entity
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
        class SrLabelStack; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack> > sr_label_stack;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack : public ydk::Entity
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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite : public ydk::Entity
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

}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite : public ydk::Entity
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
        class TunnelRewrite_; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_ : public ydk::Entity
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
        class P2PTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite : public ydk::Entity
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
        class PrimaryS2L; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        
}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_32_ */

