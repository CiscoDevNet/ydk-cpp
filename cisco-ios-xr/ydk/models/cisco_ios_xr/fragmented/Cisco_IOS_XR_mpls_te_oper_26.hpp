#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_26_
#define _CISCO_IOS_XR_MPLS_TE_OPER_26_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_25.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::Tunnels::Summary::AutoTunServerSummary : public Entity
{
    public:
        AutoTunServerSummary();
        ~AutoTunServerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TotalAutoP2MpTunnels; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels
        class TotalAutoP2PTunnels; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels
        class ClientsSummary; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary> > clients_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels> total_auto_p2mp_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels> total_auto_p2p_tunnels;


}; // MplsTe::Tunnels::Summary::AutoTunServerSummary


class MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels : public Entity
{
    public:
        TotalAutoP2MpTunnels();
        ~TotalAutoP2MpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_p2mp_tunnel; //type: uint32
        YLeaf auto_p2mp_destinations; //type: uint32
        YLeaf up_auto_p2mp_destinations; //type: uint32
        YLeaf down_auto_p2mp_destinations; //type: uint32
        YLeaf up_auto_p2mp_tunnels; //type: uint32
        YLeaf down_auto_p2mp_tunnels; //type: uint32
        YLeaf frr_auto_p2mp_tunnels; //type: uint32



}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels


class MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels : public Entity
{
    public:
        TotalAutoP2PTunnels();
        ~TotalAutoP2PTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_p2p_tunnel; //type: uint32
        YLeaf up_auto_p2p_tunnels; //type: uint32
        YLeaf down_auto_p2p_tunnels; //type: uint32



}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary : public Entity
{
    public:
        ClientsSummary();
        ~ClientsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_type; //type: TeServTunClientEnum
        YLeaf client_instance_name; //type: string
        YLeaf client_id; //type: uint32

        class P2MpInfo; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo
        class P2PInfo; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo> p2mp_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo> p2p_info;


}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo : public Entity
{
    public:
        P2MpInfo();
        ~P2MpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_p2mp_tunnel; //type: uint32
        YLeaf auto_p2mp_destinations; //type: uint32
        YLeaf up_auto_p2mp_destinations; //type: uint32
        YLeaf down_auto_p2mp_destinations; //type: uint32
        YLeaf up_auto_p2mp_tunnels; //type: uint32
        YLeaf down_auto_p2mp_tunnels; //type: uint32
        YLeaf frr_auto_p2mp_tunnels; //type: uint32



}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo : public Entity
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


        YLeaf auto_p2p_tunnel; //type: uint32
        YLeaf up_auto_p2p_tunnels; //type: uint32
        YLeaf down_auto_p2p_tunnels; //type: uint32



}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo


class MplsTe::Tunnels::TunnelPathProtections : public Entity
{
    public:
        TunnelPathProtections();
        ~TunnelPathProtections();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelPathProtection; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection> > tunnel_path_protection;


}; // MplsTe::Tunnels::TunnelPathProtections


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection : public Entity
{
    public:
        TunnelPathProtection();
        ~TunnelPathProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf is_tunnel_up; //type: boolean
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string

        class PathProtection; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection
        class CurrentLsp; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp
        class StandbyLsp; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp> current_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection> path_protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp> standby_lsp;


}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection : public Entity
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

        class Switchover; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover> switchover;


}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover : public Entity
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



}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp : public Entity
{
    public:
        CurrentLsp();
        ~CurrentLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_uptime; //type: uint32
        YLeaf path_protection_lsp_id; //type: uint32
        YLeaf lsp_local_label; //type: uint32
        YLeaf lsp_output_interface; //type: string
        YLeaf lsp_output_label; //type: uint32
        YLeaf lsp_state; //type: MplsTeTunnelStateEnum

        class SrlspOutgoingInfo; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop> > lsp_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;


}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo : public Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_output_interface; //type: string
        YLeaf lsp_output_label; //type: uint32



}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop : public Entity
{
    public:
        LspHop();
        ~LspHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject : public Entity
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



}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject : public Entity
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



}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp : public Entity
{
    public:
        StandbyLsp();
        ~StandbyLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_uptime; //type: uint32
        YLeaf path_protection_lsp_id; //type: uint32
        YLeaf lsp_local_label; //type: uint32
        YLeaf lsp_output_interface; //type: string
        YLeaf lsp_output_label; //type: uint32
        YLeaf lsp_state; //type: MplsTeTunnelStateEnum

        class SrlspOutgoingInfo; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop> > lsp_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;


}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo : public Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_output_interface; //type: string
        YLeaf lsp_output_label; //type: uint32



}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop : public Entity
{
    public:
        LspHop();
        ~LspHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject : public Entity
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



}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject : public Entity
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



}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject


class MplsTe::MaximumTunnels : public Entity
{
    public:
        MaximumTunnels();
        ~MaximumTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf current_maximum_tunnels; //type: uint32
        YLeaf current_maximum_destinations; //type: uint32
        YLeaf current_maximum_p2mp_tunnels; //type: uint32
        YLeaf current_maximum_p2mp_destnation_per_tunnel; //type: uint32
        YLeaf absolute_maximum; //type: uint32
        YLeaf current_maximum_autobackups; //type: uint32
        YLeaf current_maximum_auto_mesh; //type: uint32
        YLeaf current_tunnel_count; //type: uint32
        YLeaf current_destination_count; //type: uint32
        YLeaf current_p2mp_tunnel_count; //type: uint32
        YLeaf current_p2mp_destnation_per_tunnel_count; //type: uint32
        YLeaf is_autobackup_range_configured; //type: boolean
        YLeaf current_autobackups; //type: uint32
        YLeaf is_auto_mesh_range_configured; //type: boolean
        YLeaf current_auto_mesh; //type: uint32
        YLeaf current_maximum_gmpls_unitunnels; //type: uint32
        YLeaf current_gmpls_uni; //type: uint32



}; // MplsTe::MaximumTunnels


class MplsTe::PathProtection : public Entity
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



        class SwitchoverLog; //type: MplsTe::PathProtection::SwitchoverLog

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection::SwitchoverLog> switchover_log;


}; // MplsTe::PathProtection


class MplsTe::PathProtection::SwitchoverLog : public Entity
{
    public:
        SwitchoverLog();
        ~SwitchoverLog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_protection_switchovers; //type: uint32
        YLeaf maximum_switchover_millisec; //type: uint32
        YLeaf average_switchover_millisec; //type: uint32

        class PathProtectionSwitchoverEntry; //type: MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry> > path_protection_switchover_entry;


}; // MplsTe::PathProtection::SwitchoverLog


class MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry : public Entity
{
    public:
        PathProtectionSwitchoverEntry();
        ~PathProtectionSwitchoverEntry();

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



}; // MplsTe::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry


class MplsTe::FibNextHopLabelRoutes : public Entity
{
    public:
        FibNextHopLabelRoutes();
        ~FibNextHopLabelRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FibNextHopLabelRoute; //type: MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute> > fib_next_hop_label_route;


}; // MplsTe::FibNextHopLabelRoutes


class MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute : public Entity
{
    public:
        FibNextHopLabelRoute();
        ~FibNextHopLabelRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf prefix_addr; //type: string
        YLeaf create_time; //type: uint32
        YLeaf last_used_time; //type: uint32
        YLeaf last_update_time; //type: uint32
        YLeaf expire_time; //type: uint32
        YLeaf is_registered; //type: boolean
        YLeaf is_notified; //type: boolean
        YLeaf is_stale; //type: boolean
        YLeaf route_version; //type: uint64

        class TargetAddress; //type: MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress
        class NextHopPath; //type: MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath> > next_hop_path;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress> target_address;


}; // MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute


class MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeTargetAddrEnum
        YLeaf ip_address; //type: string
        YLeaf label; //type: uint32



}; // MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress


class MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath : public Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf path_id; //type: uint32
        YLeaf backup_path_id; //type: uint32
        YLeaf pure_backup; //type: boolean
        YLeafList label_stack; //type: list of  uint32



}; // MplsTe::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath


class MplsTe::P2Mp : public Entity
{
    public:
        P2Mp();
        ~P2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelRewrites; //type: MplsTe::P2Mp::TunnelRewrites
        class CollaboratorTimers; //type: MplsTe::P2Mp::CollaboratorTimers
        class ForwardingOutputLabelRewrites; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites> forwarding_output_label_rewrites;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites> tunnel_rewrites;


}; // MplsTe::P2Mp


class MplsTe::P2Mp::TunnelRewrites : public Entity
{
    public:
        TunnelRewrites();
        ~TunnelRewrites();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite> > tunnel_rewrite;


}; // MplsTe::P2Mp::TunnelRewrites


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite : public Entity
{
    public:
        TunnelRewrite();
        ~TunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: int32
        YLeaf lsp_id; //type: int32
        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_signal_name; //type: string
        YLeaf is_segment_routing; //type: boolean

        class SuccessfulRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite> pending_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite> successful_rewrite;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite : public Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32

        class TunnelRewrite_; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_> tunnel_rewrite;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_ : public Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum

        class P2PTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite : public Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf source_pe; //type: string
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string
        YLeaf backup_active; //type: boolean
        YLeaf original_input_interface; //type: string
        YLeaf previous_hop_address; //type: string
        YLeaf output_interface_name; //type: string
        YLeaf backup_tunnel_name; //type: string

        class PrimaryS2L; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite : public Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite : public Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32

        class TunnelRewrite_; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_> tunnel_rewrite;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_ : public Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum

        class P2PTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite : public Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf source_pe; //type: string
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string
        YLeaf backup_active; //type: boolean
        YLeaf original_input_interface; //type: string
        YLeaf previous_hop_address; //type: string
        YLeaf output_interface_name; //type: string
        YLeaf backup_tunnel_name; //type: string

        class PrimaryS2L; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite : public Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite : public Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32

        class TunnelRewrite_; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_> tunnel_rewrite;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_ : public Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum

        class P2PTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite : public Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf source_pe; //type: string
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string
        YLeaf backup_active; //type: boolean
        YLeaf original_input_interface; //type: string
        YLeaf previous_hop_address; //type: string
        YLeaf output_interface_name; //type: string
        YLeaf backup_tunnel_name; //type: string

        class PrimaryS2L; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;


}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite : public Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32



}; // MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTe::P2Mp::CollaboratorTimers : public Entity
{
    public:
        CollaboratorTimers();
        ~CollaboratorTimers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class P2MpTimer; //type: MplsTe::P2Mp::CollaboratorTimers::P2MpTimer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::CollaboratorTimers::P2MpTimer> > p2mp_timer;


}; // MplsTe::P2Mp::CollaboratorTimers


