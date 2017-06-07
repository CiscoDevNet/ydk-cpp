#ifndef _CISCO_IOS_XR_IP_BFD_OPER_1_
#define _CISCO_IOS_XR_IP_BFD_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_bfd_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_bfd_oper {


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail : public Entity
{
    public:
        Ipv6MultiHopSessionDetail();
        ~Ipv6MultiHopSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        class StatusInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation> status_information;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf to_up_state_count; //type: uint32
        YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        YLeaf remote_negotiated_interval; //type: uint32
        YLeaf latency_number; //type: uint32
        YLeaf latency_minimum; //type: uint32
        YLeaf latency_maximum; //type: uint32
        YLeaf latency_average; //type: uint32
        YLeaf node_id; //type: string
        YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum
        class ChangeTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfdfe_ctype; //type: BfdApiFecEnum
        class Dummy; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dummy; //type: string

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv6MultiHopMultiPaths : public Entity
{
    public:
        Ipv6MultiHopMultiPaths();
        ~Ipv6MultiHopMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6MultiHopMultiPath; //type: Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath> > ipv6_multi_hop_multi_path;
        
}; // Bfd::Ipv6MultiHopMultiPaths


class Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath : public Entity
{
    public:
        Ipv6MultiHopMultiPath();
        ~Ipv6MultiHopMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf node_id; //type: string
        YLeaf incoming_label_xr; //type: uint32
        YLeaf session_interface_name; //type: string

}; // Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath


class Bfd::Ipv4BfDoMplsteHeadCounters : public Entity
{
    public:
        Ipv4BfDoMplsteHeadCounters();
        ~Ipv4BfDoMplsteHeadCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4BfDoMplsteHeadPacketCounters; //type: Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters> ipv4bf_do_mplste_head_packet_counters;
        
}; // Bfd::Ipv4BfDoMplsteHeadCounters


class Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters : public Entity
{
    public:
        Ipv4BfDoMplsteHeadPacketCounters();
        ~Ipv4BfDoMplsteHeadPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4BfDoMplsteHeadPacketCounter; //type: Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter> > ipv4bf_do_mplste_head_packet_counter;
        
}; // Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters


class Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter : public Entity
{
    public:
        Ipv4BfDoMplsteHeadPacketCounter();
        ~Ipv4BfDoMplsteHeadPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf location; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum

}; // Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter


class Bfd::SessionMibs : public Entity
{
    public:
        SessionMibs();
        ~SessionMibs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionMib; //type: Bfd::SessionMibs::SessionMib

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionMibs::SessionMib> > session_mib;
        
}; // Bfd::SessionMibs


class Bfd::SessionMibs::SessionMib : public Entity
{
    public:
        SessionMib();
        ~SessionMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf discriminator; //type: int32
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf sessionversion; //type: uint32
        YLeaf session_state; //type: uint32
        YLeaf trap_bitmap; //type: uint32
        YLeaf pkt_in; //type: uint64
        YLeaf pkt_out; //type: uint64
        YLeaf last_up_time_sec; //type: uint64
        YLeaf last_up_time_nsec; //type: uint32
        YLeaf last_down_time_sec; //type: uint64
        YLeaf last_down_time_nsec; //type: uint32
        YLeaf last_down_diag; //type: BfdMgmtSessionDiagEnum
        YLeaf up_counter; //type: uint32
        YLeaf last_time_cached; //type: uint64
        YLeaf interface_name; //type: string
        YLeaf int_handle; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf desired_min_tx_interval; //type: uint32
        YLeaf required_min_rx_interval; //type: uint32
        YLeaf required_min_rx_echo_interval; //type: uint32
        class DestAddress; //type: Bfd::SessionMibs::SessionMib::DestAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionMibs::SessionMib::DestAddress> dest_address;
        
}; // Bfd::SessionMibs::SessionMib


class Bfd::SessionMibs::SessionMib::DestAddress : public Entity
{
    public:
        DestAddress();
        ~DestAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::SessionMibs::SessionMib::DestAddress


class Bfd::Ipv6MultiHopSummary : public Entity
{
    public:
        Ipv6MultiHopSummary();
        ~Ipv6MultiHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionState; //type: Bfd::Ipv6MultiHopSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSummary::SessionState> session_state;
        
}; // Bfd::Ipv6MultiHopSummary


class Bfd::Ipv6MultiHopSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv6MultiHopSummary::SessionState


class Bfd::LabelSummaryNodes : public Entity
{
    public:
        LabelSummaryNodes();
        ~LabelSummaryNodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelSummaryNode; //type: Bfd::LabelSummaryNodes::LabelSummaryNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummaryNodes::LabelSummaryNode> > label_summary_node;
        
}; // Bfd::LabelSummaryNodes


class Bfd::LabelSummaryNodes::LabelSummaryNode : public Entity
{
    public:
        LabelSummaryNode();
        ~LabelSummaryNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_name; //type: string
        class SessionState; //type: Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState> session_state;
        
}; // Bfd::LabelSummaryNodes::LabelSummaryNode


class Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32

}; // Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState


class Bfd::Ipv6MultiHopSessionBriefs : public Entity
{
    public:
        Ipv6MultiHopSessionBriefs();
        ~Ipv6MultiHopSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6MultiHopSessionBrief; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief> > ipv6_multi_hop_session_brief;
        
}; // Bfd::Ipv6MultiHopSessionBriefs


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief : public Entity
{
    public:
        Ipv6MultiHopSessionBrief();
        ~Ipv6MultiHopSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::SessionBriefs : public Entity
{
    public:
        SessionBriefs();
        ~SessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionBrief; //type: Bfd::SessionBriefs::SessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief> > session_brief;
        
}; // Bfd::SessionBriefs


class Bfd::SessionBriefs::SessionBrief : public Entity
{
    public:
        SessionBrief();
        ~SessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::SessionBriefs::SessionBrief


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6SingleHopNodeLocationSummaries : public Entity
{
    public:
        Ipv6SingleHopNodeLocationSummaries();
        ~Ipv6SingleHopNodeLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6SingleHopNodeLocationSummary; //type: Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary> > ipv6_single_hop_node_location_summary;
        
}; // Bfd::Ipv6SingleHopNodeLocationSummaries


class Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary : public Entity
{
    public:
        Ipv6SingleHopNodeLocationSummary();
        ~Ipv6SingleHopNodeLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        class SessionState; //type: Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary


class Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32

}; // Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState


class Bfd::Summary : public Entity
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

        class SessionState; //type: Bfd::Summary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Summary::SessionState> session_state;
        
}; // Bfd::Summary


class Bfd::Summary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32

}; // Bfd::Summary::SessionState


class Bfd::Ipv4BfdMplsteTailNodeSummaries : public Entity
{
    public:
        Ipv4BfdMplsteTailNodeSummaries();
        ~Ipv4BfdMplsteTailNodeSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4BfdMplsteTailNodeSummary; //type: Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary> > ipv4bfd_mplste_tail_node_summary;
        
}; // Bfd::Ipv4BfdMplsteTailNodeSummaries


class Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary : public Entity
{
    public:
        Ipv4BfdMplsteTailNodeSummary();
        ~Ipv4BfdMplsteTailNodeSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_name; //type: string
        class SessionState; //type: Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState> session_state;
        
}; // Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary


class Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState


class Bfd::Ipv4SingleHopLocationSummaries : public Entity
{
    public:
        Ipv4SingleHopLocationSummaries();
        ~Ipv4SingleHopLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4SingleHopLocationSummary; //type: Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary> > ipv4_single_hop_location_summary;
        
}; // Bfd::Ipv4SingleHopLocationSummaries


class Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary : public Entity
{
    public:
        Ipv4SingleHopLocationSummary();
        ~Ipv4SingleHopLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_name; //type: string
        class SessionState; //type: Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary


class Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState


class Bfd::Ipv4BfdMplsteHeadSummaryNodes : public Entity
{
    public:
        Ipv4BfdMplsteHeadSummaryNodes();
        ~Ipv4BfdMplsteHeadSummaryNodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4BfdMplsteHeadSummaryNode; //type: Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode> > ipv4bfd_mplste_head_summary_node;
        
}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes


class Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode : public Entity
{
    public:
        Ipv4BfdMplsteHeadSummaryNode();
        ~Ipv4BfdMplsteHeadSummaryNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_name; //type: string
        class SessionState; //type: Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState> session_state;
        
}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode


class Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState


class Bfd::LabelSessionDetails : public Entity
{
    public:
        LabelSessionDetails();
        ~LabelSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelSessionDetail; //type: Bfd::LabelSessionDetails::LabelSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail> > label_session_detail;
        
}; // Bfd::LabelSessionDetails


class Bfd::LabelSessionDetails::LabelSessionDetail : public Entity
{
    public:
        LabelSessionDetail();
        ~LabelSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf incoming_label; //type: int32
        YLeaf location; //type: string
        class StatusInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation> status_information;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf to_up_state_count; //type: uint32
        YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        YLeaf remote_negotiated_interval; //type: uint32
        YLeaf latency_number; //type: uint32
        YLeaf latency_minimum; //type: uint32
        YLeaf latency_maximum; //type: uint32
        YLeaf latency_average; //type: uint32
        YLeaf node_id; //type: string
        YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum
        class ChangeTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState


class Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfdfe_ctype; //type: BfdApiFecEnum
        class Dummy; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dummy; //type: string

}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv6SingleHopSessionDetails : public Entity
{
    public:
        Ipv6SingleHopSessionDetails();
        ~Ipv6SingleHopSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6SingleHopSessionDetail; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail> > ipv6_single_hop_session_detail;
        
}; // Bfd::Ipv6SingleHopSessionDetails


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail : public Entity
{
    public:
        Ipv6SingleHopSessionDetail();
        ~Ipv6SingleHopSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        class StatusInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation> status_information;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf to_up_state_count; //type: uint32
        YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        YLeaf remote_negotiated_interval; //type: uint32
        YLeaf latency_number; //type: uint32
        YLeaf latency_minimum; //type: uint32
        YLeaf latency_maximum; //type: uint32
        YLeaf latency_average; //type: uint32
        YLeaf node_id; //type: string
        YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum
        class ChangeTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfdfe_ctype; //type: BfdApiFecEnum
        class Dummy; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dummy; //type: string

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4MultiHopCounters : public Entity
{
    public:
        Ipv4MultiHopCounters();
        ~Ipv4MultiHopCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4MultiHopPacketCounters; //type: Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters> ipv4_multi_hop_packet_counters;
        
}; // Bfd::Ipv4MultiHopCounters


class Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters : public Entity
{
    public:
        Ipv4MultiHopPacketCounters();
        ~Ipv4MultiHopPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4MultiHopPacketCounter; //type: Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter> > ipv4_multi_hop_packet_counter;
        
}; // Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters


class Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter : public Entity
{
    public:
        Ipv4MultiHopPacketCounter();
        ~Ipv4MultiHopPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum

}; // Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter


class Bfd::SessionDetails : public Entity
{
    public:
        SessionDetails();
        ~SessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionDetail; //type: Bfd::SessionDetails::SessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail> > session_detail;
        
}; // Bfd::SessionDetails


class Bfd::SessionDetails::SessionDetail : public Entity
{
    public:
        SessionDetail();
        ~SessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        class StatusInformation; //type: Bfd::SessionDetails::SessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::SessionDetails::SessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::SessionDetails::SessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation> status_information;
        
}; // Bfd::SessionDetails::SessionDetail


class Bfd::SessionDetails::SessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf to_up_state_count; //type: uint32
        YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        YLeaf remote_negotiated_interval; //type: uint32
        YLeaf latency_number; //type: uint32
        YLeaf latency_minimum; //type: uint32
        YLeaf latency_maximum; //type: uint32
        YLeaf latency_average; //type: uint32
        YLeaf node_id; //type: string
        YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::SessionDetails::SessionDetail::StatusInformation


class Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress


class Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange


class Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket


class Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::SessionDetails::SessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum
        class ChangeTime; //type: Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::SessionDetails::SessionDetail::MpDownloadState


class Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime


class Bfd::SessionDetails::SessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::SessionDetails::SessionDetail::LspPingInfo


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::SessionDetails::SessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::SessionDetails::SessionDetail::OwnerInformation


}
}

#endif /* _CISCO_IOS_XR_IP_BFD_OPER_1_ */

