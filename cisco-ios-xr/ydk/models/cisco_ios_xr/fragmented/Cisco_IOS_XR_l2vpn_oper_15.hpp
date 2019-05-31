#ifndef _CISCO_IOS_XR_L2VPN_OPER_15_
#define _CISCO_IOS_XR_L2VPN_OPER_15_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_14.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling : public ydk::Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv
        class Tlv; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv> status_tlv;
        ydk::YList tlv;
        
}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv : public ydk::Entity
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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv : public ydk::Entity
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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling : public ydk::Entity
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

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv> status_tlv;
        ydk::YList tlv;
        
}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv : public ydk::Entity
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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv : public ydk::Entity
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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics : public ydk::Entity
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

        class ImpostionStats; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber> sequence_number;
        
}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats : public ydk::Entity
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

        class ImpositionStat; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2fsbiDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop
        class Multicast; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop : public ydk::Entity
{
    public:
        L2fsbiDrop();
        ~L2fsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats : public ydk::Entity
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

        class DispositionStat; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2mpStats; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats
        class KnownUnicast; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        
}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats : public ydk::Entity
{
    public:
        DispositionP2mpStats();
        ~DispositionP2mpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove : public ydk::Entity
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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber : public ydk::Entity
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

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber


class L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw : public ydk::Entity
{
    public:
        P2mpPw();
        ~P2mpPw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_available; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf local_ptree_type; //type: L2vpnP2mpPwPtree
        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf local_extended_tunnel_id; //type: string
        ydk::YLeaf local_p2mp_id; //type: uint32
        ydk::YLeaf local_flags; //type: uint8
        ydk::YLeaf remote_available; //type: boolean
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf remote_ptree_type; //type: L2vpnP2mpPwPtree
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf remote_extended_tunnel_id; //type: string
        ydk::YLeaf remote_p2mp_id; //type: uint32
        ydk::YLeaf remote_flags; //type: uint8

}; // L2vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw


class L2vpnv2::Standby::XconnectBrief : public ydk::Entity
{
    public:
        XconnectBrief();
        ~XconnectBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf main_total_up; //type: uint32
        ydk::YLeaf main_total_down; //type: uint32
        ydk::YLeaf main_total_unresolved; //type: uint32
        ydk::YLeaf undefined_xc; //type: uint32
        ydk::YLeaf memory_state; //type: L2vpnMemoryState
        class EncapsulationReportMatrix; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix
        class EncapsulationTotal; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationTotal

        ydk::YList encapsulation_report_matrix;
        ydk::YList encapsulation_total;
        
}; // L2vpnv2::Standby::XconnectBrief


class L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix : public ydk::Entity
{
    public:
        EncapsulationReportMatrix();
        ~EncapsulationReportMatrix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ac1; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1

        ydk::YList ac1;
        
}; // L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix


class L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1 : public ydk::Entity
{
    public:
        Ac1();
        ~Ac1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ac2; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2

        ydk::YList ac2;
        
}; // L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1


class L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2 : public ydk::Entity
{
    public:
        Ac2();
        ~Ac2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf psn_type; //type: L2vpnBriefPsn
        ydk::YLeaf ac1_encapsulation; //type: L2vpnAcEncap
        ydk::YLeaf ac2_encapsulation; //type: L2vpnAcEncap
        class UpCount; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount
        class DownCount; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount
        class UnresolvedCount; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount

        ydk::YList up_count;
        ydk::YList down_count;
        ydk::YList unresolved_count;
        
}; // L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2


class L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount : public ydk::Entity
{
    public:
        UpCount();
        ~UpCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount


class L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount : public ydk::Entity
{
    public:
        DownCount();
        ~DownCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount


class L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount : public ydk::Entity
{
    public:
        UnresolvedCount();
        ~UnresolvedCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // L2vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount


class L2vpnv2::Standby::XconnectBrief::EncapsulationTotal : public ydk::Entity
{
    public:
        EncapsulationTotal();
        ~EncapsulationTotal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf psn_type; //type: L2vpnBriefPsn
        ydk::YLeaf ac1_encapsulation; //type: L2vpnAcEncap
        ydk::YLeaf ac2_encapsulation; //type: L2vpnAcEncap
        class UpCount; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::UpCount
        class DownCount; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::DownCount
        class UnresolvedCount; //type: L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::UnresolvedCount

        ydk::YList up_count;
        ydk::YList down_count;
        ydk::YList unresolved_count;
        
}; // L2vpnv2::Standby::XconnectBrief::EncapsulationTotal


class L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::UpCount : public ydk::Entity
{
    public:
        UpCount();
        ~UpCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::UpCount


class L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::DownCount : public ydk::Entity
{
    public:
        DownCount();
        ~DownCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::DownCount


class L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::UnresolvedCount : public ydk::Entity
{
    public:
        UnresolvedCount();
        ~UnresolvedCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint32

}; // L2vpnv2::Standby::XconnectBrief::EncapsulationTotal::UnresolvedCount


class L2vpnv2::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Discoveries; //type: L2vpnv2::Active::Discoveries
        class FlexibleXconnectServiceSummary; //type: L2vpnv2::Active::FlexibleXconnectServiceSummary
        class MainInterfaces; //type: L2vpnv2::Active::MainInterfaces
        class IccpSm; //type: L2vpnv2::Active::IccpSm
        class BridgeSummary; //type: L2vpnv2::Active::BridgeSummary
        class Nsr; //type: L2vpnv2::Active::Nsr
        class PreferredPaths; //type: L2vpnv2::Active::PreferredPaths
        class PseudowireHeadend; //type: L2vpnv2::Active::PseudowireHeadend
        class GlobalSettings; //type: L2vpnv2::Active::GlobalSettings
        class Pwr; //type: L2vpnv2::Active::Pwr
        class XconnectMp2mpCe2ces; //type: L2vpnv2::Active::XconnectMp2mpCe2ces
        class Xconnects; //type: L2vpnv2::Active::Xconnects
        class XconnectGroups; //type: L2vpnv2::Active::XconnectGroups
        class XconnectMp2mps; //type: L2vpnv2::Active::XconnectMp2mps
        class Indexes; //type: L2vpnv2::Active::Indexes
        class XconnectSummary; //type: L2vpnv2::Active::XconnectSummary
        class ProcFsm; //type: L2vpnv2::Active::ProcFsm
        class MstpPorts; //type: L2vpnv2::Active::MstpPorts
        class GenericInterfaceListDetails; //type: L2vpnv2::Active::GenericInterfaceListDetails
        class L2vpnResourceState; //type: L2vpnv2::Active::L2vpnResourceState
        class BridgeDomains; //type: L2vpnv2::Active::BridgeDomains
        class DiscoverySummary; //type: L2vpnv2::Active::DiscoverySummary
        class G8032; //type: L2vpnv2::Active::G8032
        class PseudowireClasses; //type: L2vpnv2::Active::PseudowireClasses
        class L2vpnCollaborators; //type: L2vpnv2::Active::L2vpnCollaborators
        class Mvrp; //type: L2vpnv2::Active::Mvrp
        class GenericInterfaceLists; //type: L2vpnv2::Active::GenericInterfaceLists
        class MstpVlans; //type: L2vpnv2::Active::MstpVlans
        class L2vpnPbbBsa; //type: L2vpnv2::Active::L2vpnPbbBsa
        class FlexibleXconnectServices; //type: L2vpnv2::Active::FlexibleXconnectServices
        class XconnectBrief; //type: L2vpnv2::Active::XconnectBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Discoveries> discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::FlexibleXconnectServiceSummary> flexible_xconnect_service_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::MainInterfaces> main_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm> iccp_sm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::BridgeSummary> bridge_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::PreferredPaths> preferred_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::PseudowireHeadend> pseudowire_headend;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::GlobalSettings> global_settings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr> pwr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces> xconnect_mp2mp_ce2ces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Xconnects> xconnects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectGroups> xconnect_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mps> xconnect_mp2mps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Indexes> indexes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectSummary> xconnect_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::ProcFsm> proc_fsm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::MstpPorts> mstp_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::GenericInterfaceListDetails> generic_interface_list_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::L2vpnResourceState> l2vpn_resource_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::BridgeDomains> bridge_domains;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::DiscoverySummary> discovery_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::G8032> g8032;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::L2vpnCollaborators> l2vpn_collaborators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Mvrp> mvrp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::GenericInterfaceLists> generic_interface_lists;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::MstpVlans> mstp_vlans;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::L2vpnPbbBsa> l2vpn_pbb_bsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::FlexibleXconnectServices> flexible_xconnect_services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectBrief> xconnect_brief;
        
}; // L2vpnv2::Active


class L2vpnv2::Active::Discoveries : public ydk::Entity
{
    public:
        Discoveries();
        ~Discoveries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Discovery; //type: L2vpnv2::Active::Discoveries::Discovery

        ydk::YList discovery;
        
}; // L2vpnv2::Active::Discoveries


class L2vpnv2::Active::Discoveries::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf service_name; //type: L2vpnService
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf vpn_name; //type: string
        ydk::YLeaf mtu_mismatch_ignore; //type: boolean
        ydk::YLeaf number_vpn; //type: uint32
        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf service_name_xr; //type: string
        ydk::YLeaf group_name_xr; //type: string
        ydk::YLeaf vpn_name_xr; //type: string
        ydk::YLeaf is_service_connected; //type: boolean
        class SignallingInfo; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Discoveries::Discovery::SignallingInfo> signalling_info;
        
}; // L2vpnv2::Active::Discoveries::Discovery


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo : public ydk::Entity
{
    public:
        SignallingInfo();
        ~SignallingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ad_signalling_method; //type: L2vpnAdSigMethod
        class BgpSigInfo; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo
        class LdpSigInfo; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo> bgp_sig_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo> ldp_sig_info;
        
}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo : public ydk::Entity
{
    public:
        BgpSigInfo();
        ~BgpSigInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number_edges; //type: uint32
        ydk::YLeaf number_remote_edges; //type: uint32
        class Edge; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge
        class Redge; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge

        ydk::YList edge;
        ydk::YList redge;
        
}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge : public ydk::Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf edge_id; //type: uint32
        ydk::YLeaf label_count; //type: uint32
        class LabelBlock; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock

        ydk::YList label_block;
        
}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock : public ydk::Entity
{
    public:
        LabelBlock();
        ~LabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf label_time_created; //type: uint32
        ydk::YLeaf label_base; //type: uint32
        ydk::YLeaf block_offset; //type: uint32
        ydk::YLeaf block_size; //type: uint32
        ydk::YLeaf local_edge_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label_error; //type: L2vpnAdLsdErr
        class StatusVector; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector

        ydk::YList status_vector;
        
}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector : public ydk::Entity
{
    public:
        StatusVector();
        ~StatusVector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint8

}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge : public ydk::Entity
{
    public:
        Redge();
        ~Redge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf edge_id; //type: uint32
        ydk::YLeaf label_count; //type: uint32
        class LabelBlock; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock

        ydk::YList label_block;
        
}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock : public ydk::Entity
{
    public:
        LabelBlock();
        ~LabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf label_time_created; //type: uint32
        ydk::YLeaf label_base; //type: uint32
        ydk::YLeaf block_offset; //type: uint32
        ydk::YLeaf block_size; //type: uint32
        ydk::YLeaf local_edge_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label_error; //type: L2vpnAdLsdErr
        class StatusVector; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector

        ydk::YList status_vector;
        
}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector : public ydk::Entity
{
    public:
        StatusVector();
        ~StatusVector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint8

}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo : public ydk::Entity
{
    public:
        LdpSigInfo();
        ~LdpSigInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf local_l2_router_id; //type: string
        ydk::YLeaf number_remote_edges; //type: uint32
        class LocalVplsId; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId
        class RemoteNlri; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId> local_vpls_id;
        ydk::YList remote_nlri;
        
}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId : public ydk::Entity
{
    public:
        LocalVplsId();
        ~LocalVplsId();

        bool has_data() const override;
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
        class Auto; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto
        class TwoByteAs; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs
        class V4Addr; //type: L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr> v4_addr;
        
}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
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

}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs : public ydk::Entity
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

}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr : public ydk::Entity
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

}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr


