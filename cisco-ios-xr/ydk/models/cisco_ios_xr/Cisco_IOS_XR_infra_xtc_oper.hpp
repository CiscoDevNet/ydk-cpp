#ifndef _CISCO_IOS_XR_INFRA_XTC_OPER_
#define _CISCO_IOS_XR_INFRA_XTC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_xtc_oper {

class PceLspData : public Entity
{
    public:
        PceLspData();
        ~PceLspData();

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



        class TunnelInfos; //type: PceLspData::TunnelInfos
        class LspSummary; //type: PceLspData::LspSummary
        class TunnelDetailInfos; //type: PceLspData::TunnelDetailInfos

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::LspSummary> lsp_summary;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos> tunnel_detail_infos;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelInfos> tunnel_infos;


}; // PceLspData


class PceLspData::TunnelInfos : public Entity
{
    public:
        TunnelInfos();
        ~TunnelInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelInfo; //type: PceLspData::TunnelInfos::TunnelInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelInfos::TunnelInfo> > tunnel_info;


}; // PceLspData::TunnelInfos


class PceLspData::TunnelInfos::TunnelInfo : public Entity
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


        YLeaf peer_address; //type: string
        YLeaf plsp_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf pcc_address; //type: string
        YLeaf tunnel_name_xr; //type: string

        class BriefLspInformation; //type: PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation> > brief_lsp_information;


}; // PceLspData::TunnelInfos::TunnelInfo


class PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation : public Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf lspid; //type: uint32
        YLeaf binding_sid; //type: uint32
        YLeaf lsp_setup_type; //type: LspSetupEnum
        YLeaf operational_state; //type: PcepLspStateEnum
        YLeaf administrative_state; //type: LspStateEnum



}; // PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation


class PceLspData::LspSummary : public Entity
{
    public:
        LspSummary();
        ~LspSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AllLsPs; //type: PceLspData::LspSummary::AllLsPs
        class PeerLsPsInfo; //type: PceLspData::LspSummary::PeerLsPsInfo

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::LspSummary::AllLsPs> all_ls_ps;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::LspSummary::PeerLsPsInfo> > peer_ls_ps_info;


}; // PceLspData::LspSummary


class PceLspData::LspSummary::AllLsPs : public Entity
{
    public:
        AllLsPs();
        ~AllLsPs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_ls_ps; //type: uint32
        YLeaf up_ls_ps; //type: uint32
        YLeaf admin_up_ls_ps; //type: uint32
        YLeaf sr_ls_ps; //type: uint32
        YLeaf rsvp_ls_ps; //type: uint32



}; // PceLspData::LspSummary::AllLsPs


class PceLspData::LspSummary::PeerLsPsInfo : public Entity
{
    public:
        PeerLsPsInfo();
        ~PeerLsPsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string

        class LspSummary_; //type: PceLspData::LspSummary::PeerLsPsInfo::LspSummary_

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::LspSummary::PeerLsPsInfo::LspSummary_> lsp_summary;


}; // PceLspData::LspSummary::PeerLsPsInfo


class PceLspData::LspSummary::PeerLsPsInfo::LspSummary_ : public Entity
{
    public:
        LspSummary_();
        ~LspSummary_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_ls_ps; //type: uint32
        YLeaf up_ls_ps; //type: uint32
        YLeaf admin_up_ls_ps; //type: uint32
        YLeaf sr_ls_ps; //type: uint32
        YLeaf rsvp_ls_ps; //type: uint32



}; // PceLspData::LspSummary::PeerLsPsInfo::LspSummary_


class PceLspData::TunnelDetailInfos : public Entity
{
    public:
        TunnelDetailInfos();
        ~TunnelDetailInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelDetailInfo; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo> > tunnel_detail_info;


}; // PceLspData::TunnelDetailInfos


class PceLspData::TunnelDetailInfos::TunnelDetailInfo : public Entity
{
    public:
        TunnelDetailInfo();
        ~TunnelDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf plsp_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf pcc_address; //type: string
        YLeaf tunnel_name_xr; //type: string

