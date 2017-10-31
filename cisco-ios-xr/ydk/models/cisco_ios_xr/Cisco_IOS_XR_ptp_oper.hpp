#ifndef _CISCO_IOS_XR_PTP_OPER_
#define _CISCO_IOS_XR_PTP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ptp_oper {

class Ptp : public ydk::Entity
{
    public:
        Ptp();
        ~Ptp();

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

        class Nodes; //type: Ptp::Nodes
        class InterfaceConfigurationErrors; //type: Ptp::InterfaceConfigurationErrors
        class InterfaceForeignMasters; //type: Ptp::InterfaceForeignMasters
        class LocalClock; //type: Ptp::LocalClock
        class InterfacePacketCounters; //type: Ptp::InterfacePacketCounters
        class AdvertisedClock; //type: Ptp::AdvertisedClock
        class LeapSeconds; //type: Ptp::LeapSeconds
        class Interfaces; //type: Ptp::Interfaces
        class Dataset; //type: Ptp::Dataset
        class GlobalConfigurationError; //type: Ptp::GlobalConfigurationError
        class Grandmaster; //type: Ptp::Grandmaster
        class InterfaceUnicastPeers; //type: Ptp::InterfaceUnicastPeers
        class Platform; //type: Ptp::Platform

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceConfigurationErrors> interface_configuration_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters> interface_foreign_masters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::LocalClock> local_clock;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfacePacketCounters> interface_packet_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::AdvertisedClock> advertised_clock;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::LeapSeconds> leap_seconds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Dataset> dataset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::GlobalConfigurationError> global_configuration_error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Grandmaster> grandmaster;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers> interface_unicast_peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform> platform;
        
}; // Ptp


class Ptp::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Ptp::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node> > node;
        
}; // Ptp::Nodes


class Ptp::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class NodeInterfaceForeignMasters; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters
        class Summary; //type: Ptp::Nodes::Node::Summary
        class NodeInterfaces; //type: Ptp::Nodes::Node::NodeInterfaces
        class NodeInterfaceUnicastPeers; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers
        class PacketCounters; //type: Ptp::Nodes::Node::PacketCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters> node_interface_foreign_masters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaces> node_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers> node_interface_unicast_peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::PacketCounters> packet_counters;
        
}; // Ptp::Nodes::Node