class L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri : public ydk::Entity
{
    public:
        RemoteNlri();
        ~RemoteNlri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nlri_time_created; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf remote_l2_router_id; //type: string

}; // L2vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri


class L2vpnv2::Active::FlexibleXconnectServiceSummary : public ydk::Entity
{
    public:
        FlexibleXconnectServiceSummary();
        ~FlexibleXconnectServiceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number_fxc; //type: uint32
        ydk::YLeaf number_fxc_up; //type: uint32
        ydk::YLeaf number_fxc_down; //type: uint32

}; // L2vpnv2::Active::FlexibleXconnectServiceSummary


class L2vpnv2::Active::MainInterfaces : public ydk::Entity
{
    public:
        MainInterfaces();
        ~MainInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MainInterface; //type: L2vpnv2::Active::MainInterfaces::MainInterface

        ydk::YList main_interface;
        
}; // L2vpnv2::Active::MainInterfaces


class L2vpnv2::Active::MainInterfaces::MainInterface : public ydk::Entity
{
    public:
        MainInterface();
        ~MainInterface();

        bool has_data() const override;
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
        class MainInterfaceInstances; //type: L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances
        class MainInterfaceInfo; //type: L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances> main_interface_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInfo> main_interface_info;
        
}; // L2vpnv2::Active::MainInterfaces::MainInterface


