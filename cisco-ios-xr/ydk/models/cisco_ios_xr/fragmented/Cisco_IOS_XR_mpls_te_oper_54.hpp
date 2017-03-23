#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_54_
#define _CISCO_IOS_XR_MPLS_TE_OPER_54_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_53.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public Entity
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



}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending : public Entity
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



}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending : public Entity
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



}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation : public Entity
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



        class Idt; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt> idt;


}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt : public Entity
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



        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public Entity
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



}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public Entity
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



}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupTunnels; //type: MplsTeStandby::FastReroute::BackupTunnels
        class ProtectedInterfaces; //type: MplsTeStandby::FastReroute::ProtectedInterfaces
        class Protections; //type: MplsTeStandby::FastReroute::Protections
        class Promotion; //type: MplsTeStandby::FastReroute::Promotion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::BackupTunnels> backup_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::Promotion> promotion;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::ProtectedInterfaces> protected_interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::Protections> protections;


}; // MplsTeStandby::FastReroute


class MplsTeStandby::FastReroute::BackupTunnels : public Entity
{
    public:
        BackupTunnels();
        ~BackupTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupTunnel; //type: MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel> > backup_tunnel;


}; // MplsTeStandby::FastReroute::BackupTunnels


class MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel : public Entity
{
    public:
        BackupTunnel();
        ~BackupTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf backup_tunnel_id; //type: uint32
        YLeaf backup_tunnel_name_xr; //type: string
        YLeaf backup_status; //type: MplsTeBackupStatusEnum
        YLeaf backup_type; //type: MplsTeBackupEnum
        YLeaf backup_usage; //type: MplsTeBackupUsageEnum
        YLeaf prot_interface_autobackup_config; //type: AutoBackupProtectionEnum
        YLeaf prot_interface_srlg_config; //type: AutoBackupSrlgModeEnum
        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf has_attribute_set; //type: boolean
        YLeaf is_attribute_set_in_db; //type: boolean
        YLeaf recreate_timer_is_running; //type: boolean
        YLeaf recreate_remaining_time; //type: uint32
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf general_status; //type: MplsTeTunnelStateEnum
        YLeaf connection_status; //type: MplsTeTunnelStateEnum
        YLeaf output_interface_name; //type: string
        YLeaf bandwidth_pool_type; //type: MplsTeBwPoolEnum
        YLeaf bandwidth_limit_type; //type: MplsTeBwLimitEnum
        YLeaf bandwidth; //type: uint32
        YLeaf tunnel_instance; //type: uint32
        YLeaf in_use_bandwidth; //type: uint32
        YLeaf soft_preempted_in_use_bandwidth; //type: uint32
        YLeaf ls_ps; //type: uint32
        YLeaf s2l_families; //type: uint32
        YLeaf s2_ls; //type: uint32
        YLeaf frr_active_ls_ps; //type: uint32
        YLeaf frr_active_soft_preempted_ls_ps; //type: uint32



}; // MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel


class MplsTeStandby::FastReroute::ProtectedInterfaces : public Entity
{
    public:
        ProtectedInterfaces();
        ~ProtectedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtectedInterface; //type: MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface> > protected_interface;


}; // MplsTeStandby::FastReroute::ProtectedInterfaces


class MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface : public Entity
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


        YLeaf interface_name; //type: string
        YLeaf backup_tunnel_name; //type: string
        YLeaf backup_tunnel_id; //type: uint32
        YLeaf backup_tunnel_name_xr; //type: string
        YLeaf backup_status; //type: MplsTeBackupStatusEnum
        YLeaf backup_type; //type: MplsTeBackupEnum
        YLeaf backup_usage; //type: MplsTeBackupUsageEnum
        YLeaf prot_interface_autobackup_config; //type: AutoBackupProtectionEnum
        YLeaf prot_interface_srlg_config; //type: AutoBackupSrlgModeEnum
        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf has_attribute_set; //type: boolean
        YLeaf is_attribute_set_in_db; //type: boolean
        YLeaf recreate_timer_is_running; //type: boolean
        YLeaf recreate_remaining_time; //type: uint32
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf general_status; //type: MplsTeTunnelStateEnum
        YLeaf connection_status; //type: MplsTeTunnelStateEnum
        YLeaf output_interface_name; //type: string
        YLeaf bandwidth_pool_type; //type: MplsTeBwPoolEnum
        YLeaf bandwidth_limit_type; //type: MplsTeBwLimitEnum
        YLeaf bandwidth; //type: uint32
        YLeaf tunnel_instance; //type: uint32
        YLeaf in_use_bandwidth; //type: uint32
        YLeaf soft_preempted_in_use_bandwidth; //type: uint32
        YLeaf ls_ps; //type: uint32
        YLeaf s2l_families; //type: uint32
        YLeaf s2_ls; //type: uint32
        YLeaf frr_active_ls_ps; //type: uint32
        YLeaf frr_active_soft_preempted_ls_ps; //type: uint32



}; // MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface


