#ifndef _CISCO_IOS_XR_L2VPN_OPER_23_
#define _CISCO_IOS_XR_L2VPN_OPER_23_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_21.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_22.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag> > rewrite_tag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling : public ydk::Entity
{
    public:
        RemoteSignalling();
        ~RemoteSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DispositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ImpositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber : public ydk::Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac : public ydk::Entity
{
    public:
        StaticMac();
        ~StaticMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf bmac; //type: string
        ydk::YLeaf next_hop_ip; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo : public ydk::Entity
{
    public:
        BridgeDomainInfo();
        ~BridgeDomainInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf bridge_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf bridge_description; //type: string
        ydk::YLeaf bridge_state; //type: L2vpnBridgeState
        ydk::YLeaf bridge_coupled_state; //type: L2vpnBridgeCoupledState
        ydk::YLeaf bridge_shg_id; //type: uint32
        ydk::YLeaf bridge_msti; //type: uint32
        ydk::YLeaf acpwup; //type: uint32
        ydk::YLeaf bridge_internal_msti; //type: uint32
        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf number_vf_is; //type: uint32
        ydk::YLeaf number_access_vf_is; //type: uint32
        ydk::YLeaf number_a_cs; //type: uint32
        ydk::YLeaf number_a_cs_up; //type: uint32
        ydk::YLeaf number_pseudowires; //type: uint32
        ydk::YLeaf number_p_ws_up; //type: uint32
        ydk::YLeaf standby_pseudowires; //type: uint32
        ydk::YLeaf number_pb_bs; //type: uint8
        ydk::YLeaf number_pb_bs_up; //type: uint8
        ydk::YLeaf num_vn_is; //type: uint32
        ydk::YLeaf num_vn_is_up; //type: uint32
        ydk::YLeaf partially_programmed_pseudowires; //type: uint32
        ydk::YLeaf partially_programmed_a_cs; //type: uint32
        ydk::YLeaf bridge_mtu; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf mac_limit_down; //type: boolean
        ydk::YLeaf flodd_group_id_down; //type: boolean
        ydk::YLeaf mac_withdraw; //type: boolean
        ydk::YLeaf mac_withdraw_access; //type: boolean
        ydk::YLeaf mac_withdraw_relay; //type: boolean
        ydk::YLeaf mac_withdraw_option; //type: L2vpnBagMacWithdrawOption
        ydk::YLeaf p2mp_enabled; //type: boolean
        ydk::YLeaf bridge_type; //type: L2vpnBridge
        ydk::YLeaf vine_fsm_state; //type: string
        ydk::YLeaf time_created; //type: string
        ydk::YLeaf time_elapsed_creation; //type: string
        ydk::YLeaf last_time_status_changed; //type: string
        ydk::YLeaf time_elapsed_status_changed; //type: string
        ydk::YLeaf load_balance; //type: L2vpnLoadBal
        ydk::YLeaf is_bridge_partially_programmed; //type: boolean
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf is_rd_configured; //type: boolean
        ydk::YLeaf imposition_pkt_count; //type: uint64
        ydk::YLeaf imposition_byte_count; //type: uint64
        ydk::YLeaf disposition_pkt_count; //type: uint64
        ydk::YLeaf disposition_bytecount; //type: uint64
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters
        class PbbParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters
        class EvpnParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters
        class VniParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters
        class Rd; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd
        class MacFilter; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter
        class BridgeVfi; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi
        class BridgeAccessVfi; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi> > bridge_access_vfi;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi> > bridge_vfi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters> evpn_parameters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter> > mac_filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters> pbb_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd> rd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters> security_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters> vni_parameters;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi : public ydk::Entity
{
    public:
        BridgeAccessVfi();
        ~BridgeAccessVfi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vfi_name; //type: string
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf access; //type: boolean
        ydk::YLeaf vfi_state; //type: L2vpnVfiState
        ydk::YLeaf number_pseudowires; //type: uint32
        class DiscoveryInformation; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation
        class P2MpInformation; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation> discovery_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation> > p2mp_information;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation : public ydk::Entity
{
    public:
        DiscoveryInformation();
        ~DiscoveryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf ad_signalling_method; //type: uint32
        ydk::YLeaf ad_method; //type: uint32
        ydk::YLeaf ve_id; //type: uint32
        ydk::YLeaf provisioned_ve_id; //type: uint32
        ydk::YLeaf ve_range; //type: uint16
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf l2vpn_router_id; //type: string
        ydk::YLeaf vpn_added; //type: boolean
        ydk::YLeaf service_connected; //type: boolean
        ydk::YLeaf vpls_id_conflict; //type: boolean
        ydk::YLeaf export_route_policy; //type: string
        class RdValue; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue
        class VplsId; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId
        class ImportRt; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt
        class ExportRt; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt> > export_rt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt> > import_rt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue> rd_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId> vpls_id;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt : public ydk::Entity
{
    public:
        ExportRt();
        ~ExportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr
        class EsImport; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::EsImport


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::FourByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ExportRt::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt : public ydk::Entity
{
    public:
        ImportRt();
        ~ImportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr
        class EsImport; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::EsImport


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::FourByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::ImportRt::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue : public ydk::Entity
{
    public:
        RdValue();
        ~RdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto_; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::Auto_


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::FourByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::RdValue::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId : public ydk::Entity
{
    public:
        VplsId();
        ~VplsId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::Auto_


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::DiscoveryInformation::VplsId::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation : public ydk::Entity
{
    public:
        P2MpInformation();
        ~P2MpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf transport; //type: L2vpnVfiP2MpTransport
        ydk::YLeaf signaling; //type: L2vpnVfiP2MpSignaling
        ydk::YLeaf ptree_id; //type: uint32
        ydk::YLeaf attribute_set_name; //type: string
        ydk::YLeaf transport_status; //type: P2mpTransportState
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi::P2MpInformation


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi : public ydk::Entity
{
    public:
        BridgeVfi();
        ~BridgeVfi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vfi_name; //type: string
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf access; //type: boolean
        ydk::YLeaf vfi_state; //type: L2vpnVfiState
        ydk::YLeaf number_pseudowires; //type: uint32
        class DiscoveryInformation; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation
        class P2MpInformation; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation> discovery_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation> > p2mp_information;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation : public ydk::Entity
{
    public:
        DiscoveryInformation();
        ~DiscoveryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf ad_signalling_method; //type: uint32
        ydk::YLeaf ad_method; //type: uint32
        ydk::YLeaf ve_id; //type: uint32
        ydk::YLeaf provisioned_ve_id; //type: uint32
        ydk::YLeaf ve_range; //type: uint16
        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf l2vpn_router_id; //type: string
        ydk::YLeaf vpn_added; //type: boolean
        ydk::YLeaf service_connected; //type: boolean
        ydk::YLeaf vpls_id_conflict; //type: boolean
        ydk::YLeaf export_route_policy; //type: string
        class RdValue; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue
        class VplsId; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId
        class ImportRt; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt
        class ExportRt; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt> > export_rt;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt> > import_rt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue> rd_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId> vpls_id;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt : public ydk::Entity
{
    public:
        ExportRt();
        ~ExportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr
        class EsImport; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::EsImport


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::FourByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ExportRt::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt : public ydk::Entity
{
    public:
        ImportRt();
        ~ImportRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr
        class EsImport; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::EsImport


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::FourByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::ImportRt::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue : public ydk::Entity
{
    public:
        RdValue();
        ~RdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto_; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::Auto_


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::FourByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::RdValue::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId : public ydk::Entity
{
    public:
        VplsId();
        ~VplsId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vpls_id_type; //type: L2vpnAdVplsId
        class Auto_; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf asn; //type: uint16
        ydk::YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::Auto_


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation::VplsId::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation : public ydk::Entity
{
    public:
        P2MpInformation();
        ~P2MpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf transport; //type: L2vpnVfiP2MpTransport
        ydk::YLeaf signaling; //type: L2vpnVfiP2MpSignaling
        ydk::YLeaf ptree_id; //type: uint32
        ydk::YLeaf attribute_set_name; //type: string
        ydk::YLeaf transport_status; //type: P2mpTransportState
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters : public ydk::Entity
{
    public:
        EvpnParameters();
        ~EvpnParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        class EvpnPort; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort> evpn_port;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort : public ydk::Entity
{
    public:
        EvpnPort();
        ~EvpnPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf evpn_port_state; //type: L2vpnVirtualportState
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters
        class Statistics; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters> security_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics> statistics;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DispositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ImpositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber : public ydk::Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter : public ydk::Entity
{
    public:
        MacFilter();
        ~MacFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf bmac; //type: string
        ydk::YLeaf next_hop_ip; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters : public ydk::Entity
{
    public:
        PbbParameters();
        ~PbbParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2vpnBridge
        class PbbEdge; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge
        class PbbCore; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore> pbb_core;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge> pbb_edge;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore : public ydk::Entity
{
    public:
        PbbCore();
        ~PbbCore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf num_ass_edge; //type: uint32
        class CorePort; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort> core_port;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort : public ydk::Entity
{
    public:
        CorePort();
        ~CorePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf vlan_id; //type: uint32
        ydk::YLeaf core_port_state; //type: L2vpnVirtualportState
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters> security_parameters;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge : public ydk::Entity
{
    public:
        PbbEdge();
        ~PbbEdge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf i_sid; //type: uint32
        ydk::YLeaf core_bridge_name; //type: string
        ydk::YLeaf core_bridge_state; //type: L2vpnBridgeState
        ydk::YLeaf mirp_lite_status; //type: L2vpnMirpLiteStatus
        ydk::YLeaf mirp_lite_protocol; //type: L2vpnMirpLiteProtocolInfo
        class EdgePort; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort> edge_port;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort : public ydk::Entity
{
    public:
        EdgePort();
        ~EdgePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf unknown_unicast_mac_set; //type: boolean
        ydk::YLeaf unknown_unicast_mac; //type: string
        ydk::YLeaf edge_port_state; //type: L2vpnVirtualportState
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters
        class Statistics; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics
        class BmacMapping; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping> > bmac_mapping;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters> security_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics> statistics;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping : public ydk::Entity
{
    public:
        BmacMapping();
        ~BmacMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf bmac; //type: string
        ydk::YLeaf next_hop_ip; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DispositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ImpositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_23_ */