class L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances : public ydk::Entity
{
    public:
        MainInterfaceInstances();
        ~MainInterfaceInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MainInterfaceInstance; //type: L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance

        ydk::YList main_interface_instance;
        
}; // L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances


class L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance : public ydk::Entity
{
    public:
        MainInterfaceInstance();
        ~MainInterfaceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        class MainInterfaceInstanceInfo; //type: L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo
        class MainInterfaceInstanceBridgePorts; //type: L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo> main_interface_instance_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts> main_interface_instance_bridge_ports;
        
}; // L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance


class L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo : public ydk::Entity
{
    public:
        MainInterfaceInstanceInfo();
        ~MainInterfaceInstanceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_instance; //type: uint32
        ydk::YLeaf flush_count; //type: uint32
        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf instance_flags; //type: uint32
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_state; //type: L2vpnMainIfInstanceState

}; // L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo


class L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts : public ydk::Entity
{
    public:
        MainInterfaceInstanceBridgePorts();
        ~MainInterfaceInstanceBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MainInterfaceInstanceBridgePort; //type: L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort

        ydk::YList main_interface_instance_bridge_port;
        
}; // L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts


class L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort : public ydk::Entity
{
    public:
        MainInterfaceInstanceBridgePort();
        ~MainInterfaceInstanceBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_port; //type: string
        ydk::YLeaf bridge_port_xr; //type: string
        ydk::YLeaf instance_id; //type: uint32

}; // L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort


class L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInfo : public ydk::Entity
{
    public:
        MainInterfaceInfo();
        ~MainInterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_interface_handle; //type: string
        ydk::YLeaf protected_; //type: L2vpnMainIfProtectected
        ydk::YLeaf interface_count; //type: uint32

}; // L2vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInfo


class L2vpnv2::Active::IccpSm : public ydk::Entity
{
    public:
        IccpSm();
        ~IccpSm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IccpSmSummary; //type: L2vpnv2::Active::IccpSm::IccpSmSummary
        class IccpGroups; //type: L2vpnv2::Active::IccpSm::IccpGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm::IccpSmSummary> iccp_sm_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm::IccpGroups> iccp_groups;
        
}; // L2vpnv2::Active::IccpSm


class L2vpnv2::Active::IccpSm::IccpSmSummary : public ydk::Entity
{
    public:
        IccpSmSummary();
        ~IccpSmSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf groups; //type: uint32
        ydk::YLeaf unresolved_groups; //type: uint32
        ydk::YLeaf provisioned_groups; //type: uint32
        ydk::YLeaf connecting_groups; //type: uint32
        ydk::YLeaf connected_groups; //type: uint32
        ydk::YLeaf synchronizing_groups; //type: uint32
        ydk::YLeaf synchronized_groups; //type: uint32
        ydk::YLeaf ports; //type: uint32
        ydk::YLeaf operational_ports; //type: uint32
        ydk::YLeaf failed_ports; //type: uint32
        ydk::YLeaf unknown_ports; //type: uint32
        ydk::YLeaf unconfigured_ports; //type: uint32
        ydk::YLeaf unsynchronized_ports; //type: uint32
        ydk::YLeaf reverting_ports; //type: uint32

}; // L2vpnv2::Active::IccpSm::IccpSmSummary


class L2vpnv2::Active::IccpSm::IccpGroups : public ydk::Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IccpGroup; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup

        ydk::YList iccp_group;
        
}; // L2vpnv2::Active::IccpSm::IccpGroups


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup : public ydk::Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
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
        class IccpGroupInfo; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo
        class IccpPorts; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo> iccp_group_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts> iccp_ports;
        
}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo : public ydk::Entity
{
    public:
        IccpGroupInfo();
        ~IccpGroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf local_node_id; //type: uint8
        ydk::YLeaf remote_node_id; //type: uint8
        ydk::YLeaf state; //type: IccpSmState
        ydk::YLeaf iccp_transport_up; //type: boolean
        ydk::YLeaf iccp_member_up; //type: boolean
        class Ports; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports

        ydk::YList ports;
        
}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

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
        ydk::YLeaf mac_flush_tcn; //type: boolean
        class LocalPort; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort
        class RemotePort; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort> local_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort> remote_port;
        
}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort : public ydk::Entity
{
    public:
        LocalPort();
        ~LocalPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_state; //type: IccpSmPortState
        ydk::YLeaf port_fail_code; //type: uint8
        ydk::YLeaf fsm_state; //type: uint8
        ydk::YLeaf vlan_state; //type: uint8
        ydk::YLeaf vlan_vector; //type: string
        ydk::YLeaf reversion_time; //type: uint32
        ydk::YLeaf reversion_time_remaining; //type: uint32

}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort : public ydk::Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_state; //type: IccpSmPortState
        ydk::YLeaf port_fail_code; //type: uint8
        ydk::YLeaf fsm_state; //type: uint8
        ydk::YLeaf vlan_state; //type: uint8
        ydk::YLeaf vlan_vector; //type: string
        ydk::YLeaf reversion_time; //type: uint32
        ydk::YLeaf reversion_time_remaining; //type: uint32

}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts : public ydk::Entity
{
    public:
        IccpPorts();
        ~IccpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpPort; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort

        ydk::YList iccp_port;
        
}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort : public ydk::Entity
{
    public:
        IccpPort();
        ~IccpPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf mac_flush_tcn; //type: boolean
        class LocalPort; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort
        class RemotePort; //type: L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort> local_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort> remote_port;
        
}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort : public ydk::Entity
{
    public:
        LocalPort();
        ~LocalPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_state; //type: IccpSmPortState
        ydk::YLeaf port_fail_code; //type: uint8
        ydk::YLeaf fsm_state; //type: uint8
        ydk::YLeaf vlan_state; //type: uint8
        ydk::YLeaf vlan_vector; //type: string
        ydk::YLeaf reversion_time; //type: uint32
        ydk::YLeaf reversion_time_remaining; //type: uint32

}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort


class L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort : public ydk::Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_state; //type: IccpSmPortState
        ydk::YLeaf port_fail_code; //type: uint8
        ydk::YLeaf fsm_state; //type: uint8
        ydk::YLeaf vlan_state; //type: uint8
        ydk::YLeaf vlan_vector; //type: string
        ydk::YLeaf reversion_time; //type: uint32
        ydk::YLeaf reversion_time_remaining; //type: uint32

}; // L2vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort


class L2vpnv2::Active::BridgeSummary : public ydk::Entity
{
    public:
        BridgeSummary();
        ~BridgeSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number_groups; //type: uint32
        ydk::YLeaf number_vlan_switches; //type: uint32
        ydk::YLeaf number_bridge_domains; //type: uint32
        ydk::YLeaf number_bridge_domains_up; //type: uint32
        ydk::YLeaf number_bridge_domains_shut; //type: uint32
        ydk::YLeaf number_default_bridge_doamins; //type: uint32
        ydk::YLeaf number_pbb_edge; //type: uint32
        ydk::YLeaf number_pbb_core; //type: uint32
        ydk::YLeaf number_p2mp; //type: uint32
        ydk::YLeaf number_p2mp_up; //type: uint32
        ydk::YLeaf number_p2mp_down; //type: uint32
        ydk::YLeaf number_a_cs; //type: uint32
        ydk::YLeaf number_a_cs_up; //type: uint32
        ydk::YLeaf number_a_cs_down; //type: uint32
        ydk::YLeaf number_pseudowires; //type: uint32
        ydk::YLeaf number_p_ws_up; //type: uint32
        ydk::YLeaf number_p_ws_down; //type: uint32
        ydk::YLeaf standby_pseudowires; //type: uint32
        ydk::YLeaf num_vn_is; //type: uint32
        ydk::YLeaf num_vn_is_up; //type: uint32
        ydk::YLeaf num_vn_is_down; //type: uint32
        ydk::YLeaf num_vn_is_unresolved; //type: uint32
        ydk::YLeaf out_of_memory_state; //type: uint32
        ydk::YLeaf partially_programmed_bridges; //type: uint32
        ydk::YLeaf partially_programmed_pseudowires; //type: uint32
        ydk::YLeaf partially_programmed_a_cs; //type: uint32

}; // L2vpnv2::Active::BridgeSummary


class L2vpnv2::Active::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ha_role; //type: uint8
        ydk::YLeaf issu_role; //type: uint8
        ydk::YLeaf sync_flags; //type: uint32
        ydk::YLeaf sw_install_in_progress; //type: boolean
        class FailoverStatus; //type: L2vpnv2::Active::Nsr::FailoverStatus
        class NsrStatus; //type: L2vpnv2::Active::Nsr::NsrStatus
        class IssuStatus; //type: L2vpnv2::Active::Nsr::IssuStatus
        class XidInfo; //type: L2vpnv2::Active::Nsr::XidInfo
        class ReportCard; //type: L2vpnv2::Active::Nsr::ReportCard

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Nsr::FailoverStatus> failover_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Nsr::NsrStatus> nsr_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Nsr::IssuStatus> issu_status;
        ydk::YList xid_info;
        ydk::YList report_card;
        
}; // L2vpnv2::Active::Nsr


class L2vpnv2::Active::Nsr::FailoverStatus : public ydk::Entity
{
    public:
        FailoverStatus();
        ~FailoverStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf triggered_time; //type: uint32
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf master_time; //type: uint32

}; // L2vpnv2::Active::Nsr::FailoverStatus


class L2vpnv2::Active::Nsr::NsrStatus : public ydk::Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nsr_role; //type: uint8
        ydk::YLeaf issu_role; //type: uint8
        class IdtStatus; //type: L2vpnv2::Active::Nsr::NsrStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2vpnv2::Active::Nsr::NsrStatus::PreviOusIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Nsr::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Nsr::NsrStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2vpnv2::Active::Nsr::NsrStatus


class L2vpnv2::Active::Nsr::NsrStatus::IdtStatus : public ydk::Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnHaNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2vpnv2::Active::Nsr::NsrStatus::IdtStatus