class MplsTeStandby::FastReroute::Protections : public Entity
{
    public:
        Protections();
        ~Protections();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Protection; //type: MplsTeStandby::FastReroute::Protections::Protection

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute::Protections::Protection> > protection;


}; // MplsTeStandby::FastReroute::Protections


class MplsTeStandby::FastReroute::Protections::Protection : public Entity
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


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: int32
        YLeaf sub_group_id; //type: int32
        YLeaf sub_group_originator; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf session_type; //type: int32
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf extended_tunnel_id_xr; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_instance; //type: uint32
        YLeaf role; //type: MplsTeTunnelRoleEnum
        YLeaf admin_status; //type: MplsTeTunnelStateEnum
        YLeaf operation_status; //type: MplsTeTunnelStateEnum
        YLeaf is_signalled; //type: boolean
        YLeaf is_frr_requested; //type: boolean
        YLeaf outbound_frr_state; //type: MplsTeFrrStateEnum
        YLeaf inbound_frr_state; //type: MplsTeFrrStateEnum
        YLeaf output_interface_lsp; //type: string
        YLeaf output_label; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf frr_output_tunnel_interface; //type: string
        YLeaf frr_output_label; //type: uint32
        YLeaf backup_status; //type: MplsTeBackupStatusEnum
        YLeaf bandwidth_pool_type; //type: MplsTeBwPoolEnum
        YLeaf bandwidth_limit_type; //type: MplsTeBwLimitEnum
        YLeaf original_input_interface; //type: string
        YLeaf input_label; //type: uint32
        YLeaf previous_hop_address; //type: string
        YLeaf backup_bandwidth; //type: uint32
        YLeaf frr_output_interface; //type: string
        YLeaf backup_next_hop_address; //type: string
        YLeaf lsp_bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf sharing_type; //type: MplsTeFrrSharingEnum
        YLeaf is_p2mp_tunnel; //type: boolean
        YLeaf sub_group_original_id; //type: string
        YLeaf sub_group_id_xr; //type: uint16
        YLeaf p2mp_id_xr; //type: uint32



}; // MplsTeStandby::FastReroute::Protections::Protection


class MplsTeStandby::FastReroute::Promotion : public Entity
{
    public:
        Promotion();
        ~Promotion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf promotion_period; //type: uint32
        YLeaf remaining_time; //type: uint32
        YLeaf is_configured; //type: boolean



}; // MplsTeStandby::FastReroute::Promotion


class MplsTeStandby::AttributeSets : public Entity
{
    public:
        AttributeSets();
        ~AttributeSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AttributeSet; //type: MplsTeStandby::AttributeSets::AttributeSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet> > attribute_set;


}; // MplsTeStandby::AttributeSets


class MplsTeStandby::AttributeSets::AttributeSet : public Entity
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


        YLeaf attribute_set_type; //type: MplsTeAttrSetEnum
        YLeaf attribute_set_name; //type: string
        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf tunnel_attribute_set_name_crc32; //type: uint32

        class AttributeSetUnion; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion> attribute_set_union;


}; // MplsTeStandby::AttributeSets::AttributeSet


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion : public Entity
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

        class AttributeSetPathOption; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public Entity
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

        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class VersionInfo; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public Entity
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

        class SignalledName; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class ProtectedInterface; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public Entity
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

        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro : public Entity
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



        class Xro; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public Entity
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

        class XroSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public Entity
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

        class Ipv4Subobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public Entity
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

        class Fec; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public Entity
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

        class FecDestinationInfo; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public Entity
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

        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public Entity
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

        class RevertSchedule; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe : public Entity
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

        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public Entity
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



        class PrependEntry; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;


}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public Entity
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



}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTeStandby::IgpAreaBriefs : public Entity
{
    public:
        IgpAreaBriefs();
        ~IgpAreaBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IgpAreaBrief; //type: MplsTeStandby::IgpAreaBriefs::IgpAreaBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreaBriefs::IgpAreaBrief> > igp_area_brief;


}; // MplsTeStandby::IgpAreaBriefs