class MplsTe::P2Mp::CollaboratorTimers::P2MpTimer : public Entity
{
    public:
        P2MpTimer();
        ~P2MpTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_type; //type: MplsTeP2MpTimerEnum
        YLeaf timer_name; //type: string
        YLeaf start_time; //type: uint32
        YLeaf expiry_time; //type: uint32
        YLeaf stop_time; //type: uint32
        YLeaf duration; //type: uint32
        YLeaf is_running; //type: boolean



}; // MplsTe::P2Mp::CollaboratorTimers::P2MpTimer


class MplsTe::P2Mp::ForwardingOutputLabelRewrites : public Entity
{
    public:
        ForwardingOutputLabelRewrites();
        ~ForwardingOutputLabelRewrites();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ForwardingOutputLabelRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite> > forwarding_output_label_rewrite;


}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite : public Entity
{
    public:
        ForwardingOutputLabelRewrite();
        ~ForwardingOutputLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: int32
        YLeaf lsp_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf source_address; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf destination_address; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf previous_hop_address; //type: string
        YLeaf ctype; //type: CtypeEnum
        YLeaf original_input_interface; //type: string
        YLeaf output_interface_name; //type: string
        YLeaf backup_tunnel_name; //type: string
        YLeaf is_segment_routing; //type: boolean

        class S2LOutputRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite
        class S2L; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L
        class S2LsrPath; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L> > s2l;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite> s2l_output_rewrite;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath> > s2lsr_path;


}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite : public Entity
{
    public:
        S2LOutputRewrite();
        ~S2LOutputRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Subfamily; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily
        class SuccessfulRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite> pending_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily> subfamily;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite> successful_rewrite;


}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily : public Entity
{
    public:
        Subfamily();
        ~Subfamily();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf previous_hop_address; //type: string

        class LspFec; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec> lsp_fec;


}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec : public Entity
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

        class FecDestinationInfo; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo : public Entity
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



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite : public Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32
        YLeaf out_rewrite_role; //type: MplsTeTunnelRoleEnum
        YLeaf label; //type: uint32
        YLeaf backup_active; //type: boolean
        YLeaf s2l_source; //type: string
        YLeaf explicit_null; //type: TeS2LOutputRwExplicitNullEnum
        YLeaf protocol_transported; //type: uint16

        class PrimaryS2L; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L> primary_s2l;


}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite : public Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32
        YLeaf out_rewrite_role; //type: MplsTeTunnelRoleEnum
        YLeaf label; //type: uint32
        YLeaf backup_active; //type: boolean
        YLeaf s2l_source; //type: string
        YLeaf explicit_null; //type: TeS2LOutputRwExplicitNullEnum
        YLeaf protocol_transported; //type: uint16

        class PrimaryS2L; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L> primary_s2l;


}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite : public Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32
        YLeaf out_rewrite_role; //type: MplsTeTunnelRoleEnum
        YLeaf label; //type: uint32
        YLeaf backup_active; //type: boolean
        YLeaf s2l_source; //type: string
        YLeaf explicit_null; //type: TeS2LOutputRwExplicitNullEnum
        YLeaf protocol_transported; //type: uint16

        class PrimaryS2L; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L> primary_s2l;


}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L : public Entity
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


        YLeaf destination_address; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf sub_group_original_id; //type: string



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L


class MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath : public Entity
{
    public:
        S2LsrPath();
        ~S2LsrPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_primary; //type: boolean
        YLeaf is_backup; //type: boolean
        YLeaf outgoing_interface; //type: string
        YLeaf path_id; //type: uint32
        YLeaf backup_path_id; //type: uint32
        YLeaf next_hop; //type: string
        YLeafList outgoing_labels_stack; //type: list of  uint32



}; // MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath


class MplsTe::OpenConfig : public Entity
{
    public:
        OpenConfig();
        ~OpenConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspStates; //type: MplsTe::OpenConfig::LspStates
        class LspCounters; //type: MplsTe::OpenConfig::LspCounters

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig::LspCounters> lsp_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig::LspStates> lsp_states;


}; // MplsTe::OpenConfig


class MplsTe::OpenConfig::LspStates : public Entity
{
    public:
        LspStates();
        ~LspStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspState; //type: MplsTe::OpenConfig::LspStates::LspState

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig::LspStates::LspState> > lsp_state;


}; // MplsTe::OpenConfig::LspStates