class L2vpnv2::Active::Nsr::NsrStatus::PreviOusIdtStatus : public ydk::Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnHaNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2vpnv2::Active::Nsr::NsrStatus::PreviOusIdtStatus


class L2vpnv2::Active::Nsr::IssuStatus : public ydk::Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nsr_role; //type: uint8
        ydk::YLeaf issu_role; //type: uint8
        class IdtStatus; //type: L2vpnv2::Active::Nsr::IssuStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2vpnv2::Active::Nsr::IssuStatus::PreviOusIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Nsr::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Nsr::IssuStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2vpnv2::Active::Nsr::IssuStatus


class L2vpnv2::Active::Nsr::IssuStatus::IdtStatus : public ydk::Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnHaNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2vpnv2::Active::Nsr::IssuStatus::IdtStatus


class L2vpnv2::Active::Nsr::IssuStatus::PreviOusIdtStatus : public ydk::Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sync_status; //type: L2vpnSyncStatus
        ydk::YLeaf not_ready_reason; //type: L2vpnHaNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // L2vpnv2::Active::Nsr::IssuStatus::PreviOusIdtStatus


class L2vpnv2::Active::Nsr::XidInfo : public ydk::Entity
{
    public:
        XidInfo();
        ~XidInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf app_type; //type: L2vpnIdMgrAppBag
        ydk::YLeaf sent_ids; //type: uint32

}; // L2vpnv2::Active::Nsr::XidInfo


class L2vpnv2::Active::Nsr::ReportCard : public ydk::Entity
{
    public:
        ReportCard();
        ~ReportCard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf collaborator_is_connected; //type: boolean
        ydk::YLeaf connection_change_time; //type: uint32
        ydk::YLeaf collaborator_idt_done; //type: boolean
        ydk::YLeaf idt_time; //type: uint32
        ydk::YLeaf collaborator_skipped; //type: boolean
        ydk::YLeaf expect_idt; //type: boolean

}; // L2vpnv2::Active::Nsr::ReportCard


class L2vpnv2::Active::PreferredPaths : public ydk::Entity
{
    public:
        PreferredPaths();
        ~PreferredPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PreferredPath; //type: L2vpnv2::Active::PreferredPaths::PreferredPath

        ydk::YList preferred_path;
        
}; // L2vpnv2::Active::PreferredPaths


class L2vpnv2::Active::PreferredPaths::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf preferred_type; //type: PreferredPathOption
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf type; //type: L2vpnPreferred
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf total_bandwidth; //type: uint32
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf reserved_bandwidth; //type: uint32
        class VirtualCircuit; //type: L2vpnv2::Active::PreferredPaths::PreferredPath::VirtualCircuit

        ydk::YList virtual_circuit;
        
}; // L2vpnv2::Active::PreferredPaths::PreferredPath


class L2vpnv2::Active::PreferredPaths::PreferredPath::VirtualCircuit : public ydk::Entity
{
    public:
        VirtualCircuit();
        ~VirtualCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf pwid_type; //type: L2vpnPwId
        ydk::YLeaf pwid; //type: uint64
        ydk::YLeaf fe_ctype; //type: L2vpnPwFec

}; // L2vpnv2::Active::PreferredPaths::PreferredPath::VirtualCircuit


class L2vpnv2::Active::PseudowireHeadend : public ydk::Entity
{
    public:
        PseudowireHeadend();
        ~PseudowireHeadend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DetailInterfaces; //type: L2vpnv2::Active::PseudowireHeadend::DetailInterfaces
        class Summary; //type: L2vpnv2::Active::PseudowireHeadend::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::PseudowireHeadend::DetailInterfaces> detail_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::PseudowireHeadend::Summary> summary;
        
}; // L2vpnv2::Active::PseudowireHeadend


class L2vpnv2::Active::PseudowireHeadend::DetailInterfaces : public ydk::Entity
{
    public:
        DetailInterfaces();
        ~DetailInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DetailInterface; //type: L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface

        ydk::YList detail_interface;
        
}; // L2vpnv2::Active::PseudowireHeadend::DetailInterfaces


class L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface : public ydk::Entity
{
    public:
        DetailInterface();
        ~DetailInterface();

        bool has_data() const override;
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
        ydk::YLeaf interface_state; //type: PwhePortImState
        ydk::YLeaf admin_state; //type: PwhePortImState
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf l2_overhead; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf control_word; //type: boolean
        class L2Address; //type: L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address
        class GenericInterfaceList; //type: L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address> l2_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList> generic_interface_list;
        
}; // L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface


class L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address : public ydk::Entity
{
    public:
        L2Address();
        ~L2Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_type; //type: L2vpnPwheIntf
        class MacAddress; //type: L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress> mac_address;
        
}; // L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address


class L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress : public ydk::Entity
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

        ydk::YLeaf mac_address; //type: string

}; // L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress


class L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList : public ydk::Entity
{
    public:
        GenericInterfaceList();
        ~GenericInterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf id; //type: uint32
        class InterfaceDetail; //type: L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail

        ydk::YList interface_detail;
        
}; // L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList


class L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail : public ydk::Entity
{
    public:
        InterfaceDetail();
        ~InterfaceDetail();

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
        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf interface_state; //type: PwhePortImState
        ydk::YLeaf replicate_state; //type: L2vpnPwheIflistRepStatus
        ydk::YLeaf misconfigured; //type: boolean

}; // L2vpnv2::Active::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail


class L2vpnv2::Active::PseudowireHeadend::Summary : public ydk::Entity
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

        ydk::YLeaf interfaces; //type: uint32
        ydk::YLeaf up_interfaces; //type: uint32
        ydk::YLeaf down_interfaces; //type: uint32
        ydk::YLeaf admin_down_interfaces; //type: uint32
        ydk::YLeaf psuedowire_ether_interfaces; //type: uint32
        ydk::YLeaf up_psuedowire_ether_interfaces; //type: uint32
        ydk::YLeaf down_pseudowire_ether_interfaces; //type: uint32
        ydk::YLeaf admin_down_pseudowire_ether_interfaces; //type: uint32
        ydk::YLeaf pseudowire_iw_interfaces; //type: uint32
        ydk::YLeaf up_pseudowire_iw_interfaces; //type: uint32
        ydk::YLeaf down_pseudowire_iw_interfaces; //type: uint32
        ydk::YLeaf admin_down_pseudowire_iw_interfaces; //type: uint32

}; // L2vpnv2::Active::PseudowireHeadend::Summary


class L2vpnv2::Active::GlobalSettings : public ydk::Entity
{
    public:
        GlobalSettings();
        ~GlobalSettings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_grouping_enabled; //type: boolean
        ydk::YLeaf pw_status_enabled; //type: boolean
        ydk::YLeaf logging_pw_enabled; //type: boolean
        ydk::YLeaf logging_bd_enabled; //type: boolean
        ydk::YLeaf logging_vfi_enabled; //type: boolean
        ydk::YLeaf logging_nsr_enabled; //type: boolean
        ydk::YLeaf logging_df_election_enabled; //type: boolean
        ydk::YLeaf tcn_propagation_enabled; //type: boolean
        ydk::YLeaf pw_oam_refresh_transmit_time; //type: uint32
        ydk::YLeaf ha_role; //type: string
        ydk::YLeaf issu_role; //type: string
        ydk::YLeaf process_fsm; //type: string
        ydk::YLeaf going_active; //type: boolean

}; // L2vpnv2::Active::GlobalSettings


class L2vpnv2::Active::Pwr : public ydk::Entity
{
    public:
        Pwr();
        ~Pwr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Summary; //type: L2vpnv2::Active::Pwr::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary> summary;
        
}; // L2vpnv2::Active::Pwr


class L2vpnv2::Active::Pwr::Summary : public ydk::Entity
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

        ydk::YLeaf bgp_router_id; //type: string
        ydk::YLeaf cfg_router_id; //type: string
        ydk::YLeaf bgp_as; //type: uint32
        ydk::YLeaf cfg_global_id; //type: uint32
        ydk::YLeaf l2vpn_has_bgp_eod; //type: boolean
        class RdAuto; //type: L2vpnv2::Active::Pwr::Summary::RdAuto
        class RdConfigured; //type: L2vpnv2::Active::Pwr::Summary::RdConfigured

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdAuto> rd_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdConfigured> rd_configured;
        
}; // L2vpnv2::Active::Pwr::Summary


class L2vpnv2::Active::Pwr::Summary::RdAuto : public ydk::Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
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
        class Auto; //type: L2vpnv2::Active::Pwr::Summary::RdAuto::Auto
        class TwoByteAs; //type: L2vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs
        class FourByteAs; //type: L2vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs
        class V4Addr; //type: L2vpnv2::Active::Pwr::Summary::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdAuto::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdAuto::V4Addr> v4_addr;
        
}; // L2vpnv2::Active::Pwr::Summary::RdAuto


class L2vpnv2::Active::Pwr::Summary::RdAuto::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
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

}; // L2vpnv2::Active::Pwr::Summary::RdAuto::Auto


class L2vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs : public ydk::Entity
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

}; // L2vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs


class L2vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs : public ydk::Entity
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

}; // L2vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs


class L2vpnv2::Active::Pwr::Summary::RdAuto::V4Addr : public ydk::Entity
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

}; // L2vpnv2::Active::Pwr::Summary::RdAuto::V4Addr


class L2vpnv2::Active::Pwr::Summary::RdConfigured : public ydk::Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
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
        class Auto; //type: L2vpnv2::Active::Pwr::Summary::RdConfigured::Auto
        class TwoByteAs; //type: L2vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs
        class FourByteAs; //type: L2vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs
        class V4Addr; //type: L2vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdConfigured::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr> v4_addr;
        
}; // L2vpnv2::Active::Pwr::Summary::RdConfigured


