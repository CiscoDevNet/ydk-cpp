#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_22_
#define _CISCO_IOS_XR_MPLS_TE_OPER_22_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_12.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_21.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_ : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel : public Entity
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

        class Wdm; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm
        class Otn_; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm> wdm;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_ : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel : public Entity
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

        class Wdm; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm
        class Otn_; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm> wdm;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_ : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Aps : public Entity
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



        class ProtectionInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo> protection_info;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Aps


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OtnS2L::Aps::ProtectionInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo : public Entity
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

        class SessionInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo
        class DeletionHistory; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory> deletion_history;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo> session_info;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo::SessionInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::HeadEndBfdInfo::DeletionHistory


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::TailEndBfdInfo : public Entity
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

        class SessionInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo> session_info;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::TailEndBfdInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::TailEndBfdInfo::SessionInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::SrlgCollection : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::SrlgCollection


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::Association : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::Association


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::Protection : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::Protection


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseLspFec : public Entity
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

        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseLspFec


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseLspFec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseTspec : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseTspec


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::FlexInfo : public Entity
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

        class FlexFec; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::FlexInfo::FlexFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::FlexInfo::FlexFec> flex_fec;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::FlexInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::FlexInfo::FlexFec : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::FlexInfo::FlexFec


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::LspWrapInfo : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::LspWrapInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::DiversityInfo : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::DiversityInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::SharedRiskLinkGroup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::SharedRiskLinkGroup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro : public Entity
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

        class Ipv4EroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro::Ipv4EroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro::Ipv4EroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::OutEro::UnnumberedEroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro : public Entity
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

        class Ipv4EroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro::Ipv4EroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro::Ipv4EroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro::UnnumberedEroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::InEro::UnnumberedEroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro : public Entity
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

        class Ipv4RroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::Ipv4RroSubObject : public Entity
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

        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags> flags;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::Ipv4RroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::Ipv4RroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::LabelRroSubObject : public Entity
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

        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags> flags;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::LabelRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::LabelRroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject : public Entity
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

        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags> flags;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::UnnumberedRroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathRro::SrlgRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro : public Entity
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

        class Ipv4RroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject : public Entity
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

        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags> flags;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject : public Entity
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

        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags> flags;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject : public Entity
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

        class Flags; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags> flags;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn : public Entity
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

        class Ipv4EroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo : public Entity
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

        class AutoBandwidthStatus; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus
        class AutoBandwidthConfig; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig
        class AutoBandwidthOper; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig> auto_bandwidth_config;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper> auto_bandwidth_oper;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus> auto_bandwidth_status;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History : public Entity
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



        class CurrentSetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup
        class ReoptSetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup
        class GmplsPathProtectSetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup
        class PreviousSetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup
        class PreviousGmplsPathProtectSetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup
        class GmplsOtherSetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup
        class GmplsOtherProtectSetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup
        class StandbySetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup
        class StandbyReoptSetup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup
        class LastReOptFail; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail
        class LastStdbyReOptFail; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup> current_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup> gmpls_other_protect_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup> gmpls_other_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup> gmpls_path_protect_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail> last_re_opt_fail;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail> last_stdby_re_opt_fail;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup> previous_gmpls_path_protect_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup> previous_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup> reopt_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup> standby_reopt_setup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup> standby_setup;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup : public Entity
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

        class ConnectedUptimes; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes> connected_uptimes;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection : public Entity
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

        class Switchover; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover> switchover;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup : public Entity
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

        class WeightedSrlgInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo
        class Iep; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep> > iep;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo> weighted_srlg_info;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo : public Entity
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



        class ProtectedInterfaceSrlg; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg
        class WeightedSrlgHop; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg> > protected_interface_srlg;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop> > weighted_srlg_hop;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep : public Entity
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

        class IepHop; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop> > iep_hop;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh : public Entity
{
    public:
        AutoMesh();
        ~AutoMesh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mesh_group_id; //type: uint32
        YLeaf tunnel_destination_list_name; //type: string
        YLeaf is_tunnel_unused_timer_running; //type: boolean
        YLeaf remaining_unused_time; //type: uint32
        YLeaf mesh_group_type; //type: TeMeshgroupEnum



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc : public Entity
{
    public:
        AutoPcc();
        ~AutoPcc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_address; //type: string
        YLeaf creator_address; //type: string
        YLeaf has_creator_id; //type: boolean
        YLeaf creator_id; //type: string
        YLeaf plspid; //type: uint32
        YLeaf symbolic_name; //type: string
        YLeaf operationally_up; //type: boolean



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation : public Entity
{
    public:
        PceDelegation();
        ~PceDelegation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf plsp_id; //type: uint32
        YLeaf symbolic_name; //type: string
        YLeaf owner_address; //type: string
        YLeaf operationally_up; //type: boolean



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption : public Entity
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
        YLeaf time_in_preemption_pending; //type: uint16
        YLeaf preemption_pending_resolution; //type: MplsTeSoftPreemptionResolutionEnum

        class SoftPreemptionCounters; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters
        class SoftPreemptionPathError; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters> soft_preemption_counters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError> > soft_preemption_path_error;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters : public Entity
{
    public:
        SoftPreemptionCounters();
        ~SoftPreemptionCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf soft_preemption_events; //type: uint32
        YLeaf reopt_completed_ls_ps; //type: uint32
        YLeaf torn_down_ls_ps; //type: uint32
        YLeaf path_protection_switchover_ls_ps; //type: uint32
        YLeaf frr_triggered_ls_ps; //type: uint32
        YLeaf time_in_preemption_pending_min; //type: uint16
        YLeaf time_in_preemption_pending_max; //type: uint16
        YLeaf time_in_preemption_pending_avg; //type: uint16



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError : public Entity
{
    public:
        SoftPreemptionPathError();
        ~SoftPreemptionPathError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32
        YLeaf preempting_link_address; //type: string



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel : public Entity
{
    public:
        WdmUnitunnel();
        ~WdmUnitunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_state; //type: MplsTeTunnelStateEnum
        YLeaf tunnel_role; //type: MplsTeTunnelRoleEnum
        YLeaf tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16
        YLeaf local_optical_router_id; //type: string
        YLeaf remote_optical_router_id; //type: string
        YLeaf controlled_interface; //type: string
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string
        YLeaf label_origin; //type: MplsTeMgmtGmplsLabelOriginEnum
        YLeaf srlg_discovery; //type: boolean



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo : public Entity
{
    public:
        TransportTunnelInfo();
        ~TransportTunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status_homepath_working; //type: boolean

        class Otn; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn
        class StaticUni; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni
        class EgressStaticUni; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni
        class HomepathEro; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro
        class DiversityInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo> > diversity_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni> egress_static_uni;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro> > homepath_ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni> static_uni;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn : public Entity
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



        class BandwidthCfg; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg> bandwidth_cfg;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg : public Entity
{
    public:
        BandwidthCfg();
        ~BandwidthCfg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf odu_level; //type: TeOduLevelEnum

        class OduFlexCbr; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes> odu_flex_gfp_f_res;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni : public Entity
{
    public:
        StaticUni();
        ~StaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_port; //type: string
        YLeaf client_if_handle; //type: string
        YLeaf client_odu_name; //type: string
        YLeaf client_odu_if_handle; //type: string
        YLeaf cross_connect_id; //type: uint32
        YLeaf is_connected; //type: boolean
        YLeaf uptime; //type: uint32
        YLeaf local_termination; //type: MplsTeTerminationEnum
        YLeaf static_uni_type; //type: MplsTeUniEnum
        YLeaf term_client_port; //type: string
        YLeaf term_client_if_handle; //type: string



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni : public Entity
{
    public:
        EgressStaticUni();
        ~EgressStaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_termination; //type: MplsTeTerminationEnum
        YLeaf remote_uni_type; //type: MplsTeUniEnum

        class EgressPort; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort
        class TermEgressPort; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort> egress_port;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort> term_egress_port;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort : public Entity
{
    public:
        EgressPort();
        ~EgressPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TeAddr; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr> te_addr;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr : public Entity
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

        class Ipv4UnnumberedAddress; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort : public Entity
{
    public:
        TermEgressPort();
        ~TermEgressPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TeAddr; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr> te_addr;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr : public Entity
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

        class Ipv4UnnumberedAddress; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro : public Entity
{
    public:
        HomepathEro();
        ~HomepathEro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo : public Entity
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


        YLeaf tunnel_id; //type: uint16



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo : public Entity
{
    public:
        BfdInfo();
        ~BfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_session_up; //type: boolean
        YLeaf session_up_time; //type: uint32
        YLeaf failure_diagnostic_code; //type: uint32
        YLeaf failure_reason; //type: string
        YLeaf minimum_session_up_interval; //type: uint32
        YLeaf maximum_session_up_interval; //type: uint32

        class EventCounters; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters
        class DampeningInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo> > dampening_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters> event_counters;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters : public Entity
{
    public:
        EventCounters();
        ~EventCounters();

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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo : public Entity
{
    public:
        DampeningInfo();
        ~DampeningInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf option_index; //type: uint32
        YLeaf hold_down_time; //type: uint32
        YLeaf remained_time; //type: uint32
        YLeaf backoff_count; //type: uint32



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir : public Entity
{
    public:
        OtnBidir();
        ~OtnBidir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Aps; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps
        class Restoration; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps> aps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration> restoration;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps : public Entity
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


        YLeaf active_lsp; //type: MplsTeLspModeEnum
        YLeaf diversity_type; //type: TePpDiversityEnum

        class ProtectionProfile; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile> protection_profile;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile : public Entity
{
    public:
        ProtectionProfile();
        ~ProtectionProfile();

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

        class RevertSchedule; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule> revert_schedule;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration : public Entity
{
    public:
        Restoration();
        ~Restoration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf revert_option; //type: TePnrRevertOptionsEnum
        YLeaf diverse_lsp; //type: MplsTeLspModeEnum
        YLeaf diversity_type; //type: TePpDiversityEnum



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir : public Entity
{
    public:
        Bidir();
        ~Bidir();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_bandwidth; //type: uint32
        YLeaf reverse_bandwidth_standby; //type: uint32

        class ReverseEroErrorCurrent; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent
        class ReverseEroErrorReopt; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt
        class ReverseEroErrorStandby; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby
        class ReverseEroErrorStandbyReopt; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent> reverse_ero_error_current;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt> reverse_ero_error_reopt;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby> reverse_ero_error_standby;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt> reverse_ero_error_standby_reopt;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent : public Entity
{
    public:
        ReverseEroErrorCurrent();
        ~ReverseEroErrorCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_lsp_id; //type: uint16
        YLeaf path_reject_reason_bw; //type: boolean
        YLeaf path_reject_reason_affinity; //type: boolean
        YLeaf path_reject_reason_ip_addr; //type: boolean
        YLeaf path_reject_reason_reverse_link; //type: boolean
        YLeaf path_reject_reason_ixcd; //type: boolean
        YLeaf path_reject_reason_holddown; //type: boolean
        YLeaf path_reject_reason_exclude_node; //type: boolean
        YLeaf path_reject_reason_exclude_link; //type: boolean
        YLeaf path_reject_reason_exclude_srlg; //type: boolean
        YLeaf path_reject_reason_hop_limit; //type: boolean
        YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        YLeaf path_reject_reason_node_ol_head; //type: boolean
        YLeaf path_reject_reason_node_ol_mid; //type: boolean
        YLeaf path_reject_reason_node_ol_tail; //type: boolean
        YLeaf path_reject_reason_reverse_bw; //type: boolean
        YLeaf path_reject_reason_node_unreachable; //type: boolean
        YLeaf path_option_index; //type: uint16
        YLeaf path_option_type; //type: MtePathOptionEnum
        YLeaf ero_reject_reason; //type: TeRevEroRejectReasonsEnum

        class PathCalculationError; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError> > path_calculation_error;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt : public Entity
{
    public:
        ReverseEroErrorReopt();
        ~ReverseEroErrorReopt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_lsp_id; //type: uint16
        YLeaf path_reject_reason_bw; //type: boolean
        YLeaf path_reject_reason_affinity; //type: boolean
        YLeaf path_reject_reason_ip_addr; //type: boolean
        YLeaf path_reject_reason_reverse_link; //type: boolean
        YLeaf path_reject_reason_ixcd; //type: boolean
        YLeaf path_reject_reason_holddown; //type: boolean
        YLeaf path_reject_reason_exclude_node; //type: boolean
        YLeaf path_reject_reason_exclude_link; //type: boolean
        YLeaf path_reject_reason_exclude_srlg; //type: boolean
        YLeaf path_reject_reason_hop_limit; //type: boolean
        YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        YLeaf path_reject_reason_node_ol_head; //type: boolean
        YLeaf path_reject_reason_node_ol_mid; //type: boolean
        YLeaf path_reject_reason_node_ol_tail; //type: boolean
        YLeaf path_reject_reason_reverse_bw; //type: boolean
        YLeaf path_reject_reason_node_unreachable; //type: boolean
        YLeaf path_option_index; //type: uint16
        YLeaf path_option_type; //type: MtePathOptionEnum
        YLeaf ero_reject_reason; //type: TeRevEroRejectReasonsEnum

        class PathCalculationError; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError> > path_calculation_error;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby : public Entity
{
    public:
        ReverseEroErrorStandby();
        ~ReverseEroErrorStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_lsp_id; //type: uint16
        YLeaf path_reject_reason_bw; //type: boolean
        YLeaf path_reject_reason_affinity; //type: boolean
        YLeaf path_reject_reason_ip_addr; //type: boolean
        YLeaf path_reject_reason_reverse_link; //type: boolean
        YLeaf path_reject_reason_ixcd; //type: boolean
        YLeaf path_reject_reason_holddown; //type: boolean
        YLeaf path_reject_reason_exclude_node; //type: boolean
        YLeaf path_reject_reason_exclude_link; //type: boolean
        YLeaf path_reject_reason_exclude_srlg; //type: boolean
        YLeaf path_reject_reason_hop_limit; //type: boolean
        YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        YLeaf path_reject_reason_node_ol_head; //type: boolean
        YLeaf path_reject_reason_node_ol_mid; //type: boolean
        YLeaf path_reject_reason_node_ol_tail; //type: boolean
        YLeaf path_reject_reason_reverse_bw; //type: boolean
        YLeaf path_reject_reason_node_unreachable; //type: boolean
        YLeaf path_option_index; //type: uint16
        YLeaf path_option_type; //type: MtePathOptionEnum
        YLeaf ero_reject_reason; //type: TeRevEroRejectReasonsEnum

        class PathCalculationError; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError> > path_calculation_error;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt : public Entity
{
    public:
        ReverseEroErrorStandbyReopt();
        ~ReverseEroErrorStandbyReopt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_lsp_id; //type: uint16
        YLeaf path_reject_reason_bw; //type: boolean
        YLeaf path_reject_reason_affinity; //type: boolean
        YLeaf path_reject_reason_ip_addr; //type: boolean
        YLeaf path_reject_reason_reverse_link; //type: boolean
        YLeaf path_reject_reason_ixcd; //type: boolean
        YLeaf path_reject_reason_holddown; //type: boolean
        YLeaf path_reject_reason_exclude_node; //type: boolean
        YLeaf path_reject_reason_exclude_link; //type: boolean
        YLeaf path_reject_reason_exclude_srlg; //type: boolean
        YLeaf path_reject_reason_hop_limit; //type: boolean
        YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        YLeaf path_reject_reason_node_ol_head; //type: boolean
        YLeaf path_reject_reason_node_ol_mid; //type: boolean
        YLeaf path_reject_reason_node_ol_tail; //type: boolean
        YLeaf path_reject_reason_reverse_bw; //type: boolean
        YLeaf path_reject_reason_node_unreachable; //type: boolean
        YLeaf path_option_index; //type: uint16
        YLeaf path_option_type; //type: MtePathOptionEnum
        YLeaf ero_reject_reason; //type: TeRevEroRejectReasonsEnum

        class PathCalculationError; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError> > path_calculation_error;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet : public Entity
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

        class AttributeSetUnion; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion> attribute_set_union;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion : public Entity
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

        class AttributeSetPathOption; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption : public Entity
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

        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class VersionInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public Entity
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

        class SignalledName; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class ProtectedInterface; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public Entity
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

        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public Entity
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



        class Xro; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public Entity
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

        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public Entity
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

        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public Entity
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

        class Fec; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public Entity
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

        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
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



}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public Entity
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

        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public Entity
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

        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_22_ */

