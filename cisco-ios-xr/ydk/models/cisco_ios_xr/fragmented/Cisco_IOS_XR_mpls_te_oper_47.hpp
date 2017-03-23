#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_47_
#define _CISCO_IOS_XR_MPLS_TE_OPER_47_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_29.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_41.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_45.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_46.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject : public Entity
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

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::Ipv4RroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject : public Entity
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

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::LabelRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject : public Entity
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

        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags> flags;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ResvRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::PathAffinityArray


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn : public Entity
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

        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::ReverseEroIn::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::ReoptimizedStandbyP2MpLsp::S2L::S2LSegmentRoutingPath


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp : public Entity
{
    public:
        TunnelRestorationLsp();
        ~TunnelRestorationLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signaled_name; //type: string
        YLeaf is_frr_failed; //type: boolean
        YLeaf frr_active_reason; //type: uint32
        YLeaf lsp_bandwidth; //type: uint32
        YLeaf lsp_setup_priority; //type: uint8
        YLeaf lsp_hold_priority; //type: uint8
        YLeaf lsp_bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf dste_class_match; //type: boolean
        YLeaf dste_class_index; //type: uint8
        YLeaf type; //type: MplsTeLspEnum
        YLeaf uptime; //type: uint32
        YLeaf s2_ls_up; //type: uint32
        YLeaf s2_ls_proceeding; //type: uint32
        YLeaf s2_ls_down; //type: uint32
        YLeaf reoptimize_reason; //type: MplsTeReoptDecisionReasonEnum
        YLeaf reoptimize_trigger; //type: MteReoptTriggerEnum
        YLeaf timer_left; //type: uint32
        YLeaf is_passive; //type: boolean
        YLeaf is_interface; //type: boolean
        YLeaf last_path_change; //type: uint32
        YLeaf persistent_bytes; //type: uint64
        YLeaf persistent_packets; //type: uint64

        class LspFec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec
        class S2L; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec> lsp_fec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L> > s2l;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec : public Entity
{
    public:
        LspFec();
        ~LspFec();

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

        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::LspFec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L : public Entity
{
    public:
        S2L();
        ~S2L();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcalc_area; //type: string
        YLeaf is_expanded_ero; //type: boolean
        YLeaf path_reeval_query_mid; //type: uint32
        YLeaf time_since_last_query_received_mid; //type: uint32
        YLeaf time_since_last_preferred_path_exists_send_mid; //type: uint32
        YLeaf time_since_last_preferred_tree_exists_send_mid; //type: uint32
        YLeaf expanded_ero_area_id; //type: string
        YLeaf expanded_ero_affinity_bits; //type: uint32
        YLeaf expanded_ero_affinity_mask; //type: uint32
        YLeaf expanded_ero_metric_type; //type: MplsTeMetricEnum
        YLeaf expanded_ero_metric; //type: uint32
        YLeaf abr_auto_discovered; //type: string
        YLeaf is_frr_enabled; //type: boolean
        YLeaf is_node_protected; //type: boolean
        YLeaf is_bandwidth_protect; //type: boolean
        YLeaf path_rro_enabled; //type: boolean
        YLeaf weight; //type: uint64
        YLeaf reverse_weight; //type: uint64
        YLeaf uptime; //type: uint32
        YLeaf egress_interface; //type: string
        YLeaf egress_interface_state; //type: TeControllerStateEnum
        YLeaf egress_interface_brief; //type: string
        YLeaf ingress_interface; //type: string
        YLeaf ingress_interface_state; //type: TeControllerStateEnum
        YLeaf ingress_interface_brief; //type: string
        YLeaf s2l_local_label; //type: uint32
        YLeaf s2l_out_label; //type: uint32
        YLeaf outbound_frr_state; //type: MplsTeFrrStateEnum
        YLeaf frr_out_tunnel_interface; //type: string
        YLeaf role; //type: MplsTeTunnelRoleEnum
        YLeaf signalling_status; //type: MplsTeTunnelsSignalingStatusEnum
        YLeaf local_router_id; //type: string
        YLeaf upstream_router_id; //type: string
        YLeaf downstream_router_id; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf previous_hop_address; //type: string
        YLeaf incoming_address; //type: string
        YLeaf backup_tunnel_interface; //type: string
        YLeaf node_hop_count; //type: uint8
        YLeaf is_optical; //type: boolean
        YLeaf s2l_reverse_ero_obj_present; //type: boolean
        YLeaf reverse_lsp_present; //type: boolean
        YLeaf reverse_lsp_connected; //type: boolean
        YLeaf reverse_lsp_name; //type: string
        YLeaf s2l_reverse_tspec_obj_present; //type: boolean
        YLeaf path_using_strict_spf; //type: boolean
        YLeafList s2l_reverse_lsp_sub_obj; //type: list of  uint8

        class S2LFec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec
        class ActivePathOption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption
        class OutXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro
        class InXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro
        class Tspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec
        class GenericTspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec
        class Fspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec
        class GenericFspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec
        class NextHopAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric
        class PreviousHopAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric
        class IncomingAddressGeneric; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric
        class S2LConvergence; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence
        class SoftPreemption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption
        class GmplsLabels; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels
        class OtnS2L; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L
        class HeadEndBfdInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo
        class TailEndBfdInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo
        class SrlgCollection; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection
        class Association; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association
        class Protection; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection
        class ReverseLspFec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec
        class ReverseTspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec
        class FlexInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo
        class LspWrapInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo
        class DiversityInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo
        class SharedRiskLinkGroup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup
        class OutEro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro
        class InEro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro
        class PathRro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro
        class ResvRro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro
        class PathAffinityArray; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray
        class ReverseEroIn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn
        class S2LSegmentRoutingPath; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption> active_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo> diversity_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo> flex_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec> fspec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec> generic_fspec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec> generic_tspec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels> gmpls_labels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo> head_end_bfd_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro> > in_ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro> in_xro;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric> incoming_address_generic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo> lsp_wrap_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric> next_hop_address_generic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L> otn_s2l;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro> > out_ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro> out_xro;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray> > path_affinity_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro> > path_rro;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric> previous_hop_address_generic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection> protection;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro> > resv_rro;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn> > reverse_ero_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec> reverse_tspec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence> s2l_convergence;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec> s2l_fec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath> > s2l_segment_routing_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption> soft_preemption;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection> srlg_collection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo> tail_end_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec> tspec;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec : public Entity
{
    public:
        S2LFec();
        ~S2LFec();

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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LFec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption : public Entity
{
    public:
        ActivePathOption();
        ~ActivePathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf option_index_is_valid; //type: boolean
        YLeaf option_index; //type: uint32
        YLeaf path_option_name; //type: string
        YLeaf path_option_type; //type: MplsTePathoptionEnum
        YLeaf explicit_path_name; //type: string
        YLeaf explicit_path_id; //type: uint16
        YLeaf holddown_duration; //type: uint16
        YLeaf pce_address; //type: string
        YLeaf path_option_area_id; //type: string
        YLeaf is_strict_explicit_path; //type: boolean
        YLeaf is_helddown; //type: boolean
        YLeaf is_lockdown; //type: boolean
        YLeaf is_verbatim; //type: boolean
        YLeaf is_disabled; //type: boolean
        YLeaf has_attribute_set; //type: boolean
        YLeaf attribute_set_found; //type: boolean
        YLeaf has_xro_attribute_set; //type: boolean
        YLeaf xro_attribute_set_found; //type: boolean
        YLeaf is_segment_routing; //type: boolean
        YLeaf protected_by_path_option_index; //type: uint32
        YLeaf restored_from_path_option_index; //type: uint32

        class AttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet
        class XroAttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError
        class RemergeError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError
        class SignallingError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet> attribute_set;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError> > path_calculation_error;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError> > remerge_error;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError> > signalling_error;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet> xro_attribute_set;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet : public Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf tunnel_attribute_set_name_crc32; //type: uint32

        class AttributeSetUnion; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion> attribute_set_union;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion : public Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSetEnum

        class AttributeSetPathOption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured_bandwidth; //type: uint32
        YLeaf cost_limit; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_cost_limit_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf generation; //type: uint32
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: uint32
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf exclude_list_name; //type: string
        YLeaf is_exclude_list_name_configured; //type: boolean
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
        YLeaf is_bfd_reverse_pat_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class VersionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_type; //type: TeBfdReversePathEnum
        YLeaf binding_label; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_type; //type: string
        YLeaf generation; //type: uint32
        YLeaf is_default; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_signalled_name_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf record_route; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList tunnel_id; //type: list of  uint16

        class SignalledName; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class ProtectedInterface; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public Entity
{
    public:
        SignalledName();
        ~SignalledName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf source_type; //type: TeSigNameAppendEnum
        YLeaf protected_interface_type; //type: TeSigNameAppendEnum
        YLeaf is_mp_addresses; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protected_interface; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf forward_class; //type: uint32
        YLeaf is_affinity_configured; //type: boolean
        YLeaf fast_reroute; //type: boolean
        YLeaf frr_node_protection; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf record_route; //type: boolean
        YLeaf auto_bandwidth_collect; //type: boolean
        YLeaf auto_route_announce; //type: boolean
        YLeaf soft_preemption_configured; //type: boolean
        YLeaf bandwidth; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf is_interface_bw_configured; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList mesh_group_id; //type: list of  uint32
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro : public Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Xro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mutual_diversity_flag; //type: boolean

        class XroSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public Entity
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

        class Ipv4Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public Entity
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

        class Fec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public Entity
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

        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public Entity
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

        class RevertSchedule; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe : public Entity
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

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public Entity
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



        class PrependEntry; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet : public Entity
{
    public:
        XroAttributeSet();
        ~XroAttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf tunnel_attribute_set_name_crc32; //type: uint32

        class AttributeSetUnion; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion> attribute_set_union;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion : public Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSetEnum

        class AttributeSetPathOption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption : public Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured_bandwidth; //type: uint32
        YLeaf cost_limit; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_cost_limit_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf generation; //type: uint32
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: uint32
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf exclude_list_name; //type: string
        YLeaf is_exclude_list_name_configured; //type: boolean
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
        YLeaf is_bfd_reverse_pat_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class VersionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_type; //type: TeBfdReversePathEnum
        YLeaf binding_label; //type: uint32



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_type; //type: string
        YLeaf generation; //type: uint32
        YLeaf is_default; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_signalled_name_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf record_route; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList tunnel_id; //type: list of  uint16

        class SignalledName; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class ProtectedInterface; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public Entity
{
    public:
        SignalledName();
        ~SignalledName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf source_type; //type: TeSigNameAppendEnum
        YLeaf protected_interface_type; //type: TeSigNameAppendEnum
        YLeaf is_mp_addresses; //type: boolean



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protected_interface; //type: string



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf forward_class; //type: uint32
        YLeaf is_affinity_configured; //type: boolean
        YLeaf fast_reroute; //type: boolean
        YLeaf frr_node_protection; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf record_route; //type: boolean
        YLeaf auto_bandwidth_collect; //type: boolean
        YLeaf auto_route_announce; //type: boolean
        YLeaf soft_preemption_configured; //type: boolean
        YLeaf bandwidth; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf is_interface_bw_configured; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList mesh_group_id; //type: list of  uint32
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Xro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mutual_diversity_flag; //type: boolean

        class XroSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public Entity
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

        class Ipv4Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public Entity
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

        class Fec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public Entity
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

        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public Entity
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

        class RevertSchedule; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe : public Entity
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

        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public Entity
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



        class PrependEntry; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro : public Entity
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

        class XroSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject> > xro_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject : public Entity
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

        class Ipv4Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject : public Entity
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

        class Fec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec : public Entity
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

        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro : public Entity
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

        class XroSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject> > xro_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject : public Entity
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

        class Ipv4Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject : public Entity
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

        class Fec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec : public Entity
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

        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec : public Entity
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

        class Otntspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec> otntspec;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec : public Entity
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

        class Otnfspec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec> otnfspec;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric : public Entity
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



        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr> te_addr;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr : public Entity
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

        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric : public Entity
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



        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr> te_addr;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr : public Entity
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

        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric : public Entity
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



        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr> te_addr;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr : public Entity
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

        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels : public Entity
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



        class PathIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel
        class PathEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel
        class ResvIngressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel
        class ResvEgressLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel> path_egress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel> path_ingress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel> resv_egress_label;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel> resv_ingress_label;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel : public Entity
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

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel : public Entity
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

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel : public Entity
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

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel : public Entity
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

        class Wdm; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm> wdm;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn : public Entity
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



}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L : public Entity
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



        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn
        class Aps; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps> aps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn> otn;


}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_47_ */