class L2vpnv2::Active::Pwr::Summary::RdConfigured::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
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

}; // L2vpnv2::Active::Pwr::Summary::RdConfigured::Auto


class L2vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs : public ydk::Entity
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

}; // L2vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs


class L2vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs : public ydk::Entity
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

}; // L2vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs


class L2vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr : public ydk::Entity
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

}; // L2vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr


class L2vpnv2::Active::XconnectMp2mpCe2ces : public ydk::Entity
{
    public:
        XconnectMp2mpCe2ces();
        ~XconnectMp2mpCe2ces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class XconnectMp2mpCe2ce; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce

        ydk::YList xconnect_mp2mp_ce2ce;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce : public ydk::Entity
{
    public:
        XconnectMp2mpCe2ce();
        ~XconnectMp2mpCe2ce();

        bool has_data() const override;
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
        ydk::YLeaf mp2_mp_name; //type: string
        ydk::YLeaf local_ceid; //type: uint32
        ydk::YLeaf remote_ceid; //type: uint32
        ydk::YLeaf group_name_xr; //type: string
        ydk::YLeaf xconnect_name_xr; //type: string
        ydk::YLeaf number_of_backup_p_ws; //type: uint32
        ydk::YLeaf state; //type: L2vpnXcState
        ydk::YLeaf interworking; //type: L2vpnInterworking
        ydk::YLeaf diag_mask; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf is_mp2mp; //type: boolean
        class Backup; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup
        class Segment1; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Segment1
        class Segment2; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Segment2
        class Ce2ce; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Ce2ce
        class BackupSegment; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::BackupSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup> backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Segment1> segment1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Segment2> segment2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Ce2ce> ce2ce;
        ydk::YList backup_segment;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf segment_type; //type: L2vpnSegment
        class AttachmentCircuit; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit
        class PseudoWire; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::PseudoWire

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit> attachment_circuit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::PseudoWire> pseudo_wire;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit : public ydk::Entity
{
    public:
        AttachmentCircuit();
        ~AttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf state; //type: L2vpnSegmentState
        ydk::YLeaf msti; //type: string
        ydk::YLeaf internal_ms_ti; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf ms_ti_mismatch; //type: boolean
        ydk::YLeaf mtu_mismatched; //type: boolean
        ydk::YLeaf tdm_media_mismatched; //type: boolean
        ydk::YLeaf bvi_mac_conflict; //type: boolean
        ydk::YLeaf bvi_no_port_up; //type: boolean
        ydk::YLeaf control_word_mismatched; //type: boolean
        ydk::YLeaf encapsulation_mismatched; //type: boolean
        ydk::YLeaf encapsulation_error; //type: string
        ydk::YLeaf interworking; //type: L2vpnInterworking
        ydk::YLeaf out_of_memory_state; //type: uint32
        ydk::YLeaf msti_mismatch_down; //type: boolean
        ydk::YLeaf mac_limit_oper_down; //type: boolean
        ydk::YLeaf redundancy_group_id; //type: uint32
        ydk::YLeaf redundancy_group_state; //type: L2vpnRgState
        ydk::YLeaf redundancy_object_id; //type: uint64
        ydk::YLeaf is_ac_partially_programmed; //type: boolean
        ydk::YLeaf evpn_internal_label; //type: uint32
        class Interface; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface
        class Statistics; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics
        class L2vpnProtection; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::L2vpnProtection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface> interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::L2vpnProtection> l2vpn_protection;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters> parameters;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet
        class Vlan; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan
        class Tdm; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm
        class Atm; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Atm
        class Fr; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Fr
        class PseudowireEther; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw> pseudowire_iw;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan : public ydk::Entity
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
        class RewriteTag; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange

        ydk::YList rewrite_tag;
        ydk::YList vlan_range;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Atm


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Fr


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface_; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_

        ydk::YList interface;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface_; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_

        ydk::YList interface;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
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
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics : public ydk::Entity
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

        class ImpostionStats; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats
        class DispostionStats; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats
        class SequenceNumber; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::SequenceNumber> sequence_number;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats : public ydk::Entity
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

        class ImpositionStat; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop
        class L2fsbiDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2fsbiDrop
        class Multicast; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2fsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2fsbiDrop : public ydk::Entity
{
    public:
        L2fsbiDrop();
        ~L2fsbiDrop();

        bool has_data() const override;
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2fsbiDrop


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats : public ydk::Entity
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

        class DispositionStat; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2mpStats; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2mpStats
        class KnownUnicast; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2mpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove> mac_move;
        
}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop


class L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
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

}; // L2vpnv2::Active::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_15_ */

