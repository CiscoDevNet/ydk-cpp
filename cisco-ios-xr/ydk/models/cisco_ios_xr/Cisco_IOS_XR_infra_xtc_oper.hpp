#ifndef _CISCO_IOS_XR_INFRA_XTC_OPER_
#define _CISCO_IOS_XR_INFRA_XTC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {

class PceLspData : public ydk::Entity
{
    public:
        PceLspData();
        ~PceLspData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class TunnelInfos; //type: PceLspData::TunnelInfos
        class LspSummary; //type: PceLspData::LspSummary
        class TunnelDetailInfos; //type: PceLspData::TunnelDetailInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelInfos> tunnel_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::LspSummary> lsp_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos> tunnel_detail_infos;
        
}; // PceLspData


class PceLspData::TunnelInfos : public ydk::Entity
{
    public:
        TunnelInfos();
        ~TunnelInfos();

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

        class TunnelInfo; //type: PceLspData::TunnelInfos::TunnelInfo

        ydk::YList tunnel_info;
        
}; // PceLspData::TunnelInfos


class PceLspData::TunnelInfos::TunnelInfo : public ydk::Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        class PccAddress; //type: PceLspData::TunnelInfos::TunnelInfo::PccAddress
        class BriefLspInformation; //type: PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelInfos::TunnelInfo::PccAddress> pcc_address;
        ydk::YList brief_lsp_information;
        
}; // PceLspData::TunnelInfos::TunnelInfo


class PceLspData::TunnelInfos::TunnelInfo::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelInfos::TunnelInfo::PccAddress


class PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation : public ydk::Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeaf lsp_setup_type; //type: LspSetup
        ydk::YLeaf operational_state; //type: PcepLspState
        ydk::YLeaf administrative_state; //type: LspState
        ydk::YLeaf msd; //type: uint32
        ydk::YLeaf absolute_margin; //type: uint32
        ydk::YLeaf relative_margin; //type: uint32
        class SourceAddress; //type: PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress
        class DestinationAddress; //type: PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress> destination_address;
        
}; // PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation


class PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress


class PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress


class PceLspData::LspSummary : public ydk::Entity
{
    public:
        LspSummary();
        ~LspSummary();

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

        class AllLsPs; //type: PceLspData::LspSummary::AllLsPs
        class PeerLsPsInfo; //type: PceLspData::LspSummary::PeerLsPsInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::LspSummary::AllLsPs> all_ls_ps;
        ydk::YList peer_ls_ps_info;
        
}; // PceLspData::LspSummary


class PceLspData::LspSummary::AllLsPs : public ydk::Entity
{
    public:
        AllLsPs();
        ~AllLsPs();

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

        ydk::YLeaf all_ls_ps; //type: uint32
        ydk::YLeaf up_ls_ps; //type: uint32
        ydk::YLeaf admin_up_ls_ps; //type: uint32
        ydk::YLeaf sr_ls_ps; //type: uint32
        ydk::YLeaf rsvp_ls_ps; //type: uint32

}; // PceLspData::LspSummary::AllLsPs


class PceLspData::LspSummary::PeerLsPsInfo : public ydk::Entity
{
    public:
        PeerLsPsInfo();
        ~PeerLsPsInfo();

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

        class LspSummary_; //type: PceLspData::LspSummary::PeerLsPsInfo::LspSummary_
        class PeerAddress; //type: PceLspData::LspSummary::PeerLsPsInfo::PeerAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::LspSummary::PeerLsPsInfo::LspSummary_> lsp_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::LspSummary::PeerLsPsInfo::PeerAddress> peer_address;
        
}; // PceLspData::LspSummary::PeerLsPsInfo


class PceLspData::LspSummary::PeerLsPsInfo::LspSummary_ : public ydk::Entity
{
    public:
        LspSummary_();
        ~LspSummary_();

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

        ydk::YLeaf all_ls_ps; //type: uint32
        ydk::YLeaf up_ls_ps; //type: uint32
        ydk::YLeaf admin_up_ls_ps; //type: uint32
        ydk::YLeaf sr_ls_ps; //type: uint32
        ydk::YLeaf rsvp_ls_ps; //type: uint32

}; // PceLspData::LspSummary::PeerLsPsInfo::LspSummary_


class PceLspData::LspSummary::PeerLsPsInfo::PeerAddress : public ydk::Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::LspSummary::PeerLsPsInfo::PeerAddress


class PceLspData::TunnelDetailInfos : public ydk::Entity
{
    public:
        TunnelDetailInfos();
        ~TunnelDetailInfos();

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

        class TunnelDetailInfo; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo

        ydk::YList tunnel_detail_info;
        
}; // PceLspData::TunnelDetailInfos