class MplsTeStandby::IgpAreaBriefs::IgpAreaBrief : public Entity
{
    public:
        IgpAreaBrief();
        ~IgpAreaBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf process_tag; //type: string
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf instance_name; //type: string
        YLeaf igp_system_id; //type: string
        YLeaf configured_te_router_id; //type: string
        YLeaf global_router_id; //type: string
        YLeaf globall_router_id_optical; //type: string
        YLeaf in_use_te_router_id; //type: string
        YLeaf is_connection_up; //type: boolean
        YLeaf connection_up_count; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeafList secondary_router_id; //type: list of  string

        class Area; //type: MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area> > area;


}; // MplsTeStandby::IgpAreaBriefs::IgpAreaBrief


class MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_index; //type: uint32
        YLeaf area_number; //type: uint32
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        YLeaf is_config_ready; //type: boolean

        class ActiveData; //type: MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData> active_data;


}; // MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area


class MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData : public Entity
{
    public:
        ActiveData();
        ~ActiveData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interfaces_count; //type: uint32
        YLeaf link_idt_received; //type: boolean
        YLeaf topology_idt_received; //type: boolean
        YLeaf sr_strict; //type: boolean
        YLeaf p2p_heads_count; //type: uint32
        YLeaf p2p_autoroute_announced_count; //type: uint32
        YLeaf p2p_forwarding_adjacency_count; //type: uint32
        YLeaf p2mp_destination_count; //type: uint32
        YLeaf tunnel_loose_hops; //type: uint32

        class AreaStatistics; //type: MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics> area_statistics;


}; // MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData


class MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics : public Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_adjacency_request_messages; //type: uint32
        YLeaf area_adjacency_announce_messages; //type: uint32
        YLeaf area_flood_messages; //type: uint32
        YLeaf area_lsa_announce_messages; //type: uint32
        YLeaf area_lsa_fragment_announce_messages; //type: uint32
        YLeaf area_lsa_delete_messages; //type: uint32
        YLeaf area_lsa_fragment_delete_messages; //type: uint32
        YLeaf area_tunnel_announce_messages; //type: uint32



}; // MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics


class MplsTeStandby::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelFlexLsps; //type: MplsTeStandby::Tunnels::TunnelFlexLsps
        class TunnelAutoBandwidths; //type: MplsTeStandby::Tunnels::TunnelAutoBandwidths
        class Summary; //type: MplsTeStandby::Tunnels::Summary
        class TunnelPathProtections; //type: MplsTeStandby::Tunnels::TunnelPathProtections

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelAutoBandwidths> tunnel_auto_bandwidths;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps> tunnel_flex_lsps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections> tunnel_path_protections;


}; // MplsTeStandby::Tunnels


