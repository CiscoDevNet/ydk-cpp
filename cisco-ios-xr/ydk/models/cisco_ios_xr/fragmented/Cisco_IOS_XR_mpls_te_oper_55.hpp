#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_55_
#define _CISCO_IOS_XR_MPLS_TE_OPER_55_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_54.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_ : public Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        class P2PTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite : public Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite : public Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_label; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite : public Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timestamp; //type: uint32
        class TunnelRewrite_; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_> tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_ : public Entity
{
    public:
        TunnelRewrite_();
        ~TunnelRewrite_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        class P2PTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite
        class P2MpTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite> p2mp_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite> p2p_tunnel_rewrite;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite : public Entity
{
    public:
        P2PTunnelRewrite();
        ~P2PTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite : public Entity
{
    public:
        P2MpTunnelRewrite();
        ~P2MpTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_label; //type: uint32

}; // MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite


class MplsTeStandby::P2Mp::CollaboratorTimers : public Entity
{
    public:
        CollaboratorTimers();
        ~CollaboratorTimers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class P2MpTimer; //type: MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer> > p2mp_timer;
        
}; // MplsTeStandby::P2Mp::CollaboratorTimers


class MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer : public Entity
{
    public:
        P2MpTimer();
        ~P2MpTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timer_type; //type: MplsTeP2MpTimerEnum
        YLeaf timer_name; //type: string
        YLeaf start_time; //type: uint32
        YLeaf expiry_time; //type: uint32
        YLeaf stop_time; //type: uint32
        YLeaf duration; //type: uint32
        YLeaf is_running; //type: boolean

}; // MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites : public Entity
{
    public:
        ForwardingOutputLabelRewrites();
        ~ForwardingOutputLabelRewrites();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardingOutputLabelRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite> > forwarding_output_label_rewrite;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite : public Entity
{
    public:
        ForwardingOutputLabelRewrite();
        ~ForwardingOutputLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class S2LOutputRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite
        class S2L; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L
        class S2LsrPath; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L> > s2l;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite> s2l_output_rewrite;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath> > s2lsr_path;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite : public Entity
{
    public:
        S2LOutputRewrite();
        ~S2LOutputRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Subfamily; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily
        class SuccessfulRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite
        class FailedRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite
        class PendingRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite> failed_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite> pending_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily> subfamily;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite> successful_rewrite;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily : public Entity
{
    public:
        Subfamily();
        ~Subfamily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf previous_hop_address; //type: string
        class LspFec; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec> lsp_fec;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec : public Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite : public Entity
{
    public:
        SuccessfulRewrite();
        ~SuccessfulRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timestamp; //type: uint32
        YLeaf out_rewrite_role; //type: MplsTeTunnelRoleEnum
        YLeaf label; //type: uint32
        YLeaf backup_active; //type: boolean
        YLeaf s2l_source; //type: string
        YLeaf explicit_null; //type: TeS2LOutputRwExplicitNullEnum
        YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite : public Entity
{
    public:
        FailedRewrite();
        ~FailedRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timestamp; //type: uint32
        YLeaf out_rewrite_role; //type: MplsTeTunnelRoleEnum
        YLeaf label; //type: uint32
        YLeaf backup_active; //type: boolean
        YLeaf s2l_source; //type: string
        YLeaf explicit_null; //type: TeS2LOutputRwExplicitNullEnum
        YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite : public Entity
{
    public:
        PendingRewrite();
        ~PendingRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timestamp; //type: uint32
        YLeaf out_rewrite_role; //type: MplsTeTunnelRoleEnum
        YLeaf label; //type: uint32
        YLeaf backup_active; //type: boolean
        YLeaf s2l_source; //type: string
        YLeaf explicit_null; //type: TeS2LOutputRwExplicitNullEnum
        YLeaf protocol_transported; //type: uint16
        class PrimaryS2L; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L
        class BackupTunnelRewrite; //type: MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite> backup_tunnel_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L> primary_s2l;
        
}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L : public Entity
{
    public:
        PrimaryS2L();
        ~PrimaryS2L();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite : public Entity
{
    public:
        BackupTunnelRewrite();
        ~BackupTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf physica_interface_name; //type: string
        YLeaf tunnel_interface_name; //type: string
        YLeaf parent_interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf out_label; //type: uint32
        YLeaf bandwidth_accounting_requested; //type: boolean
        YLeafList sr_label_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L : public Entity
{
    public:
        S2L();
        ~S2L();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf sub_group_original_id; //type: string

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L


class MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath : public Entity
{
    public:
        S2LsrPath();
        ~S2LsrPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_primary; //type: boolean
        YLeaf is_backup; //type: boolean
        YLeaf outgoing_interface; //type: string
        YLeaf path_id; //type: uint32
        YLeaf backup_path_id; //type: uint32
        YLeaf next_hop; //type: string
        YLeafList outgoing_labels_stack; //type: list of  uint32

}; // MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath


class MplsTeStandby::OpenConfig : public Entity
{
    public:
        OpenConfig();
        ~OpenConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LspStates; //type: MplsTeStandby::OpenConfig::LspStates
        class LspCounters; //type: MplsTeStandby::OpenConfig::LspCounters

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig::LspCounters> lsp_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig::LspStates> lsp_states;
        
}; // MplsTeStandby::OpenConfig


class MplsTeStandby::OpenConfig::LspStates : public Entity
{
    public:
        LspStates();
        ~LspStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LspState; //type: MplsTeStandby::OpenConfig::LspStates::LspState

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig::LspStates::LspState> > lsp_state;
        
}; // MplsTeStandby::OpenConfig::LspStates


class MplsTeStandby::OpenConfig::LspStates::LspState : public Entity
{
    public:
        LspState();
        ~LspState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // MplsTeStandby::OpenConfig::LspStates::LspState


class MplsTeStandby::OpenConfig::LspCounters : public Entity
{
    public:
        LspCounters();
        ~LspCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LspCounter; //type: MplsTeStandby::OpenConfig::LspCounters::LspCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig::LspCounters::LspCounter> > lsp_counter;
        
}; // MplsTeStandby::OpenConfig::LspCounters


class MplsTeStandby::OpenConfig::LspCounters::LspCounter : public Entity
{
    public:
        LspCounter();
        ~LspCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // MplsTeStandby::OpenConfig::LspCounters::LspCounter


class MplsTeStandby::LspOutOfResources : public Entity
{
    public:
        LspOutOfResources();
        ~LspOutOfResources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: MplsTeStandby::LspOutOfResources::Summary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources::Summary> summary;
        
}; // MplsTeStandby::LspOutOfResources


class MplsTeStandby::LspOutOfResources::Summary : public Entity
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

        YLeaf transit_lsp_total_count; //type: uint32
        YLeaf transit_lsp_unprotected_count; //type: uint32
        YLeaf lsp_oor_state; //type: LspOorStateEnum
        YLeaf lsp_oor_timestamp; //type: uint32
        YLeaf lsp_oor_green_recovery_time; //type: uint32
        class LspOorStateXr; //type: MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr> > lsp_oor_state_xr;
        
}; // MplsTeStandby::LspOutOfResources::Summary


class MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr : public Entity
{
    public:
        LspOorStateXr();
        ~LspOorStateXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_oor_state; //type: LspOorStateEnum
        YLeaf threshold_transit_all; //type: uint32
        YLeaf threshold_transit_unprotected; //type: uint32
        YLeaf te_metric_penalty; //type: uint32
        YLeaf available_bw_percentage; //type: uint32
        YLeaf transition_duration; //type: uint32
        YLeaf minimum_lsp_bandwidth; //type: uint32
        YLeaf accept_reopt; //type: boolean
        class Statistics; //type: MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics> statistics;
        
}; // MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr


class MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics : public Entity
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

        YLeaf transitions; //type: uint32
        YLeaf rejected_ls_ps_number; //type: uint32
        YLeaf accepted_ls_ps_number; //type: uint32
        YLeaf accepted_reopt_ls_ps_number; //type: uint32
        YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics


class MplsTeStandby::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HeadInfos; //type: MplsTeStandby::Bfd::HeadInfos
        class Links; //type: MplsTeStandby::Bfd::Links
        class TailInfos; //type: MplsTeStandby::Bfd::TailInfos
        class Summary; //type: MplsTeStandby::Bfd::Summary
        class Counters; //type: MplsTeStandby::Bfd::Counters

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos> head_infos;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Links> links;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::TailInfos> tail_infos;
        
}; // MplsTeStandby::Bfd


class MplsTeStandby::Bfd::HeadInfos : public Entity
{
    public:
        HeadInfos();
        ~HeadInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HeadInfo; //type: MplsTeStandby::Bfd::HeadInfos::HeadInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos::HeadInfo> > head_info;
        
}; // MplsTeStandby::Bfd::HeadInfos


class MplsTeStandby::Bfd::HeadInfos::HeadInfo : public Entity
{
    public:
        HeadInfo();
        ~HeadInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        YLeaf tunnel_name_xr; //type: string
        YLeaf destination_address; //type: string
        YLeaf lspbfd_type; //type: TeVifBfdEnum
        class CurrentLspbfdInfo; //type: MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo
        class StandbyLspbfdInfo; //type: MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo
        class ReoptimizedLspbfdInfo; //type: MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo> current_lspbfd_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo> reoptimized_lspbfd_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo> standby_lspbfd_info;
        
}; // MplsTeStandby::Bfd::HeadInfos::HeadInfo


class MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo : public Entity
{
    public:
        CurrentLspbfdInfo();
        ~CurrentLspbfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: uint16
        YLeaf bfd_session_state; //type: TeBfdLspSessionStateEnum

}; // MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo


class MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo : public Entity
{
    public:
        StandbyLspbfdInfo();
        ~StandbyLspbfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: uint16
        YLeaf bfd_session_state; //type: TeBfdLspSessionStateEnum

}; // MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo


class MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo : public Entity
{
    public:
        ReoptimizedLspbfdInfo();
        ~ReoptimizedLspbfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: uint16
        YLeaf bfd_session_state; //type: TeBfdLspSessionStateEnum

}; // MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo


class MplsTeStandby::Bfd::Links : public Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Link; //type: MplsTeStandby::Bfd::Links::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Links::Link> > link;
        
}; // MplsTeStandby::Bfd::Links


class MplsTeStandby::Bfd::Links::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Neighbor; //type: MplsTeStandby::Bfd::Links::Link::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Links::Link::Neighbor> > neighbor;
        
}; // MplsTeStandby::Bfd::Links::Link


class MplsTeStandby::Bfd::Links::Link::Neighbor : public Entity
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

        YLeaf neighbor_address; //type: string
        YLeaf is_bfd_up; //type: boolean

}; // MplsTeStandby::Bfd::Links::Link::Neighbor


class MplsTeStandby::Bfd::TailInfos : public Entity
{
    public:
        TailInfos();
        ~TailInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TailInfo; //type: MplsTeStandby::Bfd::TailInfos::TailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::TailInfos::TailInfo> > tail_info;
        
}; // MplsTeStandby::Bfd::TailInfos


class MplsTeStandby::Bfd::TailInfos::TailInfo : public Entity
{
    public:
        TailInfo();
        ~TailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf lsp_id; //type: int32
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string
        YLeaf ctype; //type: CtypeEnum
        YLeaf p2mp_id; //type: int32
        YLeaf signaled_name; //type: string
        YLeaf bfd_session_state; //type: TeBfdLspSessionStateEnum
        class LspFec; //type: MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec> lsp_fec;
        
}; // MplsTeStandby::Bfd::TailInfos::TailInfo


class MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec : public Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec


class MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo


class MplsTeStandby::Bfd::Summary : public Entity
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

}; // MplsTeStandby::Bfd::Summary


class MplsTeStandby::Bfd::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_cleared_timestamp; //type: uint32
        class BfdOverLspHeadCounters; //type: MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters
        class SbfdOverLspHeadCounters; //type: MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters
        class BfdOverLspTailCounters; //type: MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters
        class BfDoLmCounters; //type: MplsTeStandby::Bfd::Counters::BfDoLmCounters

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Counters::BfDoLmCounters> bf_do_lm_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters> bfd_over_lsp_head_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters> bfd_over_lsp_tail_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters> sbfd_over_lsp_head_counters;
        
}; // MplsTeStandby::Bfd::Counters


class MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters : public Entity
{
    public:
        BfdOverLspHeadCounters();
        ~BfdOverLspHeadCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_create_events; //type: uint32
        YLeaf session_up_events; //type: uint32
        YLeaf session_creation_failed_events; //type: uint32
        YLeaf session_down_events; //type: uint32
        YLeaf session_admin_down_events; //type: uint32
        YLeaf session_gracefully_delete_events; //type: uint32
        YLeaf session_non_gracefully_delete_events; //type: uint32
        YLeaf session_create_timeout_events; //type: uint32
        YLeaf session_replay_events; //type: uint32

}; // MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters


class MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters : public Entity
{
    public:
        SbfdOverLspHeadCounters();
        ~SbfdOverLspHeadCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_create_events; //type: uint32
        YLeaf session_up_events; //type: uint32
        YLeaf session_creation_failed_events; //type: uint32
        YLeaf session_down_events; //type: uint32
        YLeaf session_admin_down_events; //type: uint32
        YLeaf session_gracefully_delete_events; //type: uint32
        YLeaf session_non_gracefully_delete_events; //type: uint32
        YLeaf session_create_timeout_events; //type: uint32
        YLeaf session_replay_events; //type: uint32

}; // MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters


class MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters : public Entity
{
    public:
        BfdOverLspTailCounters();
        ~BfdOverLspTailCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_create_events; //type: uint32
        YLeaf session_up_events; //type: uint32
        YLeaf session_creation_failed_events; //type: uint32
        YLeaf session_down_events; //type: uint32
        YLeaf session_admin_down_events; //type: uint32
        YLeaf session_gracefully_delete_events; //type: uint32
        YLeaf session_non_gracefully_delete_events; //type: uint32
        YLeaf session_replay_events; //type: uint32

}; // MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters


class MplsTeStandby::Bfd::Counters::BfDoLmCounters : public Entity
{
    public:
        BfDoLmCounters();
        ~BfDoLmCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_create_events; //type: uint32
        YLeaf session_up_events; //type: uint32
        YLeaf session_creation_failed_events; //type: uint32
        YLeaf session_down_events; //type: uint32
        YLeaf session_admin_down_events; //type: uint32
        YLeaf session_gracefully_delete_events; //type: uint32
        YLeaf session_non_gracefully_delete_events; //type: uint32
        YLeaf session_replay_events; //type: uint32

}; // MplsTeStandby::Bfd::Counters::BfDoLmCounters


class MplsTeStandby::Nsr : public Entity
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

        class Status; //type: MplsTeStandby::Nsr::Status
        class Detail; //type: MplsTeStandby::Nsr::Detail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status> status;
        
}; // MplsTeStandby::Nsr


class MplsTeStandby::Nsr::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: TeProcRoleEnum
        class SyncStatusInformation; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation> sync_status_information;
        
}; // MplsTeStandby::Nsr::Status


class MplsTeStandby::Nsr::Status::SyncStatusInformation : public Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_show_type; //type: TeSyncStatusShowEnum
        class SlaveSyncInformation; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation : public Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf insync_tunnels; //type: uint32
        YLeaf insync_sub_ls_ps; //type: uint32
        YLeaf pending_tunnels; //type: uint32
        YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CurrentIdtInfo; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf tunnel_name; //type: string

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf signaled_name; //type: string
        YLeaf s2l_role; //type: MplsTeTunnelRoleEnum

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation : public Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Idt; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CurrentIdtInfo; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Nsr::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: TeProcRoleEnum
        class SyncStatusInformation; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation> sync_status_information;
        
}; // MplsTeStandby::Nsr::Detail


class MplsTeStandby::Nsr::Detail::SyncStatusInformation : public Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_show_type; //type: TeSyncStatusShowEnum
        class SlaveSyncInformation; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation : public Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf insync_tunnels; //type: uint32
        YLeaf insync_sub_ls_ps; //type: uint32
        YLeaf pending_tunnels; //type: uint32
        YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CurrentIdtInfo; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending : public Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf tunnel_name; //type: string

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending : public Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf signaled_name; //type: string
        YLeaf s2l_role; //type: MplsTeTunnelRoleEnum

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation : public Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Idt; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CurrentIdtInfo; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::AutoTunnelServices : public Entity
{
    public:
        AutoTunnelServices();
        ~AutoTunnelServices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrPolicyEntries; //type: MplsTeStandby::AutoTunnelServices::SrPolicyEntries

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnelServices::SrPolicyEntries> sr_policy_entries;
        
}; // MplsTeStandby::AutoTunnelServices


class MplsTeStandby::AutoTunnelServices::SrPolicyEntries : public Entity
{
    public:
        SrPolicyEntries();
        ~SrPolicyEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrPolicyEntry; //type: MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry> > sr_policy_entry;
        
}; // MplsTeStandby::AutoTunnelServices::SrPolicyEntries


class MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry : public Entity
{
    public:
        SrPolicyEntry();
        ~SrPolicyEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class EndPointXr; //type: MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr
        class ExplicitPath; //type: MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr> end_point_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath> > explicit_path;
        
}; // MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry


class MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr : public Entity
{
    public:
        EndPointXr();
        ~EndPointXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_type; //type: MplsTeAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr


class MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath : public Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_id; //type: uint32
        YLeaf path_weight; //type: uint32
        YLeaf is_stale; //type: boolean
        YLeaf is_synced; //type: boolean
        YLeaf programmed_in_fib; //type: boolean
        class TunnelInfo; //type: MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo
        class Hops; //type: MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops> > hops;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo> tunnel_info;
        
}; // MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath


class MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo : public Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_up; //type: boolean
        YLeaf ipv6_caps; //type: boolean

}; // MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo


class MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops : public Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hop_type; //type: TeAutoTunExpPathHopEnum
        YLeaf ipv4_address; //type: string
        YLeaf mpls_label; //type: uint32

}; // MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops


class MplsTeStandby::AffinityMap : public Entity
{
    public:
        AffinityMap();
        ~AffinityMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AffinityMapArray; //type: MplsTeStandby::AffinityMap::AffinityMapArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AffinityMap::AffinityMapArray> > affinity_map_array;
        
}; // MplsTeStandby::AffinityMap


class MplsTeStandby::AffinityMap::AffinityMapArray : public Entity
{
    public:
        AffinityMapArray();
        ~AffinityMapArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf affinity_name; //type: string
        YLeaf affinity_value; //type: uint32
        YLeaf affinity_bit_position; //type: uint8
        YLeaf affinity_table_id; //type: TeAffinityTableEnum
        YLeafList affinity_extended_value; //type: list of  uint32

}; // MplsTeStandby::AffinityMap::AffinityMapArray


class MplsTeStandby::TopologyBriefs : public Entity
{
    public:
        TopologyBriefs();
        ~TopologyBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TopologyBrief; //type: MplsTeStandby::TopologyBriefs::TopologyBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief> > topology_brief;
        
}; // MplsTeStandby::TopologyBriefs


class MplsTeStandby::TopologyBriefs::TopologyBrief : public Entity
{
    public:
        TopologyBrief();
        ~TopologyBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf igp_id; //type: string
        YLeaf area; //type: int32
        YLeaf topology_node_type; //type: MplsTeNodeEnum
        YLeaf igp_node_id; //type: string
        YLeaf topology_node_te_router_id; //type: string
        YLeaf topology_node_overloaded; //type: boolean
        class TopologyNodeSidAndSrbg; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg
        class TopologyNodeLink; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink> > topology_node_link;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg> topology_node_sid_and_srbg;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg : public Entity
{
    public:
        TopologyNodeSidAndSrbg();
        ~TopologyNodeSidAndSrbg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf segment_id; //type: uint32
        YLeaf segment_id_local_absolute_value; //type: uint32
        YLeaf srgb_start; //type: uint32
        YLeaf srgb_size; //type: uint32

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink : public Entity
{
    public:
        TopologyNodeLink();
        ~TopologyNodeLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class TopologyLinkBandwidth; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth
        class OduLinkCapabilities; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities
        class SharedRiskLinkGroup; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup
        class AdjacencySid; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid> > adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth> topology_link_bandwidth;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth : public Entity
{
    public:
        TopologyLinkBandwidth();
        ~TopologyLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth_migration_mode; //type: RrrDsteMigrationModeEnum
        class TopologyLinkBandwidthPrestandard; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard
        class TopologyLinkBandwidthStandard; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard> topology_link_bandwidth_prestandard;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard> topology_link_bandwidth_standard;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard : public Entity
{
    public:
        TopologyLinkBandwidthPrestandard();
        ~TopologyLinkBandwidthPrestandard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf topology_link_prestandard_bandwidth_physical; //type: uint32
        YLeaf topology_link_prestandard_bandwidth_reservation_global; //type: uint32
        YLeaf topology_link_prestandard_bandwidth_reservation_subpool; //type: uint32
        class TopologyLinkPrestandardBandwidthDetail; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail> topology_link_prestandard_bandwidth_detail;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail : public Entity
{
    public:
        TopologyLinkPrestandardBandwidthDetail();
        ~TopologyLinkPrestandardBandwidthDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList topology_link_prestandard_bandwidth_allocated; //type: list of  uint32
        YLeafList topology_link_prestandard_bandwidth_available_global; //type: list of  uint32
        YLeafList topology_link_prestandard_bandwidth_available_subpool; //type: list of  uint32

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard : public Entity
{
    public:
        TopologyLinkBandwidthStandard();
        ~TopologyLinkBandwidthStandard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf topo_link_std_bw_physical; //type: uint32
        YLeaf topo_link_std_bw_res_max; //type: uint32
        YLeaf topo_link_std_bw_res_pool0; //type: uint32
        YLeaf topo_link_std_bw_res_pool1; //type: uint32
        class TopoLinkStdBwDetail; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail> topo_link_std_bw_detail;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail : public Entity
{
    public:
        TopoLinkStdBwDetail();
        ~TopoLinkStdBwDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList topo_link_std_bw_allocated; //type: list of  uint32
        YLeafList topo_link_std_bw_available; //type: list of  uint32

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities : public Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList max_lsp_bandwidth; //type: list of  uint32
        class OduCapability; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability> > odu_capability;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability : public Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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
        class BandwidthInfo; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeOduCapabilityEnum
        class Fixed; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_od_us; //type: uint8
        YLeaf unreserved_od_us; //type: uint8

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_bandwidth; //type: uint32
        YLeaf unreserved_bandwidth; //type: uint32
        YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup


class MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_55_ */

