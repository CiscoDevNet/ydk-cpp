#ifndef _CISCO_IOS_XR_IP_BFD_OPER_2_
#define _CISCO_IOS_XR_IP_BFD_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_bfd_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {


class Bfd::SessionBriefs : public ydk::Entity
{
    public:
        SessionBriefs();
        ~SessionBriefs();

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

        class SessionBrief; //type: Bfd::SessionBriefs::SessionBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief> > session_brief;
        
}; // Bfd::SessionBriefs


class Bfd::SessionBriefs::SessionBrief : public ydk::Entity
{
    public:
        SessionBrief();
        ~SessionBrief();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf session_type; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::SessionBriefs::SessionBrief


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

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

        class AsyncIntervalMultiplier; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

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

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

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

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::SessionDetails : public ydk::Entity
{
    public:
        SessionDetails();
        ~SessionDetails();

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

        class SessionDetail; //type: Bfd::SessionDetails::SessionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail> > session_detail;
        
}; // Bfd::SessionDetails


class Bfd::SessionDetails::SessionDetail : public ydk::Entity
{
    public:
        SessionDetail();
        ~SessionDetail();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        class StatusInformation; //type: Bfd::SessionDetails::SessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::SessionDetails::SessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::SessionDetails::SessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation> status_information;
        
}; // Bfd::SessionDetails::SessionDetail


class Bfd::SessionDetails::SessionDetail::AssociationInformation : public ydk::Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf local_discriminator; //type: uint32
        class IpDestinationAddress; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress
        class OwnerInformation; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress> ip_destination_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        
}; // Bfd::SessionDetails::SessionDetail::AssociationInformation


class Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress : public ydk::Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

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

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress


class Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation


class Bfd::SessionDetails::SessionDetail::LspPingInfo : public ydk::Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

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

        ydk::YLeaf lsp_ping_tx_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_error_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_last_rc; //type: string
        ydk::YLeaf lsp_ping_tx_last_error_rc; //type: string
        ydk::YLeaf lsp_ping_rx_last_discr; //type: uint32
        ydk::YLeaf lsp_ping_rx_count; //type: uint32
        ydk::YLeaf lsp_ping_rx_last_code; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_subcode; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::SessionDetails::SessionDetail::LspPingInfo


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime : public ydk::Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

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

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime : public ydk::Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

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

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime : public ydk::Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

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

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::SessionDetails::SessionDetail::MpDownloadState : public ydk::Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

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

        ydk::YLeaf mp_download_state; //type: BfdMpDownloadState
        class ChangeTime; //type: Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::SessionDetails::SessionDetail::MpDownloadState


class Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

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

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime


class Bfd::SessionDetails::SessionDetail::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::SessionDetails::SessionDetail::OwnerInformation


class Bfd::SessionDetails::SessionDetail::StatusInformation : public ydk::Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

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

        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf to_up_state_count; //type: uint32
        ydk::YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        ydk::YLeaf remote_negotiated_interval; //type: uint32
        ydk::YLeaf latency_number; //type: uint32
        ydk::YLeaf latency_minimum; //type: uint32
        ydk::YLeaf latency_maximum; //type: uint32
        ydk::YLeaf latency_average; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::SessionDetails::SessionDetail::StatusInformation


class Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics : public ydk::Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

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

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics : public ydk::Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

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

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics : public ydk::Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

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

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics : public ydk::Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

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

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange : public ydk::Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

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

        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8
        ydk::YLeaf seconds; //type: uint8

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange


class Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

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

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket


class Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

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

        class AsyncIntervalMultiplier; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

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

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

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

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket : public ydk::Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

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

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket


class Bfd::SessionMibs : public ydk::Entity
{
    public:
        SessionMibs();
        ~SessionMibs();

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

        class SessionMib; //type: Bfd::SessionMibs::SessionMib

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionMibs::SessionMib> > session_mib;
        
}; // Bfd::SessionMibs


class Bfd::SessionMibs::SessionMib : public ydk::Entity
{
    public:
        SessionMib();
        ~SessionMib();

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

        ydk::YLeaf discriminator; //type: int32
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf sessionversion; //type: uint32
        ydk::YLeaf session_state; //type: uint32
        ydk::YLeaf trap_bitmap; //type: uint32
        ydk::YLeaf pkt_in; //type: uint64
        ydk::YLeaf pkt_out; //type: uint64
        ydk::YLeaf last_up_time_sec; //type: uint64
        ydk::YLeaf last_up_time_nsec; //type: uint32
        ydk::YLeaf last_down_time_sec; //type: uint64
        ydk::YLeaf last_down_time_nsec; //type: uint32
        ydk::YLeaf last_down_diag; //type: BfdMgmtSessionDiag
        ydk::YLeaf up_counter; //type: uint32
        ydk::YLeaf last_time_cached; //type: uint64
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf int_handle; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf desired_min_tx_interval; //type: uint32
        ydk::YLeaf required_min_rx_interval; //type: uint32
        ydk::YLeaf required_min_rx_echo_interval; //type: uint32
        class DestAddress; //type: Bfd::SessionMibs::SessionMib::DestAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionMibs::SessionMib::DestAddress> dest_address;
        
}; // Bfd::SessionMibs::SessionMib


class Bfd::SessionMibs::SessionMib::DestAddress : public ydk::Entity
{
    public:
        DestAddress();
        ~DestAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::SessionMibs::SessionMib::DestAddress


class Bfd::Summary : public ydk::Entity
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

        class SessionState; //type: Bfd::Summary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Summary::SessionState> session_state;
        
}; // Bfd::Summary


class Bfd::Summary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32

}; // Bfd::Summary::SessionState


}
}

#endif /* _CISCO_IOS_XR_IP_BFD_OPER_2_ */