class MplsTeStandby::Tunnels::TunnelFlexLsps : public Entity
{
    public:
        TunnelFlexLsps();
        ~TunnelFlexLsps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelFlexLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp> > tunnel_flex_lsp;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp : public Entity
{
    public:
        TunnelFlexLsp();
        ~TunnelFlexLsp();

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
        YLeaf tun_id; //type: uint16
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string

        class WorkingLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp
        class ProtectLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp> protect_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp> working_lsp;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp : public Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_operational; //type: boolean
        YLeaf lsp_uptime; //type: uint32
        YLeaf path_protection_lsp_id; //type: uint32
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf lsp_local_label; //type: uint32
        YLeaf lsp_output_interface; //type: string
        YLeaf lsp_output_label; //type: uint32
        YLeaf lsp_state; //type: MplsTeTunnelStateEnum

        class FlexInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection
        class ReverseLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo> flex_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop> > lsp_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp> reverse_lsp;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo : public Entity
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

        class FlexFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec> flex_fec;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_lsp_present; //type: boolean
        YLeaf reverse_lsp_connected; //type: boolean

        class ReverseLspFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec : public Entity
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

        class FecDestinationInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop : public Entity
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

        class Ipv4EroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp : public Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_operational; //type: boolean
        YLeaf lsp_uptime; //type: uint32
        YLeaf path_protection_lsp_id; //type: uint32
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf lsp_local_label; //type: uint32
        YLeaf lsp_output_interface; //type: string
        YLeaf lsp_output_label; //type: uint32
        YLeaf lsp_state; //type: MplsTeTunnelStateEnum

        class FlexInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection
        class ReverseLsp; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo> flex_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop> > lsp_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp> reverse_lsp;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo : public Entity
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

        class FlexFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec> flex_fec;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_lsp_present; //type: boolean
        YLeaf reverse_lsp_connected; //type: boolean

        class ReverseLspFec; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association
        class Protection; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec : public Entity
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

        class FecDestinationInfo; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop : public Entity
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

        class Ipv4EroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject


class MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelAutoBandwidths : public Entity
{
    public:
        TunnelAutoBandwidths();
        ~TunnelAutoBandwidths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelAutoBandwidth; //type: MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth> > tunnel_auto_bandwidth;


}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths


class MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth : public Entity
{
    public:
        TunnelAutoBandwidth();
        ~TunnelAutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_name_xr; //type: string
        YLeaf signaled_name; //type: string
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf bandwidth_applications; //type: uint32
        YLeaf last_bandwidth_applied; //type: uint32
        YLeaf tunnel_requested_bandwidth; //type: uint32
        YLeaf signalled_bandwidth; //type: uint32
        YLeaf highest_bandwidth; //type: uint32
        YLeaf last_sample_bandwidth; //type: uint32
        YLeaf samples_collected; //type: uint32
        YLeaf time_left_application; //type: uint32

        class AutoBandwidthStatus; //type: MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus> auto_bandwidth_status;


}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth


class MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus


class MplsTeStandby::Tunnels::Summary : public Entity
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


        YLeaf pcalc_tie_breaker_type; //type: TePathSelectionTiebreakerEnum
        YLeaf pcalc_tiebreaker; //type: uint32
        YLeaf tiebreaker_qualifier; //type: MplsTeMetricQualifierEnum
        YLeaf te_process_status; //type: MplsTeTunnelsProcessStatusEnum
        YLeaf is_rsvp_process_enabled; //type: boolean
        YLeaf is_forwarding_enabled; //type: boolean
        YLeaf activated_heads; //type: uint32
        YLeaf deactivated_heads; //type: uint32
        YLeaf recovered_heads; //type: uint32
        YLeaf is_periodic_reoptimization_on; //type: boolean
        YLeaf reoptimization_period; //type: uint32
        YLeaf next_reoptimization_timer; //type: uint32
        YLeaf auto_bandwidth_tunnels; //type: uint32
        YLeaf auto_bandwidth_collection_period; //type: uint32
        YLeaf is_promotion_on; //type: boolean
        YLeaf promotion_period; //type: uint32
        YLeaf next_promotion_timer; //type: uint32
        YLeaf tunnel_check_period; //type: uint32
        YLeaf next_check_time; //type: uint32
        YLeaf tunnel_verify_period; //type: uint32
        YLeaf next_verify_timer; //type: uint32
        YLeaf frr_head_tunnels; //type: uint32
        YLeaf protected_head_tunnels; //type: uint32
        YLeaf rerouted_head_tunnels; //type: uint32
        YLeaf frr_mid_point_tunnels; //type: uint32
        YLeaf protected_mid_point_tunnels; //type: uint32
        YLeaf rerouted_mid_point_tunnels; //type: uint32
        YLeaf link_protected_tunnels; //type: uint32
        YLeaf node_protected_tunnels; //type: uint32
        YLeaf bw_protected_tunnels; //type: uint32
        YLeaf frr_p2p_head_tunnels; //type: uint32
        YLeaf protected_p2p_head_tunnels; //type: uint32
        YLeaf rerouted_p2p_head_tunnels; //type: uint32
        YLeaf frr_p2p_mid_point_tunnels; //type: uint32
        YLeaf protected_p2p_mid_point_tunnels; //type: uint32
        YLeaf rerouted_p2p_mid_point_tunnels; //type: uint32
        YLeaf link_protected_p2p_tunnels; //type: uint32
        YLeaf node_protected_p2p_tunnels; //type: uint32
        YLeaf bw_protected_p2p_tunnels; //type: uint32
        YLeaf backup_tunnels; //type: uint32
        YLeaf backups_assigned; //type: uint32
        YLeaf frr_protected_interfaces; //type: uint32
        YLeaf rerouted_interfaces; //type: uint32
        YLeaf p2p_head_tunnels; //type: uint32
        YLeaf up_p2p_head_tunnels; //type: uint32
        YLeaf dynamic_up_p2p_head_tunnels; //type: uint32
        YLeaf frr_config_p2p_head_tunnels; //type: uint32
        YLeaf p2p_head_destinations; //type: uint32
        YLeaf p2p_head_destinations_up; //type: uint32
        YLeaf bw_protected_p2p_s2_ls; //type: uint32
        YLeaf link_protected_p2p_s2_ls; //type: uint32
        YLeaf up_p2p_head_s2_ls; //type: uint32
        YLeaf proceeding_p2p_head_s2_ls; //type: uint32
        YLeaf recovering_p2p_head_s2_ls; //type: uint32
        YLeaf frr_p2p_head_s2_ls; //type: uint32
        YLeaf protected_p2p_head_s2_ls; //type: uint32
        YLeaf rerouted_p2p_head_s2_ls; //type: uint32
        YLeaf p2p_mid_point_s2_ls; //type: uint32
        YLeaf up_p2p_mid_point_s2_ls; //type: uint32
        YLeaf proceeding_p2p_mid_point_s2_ls; //type: uint32
        YLeaf frr_p2p_mid_point_s2_ls; //type: uint32
        YLeaf protected_p2p_mid_point_s2_ls; //type: uint32
        YLeaf rerouted_p2p_mid_point_s2_ls; //type: uint32
        YLeaf p2p_tail_s2_ls; //type: uint32
        YLeaf up_p2p_tail_s2_ls; //type: uint32
        YLeaf p2p_tail_tunnels; //type: uint32
        YLeaf path_protect_configured_tunnels; //type: uint16
        YLeaf path_protect_configured_tunnels_up; //type: uint16
        YLeaf path_protect_configured_tunnels_standby_up; //type: uint16
        YLeaf link_diverse_paths; //type: uint16
        YLeaf node_diverse_paths; //type: uint16
        YLeaf link_and_node_diverse_paths; //type: uint16
        YLeaf user_defined_paths; //type: uint16
        YLeaf p2mp_head_tunnels; //type: uint32
        YLeaf up_p2mp_head_tunnels; //type: uint32
        YLeaf frr_config_p2mp_head_tunnels; //type: uint32
        YLeaf p2mp_head_destinations; //type: uint32
        YLeaf up_p2mp_head_destinations; //type: uint32
        YLeaf bw_protected_p2mp_s2_ls; //type: uint32
        YLeaf link_protected_p2mp_s2_ls; //type: uint32
        YLeaf up_p2mp_head_s2_ls; //type: uint32
        YLeaf proceeding_p2mp_head_s2_ls; //type: uint32
        YLeaf frr_p2mp_head_s2_ls; //type: uint32
        YLeaf protected_p2mp_head_s2_ls; //type: uint32
        YLeaf rerouted_p2mp_head_s2_ls; //type: uint32
        YLeaf p2mp_mid_point_s2_ls; //type: uint32
        YLeaf up_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf proceeding_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf frr_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf protected_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf rerouted_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf p2mp_tail_s2_ls; //type: uint32
        YLeaf up_p2mp_tail_s2_ls; //type: uint32
        YLeaf bidir_head_tunnels; //type: uint32
        YLeaf bidir_head_tunnels_up; //type: uint32
        YLeaf bidir_head_tunnels_associated; //type: uint32
        YLeaf bidir_head_tunnels_corouted; //type: uint32
        YLeaf bidir_head_ls_ps_up; //type: uint32
        YLeaf bidir_head_ls_ps_proceeding; //type: uint32
        YLeaf bidir_head_ls_ps_associated; //type: uint32
        YLeaf bidir_head_ls_ps_standby; //type: uint32
        YLeaf bidir_mid_tunnels; //type: uint32
        YLeaf bidir_mid_tunnels_up; //type: uint32
        YLeaf bidir_mid_ls_ps_proceeding; //type: uint32
        YLeaf bidir_mid_ls_ps_associated; //type: uint32
        YLeaf bidir_mid_ls_ps_standby; //type: uint32
        YLeaf bidir_tail_ls_ps; //type: uint32
        YLeaf bidir_tail_ls_ps_up; //type: uint32
        YLeaf bidir_tail_ls_ps_proceeding; //type: uint32
        YLeaf bidir_tail_ls_ps_associated; //type: uint32
        YLeaf bidir_tail_ls_ps_standby; //type: uint32
        YLeaf bidir_tail_ls_ps_corouted; //type: uint32

        class AutobackupSummary; //type: MplsTeStandby::Tunnels::Summary::AutobackupSummary
        class AutoMeshSummary; //type: MplsTeStandby::Tunnels::Summary::AutoMeshSummary
        class AutoMeshOneHopSummary; //type: MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary
        class GmplsUniSummary; //type: MplsTeStandby::Tunnels::Summary::GmplsUniSummary
        class GmplsNniSummary; //type: MplsTeStandby::Tunnels::Summary::GmplsNniSummary
        class CurrentTunnelConvergenceSummary; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary
        class LastTunnelConvergenceSummary; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary
        class AutoTunServerSummary; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary> auto_mesh_one_hop_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoMeshSummary> auto_mesh_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary> auto_tun_server_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutobackupSummary> autobackup_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary> current_tunnel_convergence_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::GmplsNniSummary> gmpls_nni_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::GmplsUniSummary> gmpls_uni_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary> last_tunnel_convergence_summary;


}; // MplsTeStandby::Tunnels::Summary


class MplsTeStandby::Tunnels::Summary::AutobackupSummary : public Entity
{
    public:
        AutobackupSummary();
        ~AutobackupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf autobackups; //type: uint32
        YLeaf up_autobackups; //type: uint32
        YLeaf down_autobackups; //type: uint32
        YLeaf unused_autobackups; //type: uint32
        YLeaf next_hop_autobackups; //type: uint32
        YLeaf next_next_hop_autobackups; //type: uint32
        YLeaf srlg_strict_autobackups; //type: uint32
        YLeaf srlg_preferred_autobackups; //type: uint32
        YLeaf srlg_weighted_autobackups; //type: uint32
        YLeaf next_hop_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_next_hop_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_hop_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_next_hop_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_hop_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_next_hop_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_s2_ls; //type: uint32



}; // MplsTeStandby::Tunnels::Summary::AutobackupSummary


class MplsTeStandby::Tunnels::Summary::AutoMeshSummary : public Entity
{
    public:
        AutoMeshSummary();
        ~AutoMeshSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_mesh_tunnels; //type: uint32
        YLeaf up_auto_mesh_tunnels; //type: uint32
        YLeaf down_auto_mesh_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_groups; //type: uint32
        YLeaf auto_mesh_destinations; //type: uint32



}; // MplsTeStandby::Tunnels::Summary::AutoMeshSummary


class MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary : public Entity
{
    public:
        AutoMeshOneHopSummary();
        ~AutoMeshOneHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf up_auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf down_auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_one_hop_groups; //type: uint32
        YLeaf auto_mesh_one_hop_destinations; //type: uint32



}; // MplsTeStandby::Tunnels::Summary::AutoMeshOneHopSummary


class MplsTeStandby::Tunnels::Summary::GmplsUniSummary : public Entity
{
    public:
        GmplsUniSummary();
        ~GmplsUniSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf heads_up; //type: uint32
        YLeaf heads_down; //type: uint32
        YLeaf tails_up; //type: uint32
        YLeaf tails_down; //type: uint32



}; // MplsTeStandby::Tunnels::Summary::GmplsUniSummary


class MplsTeStandby::Tunnels::Summary::GmplsNniSummary : public Entity
{
    public:
        GmplsNniSummary();
        ~GmplsNniSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf heads_up; //type: uint32
        YLeaf heads_down; //type: uint32
        YLeaf mids_up; //type: uint32
        YLeaf mids_down; //type: uint32
        YLeaf tails_up; //type: uint32
        YLeaf tails_down; //type: uint32



}; // MplsTeStandby::Tunnels::Summary::GmplsNniSummary


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary : public Entity
{
    public:
        CurrentTunnelConvergenceSummary();
        ~CurrentTunnelConvergenceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_frr_active_count; //type: uint32
        YLeaf tunnel_frr_total_count; //type: uint32
        YLeaf tunnel_converged_count; //type: uint32
        YLeaf tunnel_total_convergence_complete_time; //type: uint64

        class TablePathOut; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;


}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut : public Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn : public Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite : public Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc : public Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite : public Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite


class MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger : public Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary : public Entity
{
    public:
        LastTunnelConvergenceSummary();
        ~LastTunnelConvergenceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_frr_active_count; //type: uint32
        YLeaf tunnel_frr_total_count; //type: uint32
        YLeaf tunnel_converged_count; //type: uint32
        YLeaf tunnel_total_convergence_complete_time; //type: uint64