class MplsTe::OpenConfig::LspStates::LspState : public Entity
{
    public:
        LspState();
        ~LspState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_type; //type: OcMplsTeTunnelEnum
        YLeaf name; //type: string
        YLeaf type; //type: OcMplsTeLspEnum
        YLeaf signaling_protocol; //type: MplsTeProtocolEnum
        YLeaf local_id; //type: uint32
        YLeaf source; //type: string
        YLeaf description; //type: string
        YLeaf admin_status; //type: LspAdminStatusEnum
        YLeaf oper_status; //type: LspOperStatusEnum
        YLeaf metric; //type: OcMplsTeMetricEnum
        YLeaf protection_style_requested; //type: MplsProtectionEnum
        YLeaf reoptimize_timer; //type: uint16
        YLeaf role; //type: MplsTeLspRoleEnum
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf soft_preemption; //type: boolean



}; // MplsTe::OpenConfig::LspStates::LspState


class MplsTe::OpenConfig::LspCounters : public Entity
{
    public:
        LspCounters();
        ~LspCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspCounter; //type: MplsTe::OpenConfig::LspCounters::LspCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig::LspCounters::LspCounter> > lsp_counter;


}; // MplsTe::OpenConfig::LspCounters


class MplsTe::OpenConfig::LspCounters::LspCounter : public Entity
{
    public:
        LspCounter();
        ~LspCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_type; //type: OcMplsTeTunnelEnum
        YLeaf name; //type: string
        YLeaf type; //type: OcMplsTeLspEnum
        YLeaf bytes; //type: uint64
        YLeaf packets; //type: uint64
        YLeaf path_changes; //type: uint64
        YLeaf state_changes; //type: uint64
        YLeaf online_time; //type: string
        YLeaf current_path_time; //type: string
        YLeaf next_reoptimization_time; //type: string



}; // MplsTe::OpenConfig::LspCounters::LspCounter


class MplsTe::LspOutOfResources : public Entity
{
    public:
        LspOutOfResources();
        ~LspOutOfResources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: MplsTe::LspOutOfResources::Summary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources::Summary> summary;


}; // MplsTe::LspOutOfResources


class MplsTe::LspOutOfResources::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transit_lsp_total_count; //type: uint32
        YLeaf transit_lsp_unprotected_count; //type: uint32
        YLeaf lsp_oor_state; //type: LspOorStateEnum
        YLeaf lsp_oor_timestamp; //type: uint32
        YLeaf lsp_oor_green_recovery_time; //type: uint32

        class LspOorStateXr; //type: MplsTe::LspOutOfResources::Summary::LspOorStateXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources::Summary::LspOorStateXr> > lsp_oor_state_xr;


}; // MplsTe::LspOutOfResources::Summary


class MplsTe::LspOutOfResources::Summary::LspOorStateXr : public Entity
{
    public:
        LspOorStateXr();
        ~LspOorStateXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_oor_state; //type: LspOorStateEnum
        YLeaf threshold_transit_all; //type: uint32
        YLeaf threshold_transit_unprotected; //type: uint32
        YLeaf te_metric_penalty; //type: uint32
        YLeaf available_bw_percentage; //type: uint32
        YLeaf transition_duration; //type: uint32
        YLeaf minimum_lsp_bandwidth; //type: uint32
        YLeaf accept_reopt; //type: boolean

        class Statistics; //type: MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics> statistics;


}; // MplsTe::LspOutOfResources::Summary::LspOorStateXr


class MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transitions; //type: uint32
        YLeaf rejected_ls_ps_number; //type: uint32
        YLeaf accepted_ls_ps_number; //type: uint32
        YLeaf accepted_reopt_ls_ps_number; //type: uint32
        YLeaf rejected_reopt_ls_ps_number; //type: uint32



}; // MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics


class MplsTe::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HeadInfos; //type: MplsTe::Bfd::HeadInfos
        class Links; //type: MplsTe::Bfd::Links
        class TailInfos; //type: MplsTe::Bfd::TailInfos
        class Summary; //type: MplsTe::Bfd::Summary
        class Counters; //type: MplsTe::Bfd::Counters

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::HeadInfos> head_infos;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Links> links;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::TailInfos> tail_infos;


}; // MplsTe::Bfd


class MplsTe::Bfd::HeadInfos : public Entity
{
    public:
        HeadInfos();
        ~HeadInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HeadInfo; //type: MplsTe::Bfd::HeadInfos::HeadInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::HeadInfos::HeadInfo> > head_info;


}; // MplsTe::Bfd::HeadInfos


class MplsTe::Bfd::HeadInfos::HeadInfo : public Entity
{
    public:
        HeadInfo();
        ~HeadInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_name_xr; //type: string
        YLeaf destination_address; //type: string
        YLeaf lspbfd_type; //type: TeVifBfdEnum

        class CurrentLspbfdInfo; //type: MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo
        class StandbyLspbfdInfo; //type: MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo
        class ReoptimizedLspbfdInfo; //type: MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo> current_lspbfd_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo> reoptimized_lspbfd_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo> standby_lspbfd_info;


}; // MplsTe::Bfd::HeadInfos::HeadInfo


class MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo : public Entity
{
    public:
        CurrentLspbfdInfo();
        ~CurrentLspbfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint16
        YLeaf bfd_session_state; //type: TeBfdLspSessionStateEnum



}; // MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo


class MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo : public Entity
{
    public:
        StandbyLspbfdInfo();
        ~StandbyLspbfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint16
        YLeaf bfd_session_state; //type: TeBfdLspSessionStateEnum



}; // MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo


class MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo : public Entity
{
    public:
        ReoptimizedLspbfdInfo();
        ~ReoptimizedLspbfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: uint16
        YLeaf bfd_session_state; //type: TeBfdLspSessionStateEnum



}; // MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo


class MplsTe::Bfd::Links : public Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Link; //type: MplsTe::Bfd::Links::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Links::Link> > link;


}; // MplsTe::Bfd::Links


class MplsTe::Bfd::Links::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Neighbor; //type: MplsTe::Bfd::Links::Link::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Links::Link::Neighbor> > neighbor;


}; // MplsTe::Bfd::Links::Link


class MplsTe::Bfd::Links::Link::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf is_bfd_up; //type: boolean



}; // MplsTe::Bfd::Links::Link::Neighbor


class MplsTe::Bfd::TailInfos : public Entity
{
    public:
        TailInfos();
        ~TailInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TailInfo; //type: MplsTe::Bfd::TailInfos::TailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::TailInfos::TailInfo> > tail_info;


}; // MplsTe::Bfd::TailInfos


class MplsTe::Bfd::TailInfos::TailInfo : public Entity
{
    public:
        TailInfo();
        ~TailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf lsp_id; //type: int32
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string
        YLeaf ctype; //type: CtypeEnum
        YLeaf p2mp_id; //type: int32
        YLeaf signaled_name; //type: string
        YLeaf bfd_session_state; //type: TeBfdLspSessionStateEnum

        class LspFec; //type: MplsTe::Bfd::TailInfos::TailInfo::LspFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::TailInfos::TailInfo::LspFec> lsp_fec;


}; // MplsTe::Bfd::TailInfos::TailInfo


class MplsTe::Bfd::TailInfos::TailInfo::LspFec : public Entity
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

        class FecDestinationInfo; //type: MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTe::Bfd::TailInfos::TailInfo::LspFec


class MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo : public Entity
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



}; // MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo


class MplsTe::Bfd::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_count_total; //type: uint16
        YLeaf tunnel_count_bfd_enabled; //type: uint16
        YLeaf tunnel_count_session_up; //type: uint16
        YLeaf tunnel_count_sbfd_enabled; //type: uint16
        YLeaf tunnel_count_sbfd_session_up; //type: uint16
        YLeaf head_lsp_count_session_created; //type: uint16
        YLeaf head_lsp_count_up; //type: uint16
        YLeaf tail_lsp_count_session_created; //type: uint16
        YLeaf tail_lsp_count_session_up; //type: uint16
        YLeaf head_lsp_count_sbfd_session_created; //type: uint16
        YLeaf head_lsp_count_sbfd_up; //type: uint16
        YLeaf link_count_bfd_enabled; //type: uint16
        YLeaf link_count_session_created; //type: uint16
        YLeaf link_count_session_up; //type: uint16



}; // MplsTe::Bfd::Summary


class MplsTe::Bfd::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_cleared_timestamp; //type: uint32

        class BfdOverLspHeadCounters; //type: MplsTe::Bfd::Counters::BfdOverLspHeadCounters
        class SbfdOverLspHeadCounters; //type: MplsTe::Bfd::Counters::SbfdOverLspHeadCounters
        class BfdOverLspTailCounters; //type: MplsTe::Bfd::Counters::BfdOverLspTailCounters
        class BfDoLmCounters; //type: MplsTe::Bfd::Counters::BfDoLmCounters

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Counters::BfDoLmCounters> bf_do_lm_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Counters::BfdOverLspHeadCounters> bfd_over_lsp_head_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Counters::BfdOverLspTailCounters> bfd_over_lsp_tail_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd::Counters::SbfdOverLspHeadCounters> sbfd_over_lsp_head_counters;


}; // MplsTe::Bfd::Counters


class MplsTe::Bfd::Counters::BfdOverLspHeadCounters : public Entity
{
    public:
        BfdOverLspHeadCounters();
        ~BfdOverLspHeadCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_create_events; //type: uint32
        YLeaf session_up_events; //type: uint32
        YLeaf session_creation_failed_events; //type: uint32
        YLeaf session_down_events; //type: uint32
        YLeaf session_admin_down_events; //type: uint32
        YLeaf session_gracefully_delete_events; //type: uint32
        YLeaf session_non_gracefully_delete_events; //type: uint32
        YLeaf session_create_timeout_events; //type: uint32
        YLeaf session_replay_events; //type: uint32



}; // MplsTe::Bfd::Counters::BfdOverLspHeadCounters


class MplsTe::Bfd::Counters::SbfdOverLspHeadCounters : public Entity
{
    public:
        SbfdOverLspHeadCounters();
        ~SbfdOverLspHeadCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_create_events; //type: uint32
        YLeaf session_up_events; //type: uint32
        YLeaf session_creation_failed_events; //type: uint32
        YLeaf session_down_events; //type: uint32
        YLeaf session_admin_down_events; //type: uint32
        YLeaf session_gracefully_delete_events; //type: uint32
        YLeaf session_non_gracefully_delete_events; //type: uint32
        YLeaf session_create_timeout_events; //type: uint32
        YLeaf session_replay_events; //type: uint32



}; // MplsTe::Bfd::Counters::SbfdOverLspHeadCounters


