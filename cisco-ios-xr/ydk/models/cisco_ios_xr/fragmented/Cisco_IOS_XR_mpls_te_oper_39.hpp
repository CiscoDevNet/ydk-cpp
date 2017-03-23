#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_39_
#define _CISCO_IOS_XR_MPLS_TE_OPER_39_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_29.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_30.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_38.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf snc_mode; //type: TeApsSncModeEnum
        YLeaf tcm_id; //type: uint32
        YLeaf protection_type; //type: TeProtectEnum
        YLeaf protection_mode; //type: TePnrRevertOptionsEnum
        YLeaf wait_to_restore_time; //type: uint32
        YLeaf hold_off_time; //type: uint32
        YLeaf path_prot_profile_type; //type: TePathProtProfileEnum
        YLeaf restoration_style; //type: TeRestorationStyleEnum

        class RevertSchedule; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf schedulename; //type: string
        YLeaf schedule_date; //type: uint32
        YLeaf schedule_frequency; //type: TeSchFreqEnum
        YLeaf duration; //type: uint32
        YLeaf max_tries; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe : public Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_affinity_configured; //type: boolean
        YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelectionEnum
        YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_selection_invalidation_action; //type: TePathInvalActionEnum
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf path_selection_metric; //type: MplsTeMetricEnum
        YLeaf is_path_selection_metric_configured; //type: boolean
        YLeaf path_selection_segment_routing_margin; //type: uint32
        YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        YLeaf is_path_select_configured; //type: boolean
        YLeaf is_prepend_list_configured; //type: boolean
        YLeaf is_pce_configured; //type: boolean
        YLeaf is_pce_disj_source_configured; //type: boolean
        YLeaf is_pce_disj_type_configured; //type: boolean
        YLeaf is_pce_disj_group_id_configured; //type: boolean
        YLeaf pcedp_source_address; //type: uint32
        YLeaf pcedp_type; //type: TePceDisjointEnum
        YLeaf pcedp_group_id; //type: uint32
        YLeaf is_pceb_dj_source_configured; //type: boolean
        YLeaf is_pcebd_group_id_configured; //type: boolean
        YLeaf pcebd_source_address; //type: uint32
        YLeaf pcebd_group_id; //type: uint32
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrependEntry; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeAttributeSetSrPrependEnum
        YLeaf index_; //type: uint32
        YLeaf next_label; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::PathCalculationError : public Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error_message; //type: string
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::RemergeError : public Entity
{
    public:
        RemergeError();
        ~RemergeError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error_message; //type: string
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::RemergeError


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::SignallingError : public Entity
{
    public:
        SignallingError();
        ~SignallingError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error_node; //type: uint32
        YLeaf error; //type: uint8
        YLeaf sub_code; //type: uint16
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32
        YLeaf signalling_lsp_id; //type: uint16
        YLeaf error_message; //type: string
        YLeaf reverse_lsp; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ActivePathOption::SignallingError


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro : public Entity
{
    public:
        OutXro();
        ~OutXro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mutual_diversity_flag; //type: boolean

        class XroSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject> > xro_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject : public Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeXroSubobjEnum

        class Ipv4Subobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::Ipv4Subobject : public Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::Ipv6Subobject : public Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject : public Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_router_id; //type: string
        YLeaf interface_id; //type: uint32
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::AsSubobject : public Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_number; //type: uint16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::AsSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::SrlgSubobject : public Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_id; //type: uint32
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject : public Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ignore_lsp_id; //type: boolean
        YLeaf processing_node_exception; //type: boolean
        YLeaf penultimate_node_exception; //type: boolean
        YLeaf destination_node_exception; //type: boolean
        YLeaf exclusion_type; //type: TeXroExclusionEnum

        class Fec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string

        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro : public Entity
{
    public:
        InXro();
        ~InXro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mutual_diversity_flag; //type: boolean

        class XroSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject> > xro_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject : public Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeXroSubobjEnum

        class Ipv4Subobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::Ipv4Subobject : public Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::Ipv6Subobject : public Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::UnnumberedSubobject : public Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_router_id; //type: string
        YLeaf interface_id; //type: uint32
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::AsSubobject : public Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_number; //type: uint16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::AsSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::SrlgSubobject : public Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_id; //type: uint32
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject : public Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ignore_lsp_id; //type: boolean
        YLeaf processing_node_exception; //type: boolean
        YLeaf penultimate_node_exception; //type: boolean
        YLeaf destination_node_exception; //type: boolean
        YLeaf exclusion_type; //type: TeXroExclusionEnum

        class Fec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string

        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Tspec : public Entity
{
    public:
        Tspec();
        ~Tspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf average_rate; //type: uint64
        YLeaf maximum_burst; //type: uint64
        YLeaf peak_rate; //type: uint64



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Tspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec : public Entity
{
    public:
        GenericTspec();
        ~GenericTspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tspec_type; //type: TeMgmtGenericTspecEnum

        class Otntspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec::Otntspec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec::Otntspec> otntspec;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec::Otntspec : public Entity
{
    public:
        Otntspec();
        ~Otntspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signal_type; //type: uint8
        YLeaf nmc_or_tolerance; //type: uint16
        YLeaf nvc; //type: uint16
        YLeaf multiplier; //type: uint16
        YLeaf bit_rate; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericTspec::Otntspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Fspec : public Entity
{
    public:
        Fspec();
        ~Fspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf average_rate; //type: uint64
        YLeaf maximum_burst; //type: uint64
        YLeaf peak_rate; //type: uint64



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Fspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec : public Entity
{
    public:
        GenericFspec();
        ~GenericFspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fspec_type; //type: TeMgmtGenericFspecEnum

        class Otnfspec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec::Otnfspec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec::Otnfspec> otnfspec;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec::Otnfspec : public Entity
{
    public:
        Otnfspec();
        ~Otnfspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signal_type; //type: uint8
        YLeaf nmc_or_tolerance; //type: uint16
        YLeaf nvc; //type: uint16
        YLeaf multiplier; //type: uint16
        YLeaf bit_rate; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GenericFspec::Otnfspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric : public Entity
{
    public:
        NextHopAddressGeneric();
        ~NextHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr> te_addr;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr : public Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeAddrEnum
        YLeaf ipv4_address; //type: string

        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf interface_index; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric : public Entity
{
    public:
        PreviousHopAddressGeneric();
        ~PreviousHopAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr> te_addr;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr : public Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeAddrEnum
        YLeaf ipv4_address; //type: string

        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf interface_index; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric : public Entity
{
    public:
        IncomingAddressGeneric();
        ~IncomingAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr> te_addr;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr : public Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeAddrEnum
        YLeaf ipv4_address; //type: string

        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf interface_index; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LConvergence : public Entity
{
    public:
        S2LConvergence();
        ~S2LConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_in; //type: uint64
        YLeaf path_out; //type: uint64
        YLeaf resv_in; //type: uint64
        YLeaf resv_out; //type: uint64
        YLeaf label_rewrite; //type: uint64
        YLeaf tunnel_rewrite; //type: uint64
        YLeaf creation_time; //type: uint64



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LConvergence


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SoftPreemption : public Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: MplsTeSoftPreemptionStateEnum
        YLeaf soft_preemption_timestamp; //type: uint32
        YLeaf soft_preemption_link; //type: string
        YLeaf preempting_link_address; //type: string
        YLeaf time_to_hard_preemption; //type: uint16
        YLeaf fr_rrewrite; //type: boolean
        YLeaf fr_rrewrite_tunnel_name; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SoftPreemption


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels : public Entity
{
    public:
        GmplsLabels();
        ~GmplsLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel> path_egress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel> resv_egress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel> resv_ingress_label;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel : public Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_type; //type: MplsTeMgmtGmplsLabelEnum

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Wdm : public Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_set; //type: boolean
        YLeaf grid; //type: GmplsUniMgmtWdmGridEnum
        YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCsEnum
        YLeaf identifier; //type: uint16
        YLeaf channel; //type: int16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tpn; //type: uint16
        YLeaf bit_map_length; //type: uint16
        YLeafList bit_map; //type: list of  uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathIngressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel : public Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_type; //type: MplsTeMgmtGmplsLabelEnum

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Wdm : public Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_set; //type: boolean
        YLeaf grid; //type: GmplsUniMgmtWdmGridEnum
        YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCsEnum
        YLeaf identifier; //type: uint16
        YLeaf channel; //type: int16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tpn; //type: uint16
        YLeaf bit_map_length; //type: uint16
        YLeafList bit_map; //type: list of  uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::PathEgressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel : public Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_type; //type: MplsTeMgmtGmplsLabelEnum

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm : public Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_set; //type: boolean
        YLeaf grid; //type: GmplsUniMgmtWdmGridEnum
        YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCsEnum
        YLeaf identifier; //type: uint16
        YLeaf channel; //type: int16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tpn; //type: uint16
        YLeaf bit_map_length; //type: uint16
        YLeafList bit_map; //type: list of  uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvIngressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel : public Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_type; //type: MplsTeMgmtGmplsLabelEnum

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm : public Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_set; //type: boolean
        YLeaf grid; //type: GmplsUniMgmtWdmGridEnum
        YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCsEnum
        YLeaf identifier; //type: uint16
        YLeaf channel; //type: int16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tpn; //type: uint16
        YLeaf bit_map_length; //type: uint16
        YLeafList bit_map; //type: list of  uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::GmplsLabels::ResvEgressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L : public Entity
{
    public:
        OtnS2L();
        ~OtnS2L();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn
        class Aps; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps> aps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn> otn;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf incoming_controller; //type: string
        YLeaf incoming_controller_state; //type: TeControllerStateEnum
        YLeaf incoming_sub_controller; //type: string
        YLeaf incoming_sub_controller_state; //type: TeControllerStateEnum
        YLeaf outgoing_controller; //type: string
        YLeaf outgoing_controller_state; //type: TeControllerStateEnum
        YLeaf outgoing_sub_controller; //type: string
        YLeaf outgoing_sub_controller_state; //type: TeControllerStateEnum
        YLeaf cross_connect_id; //type: uint32
        YLeaf is_connected; //type: boolean
        YLeaf uptime; //type: uint32
        YLeaf outgoing_controller_ifhandle; //type: string
        YLeaf outgoing_sub_controller_ifhandle; //type: string
        YLeaf incoming_controller_ifhandle; //type: string
        YLeaf incoming_sub_controller_ifhandle; //type: string
        YLeaf gpid; //type: uint16

        class Bandwidth; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth
        class Labels; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels> labels;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf odu_level; //type: TeOduLevelEnum

        class OduFlexCbr; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes> odu_flex_gfp_f_res;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr : public Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bit_rate; //type: uint32
        YLeaf tolerance; //type: uint16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes : public Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bit_rate; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes : public Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bit_rate; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels : public Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel> path_egress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel> resv_egress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel> resv_ingress_label;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel : public Entity
{
    public:
        PathIngressLabel();
        ~PathIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_type; //type: MplsTeMgmtGmplsLabelEnum

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm : public Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_set; //type: boolean
        YLeaf grid; //type: GmplsUniMgmtWdmGridEnum
        YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCsEnum
        YLeaf identifier; //type: uint16
        YLeaf channel; //type: int16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_ : public Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tpn; //type: uint16
        YLeaf bit_map_length; //type: uint16
        YLeafList bit_map; //type: list of  uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel : public Entity
{
    public:
        PathEgressLabel();
        ~PathEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_type; //type: MplsTeMgmtGmplsLabelEnum

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm : public Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_set; //type: boolean
        YLeaf grid; //type: GmplsUniMgmtWdmGridEnum
        YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCsEnum
        YLeaf identifier; //type: uint16
        YLeaf channel; //type: int16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_ : public Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tpn; //type: uint16
        YLeaf bit_map_length; //type: uint16
        YLeafList bit_map; //type: list of  uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel : public Entity
{
    public:
        ResvIngressLabel();
        ~ResvIngressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_type; //type: MplsTeMgmtGmplsLabelEnum

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm : public Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_set; //type: boolean
        YLeaf grid; //type: GmplsUniMgmtWdmGridEnum
        YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCsEnum
        YLeaf identifier; //type: uint16
        YLeaf channel; //type: int16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_ : public Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tpn; //type: uint16
        YLeaf bit_map_length; //type: uint16
        YLeafList bit_map; //type: list of  uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel : public Entity
{
    public:
        ResvEgressLabel();
        ~ResvEgressLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_type; //type: MplsTeMgmtGmplsLabelEnum

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm
        class Otn_; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm : public Entity
{
    public:
        Wdm();
        ~Wdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_set; //type: boolean
        YLeaf grid; //type: GmplsUniMgmtWdmGridEnum
        YLeaf channel_spacing; //type: GmplsUniMgmtDwdmCsEnum
        YLeaf identifier; //type: uint16
        YLeaf channel; //type: int16



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_ : public Entity
{
    public:
        Otn_();
        ~Otn_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tpn; //type: uint16
        YLeaf bit_map_length; //type: uint16
        YLeafList bit_map; //type: list of  uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps : public Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtectionInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo> protection_info;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo : public Entity
{
    public:
        ProtectionInfo();
        ~ProtectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sbit; //type: boolean
        YLeaf pbit; //type: boolean
        YLeaf nbit; //type: boolean
        YLeaf obit; //type: boolean
        YLeaf protect_type; //type: TeProtectEnum
        YLeaf is_wtr_present; //type: boolean
        YLeaf wtr_timeout; //type: uint32
        YLeaf is_hopresent; //type: boolean
        YLeaf ho_timeout; //type: uint32
        YLeaf is_snc_mode_present; //type: boolean
        YLeaf snc_mode; //type: TeApsSncModeEnum
        YLeaf tcm_id; //type: uint32
        YLeaf path_prot_profile_type; //type: TePathProtProfileEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo : public Entity
{
    public:
        HeadEndBfdInfo();
        ~HeadEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf creation_time; //type: uint32
        YLeaf lspbfd_type; //type: TeVifBfdEnum
        YLeaf is_redundant; //type: boolean
        YLeaf bfd_reverse_path_stale; //type: boolean
        YLeafList bfd_reverse_path_label; //type: list of  uint32

        class SessionInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo
        class DeletionHistory; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory> deletion_history;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo> session_info;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo : public Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: TeBfdLspSessionStateEnum
        YLeaf state_change_time; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory : public Entity
{
    public:
        DeletionHistory();
        ~DeletionHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint16
        YLeaf deletion_time; //type: uint32
        YLeaf deletion_reason; //type: string
        YLeaf deletion_diagnostic_code; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo : public Entity
{
    public:
        TailEndBfdInfo();
        ~TailEndBfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf failure_diagnostic_code; //type: uint32
        YLeaf failure_reason; //type: string
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf min_interval; //type: uint32
        YLeaf min_interval_default; //type: boolean
        YLeaf multiplier; //type: uint8
        YLeaf multiplier_default; //type: boolean

        class SessionInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo> session_info;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo : public Entity
{
    public:
        SessionInfo();
        ~SessionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: TeBfdLspSessionStateEnum
        YLeaf state_change_time; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection : public Entity
{
    public:
        SrlgCollection();
        ~SrlgCollection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_collect_type; //type: TeSrlgCollectRequestEnum
        YLeafList discovered_srlg; //type: list of  uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SrlgCollection


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_association_type; //type: uint16
        YLeaf s2l_association_tie_role; //type: TeAssociationTieRoleEnum
        YLeaf s2l_association_id; //type: uint16
        YLeaf s2l_association_source; //type: string
        YLeaf s2l_global_source; //type: uint32
        YLeafList s2l_extended_id; //type: list of  uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Association


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_secondary; //type: boolean
        YLeaf s2l_protecting; //type: boolean
        YLeaf s2l_notification; //type: boolean
        YLeaf s2l_operational; //type: boolean
        YLeaf enhanced; //type: boolean
        YLeaf ded1_plus1; //type: boolean
        YLeaf ded1_to1; //type: boolean
        YLeaf shared; //type: boolean
        YLeaf link_unprotected; //type: boolean
        YLeaf extra_traffic; //type: boolean
        YLeaf any; //type: boolean
        YLeaf rerouting; //type: boolean
        YLeaf rerouting_no_et; //type: boolean
        YLeaf one_to_n_protection_et; //type: boolean
        YLeaf one_plus_one_uni; //type: boolean
        YLeaf one_plus_one_bi; //type: boolean
        YLeaf lsp_unprotected; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::Protection


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec : public Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string

        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseTspec : public Entity
{
    public:
        ReverseTspec();
        ~ReverseTspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf average_rate; //type: uint64
        YLeaf maximum_burst; //type: uint64
        YLeaf peak_rate; //type: uint64



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseTspec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo : public Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry_exists; //type: boolean
        YLeaf in_label; //type: uint32
        YLeaf bfd_created; //type: boolean
        YLeaf bfd_up; //type: boolean
        YLeaf oam_created; //type: boolean
        YLeaf bfd_next_hop; //type: string
        YLeaf bfd_tun_ifh; //type: string
        YLeaf bfd_out_ifh; //type: string
        YLeaf bfd_int_label; //type: uint32
        YLeaf bfd_egress_label; //type: uint32
        YLeaf fault_ldi_lockout; //type: boolean
        YLeaf fault_ldi; //type: boolean
        YLeaf fault_lkr; //type: boolean
        YLeaf fault_ais; //type: boolean
        YLeaf fault_time; //type: uint32

        class FlexFec; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo::FlexFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo::FlexFec> flex_fec;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo::FlexFec : public Entity
{
    public:
        FlexFec();
        ~FlexFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_fec_subgroup_id; //type: uint16
        YLeaf s2l_fec_lsp_id; //type: uint16
        YLeaf s2l_fec_tunnel_id; //type: uint16
        YLeaf s2l_fec_extended_tunnel_id; //type: string
        YLeaf s2l_fec_source; //type: string
        YLeaf s2l_fec_dest; //type: string
        YLeaf s2l_fec_p2mp_id; //type: uint32
        YLeaf s2l_fec_subgroup_originator; //type: string
        YLeaf s2l_fec_ctype; //type: MplsLibCEnum
        YLeaf s2l_fec_vrf; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::FlexInfo::FlexFec


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::LspWrapInfo : public Entity
{
    public:
        LspWrapInfo();
        ~LspWrapInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_wrap_protection_enable; //type: boolean
        YLeaf lsp_wrap_protection_label; //type: uint32
        YLeaf reverse_egress_interface; //type: string
        YLeaf reverse_lsp_label; //type: uint32
        YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapStateEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::LspWrapInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::DiversityInfo : public Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf diversity_type; //type: TePpDiversityEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::DiversityInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::SharedRiskLinkGroup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro : public Entity
{
    public:
        OutEro();
        ~OutEro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro : public Entity
{
    public:
        InEro();
        ~InEro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::InEro::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro : public Entity
{
    public:
        PathRro();
        ~PathRro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: RsvpMgmtRroSubobjEnum

        class Ipv4RroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject : public Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_address; //type: string

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject : public Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf is_label_variable_length; //type: boolean
        YLeafList variable_length_label; //type: list of  uint32

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_global_label; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject : public Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_address; //type: string
        YLeaf interface_id; //type: uint32

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject : public Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList srl_gs; //type: list of  uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro : public Entity
{
    public:
        ResvRro();
        ~ResvRro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: RsvpMgmtRroSubobjEnum

        class Ipv4RroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject : public Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_address; //type: string

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject : public Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf is_label_variable_length; //type: boolean
        YLeafList variable_length_label; //type: list of  uint32

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_global_label; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject : public Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_address; //type: string
        YLeaf interface_id; //type: uint32

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject : public Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList srl_gs; //type: list of  uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ResvRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray : public Entity
{
    public:
        PathAffinityArray();
        ~PathAffinityArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hop_address; //type: string
        YLeaf hop_affinity; //type: uint32
        YLeafList hop_extended_affinity; //type: list of  uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::PathAffinityArray


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn : public Entity
{
    public:
        ReverseEroIn();
        ~ReverseEroIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LSegmentRoutingPath : public Entity
{
    public:
        S2LSegmentRoutingPath();
        ~S2LSegmentRoutingPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: TeSrSidEnum
        YLeaf has_ip_addresses; //type: boolean
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string
        YLeaf has_mpls_label; //type: boolean
        YLeaf mpls_label_value; //type: uint32
        YLeaf has_entropy_label; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::CleanedLsp::S2L::S2LSegmentRoutingPath


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo : public Entity
{
    public:
        P2PInfo();
        ~P2PInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_bidirectional; //type: boolean

        class AutoBandwidthStatus; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthStatus
        class AutoBandwidthConfig; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthConfig
        class AutoBandwidthOper; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthOper

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthConfig> auto_bandwidth_config;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthOper> auto_bandwidth_oper;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthStatus> auto_bandwidth_status;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthStatus : public Entity
{
    public:
        AutoBandwidthStatus();
        ~AutoBandwidthStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_auto_bandwidth_enabled; //type: boolean
        YLeaf reactivation_time; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthStatus


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthConfig : public Entity
{
    public:
        AutoBandwidthConfig();
        ~AutoBandwidthConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_auto_bandwidth_collect_only; //type: boolean
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf maximum_bandwidth; //type: uint32
        YLeaf application_frequency; //type: uint32
        YLeaf collection_frequency; //type: uint32
        YLeaf adjustment_threshold_percent; //type: uint32
        YLeaf adjustment_threshold_value; //type: uint32
        YLeaf overflow_threshold_percent; //type: uint32
        YLeaf overflow_threshold_value; //type: uint32
        YLeaf overflow_threshold_limit; //type: uint32
        YLeaf underflow_threshold_percent; //type: uint32
        YLeaf underflow_threshold_value; //type: uint32
        YLeaf underflow_threshold_limit; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthConfig


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthOper : public Entity
{
    public:
        AutoBandwidthOper();
        ~AutoBandwidthOper();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_bandwidth_applied; //type: uint32
        YLeaf bandwidth_pool_type; //type: MplsTeBwPoolEnum
        YLeaf bandwidth_applications; //type: uint32
        YLeaf last_application_trigger; //type: TeAutobwAppTriggerEnum
        YLeaf application_jitter; //type: uint32
        YLeaf time_left_application; //type: uint32
        YLeaf samples_collected; //type: uint32
        YLeaf time_left_collection; //type: uint32
        YLeaf highest_bandwidth; //type: uint32
        YLeaf underflow_highest_bandwidth; //type: uint32
        YLeaf threshold_overflows; //type: uint32
        YLeaf overflow_early_bw_applications; //type: uint32
        YLeaf threshold_underflows; //type: uint32
        YLeaf underflow_early_bw_applications; //type: uint32
        YLeaf collect_only_requested_bandwidth; //type: uint32
        YLeaf application_reject_reason; //type: TeAutobwAppRejEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::P2PInfo::AutoBandwidthOper


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup
        class ReoptSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::ReoptSetup
        class GmplsPathProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup
        class PreviousSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousSetup
        class PreviousGmplsPathProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup
        class GmplsOtherSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup
        class GmplsOtherProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup
        class StandbySetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbySetup
        class StandbyReoptSetup; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup
        class LastReOptFail; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastReOptFail
        class LastStdbyReOptFail; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup> current_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup> gmpls_other_protect_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup> gmpls_other_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup> gmpls_path_protect_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastReOptFail> last_re_opt_fail;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail> last_stdby_re_opt_fail;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup> previous_gmpls_path_protect_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousSetup> previous_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::ReoptSetup> reopt_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup> standby_reopt_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbySetup> standby_setup;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup : public Entity
{
    public:
        CurrentSetup();
        ~CurrentSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf current_setup_timer; //type: uint32
        YLeaf selection_reason; //type: string
        YLeaf current_setup_last_error; //type: string

        class ConnectedUptimes; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes> connected_uptimes;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes : public Entity
{
    public:
        ConnectedUptimes();
        ~ConnectedUptimes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf current_lsp_uptime; //type: uint32
        YLeaf current_uptime; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::CurrentSetup::ConnectedUptimes


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::ReoptSetup : public Entity
{
    public:
        ReoptSetup();
        ~ReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reoptimized_setup_uptime; //type: uint32
        YLeaf reoptimized_setup_timer; //type: uint32
        YLeaf reoptimized_setup_last_error; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::ReoptSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup : public Entity
{
    public:
        GmplsPathProtectSetup();
        ~GmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protecting_setup_uptime; //type: uint32
        YLeaf protecting_setup_timer; //type: uint32
        YLeaf protecting_setup_last_error; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsPathProtectSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousSetup : public Entity
{
    public:
        PreviousSetup();
        ~PreviousSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf previous_path_option; //type: string
        YLeaf previous_tunnel_instance; //type: uint32
        YLeaf previous_fail_reason; //type: string
        YLeaf previous_setup_last_error; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup : public Entity
{
    public:
        PreviousGmplsPathProtectSetup();
        ~PreviousGmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf previous_protect_path_option; //type: string
        YLeaf previous_protect_tunnel_instance; //type: uint32
        YLeaf previous_protect_fail_reason; //type: string
        YLeaf previous_protect_setup_last_error; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::PreviousGmplsPathProtectSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup : public Entity
{
    public:
        GmplsOtherSetup();
        ~GmplsOtherSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_option_index; //type: uint32
        YLeaf other_setup_error; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup : public Entity
{
    public:
        GmplsOtherProtectSetup();
        ~GmplsOtherProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_option_index; //type: uint32
        YLeaf other_setup_error; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::GmplsOtherProtectSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbySetup : public Entity
{
    public:
        StandbySetup();
        ~StandbySetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf standby_lsp_uptime; //type: uint32
        YLeaf standby_setup_timer; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbySetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup : public Entity
{
    public:
        StandbyReoptSetup();
        ~StandbyReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reoptimized_setup_uptime; //type: uint32
        YLeaf reoptimized_setup_timer; //type: uint32
        YLeaf reoptimized_setup_last_error; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::StandbyReoptSetup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastReOptFail : public Entity
{
    public:
        LastReOptFail();
        ~LastReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReasonEnum
        YLeaf re_opt_failed_destination; //type: string
        YLeaf re_opt_failed_timestamp; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastReOptFail


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail : public Entity
{
    public:
        LastStdbyReOptFail();
        ~LastStdbyReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReasonEnum
        YLeaf re_opt_failed_destination; //type: string
        YLeaf re_opt_failed_timestamp; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::History::LastStdbyReOptFail


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection : public Entity
{
    public:
        PathProtection();
        ~PathProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_of_switchover_sec; //type: uint32
        YLeaf switchover_total; //type: uint16
        YLeaf switchover_ready; //type: uint16
        YLeaf standby_reoptimized_number; //type: uint16
        YLeaf switchover_reason; //type: uint16
        YLeaf diversity_type; //type: TePpDiversityEnum
        YLeaf is_path_protect_configured; //type: boolean
        YLeaf path_protection_protected_by_id; //type: uint32
        YLeaf valid_path_protection_path_option_exists; //type: boolean
        YLeaf is_path_protect_switch_over_underway; //type: boolean
        YLeaf reoptimization_time_remaining; //type: uint32

        class Switchover; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover> switchover;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover : public Entity
{
    public:
        Switchover();
        ~Switchover();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_protection_switchover_event_index; //type: uint32
        YLeaf path_protection_tunnel_id; //type: uint16
        YLeaf from_lsp_id; //type: uint16
        YLeaf to_lsp_id; //type: uint16
        YLeaf date_of_error_detection; //type: uint32
        YLeaf date_of_error_detection_millisec; //type: uint32
        YLeaf switchover_duration_millisec; //type: uint32
        YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcauseEnum



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::PathProtection::Switchover


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup : public Entity
{
    public:
        AutoBackup();
        ~AutoBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protected_ls_ps; //type: uint32
        YLeaf protected_s2_ls; //type: uint32
        YLeaf sharing_families; //type: uint32
        YLeaf ab_protection_type; //type: AutoBackupProtectionEnum
        YLeaf is_using_srlg; //type: boolean
        YLeaf srlg_prot_type; //type: AutoBackupSrlgModeEnum
        YLeaf ab_protected_interface; //type: string
        YLeaf protected_address; //type: string
        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf is_unused_removal_timer_running; //type: boolean
        YLeaf unused_removal_remaining_time; //type: uint32

        class WeightedSrlgInfo; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo
        class Iep; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep> > iep;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo> weighted_srlg_info;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo : public Entity
{
    public:
        WeightedSrlgInfo();
        ~WeightedSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtectedInterfaceSrlg; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg
        class WeightedSrlgHop; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg> > protected_interface_srlg;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop> > weighted_srlg_hop;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg : public Entity
{
    public:
        ProtectedInterfaceSrlg();
        ~ProtectedInterfaceSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg; //type: uint32
        YLeaf srlg_name; //type: string
        YLeaf admin_weight; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop : public Entity
{
    public:
        WeightedSrlgHop();
        ~WeightedSrlgHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf from_address; //type: string
        YLeaf to_address; //type: string
        YLeaf aggregate_admin_weight; //type: uint64
        YLeafList common_srlg; //type: list of  uint32



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep : public Entity
{
    public:
        Iep();
        ~Iep();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_option_id; //type: uint32

        class IepHop; //type: MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop> > iep_hop;


}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep


class MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop : public Entity
{
    public:
        IepHop();
        ~IepHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hop_index; //type: uint32
        YLeaf iep_hop_type; //type: MplsTeIepHopEnum
        YLeaf iep_hop_address; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::NniTunnels::NniTunnel::AutoBackup::Iep::IepHop


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_39_ */