        class TablePathOut; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;


}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut : public Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn : public Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite : public Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc : public Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite : public Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite


class MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger : public Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTeStandby::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary : public Entity
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



        class TotalAutoP2MpTunnels; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels
        class TotalAutoP2PTunnels; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels
        class ClientsSummary; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary> > clients_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels> total_auto_p2mp_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels> total_auto_p2p_tunnels;


}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels : public Entity
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



}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels : public Entity
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



}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary : public Entity
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

        class P2MpInfo; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo
        class P2PInfo; //type: MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo> p2mp_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo> p2p_info;


}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo : public Entity
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



}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo


class MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo : public Entity
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



}; // MplsTeStandby::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo


class MplsTeStandby::Tunnels::TunnelPathProtections : public Entity
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



        class TunnelPathProtection; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection> > tunnel_path_protection;


}; // MplsTeStandby::Tunnels::TunnelPathProtections


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection : public Entity
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

        class PathProtection; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection
        class CurrentLsp; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp
        class StandbyLsp; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp> current_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection> path_protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp> standby_lsp;


}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection : public Entity
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

        class Switchover; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover> switchover;


}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp : public Entity
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

        class SrlspOutgoingInfo; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop> > lsp_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;


}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop : public Entity
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

        class Ipv4EroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp : public Entity
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

        class SrlspOutgoingInfo; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop> > lsp_hop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;


}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop : public Entity
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

        class Ipv4EroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject


class MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject : public Entity
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



}; // MplsTeStandby::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject


class MplsTeStandby::MaximumTunnels : public Entity
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



}; // MplsTeStandby::MaximumTunnels


class MplsTeStandby::PathProtection : public Entity
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



        class SwitchoverLog; //type: MplsTeStandby::PathProtection::SwitchoverLog

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::PathProtection::SwitchoverLog> switchover_log;


}; // MplsTeStandby::PathProtection


class MplsTeStandby::PathProtection::SwitchoverLog : public Entity
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

        class PathProtectionSwitchoverEntry; //type: MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry> > path_protection_switchover_entry;


}; // MplsTeStandby::PathProtection::SwitchoverLog


class MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry : public Entity
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



}; // MplsTeStandby::PathProtection::SwitchoverLog::PathProtectionSwitchoverEntry


class MplsTeStandby::FibNextHopLabelRoutes : public Entity
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



        class FibNextHopLabelRoute; //type: MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute> > fib_next_hop_label_route;


}; // MplsTeStandby::FibNextHopLabelRoutes


class MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute : public Entity
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

        class TargetAddress; //type: MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress
        class NextHopPath; //type: MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath> > next_hop_path;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress> target_address;


}; // MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute


class MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress : public Entity
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



}; // MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress


class MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath : public Entity
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



}; // MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath


class MplsTeStandby::P2Mp : public Entity
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



        class TunnelRewrites; //type: MplsTeStandby::P2Mp::TunnelRewrites
        class CollaboratorTimers; //type: MplsTeStandby::P2Mp::CollaboratorTimers
        class ForwardingOutputLabelRewrites; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites> forwarding_output_label_rewrites;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites> tunnel_rewrites;


}; // MplsTeStandby::P2Mp


class MplsTeStandby::P2Mp::TunnelRewrites : public Entity
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



        class TunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite> > tunnel_rewrite;


}; // MplsTeStandby::P2Mp::TunnelRewrites


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite : public Entity
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

        class SuccessfulRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite> pending_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite> successful_rewrite;


}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite : public Entity
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

        class TunnelRewrite_; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_> tunnel_rewrite;


}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_ : public Entity
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

        class P2PTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;


}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite : public Entity
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

        class PrimaryS2L; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;


}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public Entity
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



}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public Entity
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



}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite : public Entity
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



}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::SuccessfulRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite : public Entity
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

        class TunnelRewrite_; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_> tunnel_rewrite;


}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_54_ */