class MplsTe::Bfd::Counters::BfdOverLspTailCounters : public Entity
{
    public:
        BfdOverLspTailCounters();
        ~BfdOverLspTailCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_create_events; //type: uint32
        YLeaf session_up_events; //type: uint32
        YLeaf session_creation_failed_events; //type: uint32
        YLeaf session_down_events; //type: uint32
        YLeaf session_admin_down_events; //type: uint32
        YLeaf session_gracefully_delete_events; //type: uint32
        YLeaf session_non_gracefully_delete_events; //type: uint32
        YLeaf session_replay_events; //type: uint32



}; // MplsTe::Bfd::Counters::BfdOverLspTailCounters


class MplsTe::Bfd::Counters::BfDoLmCounters : public Entity
{
    public:
        BfDoLmCounters();
        ~BfDoLmCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_create_events; //type: uint32
        YLeaf session_up_events; //type: uint32
        YLeaf session_creation_failed_events; //type: uint32
        YLeaf session_down_events; //type: uint32
        YLeaf session_admin_down_events; //type: uint32
        YLeaf session_gracefully_delete_events; //type: uint32
        YLeaf session_non_gracefully_delete_events; //type: uint32
        YLeaf session_replay_events; //type: uint32



}; // MplsTe::Bfd::Counters::BfDoLmCounters


class MplsTe::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Status; //type: MplsTe::Nsr::Status
        class Detail; //type: MplsTe::Nsr::Detail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status> status;


}; // MplsTe::Nsr


class MplsTe::Nsr::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: TeProcRoleEnum

        class SyncStatusInformation; //type: MplsTe::Nsr::Status::SyncStatusInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation> sync_status_information;


}; // MplsTe::Nsr::Status


class MplsTe::Nsr::Status::SyncStatusInformation : public Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_show_type; //type: TeSyncStatusShowEnum

        class SlaveSyncInformation; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;


}; // MplsTe::Nsr::Status::SyncStatusInformation


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation : public Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf insync_tunnels; //type: uint32
        YLeaf insync_sub_ls_ps; //type: uint32
        YLeaf pending_tunnels; //type: uint32
        YLeaf pending_sub_ls_ps; //type: uint32

        class Idt; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;


}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentIdtInfo; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf tunnel_name; //type: string



}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf signaled_name; //type: string
        YLeaf s2l_role; //type: MplsTeTunnelRoleEnum



}; // MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation : public Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Idt; //type: MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;


}; // MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation


class MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentIdtInfo; //type: MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Nsr::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: TeProcRoleEnum

        class SyncStatusInformation; //type: MplsTe::Nsr::Detail::SyncStatusInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation> sync_status_information;


}; // MplsTe::Nsr::Detail


class MplsTe::Nsr::Detail::SyncStatusInformation : public Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_show_type; //type: TeSyncStatusShowEnum

        class SlaveSyncInformation; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;


}; // MplsTe::Nsr::Detail::SyncStatusInformation


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation : public Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf insync_tunnels; //type: uint32
        YLeaf insync_sub_ls_ps; //type: uint32
        YLeaf pending_tunnels; //type: uint32
        YLeaf pending_sub_ls_ps; //type: uint32

        class Idt; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;


}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentIdtInfo; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending : public Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf tunnel_name; //type: string



}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending : public Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf signaled_name; //type: string
        YLeaf s2l_role; //type: MplsTeTunnelRoleEnum



}; // MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation : public Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Idt; //type: MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt> idt;


}; // MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation


class MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentIdtInfo; //type: MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTe::AutoTunnelServices : public Entity
{
    public:
        AutoTunnelServices();
        ~AutoTunnelServices();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SrPolicyEntries; //type: MplsTe::AutoTunnelServices::SrPolicyEntries

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices::SrPolicyEntries> sr_policy_entries;


}; // MplsTe::AutoTunnelServices


class MplsTe::AutoTunnelServices::SrPolicyEntries : public Entity
{
    public:
        SrPolicyEntries();
        ~SrPolicyEntries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SrPolicyEntry; //type: MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry> > sr_policy_entry;


}; // MplsTe::AutoTunnelServices::SrPolicyEntries


class MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry : public Entity
{
    public:
        SrPolicyEntry();
        ~SrPolicyEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_id; //type: int32
        YLeaf color; //type: int32
        YLeaf end_point; //type: string
        YLeaf distinguisher; //type: int32
        YLeaf sr_policy_id; //type: uint32
        YLeaf policy_active; //type: boolean
        YLeaf client_id_xr; //type: uint32
        YLeaf client_name; //type: string
        YLeaf color_xr; //type: uint32
        YLeaf distinguisher_xr; //type: uint32
        YLeaf ipv6_caps; //type: boolean
        YLeaf binding_sid_context_id; //type: uint32
        YLeaf requested_binding_sid; //type: uint32
        YLeaf binding_sid_request_pending; //type: boolean
        YLeaf allocated_binding_sid; //type: uint32
        YLeaf rewrite_request_pending; //type: boolean
        YLeaf rewrite_done; //type: boolean
        YLeaf is_stale; //type: boolean
        YLeaf is_synced; //type: boolean
        YLeaf notify_time; //type: uint32
        YLeaf notify_state_is_active; //type: boolean
        YLeaf creation_time; //type: uint64

