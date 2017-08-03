#ifndef _CISCO_IOS_XR_IP_BFD_OPER_2_
#define _CISCO_IOS_XR_IP_BFD_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_bfd_oper_0.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {


class Bfd::SessionDetails::SessionDetail::AssociationInformation : public ydk::Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::SessionDetails::SessionDetail::AssociationInformation


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey : public ydk::Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_key_type; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf incoming_label; //type: uint32
        ydk::YLeaf sbfd_enabled; //type: int32
        ydk::YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public ydk::Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public ydk::Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec : public ydk::Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfdfe_ctype; //type: BfdApiFec
        class Dummy; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dummy; //type: string

}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public ydk::Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4SingleHopMultiPath; //type: Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath> > ipv4_single_hop_multi_path;
        
}; // Bfd::Ipv4SingleHopMultiPaths


class Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath : public ydk::Entity
{
    public:
        Ipv4SingleHopMultiPath();
        ~Ipv4SingleHopMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4SingleHopSessionBrief; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief> > ipv4_single_hop_session_brief;
        
}; // Bfd::Ipv4SingleHopSessionBriefs


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief : public ydk::Entity
{
    public:
        Ipv4SingleHopSessionBrief();
        ~Ipv4SingleHopSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf session_type; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6MultiHopPacketCounters; //type: Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters> ipv6_multi_hop_packet_counters;
        
}; // Bfd::Ipv6MultiHopCounters


class Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters : public ydk::Entity
{
    public:
        Ipv6MultiHopPacketCounters();
        ~Ipv6MultiHopPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6MultiHopPacketCounter; //type: Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter> > ipv6_multi_hop_packet_counter;
        
}; // Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters


class Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter : public ydk::Entity
{
    public:
        Ipv6MultiHopPacketCounter();
        ~Ipv6MultiHopPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6SingleHopLocationSummary; //type: Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary> > ipv6_single_hop_location_summary;
        
}; // Bfd::Ipv6SingleHopLocationSummaries


class Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary : public ydk::Entity
{
    public:
        Ipv6SingleHopLocationSummary();
        ~Ipv6SingleHopLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class SessionState; //type: Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary


class Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelPacketCounters; //type: Bfd::LabelCounters::LabelPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelCounters::LabelPacketCounters> label_packet_counters;
        
}; // Bfd::LabelCounters


class Bfd::LabelCounters::LabelPacketCounters : public ydk::Entity
{
    public:
        LabelPacketCounters();
        ~LabelPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelPacketCounter; //type: Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter> > label_packet_counter;
        
}; // Bfd::LabelCounters::LabelPacketCounters


class Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter : public ydk::Entity
{
    public:
        LabelPacketCounter();
        ~LabelPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4BfDoMplsteHeadSessionDetail; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail> > ipv4bf_do_mplste_head_session_detail;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadSessionDetail();
        ~Ipv4BfDoMplsteHeadSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation> status_information;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation : public ydk::Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange : public ydk::Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mp_download_state; //type: BfdMpDownloadState
        class ChangeTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime : public ydk::Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public ydk::Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime : public ydk::Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation : public ydk::Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey : public ydk::Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_key_type; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf incoming_label; //type: uint32
        ydk::YLeaf sbfd_enabled; //type: int32
        ydk::YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public ydk::Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public ydk::Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec : public ydk::Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfdfe_ctype; //type: BfdApiFec
        class Dummy; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dummy; //type: string

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public ydk::Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation


class Bfd::RelationBriefs : public ydk::Entity
{
    public:
        RelationBriefs();
        ~RelationBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RelationBrief; //type: Bfd::RelationBriefs::RelationBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationBriefs::RelationBrief> > relation_brief;
        
}; // Bfd::RelationBriefs


class Bfd::RelationBriefs::RelationBrief : public ydk::Entity
{
    public:
        RelationBrief();
        ~RelationBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        class LinkInformation; //type: Bfd::RelationBriefs::RelationBrief::LinkInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationBriefs::RelationBrief::LinkInformation> > link_information;
        
}; // Bfd::RelationBriefs::RelationBrief


class Bfd::RelationBriefs::RelationBrief::LinkInformation : public ydk::Entity
{
    public:
        LinkInformation();
        ~LinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf interface_name; //type: string

}; // Bfd::RelationBriefs::RelationBrief::LinkInformation


class Bfd::ClientBriefs : public ydk::Entity
{
    public:
        ClientBriefs();
        ~ClientBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientBrief; //type: Bfd::ClientBriefs::ClientBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientBriefs::ClientBrief> > client_brief;
        
}; // Bfd::ClientBriefs


class Bfd::ClientBriefs::ClientBrief : public ydk::Entity
{
    public:
        ClientBrief();
        ~ClientBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf name_xr; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf session_count; //type: uint32

}; // Bfd::ClientBriefs::ClientBrief


class Bfd::Ipv4BfDoMplsteHeadMultiPaths : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadMultiPaths();
        ~Ipv4BfDoMplsteHeadMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4BfDoMplsteHeadMultiPath; //type: Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath> > ipv4bf_do_mplste_head_multi_path;
        
}; // Bfd::Ipv4BfDoMplsteHeadMultiPaths


class Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadMultiPath();
        ~Ipv4BfDoMplsteHeadMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf incoming_label_xr; //type: uint32
        ydk::YLeaf session_interface_name; //type: string

}; // Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath


class Bfd::RelationDetails : public ydk::Entity
{
    public:
        RelationDetails();
        ~RelationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RelationDetail; //type: Bfd::RelationDetails::RelationDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail> > relation_detail;
        
}; // Bfd::RelationDetails


class Bfd::RelationDetails::RelationDetail : public ydk::Entity
{
    public:
        RelationDetail();
        ~RelationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        class LinkInformation; //type: Bfd::RelationDetails::RelationDetail::LinkInformation
        class AssociationInformation; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation> > association_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::LinkInformation> > link_information;
        
}; // Bfd::RelationDetails::RelationDetail


class Bfd::RelationDetails::RelationDetail::LinkInformation : public ydk::Entity
{
    public:
        LinkInformation();
        ~LinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf local_discriminator; //type: uint32

}; // Bfd::RelationDetails::RelationDetail::LinkInformation


class Bfd::RelationDetails::RelationDetail::AssociationInformation : public ydk::Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::RelationDetails::RelationDetail::AssociationInformation


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey : public ydk::Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_key_type; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf incoming_label; //type: uint32
        ydk::YLeaf sbfd_enabled; //type: int32
        ydk::YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress : public ydk::Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress : public ydk::Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec : public ydk::Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfdfe_ctype; //type: BfdApiFec
        class Dummy; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dummy; //type: string

}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public ydk::Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4BfDoMplsteTailCounters : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteTailCounters();
        ~Ipv4BfDoMplsteTailCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4BfDoMplsteTailPacketCounters; //type: Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters> ipv4bf_do_mplste_tail_packet_counters;
        
}; // Bfd::Ipv4BfDoMplsteTailCounters


class Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteTailPacketCounters();
        ~Ipv4BfDoMplsteTailPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4BfDoMplsteTailPacketCounter; //type: Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter> > ipv4bf_do_mplste_tail_packet_counter;
        
}; // Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters


class Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteTailPacketCounter();
        ~Ipv4BfDoMplsteTailPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        ydk::YLeaf hello_transmit_count; //type: uint32
        ydk::YLeaf hello_receive_count; //type: uint32
        ydk::YLeaf echo_transmit_count; //type: uint32
        ydk::YLeaf echo_receive_count; //type: uint32
        ydk::YLeaf display_type; //type: BfdMgmtPktDisplay

}; // Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter


class Bfd::Ipv6SingleHopSessionBriefs : public ydk::Entity
{
    public:
        Ipv6SingleHopSessionBriefs();
        ~Ipv6SingleHopSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6SingleHopSessionBrief; //type: Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief> > ipv6_single_hop_session_brief;
        
}; // Bfd::Ipv6SingleHopSessionBriefs


class Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief : public ydk::Entity
{
    public:
        Ipv6SingleHopSessionBrief();
        ~Ipv6SingleHopSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf session_type; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief


class Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation


class Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4BfDoMplsteTailMultiPaths : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteTailMultiPaths();
        ~Ipv4BfDoMplsteTailMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4BfDoMplsteTailMultiPath; //type: Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath> > ipv4bf_do_mplste_tail_multi_path;
        
}; // Bfd::Ipv4BfDoMplsteTailMultiPaths


class Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteTailMultiPath();
        ~Ipv4BfDoMplsteTailMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf incoming_label_xr; //type: uint32
        ydk::YLeaf session_interface_name; //type: string

}; // Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath


class Bfd::Ipv4MultiHopMultiPaths : public ydk::Entity
{
    public:
        Ipv4MultiHopMultiPaths();
        ~Ipv4MultiHopMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4MultiHopMultiPath; //type: Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath> > ipv4_multi_hop_multi_path;
        
}; // Bfd::Ipv4MultiHopMultiPaths


class Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath : public ydk::Entity
{
    public:
        Ipv4MultiHopMultiPath();
        ~Ipv4MultiHopMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath


class Bfd::Ipv4BfDoMplsteHeadSummary : public ydk::Entity
{
    public:
        Ipv4BfDoMplsteHeadSummary();
        ~Ipv4BfDoMplsteHeadSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionState; //type: Bfd::Ipv4BfDoMplsteHeadSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSummary::SessionState> session_state;
        
}; // Bfd::Ipv4BfDoMplsteHeadSummary


class Bfd::Ipv4BfDoMplsteHeadSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv4BfDoMplsteHeadSummary::SessionState


}
}

#endif /* _CISCO_IOS_XR_IP_BFD_OPER_2_ */