        class PrivateLspInformation; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation
        class DetailLspInformation; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation> > detail_lsp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation> private_lsp_information;


}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation : public Entity
{
    public:
        PrivateLspInformation();
        ~PrivateLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventBuffer; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer> > event_buffer;


}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer : public Entity
{
    public:
        EventBuffer();
        ~EventBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_message; //type: string
        YLeaf time_stamp; //type: uint32



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation : public Entity
{
    public:
        DetailLspInformation();
        ~DetailLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signaled_bandwidth_specified; //type: boolean
        YLeaf signaled_bandwidth; //type: uint64
        YLeaf actual_bandwidth_specified; //type: boolean
        YLeaf actual_bandwidth; //type: uint64
        YLeaf lsp_role; //type: uint32
        YLeaf computing_pce; //type: uint32
        YLeaf sub_delegated_pce; //type: string
        YLeaf state_sync_pce; //type: string
        YLeaf reporting_pcc_address; //type: string
        YLeafList srlg_info; //type: list of  uint32

        class BriefLspInformation; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation
        class ErOs; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs
        class LsppcepInformation; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation
        class LspAssociationInfo; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo
        class LspAttributes; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes
        class Rro; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs> er_os;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo> lsp_association_info;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes> lsp_attributes;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation> lsppcep_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro> > rro;


}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation : public Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf lspid; //type: uint32
        YLeaf binding_sid; //type: uint32
        YLeaf lsp_setup_type; //type: LspSetupEnum
        YLeaf operational_state; //type: PcepLspStateEnum
        YLeaf administrative_state; //type: LspStateEnum



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs : public Entity
{
    public:
        ErOs();
        ~ErOs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reported_metric_type; //type: uint32
        YLeaf reported_metric_value; //type: uint32
        YLeaf computed_metric_type; //type: uint32
        YLeaf computed_metric_value; //type: uint32
        YLeaf computed_hop_list_time; //type: uint32

        class ReportedRsvpPath; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath
        class ReportedSrPath; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath
        class ComputedRsvpPath; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath
        class ComputedSrPath; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath> > computed_rsvp_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath> > computed_sr_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath> > reported_rsvp_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath> > reported_sr_path;


}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath : public Entity
{
    public:
        ReportedRsvpPath();
        ~ReportedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hop_address; //type: string



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath : public Entity
{
    public:
        ReportedSrPath();
        ~ReportedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath : public Entity
{
    public:
        ComputedRsvpPath();
        ~ComputedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hop_address; //type: string



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath : public Entity
{
    public:
        ComputedSrPath();
        ~ComputedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation : public Entity
{
    public:
        LsppcepInformation();
        ~LsppcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcepid; //type: uint32
        YLeaf pcep_flag_d; //type: boolean
        YLeaf pcep_flag_s; //type: boolean
        YLeaf pcep_flag_r; //type: boolean
        YLeaf pcep_flag_a; //type: boolean
        YLeaf pcep_flag_o; //type: uint8

        class RsvpError; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError> rsvp_error;


}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError : public Entity
{
    public:
        RsvpError();
        ~RsvpError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_address; //type: string
        YLeaf error_flags; //type: uint8
        YLeaf error_code; //type: uint8
        YLeaf error_value; //type: uint16



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo : public Entity
{
    public:
        LspAssociationInfo();
        ~LspAssociationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf association_type; //type: uint32
        YLeaf association_id; //type: uint32
        YLeaf association_source; //type: string



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes : public Entity
{
    public:
        LspAttributes();
        ~LspAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_exclude_any; //type: uint32
        YLeaf affinity_include_any; //type: uint32
        YLeaf affinity_include_all; //type: uint32
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf local_protection; //type: boolean



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: PceRroEnum
        YLeaf ipv4_address; //type: string
        YLeaf mpls_label; //type: uint32
        YLeaf flags; //type: uint8

        class SrRro; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro> sr_rro;


}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro : public Entity
{
    public:
        SrRro();
        ~SrRro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string



}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro

class PcePeer : public Entity
{
    public:
        PcePeer();
        ~PcePeer();

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



        class PeerDetailInfos; //type: PcePeer::PeerDetailInfos
        class PeerInfos; //type: PcePeer::PeerInfos

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos> peer_detail_infos;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerInfos> peer_infos;


}; // PcePeer


class PcePeer::PeerDetailInfos : public Entity
{
    public:
        PeerDetailInfos();
        ~PeerDetailInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerDetailInfo; //type: PcePeer::PeerDetailInfos::PeerDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo> > peer_detail_info;


}; // PcePeer::PeerDetailInfos


class PcePeer::PeerDetailInfos::PeerDetailInfo : public Entity
{
    public:
        PeerDetailInfo();
        ~PeerDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf peer_address_xr; //type: string
        YLeaf peer_protocol; //type: PceProtoEnum

        class DetailPcepInformation; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation> detail_pcep_information;


}; // PcePeer::PeerDetailInfos::PeerDetailInfo


class PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation : public Entity
{
    public:
        DetailPcepInformation();
        ~DetailPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error; //type: string
        YLeaf speaker_id; //type: string
        YLeaf pcep_up_time; //type: uint32
        YLeaf keepalives; //type: uint32
        YLeaf md5_enabled; //type: boolean
        YLeaf keychain_enabled; //type: boolean
        YLeaf negotiated_local_keepalive; //type: uint32
        YLeaf negotiated_remote_keepalive; //type: uint32
        YLeaf negotiated_dead_time; //type: uint32
        YLeaf pce_request_rx; //type: uint32
        YLeaf pce_request_tx; //type: uint32
        YLeaf pce_reply_rx; //type: uint32
        YLeaf pce_reply_tx; //type: uint32
        YLeaf pce_error_rx; //type: uint32
        YLeaf pce_error_tx; //type: uint32
        YLeaf pce_open_tx; //type: uint32
        YLeaf pce_open_rx; //type: uint32
        YLeaf pce_report_rx; //type: uint32
        YLeaf pce_report_tx; //type: uint32
        YLeaf pce_update_rx; //type: uint32
        YLeaf pce_update_tx; //type: uint32
        YLeaf pce_initiate_rx; //type: uint32
        YLeaf pce_initiate_tx; //type: uint32
        YLeaf pce_keepalive_tx; //type: uint64
        YLeaf pce_keepalive_rx; //type: uint64
        YLeaf local_session_id; //type: uint8
        YLeaf remote_session_id; //type: uint8
        YLeaf minimum_keepalive_interval; //type: uint8
        YLeaf maximum_dead_interval; //type: uint8

        class BriefPcepInformation; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation
        class LastErrorRx; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx
        class LastErrorTx; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation> brief_pcep_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx> last_error_rx;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx> last_error_tx;


}; // PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation


class PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation : public Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcep_state; //type: PcepStateEnum
        YLeaf stateful; //type: boolean
        YLeaf capability_update; //type: boolean
        YLeaf capability_instantiate; //type: boolean
        YLeaf capability_segment_routing; //type: boolean
        YLeaf capability_triggered_sync; //type: boolean
        YLeaf capability_db_version; //type: boolean
        YLeaf capability_delta_sync; //type: boolean



}; // PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation


class PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx : public Entity
{
    public:
        LastErrorRx();
        ~LastErrorRx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pc_error_type; //type: uint8
        YLeaf pc_error_value; //type: uint8



}; // PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx


class PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx : public Entity
{
    public:
        LastErrorTx();
        ~LastErrorTx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pc_error_type; //type: uint8
        YLeaf pc_error_value; //type: uint8



}; // PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx


class PcePeer::PeerInfos : public Entity
{
    public:
        PeerInfos();
        ~PeerInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerInfo; //type: PcePeer::PeerInfos::PeerInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerInfos::PeerInfo> > peer_info;


}; // PcePeer::PeerInfos


class PcePeer::PeerInfos::PeerInfo : public Entity
{
    public:
        PeerInfo();
        ~PeerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf peer_address_xr; //type: string
        YLeaf peer_protocol; //type: PceProtoEnum

        class BriefPcepInformation; //type: PcePeer::PeerInfos::PeerInfo::BriefPcepInformation

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerInfos::PeerInfo::BriefPcepInformation> brief_pcep_information;


}; // PcePeer::PeerInfos::PeerInfo


class PcePeer::PeerInfos::PeerInfo::BriefPcepInformation : public Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcep_state; //type: PcepStateEnum
        YLeaf stateful; //type: boolean
        YLeaf capability_update; //type: boolean
        YLeaf capability_instantiate; //type: boolean
        YLeaf capability_segment_routing; //type: boolean
        YLeaf capability_triggered_sync; //type: boolean
        YLeaf capability_db_version; //type: boolean
        YLeaf capability_delta_sync; //type: boolean



}; // PcePeer::PeerInfos::PeerInfo::BriefPcepInformation

class PceTopology : public Entity
{
    public:
        PceTopology();
        ~PceTopology();

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



        class TopologySummary; //type: PceTopology::TopologySummary
        class TopologyNodes; //type: PceTopology::TopologyNodes
        class PrefixInfos; //type: PceTopology::PrefixInfos

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos> prefix_infos;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes> topology_nodes;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologySummary> topology_summary;


}; // PceTopology


class PceTopology::TopologySummary : public Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nodes; //type: uint32
        YLeaf prefixes; //type: uint32
        YLeaf prefix_sids; //type: uint32
        YLeaf links; //type: uint32
        YLeaf adjacency_sids; //type: uint32
        YLeaf topology_consistent; //type: boolean

        class StatsTopologyUpdate; //type: PceTopology::TopologySummary::StatsTopologyUpdate

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologySummary::StatsTopologyUpdate> stats_topology_update;


}; // PceTopology::TopologySummary


class PceTopology::TopologySummary::StatsTopologyUpdate : public Entity
{
    public:
        StatsTopologyUpdate();
        ~StatsTopologyUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nodes_added; //type: uint32
        YLeaf num_nodes_deleted; //type: uint32
        YLeaf num_links_added; //type: uint32
        YLeaf num_links_deleted; //type: uint32
        YLeaf num_prefixes_added; //type: uint32
        YLeaf num_prefixes_deleted; //type: uint32



}; // PceTopology::TopologySummary::StatsTopologyUpdate


class PceTopology::TopologyNodes : public Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyNode; //type: PceTopology::TopologyNodes::TopologyNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode> > topology_node;


}; // PceTopology::TopologyNodes


class PceTopology::TopologyNodes::TopologyNode : public Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: int32
        YLeaf node_identifier_xr; //type: uint32
        YLeaf overload; //type: boolean

        class NodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier
        class PrefixSid; //type: PceTopology::TopologyNodes::TopologyNode::PrefixSid
        class Ipv4Link; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link
        class Ipv6Link; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link> > ipv4_link;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link> > ipv6_link;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier> node_protocol_identifier;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::PrefixSid> > prefix_sid;


}; // PceTopology::TopologyNodes::TopologyNode


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier : public Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string

        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation> > srgb_information;


}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp> igp;


}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;


}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf size; //type: uint32

        class IgpSrgb; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;


}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;


}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class PceTopology::TopologyNodes::TopologyNode::PrefixSid : public Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: SidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf domain_identifier; //type: uint64
        YLeaf rflag; //type: boolean
        YLeaf nflag; //type: boolean
        YLeaf pflag; //type: boolean
        YLeaf eflag; //type: boolean
        YLeaf vflag; //type: boolean
        YLeaf lflag; //type: boolean

        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix> sid_prefix;


}; // PceTopology::TopologyNodes::TopologyNode::PrefixSid


class PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix : public Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link : public Entity
{
    public:
        Ipv4Link();
        ~Ipv4Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_ipv4_address; //type: string
        YLeaf remote_ipv4_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bandwidth; //type: uint64
        YLeaf max_reservable_bandwidth; //type: uint64
        YLeafList srlgs; //type: list of  uint32

        class LocalIgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid> > adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation : public Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp> igp;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf> ospf;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier : public Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string

        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation> > srgb_information;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf size; //type: uint32

        class IgpSrgb; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid : public Entity
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


        YLeaf sid_type; //type: SidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf domain_identifier; //type: uint64
        YLeaf rflag; //type: boolean
        YLeaf nflag; //type: boolean
        YLeaf pflag; //type: boolean
        YLeaf eflag; //type: boolean
        YLeaf vflag; //type: boolean
        YLeaf lflag; //type: boolean

        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix> sid_prefix;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix : public Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link : public Entity
{
    public:
        Ipv6Link();
        ~Ipv6Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_ipv6_address; //type: string
        YLeaf remote_ipv6_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bandwidth; //type: uint64
        YLeaf max_reservable_bandwidth; //type: uint64

        class LocalIgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid> > adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation : public Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp> igp;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf> ospf;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier : public Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string

        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation> > srgb_information;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf size; //type: uint32

        class IgpSrgb; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid : public Entity
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


        YLeaf sid_type; //type: SidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf domain_identifier; //type: uint64
        YLeaf rflag; //type: boolean
        YLeaf nflag; //type: boolean
        YLeaf pflag; //type: boolean
        YLeaf eflag; //type: boolean
        YLeaf vflag; //type: boolean
        YLeaf lflag; //type: boolean

        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix> sid_prefix;


}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix : public Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix


class PceTopology::PrefixInfos : public Entity
{
    public:
        PrefixInfos();
        ~PrefixInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixInfo; //type: PceTopology::PrefixInfos::PrefixInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo> > prefix_info;


}; // PceTopology::PrefixInfos


class PceTopology::PrefixInfos::PrefixInfo : public Entity
{
    public:
        PrefixInfo();
        ~PrefixInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: int32
        YLeaf node_identifier_xr; //type: uint32