        class EndPointXr; //type: MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr
        class ExplicitPath; //type: MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr> end_point_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath> > explicit_path;


}; // MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry


class MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr : public Entity
{
    public:
        EndPointXr();
        ~EndPointXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_type; //type: MplsTeAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr


class MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath : public Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf context_id; //type: uint32
        YLeaf path_weight; //type: uint32
        YLeaf is_stale; //type: boolean
        YLeaf is_synced; //type: boolean
        YLeaf programmed_in_fib; //type: boolean

        class TunnelInfo; //type: MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo
        class Hops; //type: MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops> > hops;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo> tunnel_info;


}; // MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath


class MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo : public Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_up; //type: boolean
        YLeaf ipv6_caps; //type: boolean



}; // MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo


class MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops : public Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hop_type; //type: TeAutoTunExpPathHopEnum
        YLeaf ipv4_address; //type: string
        YLeaf mpls_label; //type: uint32



}; // MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops


class MplsTe::AffinityMap : public Entity
{
    public:
        AffinityMap();
        ~AffinityMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AffinityMapArray; //type: MplsTe::AffinityMap::AffinityMapArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AffinityMap::AffinityMapArray> > affinity_map_array;


}; // MplsTe::AffinityMap


class MplsTe::AffinityMap::AffinityMapArray : public Entity
{
    public:
        AffinityMapArray();
        ~AffinityMapArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_name; //type: string
        YLeaf affinity_value; //type: uint32
        YLeaf affinity_bit_position; //type: uint8
        YLeaf affinity_table_id; //type: TeAffinityTableEnum
        YLeafList affinity_extended_value; //type: list of  uint32



}; // MplsTe::AffinityMap::AffinityMapArray


class MplsTe::TopologyBriefs : public Entity
{
    public:
        TopologyBriefs();
        ~TopologyBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyBrief; //type: MplsTe::TopologyBriefs::TopologyBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief> > topology_brief;


}; // MplsTe::TopologyBriefs


class MplsTe::TopologyBriefs::TopologyBrief : public Entity
{
    public:
        TopologyBrief();
        ~TopologyBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf igp_id; //type: string
        YLeaf area; //type: int32
        YLeaf topology_node_type; //type: MplsTeNodeEnum
        YLeaf igp_node_id; //type: string
        YLeaf topology_node_te_router_id; //type: string
        YLeaf topology_node_overloaded; //type: boolean