class Ptp::Nodes::Node::NodeInterfaceForeignMasters : public ydk::Entity
{
    public:
        NodeInterfaceForeignMasters();
        ~NodeInterfaceForeignMasters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeInterfaceForeignMaster; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster> > node_interface_foreign_master;
        
}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster : public ydk::Entity
{
    public:
        NodeInterfaceForeignMaster();
        ~NodeInterfaceForeignMaster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf port_number; //type: uint16
        class ForeignClock; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock> > foreign_clock;
        
}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock : public ydk::Entity
{
    public:
        ForeignClock();
        ~ForeignClock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_qualified; //type: boolean
        ydk::YLeaf is_grandmaster; //type: boolean
        ydk::YLeaf communication_model; //type: PtpBagCommunicationModel
        ydk::YLeaf is_known; //type: boolean
        ydk::YLeaf time_known_for; //type: uint32
        ydk::YLeaf foreign_domain; //type: uint8
        ydk::YLeaf configured_priority; //type: uint8
        ydk::YLeaf configured_clock_class; //type: uint8
        ydk::YLeaf delay_asymmetry; //type: int32
        ydk::YLeaf ptsf_loss_announce; //type: boolean
        ydk::YLeaf ptsf_loss_sync; //type: boolean
        class ForeignClock_; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_
        class Address; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address
        class AnnounceGrant; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant
        class SyncGrant; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant
        class DelayResponseGrant; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_> foreign_clock;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant> announce_grant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant> sync_grant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant> delay_response_grant;
        
}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_ : public ydk::Entity
{
    public:
        ForeignClock_();
        ~ForeignClock_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf priority1; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        ydk::YLeaf class_; //type: uint8
        ydk::YLeaf accuracy; //type: uint8
        ydk::YLeaf offset_log_variance; //type: uint16
        ydk::YLeaf steps_removed; //type: uint16
        ydk::YLeaf time_source; //type: PtpBagClockTimeSource
        ydk::YLeaf frequency_traceable; //type: boolean
        ydk::YLeaf time_traceable; //type: boolean
        ydk::YLeaf timescale; //type: PtpBagClockTimescale
        ydk::YLeaf leap_seconds; //type: PtpBagClockLeapSeconds
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf configured_clock_class; //type: uint8
        ydk::YLeaf configured_priority; //type: uint8
        class UtcOffset; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset
        class Receiver; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver
        class Sender; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset> utc_offset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver> receiver;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender> sender;
        
}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset : public ydk::Entity
{
    public:
        UtcOffset();
        ~UtcOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_offset; //type: int16
        ydk::YLeaf offset_valid; //type: boolean

}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver : public ydk::Entity
{
    public:
        Receiver();
        ~Receiver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender : public ydk::Entity
{
    public:
        Sender();
        ~Sender();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::ForeignClock_::Sender


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf address_unknown; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        class MacAddress; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress
        class Ipv6Address; //type: Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address> ipv6_address;
        
}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::MacAddress


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::Address::Ipv6Address


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant : public ydk::Entity
{
    public:
        AnnounceGrant();
        ~AnnounceGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::AnnounceGrant


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant : public ydk::Entity
{
    public:
        SyncGrant();
        ~SyncGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::SyncGrant


class Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant : public ydk::Entity
{
    public:
        DelayResponseGrant();
        ~DelayResponseGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::Nodes::Node::NodeInterfaceForeignMasters::NodeInterfaceForeignMaster::ForeignClock::DelayResponseGrant


class Ptp::Nodes::Node::Summary : public ydk::Entity
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

        ydk::YLeaf port_state_init_count; //type: uint32
        ydk::YLeaf port_state_listening_count; //type: uint32
        ydk::YLeaf port_state_passive_count; //type: uint32
        ydk::YLeaf port_state_pre_master_count; //type: uint32
        ydk::YLeaf port_state_master_count; //type: uint32
        ydk::YLeaf port_state_slave_count; //type: uint32
        ydk::YLeaf port_state_uncalibrated_count; //type: uint32
        ydk::YLeaf port_state_faulty_count; //type: uint32
        ydk::YLeaf total_interfaces; //type: uint32
        ydk::YLeaf total_interfaces_valid_port_num; //type: uint32

}; // Ptp::Nodes::Node::Summary


class Ptp::Nodes::Node::NodeInterfaces : public ydk::Entity
{
    public:
        NodeInterfaces();
        ~NodeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeInterface; //type: Ptp::Nodes::Node::NodeInterfaces::NodeInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaces::NodeInterface> > node_interface;
        
}; // Ptp::Nodes::Node::NodeInterfaces


class Ptp::Nodes::Node::NodeInterfaces::NodeInterface : public ydk::Entity
{
    public:
        NodeInterface();
        ~NodeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf port_state; //type: PtpBagPortState
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf line_state; //type: uint32
        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_step; //type: boolean
        ydk::YLeaf communication_model; //type: PtpBagCommunicationModel
        ydk::YLeaf log_sync_interval; //type: int32
        ydk::YLeaf log_announce_interval; //type: int32
        ydk::YLeaf announce_timeout; //type: uint32
        ydk::YLeaf log_min_delay_request_interval; //type: int32
        ydk::YLeaf configured_port_state; //type: PtpBagRestrictPortState
        ydk::YLeaf supports_one_step; //type: boolean
        ydk::YLeaf supports_two_step; //type: boolean
        ydk::YLeaf supports_ethernet; //type: boolean
        ydk::YLeaf supports_multicast; //type: boolean
        ydk::YLeaf supports_ipv6; //type: boolean
        ydk::YLeaf supports_slave; //type: boolean
        ydk::YLeaf supports_source_ip; //type: boolean
        ydk::YLeaf max_sync_rate; //type: uint8
        ydk::YLeaf event_cos; //type: uint32
        ydk::YLeaf general_cos; //type: uint32
        ydk::YLeaf event_dscp; //type: uint32
        ydk::YLeaf general_dscp; //type: uint32
        ydk::YLeaf unicast_peers; //type: uint32
        ydk::YLeaf local_priority; //type: uint8
        ydk::YLeaf signal_fail; //type: boolean
        class MacAddress; //type: Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress
        class MasterTable; //type: Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress> mac_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable> > master_table;
        
}; // Ptp::Nodes::Node::NodeInterfaces::NodeInterface


class Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MacAddress


class Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable : public ydk::Entity
{
    public:
        MasterTable();
        ~MasterTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf communication_model; //type: PtpBagCommunicationModel
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf known; //type: boolean
        ydk::YLeaf qualified; //type: boolean
        ydk::YLeaf is_grandmaster; //type: boolean
        ydk::YLeaf ptsf_loss_announce; //type: uint8
        ydk::YLeaf ptsf_loss_sync; //type: uint8
        ydk::YLeaf is_nonnegotiated; //type: boolean
        class Address; //type: Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address> address;
        
}; // Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable


class Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf address_unknown; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        class MacAddress; //type: Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress
        class Ipv6Address; //type: Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address> ipv6_address;
        
}; // Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address


class Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::MacAddress


class Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ptp::Nodes::Node::NodeInterfaces::NodeInterface::MasterTable::Address::Ipv6Address


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers : public ydk::Entity
{
    public:
        NodeInterfaceUnicastPeers();
        ~NodeInterfaceUnicastPeers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeInterfaceUnicastPeer; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer> > node_interface_unicast_peer;
        
}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer : public ydk::Entity
{
    public:
        NodeInterfaceUnicastPeer();
        ~NodeInterfaceUnicastPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf port_number; //type: uint16
        class Peers; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers> > peers;
        
}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address
        class AnnounceGrant; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant
        class SyncGrant; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant
        class DelayResponseGrant; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant> announce_grant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant> sync_grant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant> delay_response_grant;
        
}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf address_unknown; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        class MacAddress; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress
        class Ipv6Address; //type: Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address> ipv6_address;
        
}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::MacAddress


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::Address::Ipv6Address


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant : public ydk::Entity
{
    public:
        AnnounceGrant();
        ~AnnounceGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::AnnounceGrant


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant : public ydk::Entity
{
    public:
        SyncGrant();
        ~SyncGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::SyncGrant


class Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant : public ydk::Entity
{
    public:
        DelayResponseGrant();
        ~DelayResponseGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::Nodes::Node::NodeInterfaceUnicastPeers::NodeInterfaceUnicastPeer::Peers::DelayResponseGrant


class Ptp::Nodes::Node::PacketCounters : public ydk::Entity
{
    public:
        PacketCounters();
        ~PacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counters; //type: Ptp::Nodes::Node::PacketCounters::Counters
        class DropReasons; //type: Ptp::Nodes::Node::PacketCounters::DropReasons

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::PacketCounters::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Nodes::Node::PacketCounters::DropReasons> drop_reasons;
        
}; // Ptp::Nodes::Node::PacketCounters


class Ptp::Nodes::Node::PacketCounters::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announce_sent; //type: uint32
        ydk::YLeaf announce_received; //type: uint32
        ydk::YLeaf announce_dropped; //type: uint32
        ydk::YLeaf sync_sent; //type: uint32
        ydk::YLeaf sync_received; //type: uint32
        ydk::YLeaf sync_dropped; //type: uint32
        ydk::YLeaf follow_up_sent; //type: uint32
        ydk::YLeaf follow_up_received; //type: uint32
        ydk::YLeaf follow_up_dropped; //type: uint32
        ydk::YLeaf delay_request_sent; //type: uint32
        ydk::YLeaf delay_request_received; //type: uint32
        ydk::YLeaf delay_request_dropped; //type: uint32
        ydk::YLeaf delay_response_sent; //type: uint32
        ydk::YLeaf delay_response_received; //type: uint32
        ydk::YLeaf delay_response_dropped; //type: uint32
        ydk::YLeaf peer_delay_request_sent; //type: uint32
        ydk::YLeaf peer_delay_request_received; //type: uint32
        ydk::YLeaf peer_delay_request_dropped; //type: uint32
        ydk::YLeaf peer_delay_response_sent; //type: uint32
        ydk::YLeaf peer_delay_response_received; //type: uint32
        ydk::YLeaf peer_delay_response_dropped; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_sent; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_received; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_dropped; //type: uint32
        ydk::YLeaf signaling_sent; //type: uint32
        ydk::YLeaf signaling_received; //type: uint32
        ydk::YLeaf signaling_dropped; //type: uint32
        ydk::YLeaf management_sent; //type: uint32
        ydk::YLeaf management_received; //type: uint32
        ydk::YLeaf management_dropped; //type: uint32
        ydk::YLeaf other_packets_sent; //type: uint32
        ydk::YLeaf other_packets_received; //type: uint32
        ydk::YLeaf other_packets_dropped; //type: uint32
        ydk::YLeaf total_packets_sent; //type: uint32
        ydk::YLeaf total_packets_received; //type: uint32
        ydk::YLeaf total_packets_dropped; //type: uint32

}; // Ptp::Nodes::Node::PacketCounters::Counters


class Ptp::Nodes::Node::PacketCounters::DropReasons : public ydk::Entity
{
    public:
        DropReasons();
        ~DropReasons();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf not_ready; //type: uint32
        ydk::YLeaf wrong_domain; //type: uint32
        ydk::YLeaf too_short; //type: uint32
        ydk::YLeaf looped_same_port; //type: uint32
        ydk::YLeaf looped_higher_port; //type: uint32
        ydk::YLeaf looped_lower_port; //type: uint32
        ydk::YLeaf no_timestamp; //type: uint32
        ydk::YLeaf zero_timestamp; //type: uint32
        ydk::YLeaf invalid_tl_vs; //type: uint32
        ydk::YLeaf not_for_us; //type: uint32
        ydk::YLeaf not_listening; //type: uint32
        ydk::YLeaf wrong_master; //type: uint32
        ydk::YLeaf unknown_master; //type: uint32
        ydk::YLeaf not_master; //type: uint32
        ydk::YLeaf not_slave; //type: uint32
        ydk::YLeaf not_granted; //type: uint32
        ydk::YLeaf too_slow; //type: uint32
        ydk::YLeaf invalid_packet; //type: uint32
        ydk::YLeaf wrong_sequence_id; //type: uint32
        ydk::YLeaf no_offload_session; //type: uint32
        ydk::YLeaf not_supported; //type: uint32
        ydk::YLeaf min_clock_class; //type: uint32
        ydk::YLeaf g8275_1_incompatible; //type: uint32
        ydk::YLeaf g8275_2_incompatible; //type: uint32

}; // Ptp::Nodes::Node::PacketCounters::DropReasons


class Ptp::InterfaceConfigurationErrors : public ydk::Entity
{
    public:
        InterfaceConfigurationErrors();
        ~InterfaceConfigurationErrors();

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

        class InterfaceConfigurationError; //type: Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError> > interface_configuration_error;
        
}; // Ptp::InterfaceConfigurationErrors


class Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError : public ydk::Entity
{
    public:
        InterfaceConfigurationError();
        ~InterfaceConfigurationError();

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
        ydk::YLeaf configuration_profile_name; //type: string
        ydk::YLeaf clock_profile; //type: PtpBagProfile
        ydk::YLeaf telecom_clock_type; //type: PtpBagTelecomClock
        ydk::YLeaf restrict_port_state; //type: PtpBagRestrictPortState
        class ConfigurationErrors; //type: Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors> configuration_errors;
        
}; // Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError


class Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors : public ydk::Entity
{
    public:
        ConfigurationErrors();
        ~ConfigurationErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_ptp; //type: boolean
        ydk::YLeaf ethernet_transport; //type: boolean
        ydk::YLeaf one_step; //type: boolean
        ydk::YLeaf slave; //type: boolean
        ydk::YLeaf ipv6; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf profile_not_global; //type: boolean
        ydk::YLeaf local_priority; //type: boolean
        ydk::YLeaf profile_ethernet; //type: boolean
        ydk::YLeaf profile_ipv4; //type: boolean
        ydk::YLeaf profile_ipv6; //type: boolean
        ydk::YLeaf profile_unicast; //type: boolean
        ydk::YLeaf profile_multicast; //type: boolean
        ydk::YLeaf profile_mixed; //type: boolean
        ydk::YLeaf profile_master_unicast; //type: boolean
        ydk::YLeaf profile_master_multicast; //type: boolean
        ydk::YLeaf profile_master_mixed; //type: boolean
        ydk::YLeaf target_address_ipv4; //type: boolean
        ydk::YLeaf target_address_ipv6; //type: boolean
        ydk::YLeaf profile_port_state; //type: boolean
        ydk::YLeaf profile_announce_interval; //type: boolean
        ydk::YLeaf profile_sync_interval; //type: boolean
        ydk::YLeaf profile_delay_req_interval; //type: boolean
        ydk::YLeaf profile_sync_timeout; //type: boolean
        ydk::YLeaf profile_delay_resp_timeout; //type: boolean
        ydk::YLeaf invalid_grant_reduction; //type: boolean

}; // Ptp::InterfaceConfigurationErrors::InterfaceConfigurationError::ConfigurationErrors


class Ptp::InterfaceForeignMasters : public ydk::Entity
{
    public:
        InterfaceForeignMasters();
        ~InterfaceForeignMasters();

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

        class InterfaceForeignMaster; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster> > interface_foreign_master;
        
}; // Ptp::InterfaceForeignMasters


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster : public ydk::Entity
{
    public:
        InterfaceForeignMaster();
        ~InterfaceForeignMaster();

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
        ydk::YLeaf port_number; //type: uint16
        class ForeignClock; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock> > foreign_clock;
        
}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock : public ydk::Entity
{
    public:
        ForeignClock();
        ~ForeignClock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_qualified; //type: boolean
        ydk::YLeaf is_grandmaster; //type: boolean
        ydk::YLeaf communication_model; //type: PtpBagCommunicationModel
        ydk::YLeaf is_known; //type: boolean
        ydk::YLeaf time_known_for; //type: uint32
        ydk::YLeaf foreign_domain; //type: uint8
        ydk::YLeaf configured_priority; //type: uint8
        ydk::YLeaf configured_clock_class; //type: uint8
        ydk::YLeaf delay_asymmetry; //type: int32
        ydk::YLeaf ptsf_loss_announce; //type: boolean
        ydk::YLeaf ptsf_loss_sync; //type: boolean
        class ForeignClock_; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_
        class Address; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address
        class AnnounceGrant; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant
        class SyncGrant; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant
        class DelayResponseGrant; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_> foreign_clock;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant> announce_grant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant> sync_grant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant> delay_response_grant;
        
}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_ : public ydk::Entity
{
    public:
        ForeignClock_();
        ~ForeignClock_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf priority1; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        ydk::YLeaf class_; //type: uint8
        ydk::YLeaf accuracy; //type: uint8
        ydk::YLeaf offset_log_variance; //type: uint16
        ydk::YLeaf steps_removed; //type: uint16
        ydk::YLeaf time_source; //type: PtpBagClockTimeSource
        ydk::YLeaf frequency_traceable; //type: boolean
        ydk::YLeaf time_traceable; //type: boolean
        ydk::YLeaf timescale; //type: PtpBagClockTimescale
        ydk::YLeaf leap_seconds; //type: PtpBagClockLeapSeconds
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf configured_clock_class; //type: uint8
        ydk::YLeaf configured_priority; //type: uint8
        class UtcOffset; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset
        class Receiver; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver
        class Sender; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset> utc_offset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver> receiver;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender> sender;
        
}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset : public ydk::Entity
{
    public:
        UtcOffset();
        ~UtcOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_offset; //type: int16
        ydk::YLeaf offset_valid; //type: boolean

}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::UtcOffset


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver : public ydk::Entity
{
    public:
        Receiver();
        ~Receiver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Receiver


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender : public ydk::Entity
{
    public:
        Sender();
        ~Sender();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::ForeignClock_::Sender


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf address_unknown; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        class MacAddress; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress
        class Ipv6Address; //type: Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address> ipv6_address;
        
}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::MacAddress


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::Address::Ipv6Address


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant : public ydk::Entity
{
    public:
        AnnounceGrant();
        ~AnnounceGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::AnnounceGrant


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant : public ydk::Entity
{
    public:
        SyncGrant();
        ~SyncGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::SyncGrant


class Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant : public ydk::Entity
{
    public:
        DelayResponseGrant();
        ~DelayResponseGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::InterfaceForeignMasters::InterfaceForeignMaster::ForeignClock::DelayResponseGrant


class Ptp::LocalClock : public ydk::Entity
{
    public:
        LocalClock();
        ~LocalClock();

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

        ydk::YLeaf domain; //type: uint8
        class ClockProperties; //type: Ptp::LocalClock::ClockProperties

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::LocalClock::ClockProperties> clock_properties;
        
}; // Ptp::LocalClock


class Ptp::LocalClock::ClockProperties : public ydk::Entity
{
    public:
        ClockProperties();
        ~ClockProperties();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf priority1; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        ydk::YLeaf class_; //type: uint8
        ydk::YLeaf accuracy; //type: uint8
        ydk::YLeaf offset_log_variance; //type: uint16
        ydk::YLeaf steps_removed; //type: uint16
        ydk::YLeaf time_source; //type: PtpBagClockTimeSource
        ydk::YLeaf frequency_traceable; //type: boolean
        ydk::YLeaf time_traceable; //type: boolean
        ydk::YLeaf timescale; //type: PtpBagClockTimescale
        ydk::YLeaf leap_seconds; //type: PtpBagClockLeapSeconds
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf configured_clock_class; //type: uint8
        ydk::YLeaf configured_priority; //type: uint8
        class UtcOffset; //type: Ptp::LocalClock::ClockProperties::UtcOffset
        class Receiver; //type: Ptp::LocalClock::ClockProperties::Receiver
        class Sender; //type: Ptp::LocalClock::ClockProperties::Sender

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::LocalClock::ClockProperties::UtcOffset> utc_offset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::LocalClock::ClockProperties::Receiver> receiver;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::LocalClock::ClockProperties::Sender> sender;
        
}; // Ptp::LocalClock::ClockProperties


class Ptp::LocalClock::ClockProperties::UtcOffset : public ydk::Entity
{
    public:
        UtcOffset();
        ~UtcOffset();

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

        ydk::YLeaf current_offset; //type: int16
        ydk::YLeaf offset_valid; //type: boolean

}; // Ptp::LocalClock::ClockProperties::UtcOffset


class Ptp::LocalClock::ClockProperties::Receiver : public ydk::Entity
{
    public:
        Receiver();
        ~Receiver();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::LocalClock::ClockProperties::Receiver


class Ptp::LocalClock::ClockProperties::Sender : public ydk::Entity
{
    public:
        Sender();
        ~Sender();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::LocalClock::ClockProperties::Sender


class Ptp::InterfacePacketCounters : public ydk::Entity
{
    public:
        InterfacePacketCounters();
        ~InterfacePacketCounters();

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

        class InterfacePacketCounter; //type: Ptp::InterfacePacketCounters::InterfacePacketCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfacePacketCounters::InterfacePacketCounter> > interface_packet_counter;
        
}; // Ptp::InterfacePacketCounters


class Ptp::InterfacePacketCounters::InterfacePacketCounter : public ydk::Entity
{
    public:
        InterfacePacketCounter();
        ~InterfacePacketCounter();

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
        class Counters; //type: Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters
        class PeerCounter; //type: Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters> counters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter> > peer_counter;
        
}; // Ptp::InterfacePacketCounters::InterfacePacketCounter


class Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announce_sent; //type: uint32
        ydk::YLeaf announce_received; //type: uint32
        ydk::YLeaf announce_dropped; //type: uint32
        ydk::YLeaf sync_sent; //type: uint32
        ydk::YLeaf sync_received; //type: uint32
        ydk::YLeaf sync_dropped; //type: uint32
        ydk::YLeaf follow_up_sent; //type: uint32
        ydk::YLeaf follow_up_received; //type: uint32
        ydk::YLeaf follow_up_dropped; //type: uint32
        ydk::YLeaf delay_request_sent; //type: uint32
        ydk::YLeaf delay_request_received; //type: uint32
        ydk::YLeaf delay_request_dropped; //type: uint32
        ydk::YLeaf delay_response_sent; //type: uint32
        ydk::YLeaf delay_response_received; //type: uint32
        ydk::YLeaf delay_response_dropped; //type: uint32
        ydk::YLeaf peer_delay_request_sent; //type: uint32
        ydk::YLeaf peer_delay_request_received; //type: uint32
        ydk::YLeaf peer_delay_request_dropped; //type: uint32
        ydk::YLeaf peer_delay_response_sent; //type: uint32
        ydk::YLeaf peer_delay_response_received; //type: uint32
        ydk::YLeaf peer_delay_response_dropped; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_sent; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_received; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_dropped; //type: uint32
        ydk::YLeaf signaling_sent; //type: uint32
        ydk::YLeaf signaling_received; //type: uint32
        ydk::YLeaf signaling_dropped; //type: uint32
        ydk::YLeaf management_sent; //type: uint32
        ydk::YLeaf management_received; //type: uint32
        ydk::YLeaf management_dropped; //type: uint32
        ydk::YLeaf other_packets_sent; //type: uint32
        ydk::YLeaf other_packets_received; //type: uint32
        ydk::YLeaf other_packets_dropped; //type: uint32
        ydk::YLeaf total_packets_sent; //type: uint32
        ydk::YLeaf total_packets_received; //type: uint32
        ydk::YLeaf total_packets_dropped; //type: uint32

}; // Ptp::InterfacePacketCounters::InterfacePacketCounter::Counters


class Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter : public ydk::Entity
{
    public:
        PeerCounter();
        ~PeerCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address
        class Counters; //type: Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters> counters;
        
}; // Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter


class Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf address_unknown; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        class MacAddress; //type: Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress
        class Ipv6Address; //type: Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address> ipv6_address;
        
}; // Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address


class Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::MacAddress


class Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Address::Ipv6Address


class Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf announce_sent; //type: uint32
        ydk::YLeaf announce_received; //type: uint32
        ydk::YLeaf announce_dropped; //type: uint32
        ydk::YLeaf sync_sent; //type: uint32
        ydk::YLeaf sync_received; //type: uint32
        ydk::YLeaf sync_dropped; //type: uint32
        ydk::YLeaf follow_up_sent; //type: uint32
        ydk::YLeaf follow_up_received; //type: uint32
        ydk::YLeaf follow_up_dropped; //type: uint32
        ydk::YLeaf delay_request_sent; //type: uint32
        ydk::YLeaf delay_request_received; //type: uint32
        ydk::YLeaf delay_request_dropped; //type: uint32
        ydk::YLeaf delay_response_sent; //type: uint32
        ydk::YLeaf delay_response_received; //type: uint32
        ydk::YLeaf delay_response_dropped; //type: uint32
        ydk::YLeaf peer_delay_request_sent; //type: uint32
        ydk::YLeaf peer_delay_request_received; //type: uint32
        ydk::YLeaf peer_delay_request_dropped; //type: uint32
        ydk::YLeaf peer_delay_response_sent; //type: uint32
        ydk::YLeaf peer_delay_response_received; //type: uint32
        ydk::YLeaf peer_delay_response_dropped; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_sent; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_received; //type: uint32
        ydk::YLeaf peer_delay_response_follow_up_dropped; //type: uint32
        ydk::YLeaf signaling_sent; //type: uint32
        ydk::YLeaf signaling_received; //type: uint32
        ydk::YLeaf signaling_dropped; //type: uint32
        ydk::YLeaf management_sent; //type: uint32
        ydk::YLeaf management_received; //type: uint32
        ydk::YLeaf management_dropped; //type: uint32
        ydk::YLeaf other_packets_sent; //type: uint32
        ydk::YLeaf other_packets_received; //type: uint32
        ydk::YLeaf other_packets_dropped; //type: uint32
        ydk::YLeaf total_packets_sent; //type: uint32
        ydk::YLeaf total_packets_received; //type: uint32
        ydk::YLeaf total_packets_dropped; //type: uint32

}; // Ptp::InterfacePacketCounters::InterfacePacketCounter::PeerCounter::Counters


class Ptp::AdvertisedClock : public ydk::Entity
{
    public:
        AdvertisedClock();
        ~AdvertisedClock();

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

        ydk::YLeaf domain; //type: uint8
        ydk::YLeaf time_source_configured; //type: boolean
        ydk::YLeaf received_time_source; //type: PtpBagClockTimeSource
        ydk::YLeaf timescale_configured; //type: boolean
        ydk::YLeaf received_timescale; //type: PtpBagClockTimescale
        class ClockProperties; //type: Ptp::AdvertisedClock::ClockProperties

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::AdvertisedClock::ClockProperties> clock_properties;
        
}; // Ptp::AdvertisedClock


class Ptp::AdvertisedClock::ClockProperties : public ydk::Entity
{
    public:
        ClockProperties();
        ~ClockProperties();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf priority1; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        ydk::YLeaf class_; //type: uint8
        ydk::YLeaf accuracy; //type: uint8
        ydk::YLeaf offset_log_variance; //type: uint16
        ydk::YLeaf steps_removed; //type: uint16
        ydk::YLeaf time_source; //type: PtpBagClockTimeSource
        ydk::YLeaf frequency_traceable; //type: boolean
        ydk::YLeaf time_traceable; //type: boolean
        ydk::YLeaf timescale; //type: PtpBagClockTimescale
        ydk::YLeaf leap_seconds; //type: PtpBagClockLeapSeconds
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf configured_clock_class; //type: uint8
        ydk::YLeaf configured_priority; //type: uint8
        class UtcOffset; //type: Ptp::AdvertisedClock::ClockProperties::UtcOffset
        class Receiver; //type: Ptp::AdvertisedClock::ClockProperties::Receiver
        class Sender; //type: Ptp::AdvertisedClock::ClockProperties::Sender

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::AdvertisedClock::ClockProperties::UtcOffset> utc_offset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::AdvertisedClock::ClockProperties::Receiver> receiver;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::AdvertisedClock::ClockProperties::Sender> sender;
        
}; // Ptp::AdvertisedClock::ClockProperties


class Ptp::AdvertisedClock::ClockProperties::UtcOffset : public ydk::Entity
{
    public:
        UtcOffset();
        ~UtcOffset();

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

        ydk::YLeaf current_offset; //type: int16
        ydk::YLeaf offset_valid; //type: boolean

}; // Ptp::AdvertisedClock::ClockProperties::UtcOffset


class Ptp::AdvertisedClock::ClockProperties::Receiver : public ydk::Entity
{
    public:
        Receiver();
        ~Receiver();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::AdvertisedClock::ClockProperties::Receiver


class Ptp::AdvertisedClock::ClockProperties::Sender : public ydk::Entity
{
    public:
        Sender();
        ~Sender();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::AdvertisedClock::ClockProperties::Sender


class Ptp::LeapSeconds : public ydk::Entity
{
    public:
        LeapSeconds();
        ~LeapSeconds();

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

        ydk::YLeaf current_offset; //type: int16
        ydk::YLeaf offset_valid; //type: boolean
        ydk::YLeaf source_file; //type: string
        ydk::YLeaf source_expiry_date; //type: uint32
        ydk::YLeaf polling_frequency; //type: uint32
        class LeapSecond; //type: Ptp::LeapSeconds::LeapSecond

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::LeapSeconds::LeapSecond> > leap_second;
        
}; // Ptp::LeapSeconds


class Ptp::LeapSeconds::LeapSecond : public ydk::Entity
{
    public:
        LeapSecond();
        ~LeapSecond();

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

        ydk::YLeaf offset; //type: int16
        ydk::YLeaf offset_start_date; //type: uint64
        ydk::YLeaf offset_applied; //type: boolean

}; // Ptp::LeapSeconds::LeapSecond


class Ptp::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Ptp::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Interfaces::Interface> > interface;
        
}; // Ptp::Interfaces


class Ptp::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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
        ydk::YLeaf port_state; //type: PtpBagPortState
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf line_state; //type: uint32
        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_step; //type: boolean
        ydk::YLeaf communication_model; //type: PtpBagCommunicationModel
        ydk::YLeaf log_sync_interval; //type: int32
        ydk::YLeaf log_announce_interval; //type: int32
        ydk::YLeaf announce_timeout; //type: uint32
        ydk::YLeaf log_min_delay_request_interval; //type: int32
        ydk::YLeaf configured_port_state; //type: PtpBagRestrictPortState
        ydk::YLeaf supports_one_step; //type: boolean
        ydk::YLeaf supports_two_step; //type: boolean
        ydk::YLeaf supports_ethernet; //type: boolean
        ydk::YLeaf supports_multicast; //type: boolean
        ydk::YLeaf supports_ipv6; //type: boolean
        ydk::YLeaf supports_slave; //type: boolean
        ydk::YLeaf supports_source_ip; //type: boolean
        ydk::YLeaf max_sync_rate; //type: uint8
        ydk::YLeaf event_cos; //type: uint32
        ydk::YLeaf general_cos; //type: uint32
        ydk::YLeaf event_dscp; //type: uint32
        ydk::YLeaf general_dscp; //type: uint32
        ydk::YLeaf unicast_peers; //type: uint32
        ydk::YLeaf local_priority; //type: uint8
        ydk::YLeaf signal_fail; //type: boolean
        class MacAddress; //type: Ptp::Interfaces::Interface::MacAddress
        class MasterTable; //type: Ptp::Interfaces::Interface::MasterTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Interfaces::Interface::MacAddress> mac_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Interfaces::Interface::MasterTable> > master_table;
        
}; // Ptp::Interfaces::Interface


class Ptp::Interfaces::Interface::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::Interfaces::Interface::MacAddress


class Ptp::Interfaces::Interface::MasterTable : public ydk::Entity
{
    public:
        MasterTable();
        ~MasterTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf communication_model; //type: PtpBagCommunicationModel
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf known; //type: boolean
        ydk::YLeaf qualified; //type: boolean
        ydk::YLeaf is_grandmaster; //type: boolean
        ydk::YLeaf ptsf_loss_announce; //type: uint8
        ydk::YLeaf ptsf_loss_sync; //type: uint8
        ydk::YLeaf is_nonnegotiated; //type: boolean
        class Address; //type: Ptp::Interfaces::Interface::MasterTable::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Interfaces::Interface::MasterTable::Address> address;
        
}; // Ptp::Interfaces::Interface::MasterTable


class Ptp::Interfaces::Interface::MasterTable::Address : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf address_unknown; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        class MacAddress; //type: Ptp::Interfaces::Interface::MasterTable::Address::MacAddress
        class Ipv6Address; //type: Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Interfaces::Interface::MasterTable::Address::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address> ipv6_address;
        
}; // Ptp::Interfaces::Interface::MasterTable::Address


class Ptp::Interfaces::Interface::MasterTable::Address::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::Interfaces::Interface::MasterTable::Address::MacAddress


class Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ptp::Interfaces::Interface::MasterTable::Address::Ipv6Address


class Ptp::Dataset : public ydk::Entity
{
    public:
        Dataset();
        ~Dataset();

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

        class DefaultDs; //type: Ptp::Dataset::DefaultDs
        class CurrentDs; //type: Ptp::Dataset::CurrentDs
        class ParentDs; //type: Ptp::Dataset::ParentDs
        class PortDses; //type: Ptp::Dataset::PortDses
        class TimePropertiesDs; //type: Ptp::Dataset::TimePropertiesDs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Dataset::DefaultDs> default_ds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Dataset::CurrentDs> current_ds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Dataset::ParentDs> parent_ds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Dataset::PortDses> port_dses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Dataset::TimePropertiesDs> time_properties_ds;
        
}; // Ptp::Dataset


class Ptp::Dataset::DefaultDs : public ydk::Entity
{
    public:
        DefaultDs();
        ~DefaultDs();

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

        ydk::YLeaf two_step_flag; //type: boolean
        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf number_ports; //type: uint32
        ydk::YLeaf clock_class; //type: uint8
        ydk::YLeaf clock_accuracy; //type: uint8
        ydk::YLeaf oslv; //type: uint16
        ydk::YLeaf priority1; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        ydk::YLeaf domain_number; //type: uint8
        ydk::YLeaf slave_only; //type: boolean
        ydk::YLeaf local_priority; //type: uint32
        ydk::YLeaf signal_fail; //type: boolean

}; // Ptp::Dataset::DefaultDs


class Ptp::Dataset::CurrentDs : public ydk::Entity
{
    public:
        CurrentDs();
        ~CurrentDs();

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

        ydk::YLeaf steps_removed; //type: uint16
        ydk::YLeaf offset_from_master; //type: int64
        ydk::YLeaf mean_path_delay; //type: int64

}; // Ptp::Dataset::CurrentDs


class Ptp::Dataset::ParentDs : public ydk::Entity
{
    public:
        ParentDs();
        ~ParentDs();

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

        ydk::YLeaf parent_clock_id; //type: uint64
        ydk::YLeaf parent_port_number; //type: uint16
        ydk::YLeaf parent_stats; //type: boolean
        ydk::YLeaf observed_parent_oslv; //type: uint16
        ydk::YLeaf observed_parent_clock_phase_change_rate; //type: uint32
        ydk::YLeaf gm_clock_id; //type: uint64
        ydk::YLeaf gm_clock_class; //type: uint8
        ydk::YLeaf gm_clock_accuracy; //type: uint8
        ydk::YLeaf gmoslv; //type: uint16
        ydk::YLeaf gm_priority1; //type: uint8
        ydk::YLeaf gm_priority2; //type: uint8

}; // Ptp::Dataset::ParentDs


class Ptp::Dataset::PortDses : public ydk::Entity
{
    public:
        PortDses();
        ~PortDses();

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

        class PortDs; //type: Ptp::Dataset::PortDses::PortDs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Dataset::PortDses::PortDs> > port_ds;
        
}; // Ptp::Dataset::PortDses


class Ptp::Dataset::PortDses::PortDs : public ydk::Entity
{
    public:
        PortDs();
        ~PortDs();

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
        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf port_state; //type: PtpBagPortState
        ydk::YLeaf log_min_delay_req_interval; //type: int16
        ydk::YLeaf peer_mean_path_delay; //type: int64
        ydk::YLeaf log_announce_interval; //type: int16
        ydk::YLeaf annoucne_receipt_timeout; //type: uint32
        ydk::YLeaf log_sync_interval; //type: int16
        ydk::YLeaf delay_mechanism; //type: PtpBagDelayMechanism
        ydk::YLeaf log_min_p_delay_req_interval; //type: int16
        ydk::YLeaf version_number; //type: uint8
        ydk::YLeaf local_priority; //type: uint32
        ydk::YLeaf master_only; //type: boolean
        ydk::YLeaf signal_fail; //type: boolean

}; // Ptp::Dataset::PortDses::PortDs


class Ptp::Dataset::TimePropertiesDs : public ydk::Entity
{
    public:
        TimePropertiesDs();
        ~TimePropertiesDs();

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

        ydk::YLeaf current_utc_offset; //type: int16
        ydk::YLeaf current_utc_offset_valid; //type: boolean
        ydk::YLeaf leap59; //type: boolean
        ydk::YLeaf leap61; //type: boolean
        ydk::YLeaf time_traceable; //type: boolean
        ydk::YLeaf frequency_traceable; //type: boolean
        ydk::YLeaf ptp_timescale; //type: boolean
        ydk::YLeaf time_source; //type: PtpBagClockTimeSource

}; // Ptp::Dataset::TimePropertiesDs


class Ptp::GlobalConfigurationError : public ydk::Entity
{
    public:
        GlobalConfigurationError();
        ~GlobalConfigurationError();

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

        ydk::YLeaf clock_profile; //type: PtpBagProfile
        ydk::YLeaf clock_profile_set; //type: boolean
        ydk::YLeaf telecom_clock_type; //type: PtpBagTelecomClock
        ydk::YLeaf domain_number; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        class ConfigurationErrors; //type: Ptp::GlobalConfigurationError::ConfigurationErrors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::GlobalConfigurationError::ConfigurationErrors> configuration_errors;
        
}; // Ptp::GlobalConfigurationError


class Ptp::GlobalConfigurationError::ConfigurationErrors : public ydk::Entity
{
    public:
        ConfigurationErrors();
        ~ConfigurationErrors();

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

        ydk::YLeaf domain; //type: boolean
        ydk::YLeaf profile_priority1_config; //type: boolean
        ydk::YLeaf profile_priority2_value; //type: boolean

}; // Ptp::GlobalConfigurationError::ConfigurationErrors


class Ptp::Grandmaster : public ydk::Entity
{
    public:
        Grandmaster();
        ~Grandmaster();

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

        ydk::YLeaf used_for_time; //type: boolean
        ydk::YLeaf used_for_frequency; //type: boolean
        ydk::YLeaf known_for_time; //type: uint32
        ydk::YLeaf domain; //type: uint8
        class ClockProperties; //type: Ptp::Grandmaster::ClockProperties
        class Address; //type: Ptp::Grandmaster::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Grandmaster::ClockProperties> clock_properties;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Grandmaster::Address> address;
        
}; // Ptp::Grandmaster


class Ptp::Grandmaster::ClockProperties : public ydk::Entity
{
    public:
        ClockProperties();
        ~ClockProperties();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf priority1; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        ydk::YLeaf class_; //type: uint8
        ydk::YLeaf accuracy; //type: uint8
        ydk::YLeaf offset_log_variance; //type: uint16
        ydk::YLeaf steps_removed; //type: uint16
        ydk::YLeaf time_source; //type: PtpBagClockTimeSource
        ydk::YLeaf frequency_traceable; //type: boolean
        ydk::YLeaf time_traceable; //type: boolean
        ydk::YLeaf timescale; //type: PtpBagClockTimescale
        ydk::YLeaf leap_seconds; //type: PtpBagClockLeapSeconds
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf configured_clock_class; //type: uint8
        ydk::YLeaf configured_priority; //type: uint8
        class UtcOffset; //type: Ptp::Grandmaster::ClockProperties::UtcOffset
        class Receiver; //type: Ptp::Grandmaster::ClockProperties::Receiver
        class Sender; //type: Ptp::Grandmaster::ClockProperties::Sender

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Grandmaster::ClockProperties::UtcOffset> utc_offset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Grandmaster::ClockProperties::Receiver> receiver;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Grandmaster::ClockProperties::Sender> sender;
        
}; // Ptp::Grandmaster::ClockProperties


class Ptp::Grandmaster::ClockProperties::UtcOffset : public ydk::Entity
{
    public:
        UtcOffset();
        ~UtcOffset();

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

        ydk::YLeaf current_offset; //type: int16
        ydk::YLeaf offset_valid; //type: boolean

}; // Ptp::Grandmaster::ClockProperties::UtcOffset


class Ptp::Grandmaster::ClockProperties::Receiver : public ydk::Entity
{
    public:
        Receiver();
        ~Receiver();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::Grandmaster::ClockProperties::Receiver


class Ptp::Grandmaster::ClockProperties::Sender : public ydk::Entity
{
    public:
        Sender();
        ~Sender();

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

        ydk::YLeaf clock_id; //type: uint64
        ydk::YLeaf port_number; //type: uint16

}; // Ptp::Grandmaster::ClockProperties::Sender


class Ptp::Grandmaster::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf address_unknown; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        class MacAddress; //type: Ptp::Grandmaster::Address::MacAddress
        class Ipv6Address; //type: Ptp::Grandmaster::Address::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Grandmaster::Address::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Grandmaster::Address::Ipv6Address> ipv6_address;
        
}; // Ptp::Grandmaster::Address


class Ptp::Grandmaster::Address::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

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

        ydk::YLeaf macaddr; //type: string

}; // Ptp::Grandmaster::Address::MacAddress


class Ptp::Grandmaster::Address::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

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

        ydk::YLeaf ipv6_address; //type: string

}; // Ptp::Grandmaster::Address::Ipv6Address


class Ptp::InterfaceUnicastPeers : public ydk::Entity
{
    public:
        InterfaceUnicastPeers();
        ~InterfaceUnicastPeers();

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

        class InterfaceUnicastPeer; //type: Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer> > interface_unicast_peer;
        
}; // Ptp::InterfaceUnicastPeers


class Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer : public ydk::Entity
{
    public:
        InterfaceUnicastPeer();
        ~InterfaceUnicastPeer();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf port_number; //type: uint16
        class Peers; //type: Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers> > peers;
        
}; // Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer


class Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address
        class AnnounceGrant; //type: Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant
        class SyncGrant; //type: Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant
        class DelayResponseGrant; //type: Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant> announce_grant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant> sync_grant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant> delay_response_grant;
        
}; // Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers


class Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: PtpBagEncap
        ydk::YLeaf address_unknown; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        class MacAddress; //type: Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress
        class Ipv6Address; //type: Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address> ipv6_address;
        
}; // Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address


class Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string

}; // Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::MacAddress


class Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::Address::Ipv6Address


class Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant : public ydk::Entity
{
    public:
        AnnounceGrant();
        ~AnnounceGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::AnnounceGrant


class Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant : public ydk::Entity
{
    public:
        SyncGrant();
        ~SyncGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::SyncGrant


class Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant : public ydk::Entity
{
    public:
        DelayResponseGrant();
        ~DelayResponseGrant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_grant_interval; //type: int8
        ydk::YLeaf grant_duration; //type: uint32

}; // Ptp::InterfaceUnicastPeers::InterfaceUnicastPeer::Peers::DelayResponseGrant


class Ptp::Platform : public ydk::Entity
{
    public:
        Platform();
        ~Platform();

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

        class Servo; //type: Ptp::Platform::Servo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo> servo;
        
}; // Ptp::Platform


class Ptp::Platform::Servo : public ydk::Entity
{
    public:
        Servo();
        ~Servo();

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

        ydk::YLeaf lock_status; //type: uint16
        ydk::YLeaf running; //type: boolean
        ydk::YLeaf device_status; //type: string
        ydk::YLeaf log_level; //type: uint16
        ydk::YLeaf phase_accuracy_last; //type: int64
        ydk::YLeaf num_sync_timestamp; //type: uint32
        ydk::YLeaf num_delay_timestamp; //type: uint32
        ydk::YLeaf num_set_time; //type: uint32
        ydk::YLeaf num_step_time; //type: uint32
        ydk::YLeaf num_adjust_freq; //type: uint32
        ydk::YLeaf num_adjust_freq_time; //type: uint32
        ydk::YLeaf last_adjust_freq; //type: int32
        ydk::YLeaf last_step_time; //type: int32
        ydk::YLeaf num_discard_sync_timestamp; //type: uint32
        ydk::YLeaf num_discard_delay_timestamp; //type: uint32
        ydk::YLeaf flagof_last_set_time; //type: boolean
        ydk::YLeaf offset_from_master; //type: int64
        ydk::YLeaf mean_path_delay; //type: int64
        class LastSetTime; //type: Ptp::Platform::Servo::LastSetTime
        class LastReceivedT1; //type: Ptp::Platform::Servo::LastReceivedT1
        class LastReceivedT2; //type: Ptp::Platform::Servo::LastReceivedT2
        class LastReceivedT3; //type: Ptp::Platform::Servo::LastReceivedT3
        class LastReceivedT4; //type: Ptp::Platform::Servo::LastReceivedT4
        class PreReceivedT1; //type: Ptp::Platform::Servo::PreReceivedT1
        class PreReceivedT2; //type: Ptp::Platform::Servo::PreReceivedT2
        class PreReceivedT3; //type: Ptp::Platform::Servo::PreReceivedT3
        class PreReceivedT4; //type: Ptp::Platform::Servo::PreReceivedT4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::LastSetTime> last_set_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::LastReceivedT1> last_received_t1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::LastReceivedT2> last_received_t2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::LastReceivedT3> last_received_t3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::LastReceivedT4> last_received_t4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::PreReceivedT1> pre_received_t1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::PreReceivedT2> pre_received_t2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::PreReceivedT3> pre_received_t3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ptp_oper::Ptp::Platform::Servo::PreReceivedT4> pre_received_t4;
        
}; // Ptp::Platform::Servo


class Ptp::Platform::Servo::LastSetTime : public ydk::Entity
{
    public:
        LastSetTime();
        ~LastSetTime();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::LastSetTime


class Ptp::Platform::Servo::LastReceivedT1 : public ydk::Entity
{
    public:
        LastReceivedT1();
        ~LastReceivedT1();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::LastReceivedT1


class Ptp::Platform::Servo::LastReceivedT2 : public ydk::Entity
{
    public:
        LastReceivedT2();
        ~LastReceivedT2();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::LastReceivedT2


class Ptp::Platform::Servo::LastReceivedT3 : public ydk::Entity
{
    public:
        LastReceivedT3();
        ~LastReceivedT3();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::LastReceivedT3


class Ptp::Platform::Servo::LastReceivedT4 : public ydk::Entity
{
    public:
        LastReceivedT4();
        ~LastReceivedT4();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::LastReceivedT4


class Ptp::Platform::Servo::PreReceivedT1 : public ydk::Entity
{
    public:
        PreReceivedT1();
        ~PreReceivedT1();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::PreReceivedT1


class Ptp::Platform::Servo::PreReceivedT2 : public ydk::Entity
{
    public:
        PreReceivedT2();
        ~PreReceivedT2();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::PreReceivedT2


class Ptp::Platform::Servo::PreReceivedT3 : public ydk::Entity
{
    public:
        PreReceivedT3();
        ~PreReceivedT3();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::PreReceivedT3


class Ptp::Platform::Servo::PreReceivedT4 : public ydk::Entity
{
    public:
        PreReceivedT4();
        ~PreReceivedT4();

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

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nano_second; //type: uint32

}; // Ptp::Platform::Servo::PreReceivedT4

class PtpBagDelayMechanism : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf e2e;
        static const ydk::Enum::YLeaf p2p;

};

class PtpBagTelecomClock : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf grandmaster;
        static const ydk::Enum::YLeaf boundary;
        static const ydk::Enum::YLeaf slave;

};

class PtpBagProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf g82651;
        static const ydk::Enum::YLeaf g82751;
        static const ydk::Enum::YLeaf g82752;

};

class PtpBagRestrictPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf slave_only;
        static const ydk::Enum::YLeaf master_only;

};

class PtpBagPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf pre_master;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf uncalibrated;
        static const ydk::Enum::YLeaf slave;
        static const ydk::Enum::YLeaf faulty;

};

class PtpBagEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class PtpBagCommunicationModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf mixed_mode;
        static const ydk::Enum::YLeaf multicast;

};

class PtpBagClockLeapSeconds : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf leap59;
        static const ydk::Enum::YLeaf leap61;

};

class PtpBagClockTimescale : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf arb;

};

class PtpBagClockTimeSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf atomic;
        static const ydk::Enum::YLeaf gps;
        static const ydk::Enum::YLeaf terrestrial_radio;
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf hand_set;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf internal_oscillator;

};


}
}

#endif /* _CISCO_IOS_XR_PTP_OPER_ */