        class NodeProtocolIdentifier; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier
        class Address; //type: PceTopology::PrefixInfos::PrefixInfo::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::Address> > address;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier> node_protocol_identifier;


}; // PceTopology::PrefixInfos::PrefixInfo


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier : public Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string

        class IgpInformation; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation> > srgb_information;


}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp> igp;


}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;


}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf size; //type: uint32

        class IgpSrgb; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;


}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;


}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class PceTopology::PrefixInfos::PrefixInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // PceTopology::PrefixInfos::PrefixInfo::Address

class Pce : public Entity
{
    public:
        Pce();
        ~Pce();

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



        class AssociationInfos; //type: Pce::AssociationInfos
        class TopologySummary; //type: Pce::TopologySummary
        class TunnelInfos; //type: Pce::TunnelInfos
        class PeerDetailInfos; //type: Pce::PeerDetailInfos
        class TopologyNodes; //type: Pce::TopologyNodes
        class PrefixInfos; //type: Pce::PrefixInfos
        class LspSummary; //type: Pce::LspSummary
        class PeerInfos; //type: Pce::PeerInfos
        class TunnelDetailInfos; //type: Pce::TunnelDetailInfos

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::AssociationInfos> association_infos;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary> lsp_summary;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos> peer_detail_infos;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos> peer_infos;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos> prefix_infos;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes> topology_nodes;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologySummary> topology_summary;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos> tunnel_detail_infos;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos> tunnel_infos;


}; // Pce


class Pce::AssociationInfos : public Entity
{
    public:
        AssociationInfos();
        ~AssociationInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AssociationInfo; //type: Pce::AssociationInfos::AssociationInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::AssociationInfos::AssociationInfo> > association_info;


}; // Pce::AssociationInfos


class Pce::AssociationInfos::AssociationInfo : public Entity
{
    public:
        AssociationInfo();
        ~AssociationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_id; //type: int32
        YLeaf type; //type: PceAssoEnum
        YLeaf sub_id; //type: int32
        YLeaf association_type; //type: uint32
        YLeaf association_id; //type: uint32
        YLeaf association_source; //type: string
        YLeaf strict; //type: boolean
        YLeaf status; //type: uint32
        YLeaf headends_swapped; //type: uint32

