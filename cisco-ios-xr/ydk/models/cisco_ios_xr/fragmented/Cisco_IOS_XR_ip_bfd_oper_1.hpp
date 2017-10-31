#ifndef _CISCO_IOS_XR_IP_BFD_OPER_1_
#define _CISCO_IOS_XR_IP_BFD_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_bfd_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime : public ydk::Entity
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

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation : public ydk::Entity
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

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation : public ydk::Entity
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
        class IpDestinationAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress
        class OwnerInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress> ip_destination_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress : public ydk::Entity
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

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
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

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv6MultiHopMultiPaths : public ydk::Entity
{
    public:
        Ipv6MultiHopMultiPaths();
        ~Ipv6MultiHopMultiPaths();

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

        class Ipv6MultiHopMultiPath; //type: Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath> > ipv6_multi_hop_multi_path;
        
}; // Bfd::Ipv6MultiHopMultiPaths


class Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath : public ydk::Entity
{
    public:
        Ipv6MultiHopMultiPath();
        ~Ipv6MultiHopMultiPath();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf incoming_label_xr; //type: uint32
        ydk::YLeaf session_interface_name; //type: string

}; // Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath


class Bfd::Ipv4BfDoMplsteHeadCounters : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadCounters();
        ~Ipv4BfDoMplsteHeadCounters();

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

        class Ipv4BfDoMplsteHeadPacketCounters; //type: Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters> ipv4bf_do_mplste_head_packet_counters;
        
}; // Bfd::Ipv4BfDoMplsteHeadCounters


class Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadPacketCounters();
        ~Ipv4BfDoMplsteHeadPacketCounters();

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

        class Ipv4BfDoMplsteHeadPacketCounter; //type: Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter> > ipv4bf_do_mplste_head_packet_counter;
        
}; // Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters


class Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadPacketCounter();
        ~Ipv4BfDoMplsteHeadPacketCounter();

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
        ydk::YLeaf location; //type: string
        ydk::YLeaf hello_transmit_count; //type: uint32
        ydk::YLeaf hello_receive_count; //type: uint32
        ydk::YLeaf echo_transmit_count; //type: uint32
        ydk::YLeaf echo_receive_count; //type: uint32
        ydk::YLeaf display_type; //type: BfdMgmtPktDisplay

}; // Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter


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


class Bfd::Ipv6MultiHopSummary : public ydk::Entity
{
    public:
        Ipv6MultiHopSummary();
        ~Ipv6MultiHopSummary();

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

        class SessionState; //type: Bfd::Ipv6MultiHopSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSummary::SessionState> session_state;
        
}; // Bfd::Ipv6MultiHopSummary


class Bfd::Ipv6MultiHopSummary::SessionState : public ydk::Entity
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

}; // Bfd::Ipv6MultiHopSummary::SessionState


class Bfd::LabelSummaryNodes : public ydk::Entity
{
    public:
        LabelSummaryNodes();
        ~LabelSummaryNodes();

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

        class LabelSummaryNode; //type: Bfd::LabelSummaryNodes::LabelSummaryNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummaryNodes::LabelSummaryNode> > label_summary_node;
        
}; // Bfd::LabelSummaryNodes


class Bfd::LabelSummaryNodes::LabelSummaryNode : public ydk::Entity
{
    public:
        LabelSummaryNode();
        ~LabelSummaryNode();

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

        ydk::YLeaf location_name; //type: string
        class SessionState; //type: Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState> session_state;
        
}; // Bfd::LabelSummaryNodes::LabelSummaryNode


class Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState : public ydk::Entity
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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState


class Bfd::Ipv6MultiHopSessionBriefs : public ydk::Entity
{
    public:
        Ipv6MultiHopSessionBriefs();
        ~Ipv6MultiHopSessionBriefs();

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

        class Ipv6MultiHopSessionBrief; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief> > ipv6_multi_hop_session_brief;
        
}; // Bfd::Ipv6MultiHopSessionBriefs


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief : public ydk::Entity
{
    public:
        Ipv6MultiHopSessionBrief();
        ~Ipv6MultiHopSessionBrief();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf session_type; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation : public ydk::Entity
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

        class AsyncIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
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

}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
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

}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


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


