#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_52_
#define _CISCO_IOS_XR_MPLS_TE_OPER_52_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_38.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_51.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::PathCalculationError : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::PathCalculationError


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::RemergeError : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::RemergeError


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::SignallingError : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOptionEntry::SignallingError


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

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
        class AttributeSet; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet
        class XroAttributeSet; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet
        class PathCalculationError; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::PathCalculationError
        class RemergeError; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::RemergeError
        class SignallingError; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::SignallingError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet> attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet> xro_attribute_set;
        ydk::YList path_calculation_error;
        ydk::YList remerge_error;
        ydk::YList signalling_error;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet : public ydk::Entity
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
        class AttributeSetUnion; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion : public ydk::Entity
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
        class AttributeSetPathOption; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2mpte; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2pTe; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe> attribute_set_p2p_te;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

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
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
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
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        ydk::YLeaf is_delay_limit_configured; //type: boolean
        ydk::YLeaf delay_limit; //type: uint32
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        ydk::YList tunnel_id;
        ydk::YList version_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
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
        class SignalledName; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList tunnel_id;
        ydk::YList protected_interface;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList mesh_group_id;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
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

        class Xro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
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
        class XroSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
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
        class Ipv4Subobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
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
        class Fec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
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
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity> affinity;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
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
        class RevertSchedule; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging
        class PrependList; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList> prepend_list;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList : public ydk::Entity
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

        class PrependEntry; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry

        ydk::YList prepend_entry;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet : public ydk::Entity
{
    public:
        XroAttributeSet();
        ~XroAttributeSet();

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
        class AttributeSetUnion; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion : public ydk::Entity
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
        class AttributeSetPathOption; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2mpte; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2pTe; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe> attribute_set_p2p_te;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

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
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
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
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        ydk::YLeaf is_delay_limit_configured; //type: boolean
        ydk::YLeaf delay_limit; //type: uint32
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        ydk::YList tunnel_id;
        ydk::YList version_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
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
        class SignalledName; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList tunnel_id;
        ydk::YList protected_interface;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList mesh_group_id;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
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

        class Xro; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
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
        class XroSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
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
        class Ipv4Subobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
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
        class Fec; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
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
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity> affinity;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
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
        class RevertSchedule; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging
        class PrependList; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList> prepend_list;
        ydk::YList tunnel_id;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList : public ydk::Entity
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

        class PrependEntry; //type: MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry

        ydk::YList prepend_entry;
        
}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::PathCalculationError : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::PathCalculationError


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::RemergeError : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::RemergeError


class MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::SignallingError : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::NniTunnels::NniTunnel::Destination::PathOption::SignallingError


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads : public ydk::Entity
{
    public:
        TunnelHeads();
        ~TunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelHead; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead

        ydk::YList tunnel_head;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead : public ydk::Entity
{
    public:
        TunnelHead();
        ~TunnelHead();

        bool has_data() const override;
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
        class Config; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config
        class TunnelCurrentLsp; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp
        class ReoptimizedP2mpLsp; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp
        class TunnelStandbyLsp; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp
        class ReoptimizedStandbyP2mpLsp; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2mpLsp
        class TunnelRestorationLsp; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp
        class DelayCleanPpLsp; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp
        class CleanedLsp; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp
        class P2pInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo
        class AutoCapacity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity
        class History; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::History
        class PathProtection; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection
        class AutoBackup; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup
        class AutoMesh; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh
        class AutoPcc; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc
        class PceDelegation; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation
        class SoftPreemption; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption
        class WdmUnitunnel; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel
        class TransportTunnelInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo
        class BfdInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo
        class OtnBidir; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir
        class Bidir; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir
        class XroAttributeSet; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::XroAttributeSet
        class TeTunnelConvergence; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence
        class FlexInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::FlexInfo
        class Destination; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp> tunnel_current_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedP2mpLsp> reoptimized_p2mp_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelStandbyLsp> tunnel_standby_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2mpLsp> reoptimized_standby_p2mp_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp> tunnel_restoration_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp> delay_clean_pp_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::CleanedLsp> cleaned_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::P2pInfo> p2p_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoCapacity> auto_capacity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoBackup> auto_backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoMesh> auto_mesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::AutoPcc> auto_pcc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::PceDelegation> pce_delegation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel> wdm_unitunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo> transport_tunnel_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::BfdInfo> bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::OtnBidir> otn_bidir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Bidir> bidir;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::XroAttributeSet> xro_attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence> te_tunnel_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::FlexInfo> flex_info;
        ydk::YList destination;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf is_p2mp; //type: boolean
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf interface_configured_bandwidth; //type: uint32
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf is_forward_class_configured; //type: boolean
        ydk::YLeaf backup_bandwidth; //type: uint32
        ydk::YLeaf backup_bandwidth_flags; //type: uint8
        ydk::YLeaf config_load_share; //type: uint32
        ydk::YLeaf payload_type; //type: uint16
        ydk::YLeaf is_in_config; //type: boolean
        ydk::YLeaf explicit_null_imposition; //type: boolean
        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf is_backup_tunnel; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf srlg_discovery; //type: boolean
        ydk::YLeaf path_protection_enabled; //type: boolean
        ydk::YLeaf hop_limit; //type: uint8
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf cost_limit_global; //type: uint32
        ydk::YLeaf delay_limit; //type: uint32
        ydk::YLeaf delay_limit_global; //type: uint32
        ydk::YLeaf path_invalidation_timeout_source; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action_source; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf soft_preempt; //type: boolean
        ydk::YLeaf disable_affinity_failure_reopt; //type: boolean
        ydk::YLeaf affinity_failure_reopt_timer; //type: uint32
        ydk::YLeaf segment_routing_path_selection; //type: TeS2lSrPathSelection
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity
        class BidirectionalConfig; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::BidirectionalConfig
        class BfdConfig; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::BfdConfig
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::PolicyClassEntry
        class AutorouteDestination; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::AutorouteDestination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::BidirectionalConfig> bidirectional_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::BfdConfig> bfd_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList autoroute_destination;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::BidirectionalConfig : public ydk::Entity
{
    public:
        BidirectionalConfig();
        ~BidirectionalConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_type; //type: uint16
        ydk::YLeaf association_id; //type: uint16
        ydk::YLeaf association_source; //type: string
        ydk::YLeaf association_global_id; //type: uint32
        ydk::YLeaf association_corouted; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::BidirectionalConfig


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_fast_detecting_enabled; //type: boolean
        ydk::YLeaf bfd_type; //type: TeVifBfd
        ydk::YLeaf min_interval; //type: uint32
        ydk::YLeaf min_interval_default; //type: boolean
        ydk::YLeaf multiplier; //type: uint8
        ydk::YLeaf multiplier_default; //type: boolean
        ydk::YLeaf bring_up_timeout; //type: uint16
        ydk::YLeaf bring_up_timeout_default; //type: boolean
        ydk::YLeaf dampening_initial_wait; //type: uint32
        ydk::YLeaf dampening_initial_wait_default; //type: boolean
        ydk::YLeaf dampening_max_wait; //type: uint32
        ydk::YLeaf dampening_max_wait_default; //type: boolean
        ydk::YLeaf dampening_secondary_wait; //type: uint32
        ydk::YLeaf dampening_secondary_wait_default; //type: boolean
        ydk::YLeaf periodic_lsp_ping_disabled; //type: boolean
        ydk::YLeaf periodic_lsp_ping_interval; //type: uint32
        ydk::YLeaf periodic_lsp_ping_interval_default; //type: boolean
        ydk::YLeaf bfd_session_down_action; //type: MplsTeBfdSessionDownAction1
        ydk::YLeaf bfd_session_down_reopt_timeout; //type: uint32
        ydk::YLeaf bfd_encap_mode; //type: TeVifBfdEncapMode
        ydk::YLeaf sbfd_target_id; //type: string

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::BfdConfig


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Logging : public ydk::Entity
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

        ydk::YLeaf all; //type: boolean
        ydk::YLeaf reoptimize; //type: boolean
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf reroute; //type: boolean
        ydk::YLeaf bandwidth_change; //type: boolean
        ydk::YLeaf switchover; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf path_calculation_failure; //type: boolean
        ydk::YLeaf reoptimization_attempt; //type: boolean
        ydk::YLeaf insufficient_bandwidth; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::Logging


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::PolicyClassEntry


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::AutorouteDestination : public ydk::Entity
{
    public:
        AutorouteDestination();
        ~AutorouteDestination();

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
        ydk::YLeaf prefix_length; //type: uint16

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::Config::AutorouteDestination


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp : public ydk::Entity
{
    public:
        TunnelCurrentLsp();
        ~TunnelCurrentLsp();

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
        class LspFec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec
        class S2l; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec> lsp_fec;
        ydk::YList s2l;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec : public ydk::Entity
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
        class FecDestinationInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::LspFec::FecDestinationInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l : public ydk::Entity
{
    public:
        S2l();
        ~S2l();

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
        ydk::YLeaf next_next_hop_address; //type: string
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
        class S2lFec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::S2lFec
        class ActivePathOption; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption
        class OutXro; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::OutXro
        class InXro; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::InXro
        class Tspec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::Tspec
        class GenericTspec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::GenericTspec
        class Fspec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::Fspec
        class GenericFspec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::GenericFspec
        class NextHopAddressGeneric; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::NextHopAddressGeneric
        class PreviousHopAddressGeneric; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::PreviousHopAddressGeneric
        class IncomingAddressGeneric; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::IncomingAddressGeneric
        class S2lConvergence; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::S2lConvergence
        class SoftPreemption; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::SoftPreemption
        class GmplsLabels; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::GmplsLabels
        class OtnS2l; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::OtnS2l
        class HeadEndBfdInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::HeadEndBfdInfo
        class TailEndBfdInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::TailEndBfdInfo
        class SrlgCollection; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::SrlgCollection
        class Association; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::Association
        class Protection; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::Protection
        class ReverseLspFec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ReverseLspFec
        class ReverseTspec; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ReverseTspec
        class FlexInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::FlexInfo
        class LspWrapInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::LspWrapInfo
        class DiversityInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::DiversityInfo
        class AccumulatedPathMetrics; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::AccumulatedPathMetrics
        class AccumulatedReversePathMetrics; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::AccumulatedReversePathMetrics
        class S2lReverseLspSubObj; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::S2lReverseLspSubObj
        class SharedRiskLinkGroup; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::SharedRiskLinkGroup
        class OutEro; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::OutEro
        class InEro; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::InEro
        class PathRro; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::PathRro
        class ResvRro; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ResvRro
        class PathAffinityArray; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::PathAffinityArray
        class ReverseEroIn; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ReverseEroIn
        class S2lSegmentRoutingPath; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::S2lSegmentRoutingPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::S2lFec> s2l_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption> active_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::OutXro> out_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::InXro> in_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::Tspec> tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::GenericTspec> generic_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::Fspec> fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::GenericFspec> generic_fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::NextHopAddressGeneric> next_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::PreviousHopAddressGeneric> previous_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::IncomingAddressGeneric> incoming_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::S2lConvergence> s2l_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::GmplsLabels> gmpls_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::OtnS2l> otn_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::HeadEndBfdInfo> head_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::TailEndBfdInfo> tail_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::SrlgCollection> srlg_collection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ReverseTspec> reverse_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::LspWrapInfo> lsp_wrap_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::DiversityInfo> diversity_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::AccumulatedPathMetrics> accumulated_path_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::AccumulatedReversePathMetrics> accumulated_reverse_path_metrics;
        ydk::YList s2l_reverse_lsp_sub_obj;
        ydk::YList shared_risk_link_group;
        ydk::YList out_ero;
        ydk::YList in_ero;
        ydk::YList path_rro;
        ydk::YList resv_rro;
        ydk::YList path_affinity_array;
        ydk::YList reverse_ero_in;
        ydk::YList s2l_segment_routing_path;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::S2lFec : public ydk::Entity
{
    public:
        S2lFec();
        ~S2lFec();

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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::S2lFec


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption : public ydk::Entity
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
        class AttributeSet; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet
        class XroAttributeSet; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::XroAttributeSet
        class PathCalculationError; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::PathCalculationError
        class RemergeError; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::RemergeError
        class SignallingError; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::SignallingError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet> attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::XroAttributeSet> xro_attribute_set;
        ydk::YList path_calculation_error;
        ydk::YList remerge_error;
        ydk::YList signalling_error;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet : public ydk::Entity
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
        class AttributeSetUnion; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion : public ydk::Entity
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
        class AttributeSetPathOption; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2mpte; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2pTe; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe> attribute_set_p2p_te;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

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
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
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
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        ydk::YLeaf is_delay_limit_configured; //type: boolean
        ydk::YLeaf delay_limit; //type: uint32
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        ydk::YList tunnel_id;
        ydk::YList version_info;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
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
        class SignalledName; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList tunnel_id;
        ydk::YList protected_interface;
        
}; // MplsTeStandby::P2pP2mpTunnel::TunnelHeads::TunnelHead::TunnelCurrentLsp::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_52_ */