        class AssociationLsp; //type: Pce::AssociationInfos::AssociationInfo::AssociationLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::AssociationInfos::AssociationInfo::AssociationLsp> > association_lsp;


}; // Pce::AssociationInfos::AssociationInfo


class Pce::AssociationInfos::AssociationInfo::AssociationLsp : public Entity
{
    public:
        AssociationLsp();
        ~AssociationLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcc_address; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf lspid; //type: uint32
        YLeaf tunnel_name; //type: string
        YLeaf pce_based; //type: boolean
        YLeaf plsp_id; //type: uint32



}; // Pce::AssociationInfos::AssociationInfo::AssociationLsp


class Pce::TopologySummary : public Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nodes; //type: uint32
        YLeaf prefixes; //type: uint32
        YLeaf prefix_sids; //type: uint32
        YLeaf links; //type: uint32
        YLeaf adjacency_sids; //type: uint32
        YLeaf topology_consistent; //type: boolean

        class StatsTopologyUpdate; //type: Pce::TopologySummary::StatsTopologyUpdate

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologySummary::StatsTopologyUpdate> stats_topology_update;


}; // Pce::TopologySummary


class Pce::TopologySummary::StatsTopologyUpdate : public Entity
{
    public:
        StatsTopologyUpdate();
        ~StatsTopologyUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nodes_added; //type: uint32
        YLeaf num_nodes_deleted; //type: uint32
        YLeaf num_links_added; //type: uint32
        YLeaf num_links_deleted; //type: uint32
        YLeaf num_prefixes_added; //type: uint32
        YLeaf num_prefixes_deleted; //type: uint32



}; // Pce::TopologySummary::StatsTopologyUpdate


class Pce::TunnelInfos : public Entity
{
    public:
        TunnelInfos();
        ~TunnelInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelInfo; //type: Pce::TunnelInfos::TunnelInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos::TunnelInfo> > tunnel_info;


}; // Pce::TunnelInfos


class Pce::TunnelInfos::TunnelInfo : public Entity
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


        YLeaf peer_address; //type: string
        YLeaf plsp_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf pcc_address; //type: string
        YLeaf tunnel_name_xr; //type: string

        class BriefLspInformation; //type: Pce::TunnelInfos::TunnelInfo::BriefLspInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos::TunnelInfo::BriefLspInformation> > brief_lsp_information;


}; // Pce::TunnelInfos::TunnelInfo


class Pce::TunnelInfos::TunnelInfo::BriefLspInformation : public Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf lspid; //type: uint32
        YLeaf binding_sid; //type: uint32
        YLeaf lsp_setup_type; //type: LspSetupEnum
        YLeaf operational_state; //type: PcepLspStateEnum
        YLeaf administrative_state; //type: LspStateEnum



}; // Pce::TunnelInfos::TunnelInfo::BriefLspInformation


class Pce::PeerDetailInfos : public Entity
{
    public:
        PeerDetailInfos();
        ~PeerDetailInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerDetailInfo; //type: Pce::PeerDetailInfos::PeerDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo> > peer_detail_info;


}; // Pce::PeerDetailInfos


class Pce::PeerDetailInfos::PeerDetailInfo : public Entity
{
    public:
        PeerDetailInfo();
        ~PeerDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf peer_address_xr; //type: string
        YLeaf peer_protocol; //type: PceProtoEnum

        class DetailPcepInformation; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation> detail_pcep_information;


}; // Pce::PeerDetailInfos::PeerDetailInfo


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation : public Entity
{
    public:
        DetailPcepInformation();
        ~DetailPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error; //type: string
        YLeaf speaker_id; //type: string
        YLeaf pcep_up_time; //type: uint32
        YLeaf keepalives; //type: uint32
        YLeaf md5_enabled; //type: boolean
        YLeaf keychain_enabled; //type: boolean
        YLeaf negotiated_local_keepalive; //type: uint32
        YLeaf negotiated_remote_keepalive; //type: uint32
        YLeaf negotiated_dead_time; //type: uint32
        YLeaf pce_request_rx; //type: uint32
        YLeaf pce_request_tx; //type: uint32
        YLeaf pce_reply_rx; //type: uint32
        YLeaf pce_reply_tx; //type: uint32
        YLeaf pce_error_rx; //type: uint32
        YLeaf pce_error_tx; //type: uint32
        YLeaf pce_open_tx; //type: uint32
        YLeaf pce_open_rx; //type: uint32
        YLeaf pce_report_rx; //type: uint32
        YLeaf pce_report_tx; //type: uint32
        YLeaf pce_update_rx; //type: uint32
        YLeaf pce_update_tx; //type: uint32
        YLeaf pce_initiate_rx; //type: uint32
        YLeaf pce_initiate_tx; //type: uint32
        YLeaf pce_keepalive_tx; //type: uint64
        YLeaf pce_keepalive_rx; //type: uint64
        YLeaf local_session_id; //type: uint8
        YLeaf remote_session_id; //type: uint8
        YLeaf minimum_keepalive_interval; //type: uint8
        YLeaf maximum_dead_interval; //type: uint8

        class BriefPcepInformation; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation
        class LastErrorRx; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx
        class LastErrorTx; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation> brief_pcep_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx> last_error_rx;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx> last_error_tx;


}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation : public Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcep_state; //type: PcepStateEnum
        YLeaf stateful; //type: boolean
        YLeaf capability_update; //type: boolean
        YLeaf capability_instantiate; //type: boolean
        YLeaf capability_segment_routing; //type: boolean
        YLeaf capability_triggered_sync; //type: boolean
        YLeaf capability_db_version; //type: boolean
        YLeaf capability_delta_sync; //type: boolean



}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx : public Entity
{
    public:
        LastErrorRx();
        ~LastErrorRx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pc_error_type; //type: uint8
        YLeaf pc_error_value; //type: uint8



}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx : public Entity
{
    public:
        LastErrorTx();
        ~LastErrorTx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pc_error_type; //type: uint8
        YLeaf pc_error_value; //type: uint8



}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx


class Pce::TopologyNodes : public Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyNode; //type: Pce::TopologyNodes::TopologyNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode> > topology_node;


}; // Pce::TopologyNodes


class Pce::TopologyNodes::TopologyNode : public Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: int32
        YLeaf node_identifier_xr; //type: uint32
        YLeaf overload; //type: boolean

        class NodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier
        class PrefixSid; //type: Pce::TopologyNodes::TopologyNode::PrefixSid
        class Ipv4Link; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link
        class Ipv6Link; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link> > ipv4_link;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link> > ipv6_link;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier> node_protocol_identifier;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::PrefixSid> > prefix_sid;


}; // Pce::TopologyNodes::TopologyNode


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier : public Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string

        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation> > srgb_information;


}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp> igp;


}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;


}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf size; //type: uint32

        class IgpSrgb; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;


}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;


}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class Pce::TopologyNodes::TopologyNode::PrefixSid : public Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: SidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf domain_identifier; //type: uint64
        YLeaf rflag; //type: boolean
        YLeaf nflag; //type: boolean
        YLeaf pflag; //type: boolean
        YLeaf eflag; //type: boolean
        YLeaf vflag; //type: boolean
        YLeaf lflag; //type: boolean

        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix> sid_prefix;


}; // Pce::TopologyNodes::TopologyNode::PrefixSid


class Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix : public Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix


class Pce::TopologyNodes::TopologyNode::Ipv4Link : public Entity
{
    public:
        Ipv4Link();
        ~Ipv4Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_ipv4_address; //type: string
        YLeaf remote_ipv4_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bandwidth; //type: uint64
        YLeaf max_reservable_bandwidth; //type: uint64
        YLeafList srlgs; //type: list of  uint32

        class LocalIgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid> > adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation : public Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp> igp;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf> ospf;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier : public Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string

        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation> > srgb_information;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf size; //type: uint32

        class IgpSrgb; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid : public Entity
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


        YLeaf sid_type; //type: SidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf domain_identifier; //type: uint64
        YLeaf rflag; //type: boolean
        YLeaf nflag; //type: boolean
        YLeaf pflag; //type: boolean
        YLeaf eflag; //type: boolean
        YLeaf vflag; //type: boolean
        YLeaf lflag; //type: boolean

        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix> sid_prefix;


}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid


class Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix : public Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix


class Pce::TopologyNodes::TopologyNode::Ipv6Link : public Entity
{
    public:
        Ipv6Link();
        ~Ipv6Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_ipv6_address; //type: string
        YLeaf remote_ipv6_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bandwidth; //type: uint64
        YLeaf max_reservable_bandwidth; //type: uint64

        class LocalIgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid> > adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation : public Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp> igp;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf> ospf;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier : public Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string

        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation> > srgb_information;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf size; //type: uint32

        class IgpSrgb; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid : public Entity
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


        YLeaf sid_type; //type: SidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf domain_identifier; //type: uint64
        YLeaf rflag; //type: boolean
        YLeaf nflag; //type: boolean
        YLeaf pflag; //type: boolean
        YLeaf eflag; //type: boolean
        YLeaf vflag; //type: boolean
        YLeaf lflag; //type: boolean

        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix> sid_prefix;


}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid


class Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix : public Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix


class Pce::PrefixInfos : public Entity
{
    public:
        PrefixInfos();
        ~PrefixInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixInfo; //type: Pce::PrefixInfos::PrefixInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo> > prefix_info;


}; // Pce::PrefixInfos


class Pce::PrefixInfos::PrefixInfo : public Entity
{
    public:
        PrefixInfo();
        ~PrefixInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_identifier; //type: int32
        YLeaf node_identifier_xr; //type: uint32

        class NodeProtocolIdentifier; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier
        class Address; //type: Pce::PrefixInfos::PrefixInfo::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::Address> > address;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier> node_protocol_identifier;


}; // Pce::PrefixInfos::PrefixInfo


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier : public Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string

        class IgpInformation; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation> > srgb_information;


}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_identifier; //type: uint64

        class Igp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp> igp;


}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;


}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start; //type: uint32
        YLeaf size; //type: uint32

        class IgpSrgb; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;


}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_id; //type: PceIgpInfoIdEnum

        class Isis; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;


}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_id; //type: string
        YLeaf level; //type: uint32



}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf area; //type: uint32



}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string



}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class Pce::PrefixInfos::PrefixInfo::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Pce::PrefixInfos::PrefixInfo::Address