class Bfd::Ipv6SingleHopNodeLocationSummaries : public ydk::Entity
{
    public:
        Ipv6SingleHopNodeLocationSummaries();
        ~Ipv6SingleHopNodeLocationSummaries();

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

        class Ipv6SingleHopNodeLocationSummary; //type: Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary> > ipv6_single_hop_node_location_summary;
        
}; // Bfd::Ipv6SingleHopNodeLocationSummaries


class Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary : public ydk::Entity
{
    public:
        Ipv6SingleHopNodeLocationSummary();
        ~Ipv6SingleHopNodeLocationSummary();

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

        ydk::YLeaf location; //type: string
        class SessionState; //type: Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary


class Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState : public ydk::Entity
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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState


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


class Bfd::Ipv4BfdMplsteTailNodeSummaries : public ydk::Entity
{
    public:
        Ipv4BfdMplsteTailNodeSummaries();
        ~Ipv4BfdMplsteTailNodeSummaries();

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

        class Ipv4BfdMplsteTailNodeSummary; //type: Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary> > ipv4bfd_mplste_tail_node_summary;
        
}; // Bfd::Ipv4BfdMplsteTailNodeSummaries


class Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary : public ydk::Entity
{
    public:
        Ipv4BfdMplsteTailNodeSummary();
        ~Ipv4BfdMplsteTailNodeSummary();

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

        ydk::YLeaf location_name; //type: string
        class SessionState; //type: Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState> session_state;
        
}; // Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary


class Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState : public ydk::Entity
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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState


class Bfd::Ipv4SingleHopLocationSummaries : public ydk::Entity
{
    public:
        Ipv4SingleHopLocationSummaries();
        ~Ipv4SingleHopLocationSummaries();

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

        class Ipv4SingleHopLocationSummary; //type: Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary> > ipv4_single_hop_location_summary;
        
}; // Bfd::Ipv4SingleHopLocationSummaries


class Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary : public ydk::Entity
{
    public:
        Ipv4SingleHopLocationSummary();
        ~Ipv4SingleHopLocationSummary();

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

        ydk::YLeaf location_name; //type: string
        class SessionState; //type: Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary


class Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState : public ydk::Entity
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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState


class Bfd::Ipv4BfdMplsteHeadSummaryNodes : public ydk::Entity
{
    public:
        Ipv4BfdMplsteHeadSummaryNodes();
        ~Ipv4BfdMplsteHeadSummaryNodes();

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

        class Ipv4BfdMplsteHeadSummaryNode; //type: Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode> > ipv4bfd_mplste_head_summary_node;
        
}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes


class Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode : public ydk::Entity
{
    public:
        Ipv4BfdMplsteHeadSummaryNode();
        ~Ipv4BfdMplsteHeadSummaryNode();

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

        ydk::YLeaf location_name; //type: string
        class SessionState; //type: Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState> session_state;
        
}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode


class Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState : public ydk::Entity
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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState


class Bfd::LabelSessionDetails : public ydk::Entity
{
    public:
        LabelSessionDetails();
        ~LabelSessionDetails();

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

        class LabelSessionDetail; //type: Bfd::LabelSessionDetails::LabelSessionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail> > label_session_detail;
        
}; // Bfd::LabelSessionDetails


class Bfd::LabelSessionDetails::LabelSessionDetail : public ydk::Entity
{
    public:
        LabelSessionDetail();
        ~LabelSessionDetail();

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
        ydk::YLeaf incoming_label; //type: int32
        ydk::YLeaf location; //type: string
        class StatusInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation> status_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState> mp_download_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo> lsp_ping_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation> > owner_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation> > association_information;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation : public ydk::Entity
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
        class SourceAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket : public ydk::Entity
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
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
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
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
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