class PceLspData::TunnelDetailInfos::TunnelDetailInfo : public ydk::Entity
{
    public:
        TunnelDetailInfo();
        ~TunnelDetailInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        ydk::YLeaf xtc_controlled; //type: boolean
        ydk::YLeaf color; //type: uint32
        class PccAddress; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress
        class PrivateLspInformation; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation
        class DetailLspInformation; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress> pcc_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation> private_lsp_information;
        ydk::YList detail_lsp_information;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::PccAddress


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation : public ydk::Entity
{
    public:
        PrivateLspInformation();
        ~PrivateLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventBuffer; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer

        ydk::YList event_buffer;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer : public ydk::Entity
{
    public:
        EventBuffer();
        ~EventBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_message; //type: string
        ydk::YLeaf time_stamp; //type: uint32

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation : public ydk::Entity
{
    public:
        DetailLspInformation();
        ~DetailLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signaled_bandwidth_specified; //type: boolean
        ydk::YLeaf signaled_bandwidth; //type: uint64
        ydk::YLeaf actual_bandwidth_specified; //type: boolean
        ydk::YLeaf actual_bandwidth; //type: uint64
        ydk::YLeaf lsp_role; //type: uint32
        ydk::YLeaf computing_pce; //type: uint32
        ydk::YLeafList srlg_info; //type: list of  uint32
        class BriefLspInformation; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation
        class ErOs; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs
        class LsppcepInformation; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation
        class LspAssociationInfo; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo
        class LspAttributes; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes
        class SubDelegatedPce; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce
        class StateSyncPce; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce
        class ReportingPccAddress; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress
        class Rro; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs> er_os;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation> lsppcep_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo> lsp_association_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes> lsp_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce> sub_delegated_pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce> state_sync_pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress> reporting_pcc_address;
        ydk::YList rro;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation : public ydk::Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeaf lsp_setup_type; //type: LspSetup
        ydk::YLeaf operational_state; //type: PcepLspState
        ydk::YLeaf administrative_state; //type: LspState
        ydk::YLeaf msd; //type: uint32
        ydk::YLeaf absolute_margin; //type: uint32
        ydk::YLeaf relative_margin; //type: uint32
        class SourceAddress; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress
        class DestinationAddress; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress> destination_address;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs : public ydk::Entity
{
    public:
        ErOs();
        ~ErOs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reported_metric_type; //type: uint32
        ydk::YLeaf reported_metric_value; //type: uint32
        ydk::YLeaf computed_metric_type; //type: uint32
        ydk::YLeaf computed_metric_value; //type: uint32
        ydk::YLeaf computed_hop_list_time; //type: uint32
        class ReportedRsvpPath; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath
        class ReportedSrPath; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath
        class ComputedRsvpPath; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath
        class ComputedSrPath; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath

        ydk::YList reported_rsvp_path;
        ydk::YList reported_sr_path;
        ydk::YList computed_rsvp_path;
        ydk::YList computed_sr_path;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath : public ydk::Entity
{
    public:
        ReportedRsvpPath();
        ~ReportedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath : public ydk::Entity
{
    public:
        ReportedSrPath();
        ~ReportedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr
        class RemoteAddr; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr> remote_addr;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath : public ydk::Entity
{
    public:
        ComputedRsvpPath();
        ~ComputedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath : public ydk::Entity
{
    public:
        ComputedSrPath();
        ~ComputedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr
        class RemoteAddr; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr> remote_addr;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation : public ydk::Entity
{
    public:
        LsppcepInformation();
        ~LsppcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcepid; //type: uint32
        ydk::YLeaf pcep_flag_d; //type: boolean
        ydk::YLeaf pcep_flag_s; //type: boolean
        ydk::YLeaf pcep_flag_r; //type: boolean
        ydk::YLeaf pcep_flag_a; //type: boolean
        ydk::YLeaf pcep_flag_o; //type: uint8
        ydk::YLeaf pcep_flag_c; //type: uint8
        class RsvpError; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError> rsvp_error;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError : public ydk::Entity
{
    public:
        RsvpError();
        ~RsvpError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_address; //type: string
        ydk::YLeaf error_flags; //type: uint8
        ydk::YLeaf error_code; //type: uint8
        ydk::YLeaf error_value; //type: uint16

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo : public ydk::Entity
{
    public:
        LspAssociationInfo();
        ~LspAssociationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_type; //type: uint32
        ydk::YLeaf association_id; //type: uint32
        class AssociationSource; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource> association_source;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource : public ydk::Entity
{
    public:
        AssociationSource();
        ~AssociationSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes : public ydk::Entity
{
    public:
        LspAttributes();
        ~LspAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_exclude_any; //type: uint32
        ydk::YLeaf affinity_include_any; //type: uint32
        ydk::YLeaf affinity_include_all; //type: uint32
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf local_protection; //type: boolean

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce : public ydk::Entity
{
    public:
        SubDelegatedPce();
        ~SubDelegatedPce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce : public ydk::Entity
{
    public:
        StateSyncPce();
        ~StateSyncPce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress : public ydk::Entity
{
    public:
        ReportingPccAddress();
        ~ReportingPccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: PceRro
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf flags; //type: uint8
        class SrRro; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro> sr_rro;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro : public ydk::Entity
{
    public:
        SrRro();
        ~SrRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr
        class RemoteAddr; //type: PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr> remote_addr;
        
}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr


class PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr

class PcePeer : public ydk::Entity
{
    public:
        PcePeer();
        ~PcePeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class PeerDetailInfos; //type: PcePeer::PeerDetailInfos
        class PeerInfos; //type: PcePeer::PeerInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos> peer_detail_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerInfos> peer_infos;
        
}; // PcePeer


class PcePeer::PeerDetailInfos : public ydk::Entity
{
    public:
        PeerDetailInfos();
        ~PeerDetailInfos();

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

        class PeerDetailInfo; //type: PcePeer::PeerDetailInfos::PeerDetailInfo

        ydk::YList peer_detail_info;
        
}; // PcePeer::PeerDetailInfos


class PcePeer::PeerDetailInfos::PeerDetailInfo : public ydk::Entity
{
    public:
        PeerDetailInfo();
        ~PeerDetailInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_protocol; //type: PceProto
        ydk::YLeaf max_sid_depth; //type: uint32
        class PeerAddressXr; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr
        class DetailPcepInformation; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr> peer_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation> detail_pcep_information;
        
}; // PcePeer::PeerDetailInfos::PeerDetailInfo


class PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr : public ydk::Entity
{
    public:
        PeerAddressXr();
        ~PeerAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PcePeer::PeerDetailInfos::PeerDetailInfo::PeerAddressXr


class PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation : public ydk::Entity
{
    public:
        DetailPcepInformation();
        ~DetailPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error; //type: string
        ydk::YLeaf speaker_id; //type: string
        ydk::YLeaf pcep_up_time; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf md5_enabled; //type: boolean
        ydk::YLeaf keychain_enabled; //type: boolean
        ydk::YLeaf negotiated_local_keepalive; //type: uint32
        ydk::YLeaf negotiated_remote_keepalive; //type: uint32
        ydk::YLeaf negotiated_dead_time; //type: uint32
        ydk::YLeaf pce_request_rx; //type: uint32
        ydk::YLeaf pce_request_tx; //type: uint32
        ydk::YLeaf pce_reply_rx; //type: uint32
        ydk::YLeaf pce_reply_tx; //type: uint32
        ydk::YLeaf pce_error_rx; //type: uint32
        ydk::YLeaf pce_error_tx; //type: uint32
        ydk::YLeaf pce_open_tx; //type: uint32
        ydk::YLeaf pce_open_rx; //type: uint32
        ydk::YLeaf pce_report_rx; //type: uint32
        ydk::YLeaf pce_report_tx; //type: uint32
        ydk::YLeaf pce_update_rx; //type: uint32
        ydk::YLeaf pce_update_tx; //type: uint32
        ydk::YLeaf pce_initiate_rx; //type: uint32
        ydk::YLeaf pce_initiate_tx; //type: uint32
        ydk::YLeaf pce_keepalive_tx; //type: uint64
        ydk::YLeaf pce_keepalive_rx; //type: uint64
        ydk::YLeaf local_session_id; //type: uint8
        ydk::YLeaf remote_session_id; //type: uint8
        ydk::YLeaf minimum_keepalive_interval; //type: uint8
        ydk::YLeaf maximum_dead_interval; //type: uint8
        ydk::YLeaf max_sid_depth; //type: uint8
        class BriefPcepInformation; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation
        class LastErrorRx; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx
        class LastErrorTx; //type: PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation> brief_pcep_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx> last_error_rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx> last_error_tx;
        
}; // PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation


class PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation : public ydk::Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcep_state; //type: PcepState
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf capability_triggered_sync; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf capability_delta_sync; //type: boolean

}; // PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation


class PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx : public ydk::Entity
{
    public:
        LastErrorRx();
        ~LastErrorRx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pc_error_type; //type: uint8
        ydk::YLeaf pc_error_value; //type: uint8

}; // PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx


class PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx : public ydk::Entity
{
    public:
        LastErrorTx();
        ~LastErrorTx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pc_error_type; //type: uint8
        ydk::YLeaf pc_error_value; //type: uint8

}; // PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx


class PcePeer::PeerInfos : public ydk::Entity
{
    public:
        PeerInfos();
        ~PeerInfos();

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

        class PeerInfo; //type: PcePeer::PeerInfos::PeerInfo

        ydk::YList peer_info;
        
}; // PcePeer::PeerInfos


class PcePeer::PeerInfos::PeerInfo : public ydk::Entity
{
    public:
        PeerInfo();
        ~PeerInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_protocol; //type: PceProto
        class PeerAddressXr; //type: PcePeer::PeerInfos::PeerInfo::PeerAddressXr
        class BriefPcepInformation; //type: PcePeer::PeerInfos::PeerInfo::BriefPcepInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerInfos::PeerInfo::PeerAddressXr> peer_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PcePeer::PeerInfos::PeerInfo::BriefPcepInformation> brief_pcep_information;
        
}; // PcePeer::PeerInfos::PeerInfo


class PcePeer::PeerInfos::PeerInfo::PeerAddressXr : public ydk::Entity
{
    public:
        PeerAddressXr();
        ~PeerAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PcePeer::PeerInfos::PeerInfo::PeerAddressXr


class PcePeer::PeerInfos::PeerInfo::BriefPcepInformation : public ydk::Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcep_state; //type: PcepState
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf capability_triggered_sync; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf capability_delta_sync; //type: boolean

}; // PcePeer::PeerInfos::PeerInfo::BriefPcepInformation

class PceTopology : public ydk::Entity
{
    public:
        PceTopology();
        ~PceTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class TopologySummary; //type: PceTopology::TopologySummary
        class TopologyNodes; //type: PceTopology::TopologyNodes
        class PrefixInfos; //type: PceTopology::PrefixInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologySummary> topology_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes> topology_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos> prefix_infos;
        
}; // PceTopology


class PceTopology::TopologySummary : public ydk::Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

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

        ydk::YLeaf nodes; //type: uint32
        ydk::YLeaf lookup_nodes; //type: uint32
        ydk::YLeaf prefixes; //type: uint32
        ydk::YLeaf prefix_sids; //type: uint32
        ydk::YLeaf regular_prefix_sids; //type: uint32
        ydk::YLeaf strict_prefix_sids; //type: uint32
        ydk::YLeaf links; //type: uint32
        ydk::YLeaf epe_links; //type: uint32
        ydk::YLeaf adjacency_sids; //type: uint32
        ydk::YLeaf epesids; //type: uint32
        ydk::YLeaf protected_adjacency_sids; //type: uint32
        ydk::YLeaf un_protected_adjacency_sids; //type: uint32
        ydk::YLeaf topology_consistent; //type: boolean
        class StatsTopologyUpdate; //type: PceTopology::TopologySummary::StatsTopologyUpdate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologySummary::StatsTopologyUpdate> stats_topology_update;
        
}; // PceTopology::TopologySummary


class PceTopology::TopologySummary::StatsTopologyUpdate : public ydk::Entity
{
    public:
        StatsTopologyUpdate();
        ~StatsTopologyUpdate();

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

        ydk::YLeaf num_nodes_added; //type: uint32
        ydk::YLeaf num_nodes_deleted; //type: uint32
        ydk::YLeaf num_links_added; //type: uint32
        ydk::YLeaf num_links_deleted; //type: uint32
        ydk::YLeaf num_prefixes_added; //type: uint32
        ydk::YLeaf num_prefixes_deleted; //type: uint32

}; // PceTopology::TopologySummary::StatsTopologyUpdate


class PceTopology::TopologyNodes : public ydk::Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

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

        class TopologyNode; //type: PceTopology::TopologyNodes::TopologyNode

        ydk::YList topology_node;
        
}; // PceTopology::TopologyNodes


class PceTopology::TopologyNodes::TopologyNode : public ydk::Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

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

        ydk::YLeaf node_identifier; //type: uint32
        ydk::YLeaf node_identifier_xr; //type: uint32
        ydk::YLeaf overload; //type: boolean
        class NodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier
        class Prefixe; //type: PceTopology::TopologyNodes::TopologyNode::Prefixe
        class Ipv4Link; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link
        class Ipv6Link; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier> node_protocol_identifier;
        ydk::YList prefixe;
        ydk::YList ipv4_link;
        ydk::YList ipv6_link;
        
}; // PceTopology::TopologyNodes::TopologyNode


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Prefixe : public ydk::Entity
{
    public:
        Prefixe();
        ~Prefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class PfxSid; //type: PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid> pfx_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::Prefixe


class PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid : public ydk::Entity
{
    public:
        PfxSid();
        ~PfxSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix> sid_prefix;
        
}; // PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid


class PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceTopology::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix


class PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId


class PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link : public ydk::Entity
{
    public:
        Ipv4Link();
        ~Ipv4Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv4_address; //type: string
        ydk::YLeaf remote_ipv4_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        ydk::YLeaf administrative_groups; //type: uint32
        ydk::YLeafList srlgs; //type: list of  uint32
        class LocalIgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier
        class PerformanceMetrics; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics
        class AdjacencySid; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics> performance_metrics;
        ydk::YList adjacency_sid;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics : public ydk::Entity
{
    public:
        PerformanceMetrics();
        ~PerformanceMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unidirectional_min_delay; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link : public ydk::Entity
{
    public:
        Ipv6Link();
        ~Ipv6Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv6_address; //type: string
        ydk::YLeaf remote_ipv6_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        class LocalIgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        ydk::YList adjacency_sid;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix


class PceTopology::PrefixInfos : public ydk::Entity
{
    public:
        PrefixInfos();
        ~PrefixInfos();

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

        class PrefixInfo; //type: PceTopology::PrefixInfos::PrefixInfo

        ydk::YList prefix_info;
        
}; // PceTopology::PrefixInfos


class PceTopology::PrefixInfos::PrefixInfo : public ydk::Entity
{
    public:
        PrefixInfo();
        ~PrefixInfo();

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

        ydk::YLeaf node_identifier; //type: uint32
        ydk::YLeaf node_identifier_xr; //type: uint32
        class NodeProtocolIdentifier; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier
        class Address; //type: PceTopology::PrefixInfos::PrefixInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier> node_protocol_identifier;
        ydk::YList address;
        
}; // PceTopology::PrefixInfos::PrefixInfo


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class PceTopology::PrefixInfos::PrefixInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: PceTopology::PrefixInfos::PrefixInfo::Address::Ip

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::Address::Ip> ip;
        
}; // PceTopology::PrefixInfos::PrefixInfo::Address


class PceTopology::PrefixInfos::PrefixInfo::Address::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceTopology::PrefixInfos::PrefixInfo::Address::Ip

class Pce : public ydk::Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class CspfSrMpls; //type: Pce::CspfSrMpls
        class VerificationEvents; //type: Pce::VerificationEvents
        class AssociationInfos; //type: Pce::AssociationInfos
        class Cspf; //type: Pce::Cspf
        class TopologySummary; //type: Pce::TopologySummary
        class TunnelInfos; //type: Pce::TunnelInfos
        class PeerDetailInfos; //type: Pce::PeerDetailInfos
        class TopologyNodes; //type: Pce::TopologyNodes
        class PrefixInfos; //type: Pce::PrefixInfos
        class LspSummary; //type: Pce::LspSummary
        class PeerInfos; //type: Pce::PeerInfos
        class TunnelDetailInfos; //type: Pce::TunnelDetailInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::CspfSrMpls> cspf_sr_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::VerificationEvents> verification_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::AssociationInfos> association_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Cspf> cspf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologySummary> topology_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos> tunnel_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos> peer_detail_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes> topology_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos> prefix_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary> lsp_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos> peer_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos> tunnel_detail_infos;
        
}; // Pce


class Pce::CspfSrMpls : public ydk::Entity
{
    public:
        CspfSrMpls();
        ~CspfSrMpls();

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

        class CspfSrMplsPaths; //type: Pce::CspfSrMpls::CspfSrMplsPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::CspfSrMpls::CspfSrMplsPaths> cspf_sr_mpls_paths;
        
}; // Pce::CspfSrMpls


class Pce::CspfSrMpls::CspfSrMplsPaths : public ydk::Entity
{
    public:
        CspfSrMplsPaths();
        ~CspfSrMplsPaths();

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

        class CspfSrMplsPath; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath

        ydk::YList cspf_sr_mpls_path;
        
}; // Pce::CspfSrMpls::CspfSrMplsPaths


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath : public ydk::Entity
{
    public:
        CspfSrMplsPath();
        ~CspfSrMplsPath();

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

        ydk::YLeaf af; //type: uint32
        ydk::YLeaf source1; //type: string
        ydk::YLeaf destination1; //type: string
        ydk::YLeaf metric_type; //type: uint32
        ydk::YLeaf source2; //type: string
        ydk::YLeaf destination2; //type: string
        ydk::YLeaf disjoint_level; //type: uint32
        ydk::YLeaf disjoint_strict; //type: uint32
        ydk::YLeaf shortest_path; //type: uint32
        ydk::YLeaf msd1; //type: uint32
        ydk::YLeaf msd2; //type: uint32
        ydk::YLeaf relative_margin; //type: uint32
        ydk::YLeaf absolute_margin; //type: uint32
        ydk::YLeaf affinity_include_all; //type: uint32
        ydk::YLeaf affinity_include_any; //type: uint32
        ydk::YLeaf affinity_exclude_any; //type: uint32
        ydk::YLeaf cspf_result; //type: PceCspfRc
        ydk::YLeaf iterations_done; //type: uint32
        class OutputPath; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath

        ydk::YList output_path;
        
}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath : public ydk::Entity
{
    public:
        OutputPath();
        ~OutputPath();

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

        ydk::YLeaf cost; //type: uint64
        class Source; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source
        class Destination; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination
        class Hops; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination> destination;
        ydk::YList hops;
        
}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Source


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Destination


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

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

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr
        class RemoteAddr; //type: Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr> remote_addr;
        
}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr


class Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr


class Pce::VerificationEvents : public ydk::Entity
{
    public:
        VerificationEvents();
        ~VerificationEvents();

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

        class VerificationEvent; //type: Pce::VerificationEvents::VerificationEvent

        ydk::YList verification_event;
        
}; // Pce::VerificationEvents


class Pce::VerificationEvents::VerificationEvent : public ydk::Entity
{
    public:
        VerificationEvent();
        ~VerificationEvent();

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

        ydk::YLeaf event_idx; //type: uint32
        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_message; //type: string
        ydk::YLeaf time_stamp; //type: uint32

}; // Pce::VerificationEvents::VerificationEvent


class Pce::AssociationInfos : public ydk::Entity
{
    public:
        AssociationInfos();
        ~AssociationInfos();

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

        class AssociationInfo; //type: Pce::AssociationInfos::AssociationInfo

        ydk::YList association_info;
        
}; // Pce::AssociationInfos


class Pce::AssociationInfos::AssociationInfo : public ydk::Entity
{
    public:
        AssociationInfo();
        ~AssociationInfo();

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

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf type; //type: PceAsso
        ydk::YLeaf sub_id; //type: string
        ydk::YLeaf association_type; //type: uint32
        ydk::YLeaf association_id; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf headends_swapped; //type: uint32
        class AssociationSource; //type: Pce::AssociationInfos::AssociationInfo::AssociationSource
        class AssociationLsp; //type: Pce::AssociationInfos::AssociationInfo::AssociationLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::AssociationInfos::AssociationInfo::AssociationSource> association_source;
        ydk::YList association_lsp;
        
}; // Pce::AssociationInfos::AssociationInfo


class Pce::AssociationInfos::AssociationInfo::AssociationSource : public ydk::Entity
{
    public:
        AssociationSource();
        ~AssociationSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::AssociationInfos::AssociationInfo::AssociationSource


class Pce::AssociationInfos::AssociationInfo::AssociationLsp : public ydk::Entity
{
    public:
        AssociationLsp();
        ~AssociationLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf pce_based; //type: boolean
        ydk::YLeaf plsp_id; //type: uint32
        class PccAddress; //type: Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress> pcc_address;
        
}; // Pce::AssociationInfos::AssociationInfo::AssociationLsp


class Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress


class Pce::Cspf : public ydk::Entity
{
    public:
        Cspf();
        ~Cspf();

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

        class CspfPaths; //type: Pce::Cspf::CspfPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Cspf::CspfPaths> cspf_paths;
        
}; // Pce::Cspf


class Pce::Cspf::CspfPaths : public ydk::Entity
{
    public:
        CspfPaths();
        ~CspfPaths();

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

        class CspfPath; //type: Pce::Cspf::CspfPaths::CspfPath

        ydk::YList cspf_path;
        
}; // Pce::Cspf::CspfPaths


class Pce::Cspf::CspfPaths::CspfPath : public ydk::Entity
{
    public:
        CspfPath();
        ~CspfPath();

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

        ydk::YLeaf af; //type: uint32
        ydk::YLeaf source1; //type: string
        ydk::YLeaf destination1; //type: string
        ydk::YLeaf metric_type; //type: uint32
        ydk::YLeaf source2; //type: string
        ydk::YLeaf destination2; //type: string
        ydk::YLeaf disjoint_level; //type: uint32
        ydk::YLeaf disjoint_strict; //type: uint32
        ydk::YLeaf shortest_path; //type: uint32
        ydk::YLeaf headends_swapped; //type: PceHeadendSwap
        ydk::YLeaf cspf_result; //type: PceCspfRc
        ydk::YLeaf iterations_done; //type: uint32
        class OutputPath; //type: Pce::Cspf::CspfPaths::CspfPath::OutputPath

        ydk::YList output_path;
        
}; // Pce::Cspf::CspfPaths::CspfPath


class Pce::Cspf::CspfPaths::CspfPath::OutputPath : public ydk::Entity
{
    public:
        OutputPath();
        ~OutputPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cost; //type: uint64
        class Source; //type: Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source
        class Destination; //type: Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination
        class Hops; //type: Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination> destination;
        ydk::YList hops;
        
}; // Pce::Cspf::CspfPaths::CspfPath::OutputPath


class Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source


class Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination


class Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: uint8
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops


class Pce::TopologySummary : public ydk::Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

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

        ydk::YLeaf nodes; //type: uint32
        ydk::YLeaf lookup_nodes; //type: uint32
        ydk::YLeaf prefixes; //type: uint32
        ydk::YLeaf prefix_sids; //type: uint32
        ydk::YLeaf regular_prefix_sids; //type: uint32
        ydk::YLeaf strict_prefix_sids; //type: uint32
        ydk::YLeaf links; //type: uint32
        ydk::YLeaf epe_links; //type: uint32
        ydk::YLeaf adjacency_sids; //type: uint32
        ydk::YLeaf epesids; //type: uint32
        ydk::YLeaf protected_adjacency_sids; //type: uint32
        ydk::YLeaf un_protected_adjacency_sids; //type: uint32
        ydk::YLeaf topology_consistent; //type: boolean
        class StatsTopologyUpdate; //type: Pce::TopologySummary::StatsTopologyUpdate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologySummary::StatsTopologyUpdate> stats_topology_update;
        
}; // Pce::TopologySummary


class Pce::TopologySummary::StatsTopologyUpdate : public ydk::Entity
{
    public:
        StatsTopologyUpdate();
        ~StatsTopologyUpdate();

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

        ydk::YLeaf num_nodes_added; //type: uint32
        ydk::YLeaf num_nodes_deleted; //type: uint32
        ydk::YLeaf num_links_added; //type: uint32
        ydk::YLeaf num_links_deleted; //type: uint32
        ydk::YLeaf num_prefixes_added; //type: uint32
        ydk::YLeaf num_prefixes_deleted; //type: uint32

}; // Pce::TopologySummary::StatsTopologyUpdate


class Pce::TunnelInfos : public ydk::Entity
{
    public:
        TunnelInfos();
        ~TunnelInfos();

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

        class TunnelInfo; //type: Pce::TunnelInfos::TunnelInfo

        ydk::YList tunnel_info;
        
}; // Pce::TunnelInfos


class Pce::TunnelInfos::TunnelInfo : public ydk::Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        class PccAddress; //type: Pce::TunnelInfos::TunnelInfo::PccAddress
        class BriefLspInformation; //type: Pce::TunnelInfos::TunnelInfo::BriefLspInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos::TunnelInfo::PccAddress> pcc_address;
        ydk::YList brief_lsp_information;
        
}; // Pce::TunnelInfos::TunnelInfo


class Pce::TunnelInfos::TunnelInfo::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelInfos::TunnelInfo::PccAddress


class Pce::TunnelInfos::TunnelInfo::BriefLspInformation : public ydk::Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeaf lsp_setup_type; //type: LspSetup
        ydk::YLeaf operational_state; //type: PcepLspState
        ydk::YLeaf administrative_state; //type: LspState
        ydk::YLeaf msd; //type: uint32
        ydk::YLeaf absolute_margin; //type: uint32
        ydk::YLeaf relative_margin; //type: uint32
        class SourceAddress; //type: Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress
        class DestinationAddress; //type: Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress> destination_address;
        
}; // Pce::TunnelInfos::TunnelInfo::BriefLspInformation


class Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress


class Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress


class Pce::PeerDetailInfos : public ydk::Entity
{
    public:
        PeerDetailInfos();
        ~PeerDetailInfos();

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

        class PeerDetailInfo; //type: Pce::PeerDetailInfos::PeerDetailInfo

        ydk::YList peer_detail_info;
        
}; // Pce::PeerDetailInfos


class Pce::PeerDetailInfos::PeerDetailInfo : public ydk::Entity
{
    public:
        PeerDetailInfo();
        ~PeerDetailInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_protocol; //type: PceProto
        ydk::YLeaf max_sid_depth; //type: uint32
        class PeerAddressXr; //type: Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr
        class DetailPcepInformation; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr> peer_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation> detail_pcep_information;
        
}; // Pce::PeerDetailInfos::PeerDetailInfo


class Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr : public ydk::Entity
{
    public:
        PeerAddressXr();
        ~PeerAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation : public ydk::Entity
{
    public:
        DetailPcepInformation();
        ~DetailPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error; //type: string
        ydk::YLeaf speaker_id; //type: string
        ydk::YLeaf pcep_up_time; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf md5_enabled; //type: boolean
        ydk::YLeaf keychain_enabled; //type: boolean
        ydk::YLeaf negotiated_local_keepalive; //type: uint32
        ydk::YLeaf negotiated_remote_keepalive; //type: uint32
        ydk::YLeaf negotiated_dead_time; //type: uint32
        ydk::YLeaf pce_request_rx; //type: uint32
        ydk::YLeaf pce_request_tx; //type: uint32
        ydk::YLeaf pce_reply_rx; //type: uint32
        ydk::YLeaf pce_reply_tx; //type: uint32
        ydk::YLeaf pce_error_rx; //type: uint32
        ydk::YLeaf pce_error_tx; //type: uint32
        ydk::YLeaf pce_open_tx; //type: uint32
        ydk::YLeaf pce_open_rx; //type: uint32
        ydk::YLeaf pce_report_rx; //type: uint32
        ydk::YLeaf pce_report_tx; //type: uint32
        ydk::YLeaf pce_update_rx; //type: uint32
        ydk::YLeaf pce_update_tx; //type: uint32
        ydk::YLeaf pce_initiate_rx; //type: uint32
        ydk::YLeaf pce_initiate_tx; //type: uint32
        ydk::YLeaf pce_keepalive_tx; //type: uint64
        ydk::YLeaf pce_keepalive_rx; //type: uint64
        ydk::YLeaf local_session_id; //type: uint8
        ydk::YLeaf remote_session_id; //type: uint8
        ydk::YLeaf minimum_keepalive_interval; //type: uint8
        ydk::YLeaf maximum_dead_interval; //type: uint8
        ydk::YLeaf max_sid_depth; //type: uint8
        class BriefPcepInformation; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation
        class LastErrorRx; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx
        class LastErrorTx; //type: Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation> brief_pcep_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx> last_error_rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx> last_error_tx;
        
}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation : public ydk::Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcep_state; //type: PcepState
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf capability_triggered_sync; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf capability_delta_sync; //type: boolean

}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx : public ydk::Entity
{
    public:
        LastErrorRx();
        ~LastErrorRx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pc_error_type; //type: uint8
        ydk::YLeaf pc_error_value; //type: uint8

}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx


class Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx : public ydk::Entity
{
    public:
        LastErrorTx();
        ~LastErrorTx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pc_error_type; //type: uint8
        ydk::YLeaf pc_error_value; //type: uint8

}; // Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx


class Pce::TopologyNodes : public ydk::Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

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

        class TopologyNode; //type: Pce::TopologyNodes::TopologyNode

        ydk::YList topology_node;
        
}; // Pce::TopologyNodes


class Pce::TopologyNodes::TopologyNode : public ydk::Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

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

        ydk::YLeaf node_identifier; //type: uint32
        ydk::YLeaf node_identifier_xr; //type: uint32
        ydk::YLeaf overload; //type: boolean
        class NodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier
        class Prefixe; //type: Pce::TopologyNodes::TopologyNode::Prefixe
        class Ipv4Link; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link
        class Ipv6Link; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier> node_protocol_identifier;
        ydk::YList prefixe;
        ydk::YList ipv4_link;
        ydk::YList ipv6_link;
        
}; // Pce::TopologyNodes::TopologyNode


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Prefixe : public ydk::Entity
{
    public:
        Prefixe();
        ~Prefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class PfxSid; //type: Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid> pfx_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Prefixe


class Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid : public ydk::Entity
{
    public:
        PfxSid();
        ~PfxSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix> sid_prefix;
        
}; // Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid


class Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link : public ydk::Entity
{
    public:
        Ipv4Link();
        ~Ipv4Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv4_address; //type: string
        ydk::YLeaf remote_ipv4_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        ydk::YLeaf administrative_groups; //type: uint32
        ydk::YLeafList srlgs; //type: list of  uint32
        class LocalIgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier
        class PerformanceMetrics; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics
        class AdjacencySid; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics> performance_metrics;
        ydk::YList adjacency_sid;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics : public ydk::Entity
{
    public:
        PerformanceMetrics();
        ~PerformanceMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unidirectional_min_delay; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics


class Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid


class Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix


class Pce::TopologyNodes::TopologyNode::Ipv6Link : public ydk::Entity
{
    public:
        Ipv6Link();
        ~Ipv6Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv6_address; //type: string
        ydk::YLeaf remote_ipv6_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        class LocalIgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        ydk::YList adjacency_sid;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid


class Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix


class Pce::PrefixInfos : public ydk::Entity
{
    public:
        PrefixInfos();
        ~PrefixInfos();

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

        class PrefixInfo; //type: Pce::PrefixInfos::PrefixInfo

        ydk::YList prefix_info;
        
}; // Pce::PrefixInfos


class Pce::PrefixInfos::PrefixInfo : public ydk::Entity
{
    public:
        PrefixInfo();
        ~PrefixInfo();

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

        ydk::YLeaf node_identifier; //type: uint32
        ydk::YLeaf node_identifier_xr; //type: uint32
        class NodeProtocolIdentifier; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier
        class Address; //type: Pce::PrefixInfos::PrefixInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier> node_protocol_identifier;
        ydk::YList address;
        
}; // Pce::PrefixInfos::PrefixInfo


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation

        ydk::YList igp_information;
        ydk::YList srgb_information;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId> node_id;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp> igp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        class NodeId; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId> node_id;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId : public ydk::Entity
{
    public:
        NodeId();
        ~NodeId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        ydk::YLeaf ls_identifier; //type: uint32
        class Igp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp> igp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis
        class Ospf; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf
        class Bgp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp> bgp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp


class Pce::PrefixInfos::PrefixInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Pce::PrefixInfos::PrefixInfo::Address::Ip

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::Address::Ip> ip;
        
}; // Pce::PrefixInfos::PrefixInfo::Address


class Pce::PrefixInfos::PrefixInfo::Address::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::PrefixInfos::PrefixInfo::Address::Ip


class Pce::LspSummary : public ydk::Entity
{
    public:
        LspSummary();
        ~LspSummary();

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

        class AllLsPs; //type: Pce::LspSummary::AllLsPs
        class PeerLsPsInfo; //type: Pce::LspSummary::PeerLsPsInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::AllLsPs> all_ls_ps;
        ydk::YList peer_ls_ps_info;
        
}; // Pce::LspSummary


class Pce::LspSummary::AllLsPs : public ydk::Entity
{
    public:
        AllLsPs();
        ~AllLsPs();

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

        ydk::YLeaf all_ls_ps; //type: uint32
        ydk::YLeaf up_ls_ps; //type: uint32
        ydk::YLeaf admin_up_ls_ps; //type: uint32
        ydk::YLeaf sr_ls_ps; //type: uint32
        ydk::YLeaf rsvp_ls_ps; //type: uint32

}; // Pce::LspSummary::AllLsPs


class Pce::LspSummary::PeerLsPsInfo : public ydk::Entity
{
    public:
        PeerLsPsInfo();
        ~PeerLsPsInfo();

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

        class LspSummary_; //type: Pce::LspSummary::PeerLsPsInfo::LspSummary_
        class PeerAddress; //type: Pce::LspSummary::PeerLsPsInfo::PeerAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::PeerLsPsInfo::LspSummary_> lsp_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::PeerLsPsInfo::PeerAddress> peer_address;
        
}; // Pce::LspSummary::PeerLsPsInfo


class Pce::LspSummary::PeerLsPsInfo::LspSummary_ : public ydk::Entity
{
    public:
        LspSummary_();
        ~LspSummary_();

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

        ydk::YLeaf all_ls_ps; //type: uint32
        ydk::YLeaf up_ls_ps; //type: uint32
        ydk::YLeaf admin_up_ls_ps; //type: uint32
        ydk::YLeaf sr_ls_ps; //type: uint32
        ydk::YLeaf rsvp_ls_ps; //type: uint32

}; // Pce::LspSummary::PeerLsPsInfo::LspSummary_


class Pce::LspSummary::PeerLsPsInfo::PeerAddress : public ydk::Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

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

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::LspSummary::PeerLsPsInfo::PeerAddress


class Pce::PeerInfos : public ydk::Entity
{
    public:
        PeerInfos();
        ~PeerInfos();

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

        class PeerInfo; //type: Pce::PeerInfos::PeerInfo

        ydk::YList peer_info;
        
}; // Pce::PeerInfos


class Pce::PeerInfos::PeerInfo : public ydk::Entity
{
    public:
        PeerInfo();
        ~PeerInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_protocol; //type: PceProto
        class PeerAddressXr; //type: Pce::PeerInfos::PeerInfo::PeerAddressXr
        class BriefPcepInformation; //type: Pce::PeerInfos::PeerInfo::BriefPcepInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos::PeerInfo::PeerAddressXr> peer_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos::PeerInfo::BriefPcepInformation> brief_pcep_information;
        
}; // Pce::PeerInfos::PeerInfo


class Pce::PeerInfos::PeerInfo::PeerAddressXr : public ydk::Entity
{
    public:
        PeerAddressXr();
        ~PeerAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::PeerInfos::PeerInfo::PeerAddressXr


class Pce::PeerInfos::PeerInfo::BriefPcepInformation : public ydk::Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcep_state; //type: PcepState
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf capability_triggered_sync; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf capability_delta_sync; //type: boolean

}; // Pce::PeerInfos::PeerInfo::BriefPcepInformation


class Pce::TunnelDetailInfos : public ydk::Entity
{
    public:
        TunnelDetailInfos();
        ~TunnelDetailInfos();

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

        class TunnelDetailInfo; //type: Pce::TunnelDetailInfos::TunnelDetailInfo

        ydk::YList tunnel_detail_info;
        
}; // Pce::TunnelDetailInfos


class Pce::TunnelDetailInfos::TunnelDetailInfo : public ydk::Entity
{
    public:
        TunnelDetailInfo();
        ~TunnelDetailInfo();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        ydk::YLeaf xtc_controlled; //type: boolean
        ydk::YLeaf color; //type: uint32
        class PccAddress; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress
        class PrivateLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation
        class DetailLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress> pcc_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation> private_lsp_information;
        ydk::YList detail_lsp_information;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo


class Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress : public ydk::Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress


class Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation : public ydk::Entity
{
    public:
        PrivateLspInformation();
        ~PrivateLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventBuffer; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer

        ydk::YList event_buffer;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer : public ydk::Entity
{
    public:
        EventBuffer();
        ~EventBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint32
        ydk::YLeaf event_message; //type: string
        ydk::YLeaf time_stamp; //type: uint32

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation : public ydk::Entity
{
    public:
        DetailLspInformation();
        ~DetailLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signaled_bandwidth_specified; //type: boolean
        ydk::YLeaf signaled_bandwidth; //type: uint64
        ydk::YLeaf actual_bandwidth_specified; //type: boolean
        ydk::YLeaf actual_bandwidth; //type: uint64
        ydk::YLeaf lsp_role; //type: uint32
        ydk::YLeaf computing_pce; //type: uint32
        ydk::YLeafList srlg_info; //type: list of  uint32
        class BriefLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation
        class ErOs; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs
        class LsppcepInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation
        class LspAssociationInfo; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo
        class LspAttributes; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes
        class SubDelegatedPce; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce
        class StateSyncPce; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce
        class ReportingPccAddress; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress
        class Rro; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs> er_os;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation> lsppcep_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo> lsp_association_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes> lsp_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce> sub_delegated_pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce> state_sync_pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress> reporting_pcc_address;
        ydk::YList rro;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation : public ydk::Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeaf lsp_setup_type; //type: LspSetup
        ydk::YLeaf operational_state; //type: PcepLspState
        ydk::YLeaf administrative_state; //type: LspState
        ydk::YLeaf msd; //type: uint32
        ydk::YLeaf absolute_margin; //type: uint32
        ydk::YLeaf relative_margin; //type: uint32
        class SourceAddress; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress
        class DestinationAddress; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress> destination_address;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs : public ydk::Entity
{
    public:
        ErOs();
        ~ErOs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reported_metric_type; //type: uint32
        ydk::YLeaf reported_metric_value; //type: uint32
        ydk::YLeaf computed_metric_type; //type: uint32
        ydk::YLeaf computed_metric_value; //type: uint32
        ydk::YLeaf computed_hop_list_time; //type: uint32
        class ReportedRsvpPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath
        class ReportedSrPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath
        class ComputedRsvpPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath
        class ComputedSrPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath

        ydk::YList reported_rsvp_path;
        ydk::YList reported_sr_path;
        ydk::YList computed_rsvp_path;
        ydk::YList computed_sr_path;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath : public ydk::Entity
{
    public:
        ReportedRsvpPath();
        ~ReportedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath : public ydk::Entity
{
    public:
        ReportedSrPath();
        ~ReportedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr
        class RemoteAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr> remote_addr;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath : public ydk::Entity
{
    public:
        ComputedRsvpPath();
        ~ComputedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath : public ydk::Entity
{
    public:
        ComputedSrPath();
        ~ComputedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr
        class RemoteAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr> remote_addr;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::LocalAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::RemoteAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation : public ydk::Entity
{
    public:
        LsppcepInformation();
        ~LsppcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcepid; //type: uint32
        ydk::YLeaf pcep_flag_d; //type: boolean
        ydk::YLeaf pcep_flag_s; //type: boolean
        ydk::YLeaf pcep_flag_r; //type: boolean
        ydk::YLeaf pcep_flag_a; //type: boolean
        ydk::YLeaf pcep_flag_o; //type: uint8
        ydk::YLeaf pcep_flag_c; //type: uint8
        class RsvpError; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError> rsvp_error;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError : public ydk::Entity
{
    public:
        RsvpError();
        ~RsvpError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_address; //type: string
        ydk::YLeaf error_flags; //type: uint8
        ydk::YLeaf error_code; //type: uint8
        ydk::YLeaf error_value; //type: uint16

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo : public ydk::Entity
{
    public:
        LspAssociationInfo();
        ~LspAssociationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_type; //type: uint32
        ydk::YLeaf association_id; //type: uint32
        class AssociationSource; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource> association_source;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource : public ydk::Entity
{
    public:
        AssociationSource();
        ~AssociationSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::AssociationSource


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes : public ydk::Entity
{
    public:
        LspAttributes();
        ~LspAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_exclude_any; //type: uint32
        ydk::YLeaf affinity_include_any; //type: uint32
        ydk::YLeaf affinity_include_all; //type: uint32
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf local_protection; //type: boolean

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce : public ydk::Entity
{
    public:
        SubDelegatedPce();
        ~SubDelegatedPce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce : public ydk::Entity
{
    public:
        StateSyncPce();
        ~StateSyncPce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress : public ydk::Entity
{
    public:
        ReportingPccAddress();
        ~ReportingPccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: PceRro
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf flags; //type: uint8
        class SrRro; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro> sr_rro;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro : public ydk::Entity
{
    public:
        SrRro();
        ~SrRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: PceSrSid
        ydk::YLeaf mpls_label; //type: uint32
        class LocalAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr
        class RemoteAddr; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr> local_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr> remote_addr;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr : public ydk::Entity
{
    public:
        LocalAddr();
        ~LocalAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::LocalAddr


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr : public ydk::Entity
{
    public:
        RemoteAddr();
        ~RemoteAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::RemoteAddr

class LspState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsp_down;
        static const ydk::Enum::YLeaf lsp_up;

};

class PceRro : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rro_type_ipv4_address;
        static const ydk::Enum::YLeaf rro_type_mpls_label;
        static const ydk::Enum::YLeaf rro_type_sripv4_node_sid;
        static const ydk::Enum::YLeaf rro_type_sripv4_adjacency_sid;
        static const ydk::Enum::YLeaf rro_type_sr_nai_null;

};

class PceCspfRc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pce_cspf_not_set;
        static const ydk::Enum::YLeaf pce_cspf_src_not_found;
        static const ydk::Enum::YLeaf pce_cspf_dst_not_found;
        static const ydk::Enum::YLeaf pce_cspf_second_src_not_found;
        static const ydk::Enum::YLeaf pce_cspf_second_dst_not_found;
        static const ydk::Enum::YLeaf pce_cspf_no_mem;
        static const ydk::Enum::YLeaf pce_cspf_ex_path_not_resolved;
        static const ydk::Enum::YLeaf pce_cspf_no_path;
        static const ydk::Enum::YLeaf pce_cspf_sp_success;
        static const ydk::Enum::YLeaf pce_cspf_error;
        static const ydk::Enum::YLeaf pce_cspf_fallback_srlg_node_node;
        static const ydk::Enum::YLeaf pce_cspf_fallback_srlg_node_link;
        static const ydk::Enum::YLeaf pce_cspf_fallback_srlg_node_sp;
        static const ydk::Enum::YLeaf pce_cspf_fallback_node_link;
        static const ydk::Enum::YLeaf pce_cspf_fallback_link_sp;
        static const ydk::Enum::YLeaf pce_cspf_fallback_node_sp;
        static const ydk::Enum::YLeaf pce_cspf_fallback_srlg_link;
        static const ydk::Enum::YLeaf pce_cspf_fallback_srlg_sp;
        static const ydk::Enum::YLeaf pce_cspf_dp_success;

};

class PceSrSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_node_sid;
        static const ydk::Enum::YLeaf ipv4_adjacency_sid;
        static const ydk::Enum::YLeaf ipv6_node_sid;
        static const ydk::Enum::YLeaf ipv6_adjacency_sid;
        static const ydk::Enum::YLeaf unknown_sid;

};

class PceHeadendSwap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pcehs_none;
        static const ydk::Enum::YLeaf pcehs_plain;
        static const ydk::Enum::YLeaf pcehs_rwi;

};

class PcepLspState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsp_down;
        static const ydk::Enum::YLeaf lsp_up;
        static const ydk::Enum::YLeaf lsp_active;
        static const ydk::Enum::YLeaf lsp_going_down;
        static const ydk::Enum::YLeaf lsp_being_signaled;

};

class PceIgpInfoId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;

};

class PceProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pcep;
        static const ydk::Enum::YLeaf netconf;

};

class PcepState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp_close;
        static const ydk::Enum::YLeaf tcp_listen;
        static const ydk::Enum::YLeaf tcp_connect;
        static const ydk::Enum::YLeaf pcep_closed;
        static const ydk::Enum::YLeaf pcep_opening;
        static const ydk::Enum::YLeaf pcep_open;

};

class Sid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sr_protected_adj_sid;
        static const ydk::Enum::YLeaf sr_unprotected_adj_sid;
        static const ydk::Enum::YLeaf sr_bgp_egress_peer_engineering_sid;
        static const ydk::Enum::YLeaf sr_reqular_prefix_sid;
        static const ydk::Enum::YLeaf sr_strict_prefix_sid;

};

class LspSetup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf setup_rsvp;
        static const ydk::Enum::YLeaf setup_sr;
        static const ydk::Enum::YLeaf setup_unknown;

};

class PceAsso : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;

};

class PceAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_OPER_ */