        class TopologyNodeSidAndSrbg; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg
        class TopologyNodeLink; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink> > topology_node_link;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg> topology_node_sid_and_srbg;


}; // MplsTe::TopologyBriefs::TopologyBrief


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg : public Entity
{
    public:
        TopologyNodeSidAndSrbg();
        ~TopologyNodeSidAndSrbg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_id; //type: uint32
        YLeaf segment_id_local_absolute_value; //type: uint32
        YLeaf srgb_start; //type: uint32
        YLeaf srgb_size; //type: uint32



}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink : public Entity
{
    public:
        TopologyNodeLink();
        ~TopologyNodeLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology_link_type; //type: IgpSubnetEnum
        YLeaf topology_link_interface_address; //type: string
        YLeaf topology_link_interface_id; //type: uint32
        YLeaf topology_link_neighbor_address; //type: string
        YLeaf topology_link_neighbor_id; //type: uint32
        YLeaf topology_link_neighbor_system_id; //type: string
        YLeaf topology_link_neighbor_node_id; //type: uint32
        YLeaf topology_link_neighbor_generation; //type: uint32
        YLeaf topology_link_fragment_id; //type: uint32
        YLeaf topology_link_te_metric; //type: uint32
        YLeaf topology_link_igp_metric; //type: uint32
        YLeaf topology_link_uni_delay; //type: uint32
        YLeaf topology_link_affinity_bits; //type: uint32
        YLeaf topology_link_switching_capability; //type: uint8
        YLeaf topology_link_encoding; //type: uint8
        YLeaf topology_link_bandwidth_model; //type: IgpteLibBwModelEnum
        YLeafList topology_link_extended_affinity_bit; //type: list of  uint32

        class TopologyLinkBandwidth; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth
        class OduLinkCapabilities; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities
        class SharedRiskLinkGroup; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup
        class AdjacencySid; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid> > adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth> topology_link_bandwidth;


}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth : public Entity
{
    public:
        TopologyLinkBandwidth();
        ~TopologyLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_migration_mode; //type: RrrDsteMigrationModeEnum

        class TopologyLinkBandwidthPrestandard; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard
        class TopologyLinkBandwidthStandard; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard> topology_link_bandwidth_prestandard;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard> topology_link_bandwidth_standard;


}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard : public Entity
{
    public:
        TopologyLinkBandwidthPrestandard();
        ~TopologyLinkBandwidthPrestandard();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology_link_prestandard_bandwidth_physical; //type: uint32
        YLeaf topology_link_prestandard_bandwidth_reservation_global; //type: uint32
        YLeaf topology_link_prestandard_bandwidth_reservation_subpool; //type: uint32

        class TopologyLinkPrestandardBandwidthDetail; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail> topology_link_prestandard_bandwidth_detail;


}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail : public Entity
{
    public:
        TopologyLinkPrestandardBandwidthDetail();
        ~TopologyLinkPrestandardBandwidthDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList topology_link_prestandard_bandwidth_allocated; //type: list of  uint32
        YLeafList topology_link_prestandard_bandwidth_available_global; //type: list of  uint32
        YLeafList topology_link_prestandard_bandwidth_available_subpool; //type: list of  uint32



}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard : public Entity
{
    public:
        TopologyLinkBandwidthStandard();
        ~TopologyLinkBandwidthStandard();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topo_link_std_bw_physical; //type: uint32
        YLeaf topo_link_std_bw_res_max; //type: uint32
        YLeaf topo_link_std_bw_res_pool0; //type: uint32
        YLeaf topo_link_std_bw_res_pool1; //type: uint32

        class TopoLinkStdBwDetail; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail> topo_link_std_bw_detail;


}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail : public Entity
{
    public:
        TopoLinkStdBwDetail();
        ~TopoLinkStdBwDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList topo_link_std_bw_allocated; //type: list of  uint32
        YLeafList topo_link_std_bw_available; //type: list of  uint32



}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities : public Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList max_lsp_bandwidth; //type: list of  uint32

        class OduCapability; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability> > odu_capability;


}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability : public Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signal_type; //type: TeOduLevelEnum
        YLeaf stage1; //type: TeOduLevelEnum
        YLeaf stage2; //type: TeOduLevelEnum
        YLeaf stage3; //type: TeOduLevelEnum
        YLeaf stage4; //type: TeOduLevelEnum
        YLeaf terminable; //type: boolean
        YLeaf switchable; //type: boolean
        YLeaf tsg1p25; //type: boolean
        YLeaf tsg2p5; //type: boolean
        YLeaf vcat_capable; //type: boolean
        YLeaf lcas_capable; //type: boolean

        class BandwidthInfo; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;


}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeOduCapabilityEnum

        class Fixed; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;


}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_od_us; //type: uint8
        YLeaf unreserved_od_us; //type: uint8



}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_bandwidth; //type: uint32
        YLeaf unreserved_bandwidth; //type: uint32
        YLeaf max_lsp_bandwidth; //type: uint32



}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup : public Entity
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



}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adjacency_sid; //type: uint32
        YLeaf link_type; //type: IgpSubnetEnum
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string
        YLeaf nbr_node_igpid; //type: string
        YLeaf nbr_node_te_router_id; //type: string
        YLeaf flag_f; //type: boolean
        YLeaf flag_b; //type: boolean
        YLeaf flag_v; //type: boolean
        YLeaf flag_l; //type: boolean
        YLeaf flag_s; //type: boolean



}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid

class MplsLcacStandby : public Entity
{
    public:
        MplsLcacStandby();
        ~MplsLcacStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Neighbors; //type: MplsLcacStandby::Neighbors
        class PreemptionEvents; //type: MplsLcacStandby::PreemptionEvents
        class Advertisements; //type: MplsLcacStandby::Advertisements
        class Statistics; //type: MplsLcacStandby::Statistics
        class BandwidthAllocation; //type: MplsLcacStandby::BandwidthAllocation
        class Gmpls; //type: MplsLcacStandby::Gmpls
        class BfdNeighbors; //type: MplsLcacStandby::BfdNeighbors
        class BandwidthAccount; //type: MplsLcacStandby::BandwidthAccount
        class LinkSummary; //type: MplsLcacStandby::LinkSummary
        class LinkInformation; //type: MplsLcacStandby::LinkInformation
        class AdmissionControl; //type: MplsLcacStandby::AdmissionControl
        class SoftPreemptionGlobalInfo; //type: MplsLcacStandby::SoftPreemptionGlobalInfo
        class SoftPreemptions; //type: MplsLcacStandby::SoftPreemptions

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl> admission_control;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements> advertisements;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount> bandwidth_account;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation> bandwidth_allocation;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BfdNeighbors> bfd_neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Gmpls> gmpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation> link_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkSummary> link_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::PreemptionEvents> preemption_events;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptionGlobalInfo> soft_preemption_global_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptions> soft_preemptions;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics> statistics;


}; // MplsLcacStandby


class MplsLcacStandby::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: MplsLcacStandby::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Neighbors::Neighbor> > neighbor;


}; // MplsLcacStandby::Neighbors


class MplsLcacStandby::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Neighbor_; //type: MplsLcacStandby::Neighbors::Neighbor::Neighbor_

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Neighbors::Neighbor::Neighbor_> > neighbor;


}; // MplsLcacStandby::Neighbors::Neighbor


class MplsLcacStandby::Neighbors::Neighbor::Neighbor_ : public Entity
{
    public:
        Neighbor_();
        ~Neighbor_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_id; //type: string
        YLeaf area_id; //type: string
        YLeaf neighbor_address; //type: string



}; // MplsLcacStandby::Neighbors::Neighbor::Neighbor_


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_26_ */