        class AsyncIntervalMultiplier; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState : public ydk::Entity
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
        class ChangeTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState


class Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo : public ydk::Entity
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
        class LspPingTxLastTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation : public ydk::Entity
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
        class IpDestinationAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress
        class OwnerInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress> ip_destination_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        
}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
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

}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv6SingleHopSessionDetails : public ydk::Entity
{
    public:
        Ipv6SingleHopSessionDetails();
        ~Ipv6SingleHopSessionDetails();

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

        class Ipv6SingleHopSessionDetail; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail> > ipv6_single_hop_session_detail;
        
}; // Bfd::Ipv6SingleHopSessionDetails


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail : public ydk::Entity
{
    public:
        Ipv6SingleHopSessionDetail();
        ~Ipv6SingleHopSessionDetail();

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
        class StatusInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation> status_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState> mp_download_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo> lsp_ping_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation> > owner_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation> > association_information;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation : public ydk::Entity
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
        class SourceAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket : public ydk::Entity
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
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
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
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
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

        class AsyncIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState : public ydk::Entity
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
        class ChangeTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo : public ydk::Entity
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
        class LspPingTxLastTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation : public ydk::Entity
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
        class IpDestinationAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress
        class OwnerInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress> ip_destination_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        
}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
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

}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4MultiHopCounters : public ydk::Entity
{
    public:
        Ipv4MultiHopCounters();
        ~Ipv4MultiHopCounters();

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

        class Ipv4MultiHopPacketCounters; //type: Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters> ipv4_multi_hop_packet_counters;
        
}; // Bfd::Ipv4MultiHopCounters


class Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters : public ydk::Entity
{
    public:
        Ipv4MultiHopPacketCounters();
        ~Ipv4MultiHopPacketCounters();

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

        class Ipv4MultiHopPacketCounter; //type: Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter> > ipv4_multi_hop_packet_counter;
        
}; // Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters


class Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter : public ydk::Entity
{
    public:
        Ipv4MultiHopPacketCounter();
        ~Ipv4MultiHopPacketCounter();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf hello_transmit_count; //type: uint32
        ydk::YLeaf hello_receive_count; //type: uint32
        ydk::YLeaf echo_transmit_count; //type: uint32
        ydk::YLeaf echo_receive_count; //type: uint32
        ydk::YLeaf display_type; //type: BfdMgmtPktDisplay

}; // Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation> status_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::MpDownloadState> mp_download_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo> lsp_ping_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::OwnerInformation> > owner_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation> > association_information;
        
}; // Bfd::SessionDetails::SessionDetail


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        
}; // Bfd::SessionDetails::SessionDetail::StatusInformation


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
        ydk::YLeaf final_; //type: int32
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
        ydk::YLeaf final_; //type: int32
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        
}; // Bfd::SessionDetails::SessionDetail::LspPingInfo


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


class Bfd::Ipv4SingleHopMultiPaths : public ydk::Entity
{
    public:
        Ipv4SingleHopMultiPaths();
        ~Ipv4SingleHopMultiPaths();

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

        class Ipv4SingleHopMultiPath; //type: Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath> > ipv4_single_hop_multi_path;
        
}; // Bfd::Ipv4SingleHopMultiPaths


class Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath : public ydk::Entity
{
    public:
        Ipv4SingleHopMultiPath();
        ~Ipv4SingleHopMultiPath();

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
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf incoming_label_xr; //type: uint32
        ydk::YLeaf session_interface_name; //type: string

}; // Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath


class Bfd::Ipv4SingleHopSessionBriefs : public ydk::Entity
{
    public:
        Ipv4SingleHopSessionBriefs();
        ~Ipv4SingleHopSessionBriefs();

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

        class Ipv4SingleHopSessionBrief; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief> > ipv4_single_hop_session_brief;
        
}; // Bfd::Ipv4SingleHopSessionBriefs


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief : public ydk::Entity
{
    public:
        Ipv4SingleHopSessionBrief();
        ~Ipv4SingleHopSessionBrief();

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
        class StatusBriefInformation; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation : public ydk::Entity
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

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
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

}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
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

}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6MultiHopCounters : public ydk::Entity
{
    public:
        Ipv6MultiHopCounters();
        ~Ipv6MultiHopCounters();

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

        class Ipv6MultiHopPacketCounters; //type: Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters> ipv6_multi_hop_packet_counters;
        
}; // Bfd::Ipv6MultiHopCounters


class Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters : public ydk::Entity
{
    public:
        Ipv6MultiHopPacketCounters();
        ~Ipv6MultiHopPacketCounters();

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

        class Ipv6MultiHopPacketCounter; //type: Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter> > ipv6_multi_hop_packet_counter;
        
}; // Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters


class Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter : public ydk::Entity
{
    public:
        Ipv6MultiHopPacketCounter();
        ~Ipv6MultiHopPacketCounter();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf hello_transmit_count; //type: uint32
        ydk::YLeaf hello_receive_count; //type: uint32
        ydk::YLeaf echo_transmit_count; //type: uint32
        ydk::YLeaf echo_receive_count; //type: uint32
        ydk::YLeaf display_type; //type: BfdMgmtPktDisplay

}; // Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter


class Bfd::Ipv6SingleHopLocationSummaries : public ydk::Entity
{
    public:
        Ipv6SingleHopLocationSummaries();
        ~Ipv6SingleHopLocationSummaries();

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

        class Ipv6SingleHopLocationSummary; //type: Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary> > ipv6_single_hop_location_summary;
        
}; // Bfd::Ipv6SingleHopLocationSummaries


class Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary : public ydk::Entity
{
    public:
        Ipv6SingleHopLocationSummary();
        ~Ipv6SingleHopLocationSummary();

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

        ydk::YLeaf location_name; //type: string
        class SessionState; //type: Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary


class Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState : public ydk::Entity
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

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState


class Bfd::LabelCounters : public ydk::Entity
{
    public:
        LabelCounters();
        ~LabelCounters();

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

        class LabelPacketCounters; //type: Bfd::LabelCounters::LabelPacketCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelCounters::LabelPacketCounters> label_packet_counters;
        
}; // Bfd::LabelCounters


class Bfd::LabelCounters::LabelPacketCounters : public ydk::Entity
{
    public:
        LabelPacketCounters();
        ~LabelPacketCounters();

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

        class LabelPacketCounter; //type: Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter> > label_packet_counter;
        
}; // Bfd::LabelCounters::LabelPacketCounters


class Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter : public ydk::Entity
{
    public:
        LabelPacketCounter();
        ~LabelPacketCounter();

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
        ydk::YLeaf location; //type: string
        ydk::YLeaf hello_transmit_count; //type: uint32
        ydk::YLeaf hello_receive_count; //type: uint32
        ydk::YLeaf echo_transmit_count; //type: uint32
        ydk::YLeaf echo_receive_count; //type: uint32
        ydk::YLeaf display_type; //type: BfdMgmtPktDisplay

}; // Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter


class Bfd::Ipv4BfDoMplsteHeadSessionDetails : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadSessionDetails();
        ~Ipv4BfDoMplsteHeadSessionDetails();

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

        class Ipv4BfDoMplsteHeadSessionDetail; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail> > ipv4bf_do_mplste_head_session_detail;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadSessionDetail();
        ~Ipv4BfDoMplsteHeadSessionDetail();

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
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf incoming_label; //type: int32
        ydk::YLeaf fe_ctype; //type: int32
        ydk::YLeaf fec_subgroup_id; //type: int32
        ydk::YLeaf feclspid; //type: int32
        ydk::YLeaf fec_tunnel_id; //type: int32
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_destination; //type: string
        ydk::YLeaf fecp2mpid; //type: int32
        ydk::YLeaf fec_subgroup_originator; //type: string
        ydk::YLeaf fec_ctype; //type: int32
        ydk::YLeaf location; //type: string
        class StatusInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation> status_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState> mp_download_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo> lsp_ping_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation> > owner_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation> > association_information;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation : public ydk::Entity
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
        class SourceAddress; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket : public ydk::Entity
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
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
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
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
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

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState : public ydk::Entity
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
        class ChangeTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo : public ydk::Entity
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
        class LspPingTxLastTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo


}
}

#endif /* _CISCO_IOS_XR_IP_BFD_OPER_1_ */