class Pce::LspSummary : public Entity
{
    public:
        LspSummary();
        ~LspSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AllLsPs; //type: Pce::LspSummary::AllLsPs
        class PeerLsPsInfo; //type: Pce::LspSummary::PeerLsPsInfo

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::AllLsPs> all_ls_ps;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::PeerLsPsInfo> > peer_ls_ps_info;


}; // Pce::LspSummary


class Pce::LspSummary::AllLsPs : public Entity
{
    public:
        AllLsPs();
        ~AllLsPs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_ls_ps; //type: uint32
        YLeaf up_ls_ps; //type: uint32
        YLeaf admin_up_ls_ps; //type: uint32
        YLeaf sr_ls_ps; //type: uint32
        YLeaf rsvp_ls_ps; //type: uint32



}; // Pce::LspSummary::AllLsPs


class Pce::LspSummary::PeerLsPsInfo : public Entity
{
    public:
        PeerLsPsInfo();
        ~PeerLsPsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string

        class LspSummary_; //type: Pce::LspSummary::PeerLsPsInfo::LspSummary_

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::PeerLsPsInfo::LspSummary_> lsp_summary;


}; // Pce::LspSummary::PeerLsPsInfo


class Pce::LspSummary::PeerLsPsInfo::LspSummary_ : public Entity
{
    public:
        LspSummary_();
        ~LspSummary_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_ls_ps; //type: uint32
        YLeaf up_ls_ps; //type: uint32
        YLeaf admin_up_ls_ps; //type: uint32
        YLeaf sr_ls_ps; //type: uint32
        YLeaf rsvp_ls_ps; //type: uint32



}; // Pce::LspSummary::PeerLsPsInfo::LspSummary_


class Pce::PeerInfos : public Entity
{
    public:
        PeerInfos();
        ~PeerInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerInfo; //type: Pce::PeerInfos::PeerInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos::PeerInfo> > peer_info;


}; // Pce::PeerInfos


class Pce::PeerInfos::PeerInfo : public Entity
{
    public:
        PeerInfo();
        ~PeerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf peer_address_xr; //type: string
        YLeaf peer_protocol; //type: PceProtoEnum

        class BriefPcepInformation; //type: Pce::PeerInfos::PeerInfo::BriefPcepInformation

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos::PeerInfo::BriefPcepInformation> brief_pcep_information;


}; // Pce::PeerInfos::PeerInfo


class Pce::PeerInfos::PeerInfo::BriefPcepInformation : public Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcep_state; //type: PcepStateEnum
        YLeaf stateful; //type: boolean
        YLeaf capability_update; //type: boolean
        YLeaf capability_instantiate; //type: boolean
        YLeaf capability_segment_routing; //type: boolean
        YLeaf capability_triggered_sync; //type: boolean
        YLeaf capability_db_version; //type: boolean
        YLeaf capability_delta_sync; //type: boolean



}; // Pce::PeerInfos::PeerInfo::BriefPcepInformation


class Pce::TunnelDetailInfos : public Entity
{
    public:
        TunnelDetailInfos();
        ~TunnelDetailInfos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelDetailInfo; //type: Pce::TunnelDetailInfos::TunnelDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo> > tunnel_detail_info;


}; // Pce::TunnelDetailInfos


class Pce::TunnelDetailInfos::TunnelDetailInfo : public Entity
{
    public:
        TunnelDetailInfo();
        ~TunnelDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf plsp_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf pcc_address; //type: string
        YLeaf tunnel_name_xr; //type: string

        class PrivateLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation
        class DetailLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation> > detail_lsp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation> private_lsp_information;


}; // Pce::TunnelDetailInfos::TunnelDetailInfo


class Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation : public Entity
{
    public:
        PrivateLspInformation();
        ~PrivateLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventBuffer; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer> > event_buffer;


}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer : public Entity
{
    public:
        EventBuffer();
        ~EventBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_message; //type: string
        YLeaf time_stamp; //type: uint32



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation : public Entity
{
    public:
        DetailLspInformation();
        ~DetailLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signaled_bandwidth_specified; //type: boolean
        YLeaf signaled_bandwidth; //type: uint64
        YLeaf actual_bandwidth_specified; //type: boolean
        YLeaf actual_bandwidth; //type: uint64
        YLeaf lsp_role; //type: uint32
        YLeaf computing_pce; //type: uint32
        YLeaf sub_delegated_pce; //type: string
        YLeaf state_sync_pce; //type: string
        YLeaf reporting_pcc_address; //type: string
        YLeafList srlg_info; //type: list of  uint32

        class BriefLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation
        class ErOs; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs
        class LsppcepInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation
        class LspAssociationInfo; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo
        class LspAttributes; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes
        class Rro; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs> er_os;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo> lsp_association_info;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes> lsp_attributes;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation> lsppcep_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro> > rro;


}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation : public Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf lspid; //type: uint32
        YLeaf binding_sid; //type: uint32
        YLeaf lsp_setup_type; //type: LspSetupEnum
        YLeaf operational_state; //type: PcepLspStateEnum
        YLeaf administrative_state; //type: LspStateEnum



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs : public Entity
{
    public:
        ErOs();
        ~ErOs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reported_metric_type; //type: uint32
        YLeaf reported_metric_value; //type: uint32
        YLeaf computed_metric_type; //type: uint32
        YLeaf computed_metric_value; //type: uint32
        YLeaf computed_hop_list_time; //type: uint32

        class ReportedRsvpPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath
        class ReportedSrPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath
        class ComputedRsvpPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath
        class ComputedSrPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath> > computed_rsvp_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath> > computed_sr_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath> > reported_rsvp_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath> > reported_sr_path;


}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath : public Entity
{
    public:
        ReportedRsvpPath();
        ~ReportedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hop_address; //type: string



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath : public Entity
{
    public:
        ReportedSrPath();
        ~ReportedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath : public Entity
{
    public:
        ComputedRsvpPath();
        ~ComputedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hop_address; //type: string



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath : public Entity
{
    public:
        ComputedSrPath();
        ~ComputedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation : public Entity
{
    public:
        LsppcepInformation();
        ~LsppcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcepid; //type: uint32
        YLeaf pcep_flag_d; //type: boolean
        YLeaf pcep_flag_s; //type: boolean
        YLeaf pcep_flag_r; //type: boolean
        YLeaf pcep_flag_a; //type: boolean
        YLeaf pcep_flag_o; //type: uint8

        class RsvpError; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError> rsvp_error;


}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError : public Entity
{
    public:
        RsvpError();
        ~RsvpError();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_address; //type: string
        YLeaf error_flags; //type: uint8
        YLeaf error_code; //type: uint8
        YLeaf error_value; //type: uint16



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo : public Entity
{
    public:
        LspAssociationInfo();
        ~LspAssociationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf association_type; //type: uint32
        YLeaf association_id; //type: uint32
        YLeaf association_source; //type: string



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes : public Entity
{
    public:
        LspAttributes();
        ~LspAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_exclude_any; //type: uint32
        YLeaf affinity_include_any; //type: uint32
        YLeaf affinity_include_all; //type: uint32
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf local_protection; //type: boolean



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: PceRroEnum
        YLeaf ipv4_address; //type: string
        YLeaf mpls_label; //type: uint32
        YLeaf flags; //type: uint8

        class SrRro; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro> sr_rro;


}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro : public Entity
{
    public:
        SrRro();
        ~SrRro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string



}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro

class LspStateEnum : public Enum
{
    public:
        static const Enum::YLeaf lsp_down;
        static const Enum::YLeaf lsp_up;

};

class PceRroEnum : public Enum
{
    public:
        static const Enum::YLeaf rro_type_ipv4_address;
        static const Enum::YLeaf rro_type_mpls_label;
        static const Enum::YLeaf rro_type_sripv4_node_sid;
        static const Enum::YLeaf rro_type_sripv4_adjacency_sid;
        static const Enum::YLeaf rro_type_sr_nai_null;

};

class PceSrSidEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4_node_sid;
        static const Enum::YLeaf ipv4_adjacency_sid;
        static const Enum::YLeaf unknown_sid;

};

class PcepLspStateEnum : public Enum
{
    public:
        static const Enum::YLeaf lsp_down;
        static const Enum::YLeaf lsp_up;
        static const Enum::YLeaf lsp_active;
        static const Enum::YLeaf lsp_going_down;
        static const Enum::YLeaf lsp_being_signaled;

};

class PceIgpInfoIdEnum : public Enum
{
    public:
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf bgp;

};

class PceProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf pcep;
        static const Enum::YLeaf netconf;

};

class PcepStateEnum : public Enum
{
    public:
        static const Enum::YLeaf tcp_close;
        static const Enum::YLeaf tcp_listen;
        static const Enum::YLeaf tcp_connect;
        static const Enum::YLeaf pcep_closed;
        static const Enum::YLeaf pcep_opening;
        static const Enum::YLeaf pcep_open;

};

class SidEnum : public Enum
{
    public:
        static const Enum::YLeaf sr_protected_adj_sid;
        static const Enum::YLeaf sr_unprotected_adj_sid;
        static const Enum::YLeaf srbgp_egress_peer_engineering_sid;
        static const Enum::YLeaf sr_reqular_prefix_sid;
        static const Enum::YLeaf sr_strict_prefix_sid;

};

class LspSetupEnum : public Enum
{
    public:
        static const Enum::YLeaf setup_rsvp;
        static const Enum::YLeaf setup_sr;
        static const Enum::YLeaf setup_unknown;

};

class PceAssoEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf link;
        static const Enum::YLeaf node;
        static const Enum::YLeaf srlg;

};

class PceAfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_OPER_ */

