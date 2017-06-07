#ifndef _CISCO_IOS_XR_L2VPN_OPER_28_
#define _CISCO_IOS_XR_L2VPN_OPER_28_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_20.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_27.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv : public Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ImpostionStats; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ImpositionStat; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DispositionStat; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber


class L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw : public Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_available; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf local_ptree_type; //type: L2VpnP2MpPwPtreeEnum
        YLeaf local_tunnel_id; //type: uint32
        YLeaf local_extended_tunnel_id; //type: string
        YLeaf local_p2mp_id; //type: uint32
        YLeaf local_flags; //type: uint8
        YLeaf remote_available; //type: boolean
        YLeaf remote_label; //type: uint32
        YLeaf remote_ptree_type; //type: L2VpnP2MpPwPtreeEnum
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf remote_extended_tunnel_id; //type: string
        YLeaf remote_p2mp_id; //type: uint32
        YLeaf remote_flags; //type: uint8

}; // L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw


class L2Vpnv2::Nodes::Node::XconnectBrief : public Entity
{
    public:
        XconnectBrief();
        ~XconnectBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_total_up; //type: uint32
        YLeaf main_total_down; //type: uint32
        YLeaf main_total_unresolved; //type: uint32
        YLeaf undefined_xc; //type: uint32
        YLeaf memory_state; //type: L2VpnMemoryStateEnum
        class EncapsulationReportMatrix; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix
        class EncapsulationTotal; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix> > encapsulation_report_matrix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal> > encapsulation_total;
        
}; // L2Vpnv2::Nodes::Node::XconnectBrief


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix : public Entity
{
    public:
        EncapsulationReportMatrix();
        ~EncapsulationReportMatrix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ac1; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1> > ac1;
        
}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1 : public Entity
{
    public:
        Ac1();
        ~Ac1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ac2; //type: L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2> > ac2;
        
}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2 : public Entity
{
    public:
        Ac2();
        ~Ac2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ac1_encapsulation; //type: L2VpnAcEncapEnum
        YLeaf ac2_encapsulation; //type: L2VpnAcEncapEnum
        YLeafList up_count; //type: list of  uint32
        YLeafList down_count; //type: list of  uint32
        YLeafList unresolved_count; //type: list of  uint32

}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2


class L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal : public Entity
{
    public:
        EncapsulationTotal();
        ~EncapsulationTotal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ac1_encapsulation; //type: L2VpnAcEncapEnum
        YLeaf ac2_encapsulation; //type: L2VpnAcEncapEnum
        YLeafList up_count; //type: list of  uint32
        YLeafList down_count; //type: list of  uint32
        YLeafList unresolved_count; //type: list of  uint32

}; // L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal

class L2Vpn : public Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class PseudowireHeadend; //type: L2Vpn::PseudowireHeadend
        class Discoveries; //type: L2Vpn::Discoveries
        class FlexibleXconnectServiceSummary; //type: L2Vpn::FlexibleXconnectServiceSummary
        class MainInterfaces; //type: L2Vpn::MainInterfaces
        class IccpSm; //type: L2Vpn::IccpSm
        class BridgeSummary; //type: L2Vpn::BridgeSummary
        class Nsr; //type: L2Vpn::Nsr
        class GlobalSettings; //type: L2Vpn::GlobalSettings
        class Pwr; //type: L2Vpn::Pwr
        class XconnectMp2MpCe2Ces; //type: L2Vpn::XconnectMp2MpCe2Ces
        class Xconnects; //type: L2Vpn::Xconnects
        class XconnectGroups; //type: L2Vpn::XconnectGroups
        class XconnectMp2Mps; //type: L2Vpn::XconnectMp2Mps
        class Indexes; //type: L2Vpn::Indexes
        class XconnectSummary; //type: L2Vpn::XconnectSummary
        class ProcFsm; //type: L2Vpn::ProcFsm
        class MstpPorts; //type: L2Vpn::MstpPorts
        class GenericInterfaceListDetails; //type: L2Vpn::GenericInterfaceListDetails
        class L2VpnResourceState; //type: L2Vpn::L2VpnResourceState
        class BridgeDomains; //type: L2Vpn::BridgeDomains
        class DiscoverySummary; //type: L2Vpn::DiscoverySummary
        class G8032; //type: L2Vpn::G8032
        class PseudowireClasses; //type: L2Vpn::PseudowireClasses
        class L2VpnCollaborators; //type: L2Vpn::L2VpnCollaborators
        class Mvrp; //type: L2Vpn::Mvrp
        class GenericInterfaces; //type: L2Vpn::GenericInterfaces
        class MstpVlans; //type: L2Vpn::MstpVlans
        class L2VpnPbbBsa; //type: L2Vpn::L2VpnPbbBsa
        class FlexibleXconnectServices; //type: L2Vpn::FlexibleXconnectServices
        class XconnectBrief; //type: L2Vpn::XconnectBrief

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains> bridge_domains;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeSummary> bridge_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries> discoveries;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::DiscoverySummary> discovery_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::FlexibleXconnectServiceSummary> flexible_xconnect_service_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::FlexibleXconnectServices> flexible_xconnect_services;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::G8032> g8032;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::GenericInterfaceListDetails> generic_interface_list_details;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::GenericInterfaces> generic_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::GlobalSettings> global_settings;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm> iccp_sm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Indexes> indexes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::L2VpnCollaborators> l2vpn_collaborators;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::L2VpnPbbBsa> l2vpn_pbb_bsa;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::L2VpnResourceState> l2vpn_resource_state;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MainInterfaces> main_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MstpPorts> mstp_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MstpVlans> mstp_vlans;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Mvrp> mvrp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::ProcFsm> proc_fsm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireHeadend> pseudowire_headend;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr> pwr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::XconnectBrief> xconnect_brief;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::XconnectGroups> xconnect_groups;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::XconnectMp2MpCe2Ces> xconnect_mp2mp_ce2ces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::XconnectMp2Mps> xconnect_mp2mps;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::XconnectSummary> xconnect_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects> xconnects;
        
}; // L2Vpn


class L2Vpn::PseudowireHeadend : public Entity
{
    public:
        PseudowireHeadend();
        ~PseudowireHeadend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DetailInterfaces; //type: L2Vpn::PseudowireHeadend::DetailInterfaces
        class Summary; //type: L2Vpn::PseudowireHeadend::Summary

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireHeadend::DetailInterfaces> detail_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireHeadend::Summary> summary;
        
}; // L2Vpn::PseudowireHeadend


class L2Vpn::PseudowireHeadend::DetailInterfaces : public Entity
{
    public:
        DetailInterfaces();
        ~DetailInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DetailInterface; //type: L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface> > detail_interface;
        
}; // L2Vpn::PseudowireHeadend::DetailInterfaces


class L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface : public Entity
{
    public:
        DetailInterface();
        ~DetailInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_state; //type: PwhePortImStateEnum
        YLeaf admin_state; //type: PwhePortImStateEnum
        YLeaf mtu; //type: uint32
        YLeaf bandwidth; //type: uint32
        YLeaf label; //type: uint32
        YLeaf l2_overhead; //type: uint32
        YLeaf vctype; //type: uint32
        YLeaf control_word; //type: boolean
        class L2Address; //type: L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address
        class GenericInterfaceList; //type: L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList> generic_interface_list;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address> l2_address;
        
}; // L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface


class L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address : public Entity
{
    public:
        L2Address();
        ~L2Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_type; //type: L2VpnPwheIntfEnum
        class MacAddress; //type: L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress> mac_address;
        
}; // L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address


class L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string

}; // L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress


class L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList : public Entity
{
    public:
        GenericInterfaceList();
        ~GenericInterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf generic_interface_list_name; //type: string
        YLeaf id; //type: uint32
        class InterfaceDetail; //type: L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail> > interface_detail;
        
}; // L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList


class L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail : public Entity
{
    public:
        InterfaceDetail();
        ~InterfaceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf bundle_interface_name; //type: string
        YLeaf interface_state; //type: PwhePortImStateEnum
        YLeaf replicate_state; //type: L2VpnPwheIflistRepStatusEnum
        YLeaf misconfigured; //type: boolean

}; // L2Vpn::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail


class L2Vpn::PseudowireHeadend::Summary : public Entity
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

        YLeaf interfaces; //type: uint32
        YLeaf up_interfaces; //type: uint32
        YLeaf down_interfaces; //type: uint32
        YLeaf admin_down_interfaces; //type: uint32
        YLeaf psuedowire_ether_interfaces; //type: uint32
        YLeaf up_psuedowire_ether_interfaces; //type: uint32
        YLeaf down_pseudowire_ether_interfaces; //type: uint32
        YLeaf admin_down_pseudowire_ether_interfaces; //type: uint32
        YLeaf pseudowire_iw_interfaces; //type: uint32
        YLeaf up_pseudowire_iw_interfaces; //type: uint32
        YLeaf down_pseudowire_iw_interfaces; //type: uint32
        YLeaf admin_down_pseudowire_iw_interfaces; //type: uint32

}; // L2Vpn::PseudowireHeadend::Summary


class L2Vpn::Discoveries : public Entity
{
    public:
        Discoveries();
        ~Discoveries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Discovery; //type: L2Vpn::Discoveries::Discovery

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery> > discovery;
        
}; // L2Vpn::Discoveries


class L2Vpn::Discoveries::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_name; //type: L2VpnServiceEnum
        YLeaf group_name; //type: string
        YLeaf vpn_name; //type: string
        YLeaf mtu_mismatch_ignore; //type: boolean
        YLeaf number_vpn; //type: uint32
        YLeaf vpn_id; //type: uint32
        YLeaf service_name_xr; //type: string
        YLeaf group_name_xr; //type: string
        YLeaf vpn_name_xr; //type: string
        YLeaf is_service_connected; //type: boolean
        class SignallingInfo; //type: L2Vpn::Discoveries::Discovery::SignallingInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo> signalling_info;
        
}; // L2Vpn::Discoveries::Discovery


class L2Vpn::Discoveries::Discovery::SignallingInfo : public Entity
{
    public:
        SignallingInfo();
        ~SignallingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ad_signalling_method; //type: L2VpnAdSigMethodEnum
        class BgpSigInfo; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo
        class LdpSigInfo; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo> bgp_sig_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo> ldp_sig_info;
        
}; // L2Vpn::Discoveries::Discovery::SignallingInfo


class L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo : public Entity
{
    public:
        BgpSigInfo();
        ~BgpSigInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_edges; //type: uint32
        YLeaf number_remote_edges; //type: uint32
        class Edge; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge
        class Redge; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge> > edge;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge> > redge;
        
}; // L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo


class L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge : public Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf edge_id; //type: uint32
        YLeaf label_count; //type: uint32
        class LabelBlock; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock> > label_block;
        
}; // L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge


class L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock : public Entity
{
    public:
        LabelBlock();
        ~LabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_time_created; //type: uint32
        YLeaf label_base; //type: uint32
        YLeaf block_offset; //type: uint32
        YLeaf block_size; //type: uint32
        YLeaf local_edge_id; //type: uint32
        YLeaf next_hop; //type: string
        YLeaf label_error; //type: L2VpnAdLsdErrEnum
        YLeafList status_vector; //type: list of  uint8

}; // L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock


class L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge : public Entity
{
    public:
        Redge();
        ~Redge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf edge_id; //type: uint32
        YLeaf label_count; //type: uint32
        class LabelBlock; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock> > label_block;
        
}; // L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge


class L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock : public Entity
{
    public:
        LabelBlock();
        ~LabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_time_created; //type: uint32
        YLeaf label_base; //type: uint32
        YLeaf block_offset; //type: uint32
        YLeaf block_size; //type: uint32
        YLeaf local_edge_id; //type: uint32
        YLeaf next_hop; //type: string
        YLeaf label_error; //type: L2VpnAdLsdErrEnum
        YLeafList status_vector; //type: list of  uint8

}; // L2Vpn::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock


class L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo : public Entity
{
    public:
        LdpSigInfo();
        ~LdpSigInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_l2_router_id; //type: string
        YLeaf number_remote_edges; //type: uint32
        class LocalVplsId; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId
        class RemoteNlri; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId> local_vpls_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri> > remote_nlri;
        
}; // L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo


class L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId : public Entity
{
    public:
        LocalVplsId();
        ~LocalVplsId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum
        class Auto_; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_
        class TwoByteAs; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs
        class V4Addr; //type: L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr> v4_addr;
        
}; // L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId


class L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32

}; // L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_


class L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs


class L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr


class L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri : public Entity
{
    public:
        RemoteNlri();
        ~RemoteNlri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nlri_time_created; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf remote_l2_router_id; //type: string

}; // L2Vpn::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri


class L2Vpn::FlexibleXconnectServiceSummary : public Entity
{
    public:
        FlexibleXconnectServiceSummary();
        ~FlexibleXconnectServiceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_fxc; //type: uint32
        YLeaf number_fxc_up; //type: uint32
        YLeaf number_fxc_down; //type: uint32

}; // L2Vpn::FlexibleXconnectServiceSummary


class L2Vpn::MainInterfaces : public Entity
{
    public:
        MainInterfaces();
        ~MainInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MainInterface; //type: L2Vpn::MainInterfaces::MainInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MainInterfaces::MainInterface> > main_interface;
        
}; // L2Vpn::MainInterfaces


class L2Vpn::MainInterfaces::MainInterface : public Entity
{
    public:
        MainInterface();
        ~MainInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class MainInterfaceInstances; //type: L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances
        class MainInterfaceInfo; //type: L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo> main_interface_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances> main_interface_instances;
        
}; // L2Vpn::MainInterfaces::MainInterface


class L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances : public Entity
{
    public:
        MainInterfaceInstances();
        ~MainInterfaceInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MainInterfaceInstance; //type: L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance> > main_interface_instance;
        
}; // L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances


class L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance : public Entity
{
    public:
        MainInterfaceInstance();
        ~MainInterfaceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance; //type: int32
        class MainInterfaceInstanceInfo; //type: L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo
        class MainInterfaceInstanceBridgePorts; //type: L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts> main_interface_instance_bridge_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo> main_interface_instance_info;
        
}; // L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance


class L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo : public Entity
{
    public:
        MainInterfaceInstanceInfo();
        ~MainInterfaceInstanceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured_instance; //type: uint32
        YLeaf flush_count; //type: uint32
        YLeaf interface_count; //type: uint32
        YLeaf instance_flags; //type: uint32
        YLeaf instance_id; //type: uint32
        YLeaf instance_state; //type: L2VpnMainIfInstanceStateEnum

}; // L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo


class L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts : public Entity
{
    public:
        MainInterfaceInstanceBridgePorts();
        ~MainInterfaceInstanceBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MainInterfaceInstanceBridgePort; //type: L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort> > main_interface_instance_bridge_port;
        
}; // L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts


class L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort : public Entity
{
    public:
        MainInterfaceInstanceBridgePort();
        ~MainInterfaceInstanceBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_port; //type: string
        YLeaf bridge_port_xr; //type: string
        YLeaf instance_id; //type: uint32

}; // L2Vpn::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort


class L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo : public Entity
{
    public:
        MainInterfaceInfo();
        ~MainInterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf main_interface_handle; //type: string
        YLeaf protected_; //type: L2VpnMainIfProtectectedEnum
        YLeaf interface_count; //type: uint32

}; // L2Vpn::MainInterfaces::MainInterface::MainInterfaceInfo


class L2Vpn::IccpSm : public Entity
{
    public:
        IccpSm();
        ~IccpSm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpSmSummary; //type: L2Vpn::IccpSm::IccpSmSummary
        class IccpGroups; //type: L2Vpn::IccpSm::IccpGroups

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups> iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpSmSummary> iccp_sm_summary;
        
}; // L2Vpn::IccpSm


class L2Vpn::IccpSm::IccpSmSummary : public Entity
{
    public:
        IccpSmSummary();
        ~IccpSmSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf groups; //type: uint32
        YLeaf unresolved_groups; //type: uint32
        YLeaf provisioned_groups; //type: uint32
        YLeaf connecting_groups; //type: uint32
        YLeaf connected_groups; //type: uint32
        YLeaf synchronizing_groups; //type: uint32
        YLeaf synchronized_groups; //type: uint32
        YLeaf ports; //type: uint32
        YLeaf operational_ports; //type: uint32
        YLeaf failed_ports; //type: uint32
        YLeaf unknown_ports; //type: uint32
        YLeaf unconfigured_ports; //type: uint32
        YLeaf unsynchronized_ports; //type: uint32
        YLeaf reverting_ports; //type: uint32

}; // L2Vpn::IccpSm::IccpSmSummary


class L2Vpn::IccpSm::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroup; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup> > iccp_group;
        
}; // L2Vpn::IccpSm::IccpGroups


class L2Vpn::IccpSm::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: uint32
        class IccpGroupInfo; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo
        class IccpPorts; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo> iccp_group_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts> iccp_ports;
        
}; // L2Vpn::IccpSm::IccpGroups::IccpGroup


class L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo : public Entity
{
    public:
        IccpGroupInfo();
        ~IccpGroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: uint32
        YLeaf local_node_id; //type: uint8
        YLeaf remote_node_id; //type: uint8
        YLeaf state; //type: IccpSmStateEnum
        YLeaf iccp_transport_up; //type: boolean
        YLeaf iccp_member_up; //type: boolean
        class Ports; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports> > ports;
        
}; // L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo


class L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports : public Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf mac_flush_tcn; //type: boolean
        class LocalPort; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort
        class RemotePort; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort> local_port;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort> remote_port;
        
}; // L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports


class L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort : public Entity
{
    public:
        LocalPort();
        ~LocalPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_state; //type: IccpSmPortStateEnum
        YLeaf port_fail_code; //type: uint8
        YLeaf fsm_state; //type: uint8
        YLeaf vlan_state; //type: uint8
        YLeaf vlan_vector; //type: string
        YLeaf reversion_time; //type: uint32
        YLeaf reversion_time_remaining; //type: uint32

}; // L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort


class L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort : public Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_state; //type: IccpSmPortStateEnum
        YLeaf port_fail_code; //type: uint8
        YLeaf fsm_state; //type: uint8
        YLeaf vlan_state; //type: uint8
        YLeaf vlan_vector; //type: string
        YLeaf reversion_time; //type: uint32
        YLeaf reversion_time_remaining; //type: uint32

}; // L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort


class L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts : public Entity
{
    public:
        IccpPorts();
        ~IccpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpPort; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort> > iccp_port;
        
}; // L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts


class L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort : public Entity
{
    public:
        IccpPort();
        ~IccpPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf interface_name; //type: string
        YLeaf mac_flush_tcn; //type: boolean
        class LocalPort; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort
        class RemotePort; //type: L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort> local_port;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort> remote_port;
        
}; // L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort


class L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort : public Entity
{
    public:
        LocalPort();
        ~LocalPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_state; //type: IccpSmPortStateEnum
        YLeaf port_fail_code; //type: uint8
        YLeaf fsm_state; //type: uint8
        YLeaf vlan_state; //type: uint8
        YLeaf vlan_vector; //type: string
        YLeaf reversion_time; //type: uint32
        YLeaf reversion_time_remaining; //type: uint32

}; // L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort


class L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort : public Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_state; //type: IccpSmPortStateEnum
        YLeaf port_fail_code; //type: uint8
        YLeaf fsm_state; //type: uint8
        YLeaf vlan_state; //type: uint8
        YLeaf vlan_vector; //type: string
        YLeaf reversion_time; //type: uint32
        YLeaf reversion_time_remaining; //type: uint32

}; // L2Vpn::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort


class L2Vpn::BridgeSummary : public Entity
{
    public:
        BridgeSummary();
        ~BridgeSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_groups; //type: uint32
        YLeaf number_bridge_domains; //type: uint32
        YLeaf number_bridge_domains_up; //type: uint32
        YLeaf number_bridge_domains_shut; //type: uint32
        YLeaf number_default_bridge_doamins; //type: uint32
        YLeaf number_pbb_edge; //type: uint32
        YLeaf number_pbb_core; //type: uint32
        YLeaf number_p2mp; //type: uint32
        YLeaf number_p2mp_up; //type: uint32
        YLeaf number_p2mp_down; //type: uint32
        YLeaf number_a_cs; //type: uint32
        YLeaf number_a_cs_up; //type: uint32
        YLeaf number_pseudowires; //type: uint32
        YLeaf number_p_ws_up; //type: uint32
        YLeaf standby_pseudowires; //type: uint32
        YLeaf num_vn_is; //type: uint32
        YLeaf num_vn_is_up; //type: uint32
        YLeaf num_vn_is_down; //type: uint32
        YLeaf num_vn_is_unresolved; //type: uint32
        YLeaf out_of_memory_state; //type: uint32
        YLeaf partially_programmed_bridges; //type: uint32
        YLeaf partially_programmed_pseudowires; //type: uint32
        YLeaf partially_programmed_a_cs; //type: uint32

}; // L2Vpn::BridgeSummary


class L2Vpn::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_role; //type: uint8
        YLeaf process_state; //type: uint8
        YLeaf sync_flags; //type: uint32
        YLeaf sw_install_in_progress; //type: boolean
        YLeafList state_transition_time; //type: list of  uint32
        class FailoverStatus; //type: L2Vpn::Nsr::FailoverStatus
        class NsrStatus; //type: L2Vpn::Nsr::NsrStatus
        class IssuStatus; //type: L2Vpn::Nsr::IssuStatus
        class XidInfo; //type: L2Vpn::Nsr::XidInfo
        class ReportCard; //type: L2Vpn::Nsr::ReportCard
        class EventHistory; //type: L2Vpn::Nsr::EventHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::EventHistory> > event_history;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::FailoverStatus> failover_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::IssuStatus> issu_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::NsrStatus> nsr_status;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::ReportCard> > report_card;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::XidInfo> > xid_info;
        
}; // L2Vpn::Nsr


class L2Vpn::Nsr::FailoverStatus : public Entity
{
    public:
        FailoverStatus();
        ~FailoverStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf triggered_time; //type: uint32
        YLeaf start_time; //type: uint32
        YLeaf master_time; //type: uint32

}; // L2Vpn::Nsr::FailoverStatus


class L2Vpn::Nsr::NsrStatus : public Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: L2VpnProcRoleEnum
        class IdtStatus; //type: L2Vpn::Nsr::NsrStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2Vpn::Nsr::NsrStatus


class L2Vpn::Nsr::NsrStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // L2Vpn::Nsr::NsrStatus::IdtStatus


class L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus : public Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // L2Vpn::Nsr::NsrStatus::PreviOusIdtStatus


class L2Vpn::Nsr::IssuStatus : public Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: L2VpnProcRoleEnum
        class IdtStatus; //type: L2Vpn::Nsr::IssuStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2Vpn::Nsr::IssuStatus


class L2Vpn::Nsr::IssuStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // L2Vpn::Nsr::IssuStatus::IdtStatus


class L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus : public Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // L2Vpn::Nsr::IssuStatus::PreviOusIdtStatus


class L2Vpn::Nsr::XidInfo : public Entity
{
    public:
        XidInfo();
        ~XidInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf app_type; //type: L2VpnIdMgrAppEnum
        YLeaf sent_ids; //type: uint32

}; // L2Vpn::Nsr::XidInfo


class L2Vpn::Nsr::ReportCard : public Entity
{
    public:
        ReportCard();
        ~ReportCard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf collaborator_is_connected; //type: boolean
        YLeaf connection_change_time; //type: uint32
        YLeaf collaborator_idt_done; //type: boolean
        YLeaf idt_time; //type: uint32
        YLeaf collaborator_skipped; //type: boolean

}; // L2Vpn::Nsr::ReportCard


class L2Vpn::Nsr::EventHistory : public Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf previous_state; //type: uint8
        YLeaf new_state; //type: uint8
        YLeaf process_event; //type: uint16
        YLeaf process_collaborator; //type: uint16
        YLeaf event_timestamp; //type: uint32

}; // L2Vpn::Nsr::EventHistory


class L2Vpn::GlobalSettings : public Entity
{
    public:
        GlobalSettings();
        ~GlobalSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_grouping_enabled; //type: boolean
        YLeaf pw_status_enabled; //type: boolean
        YLeaf logging_pw_enabled; //type: boolean
        YLeaf logging_bd_enabled; //type: boolean
        YLeaf logging_vfi_enabled; //type: boolean
        YLeaf logging_nsr_enabled; //type: boolean
        YLeaf logging_df_election_enabled; //type: boolean
        YLeaf tcn_propagation_enabled; //type: boolean
        YLeaf pw_oam_refresh_transmit_time; //type: uint32
        YLeaf ha_role; //type: string
        YLeaf issu_role; //type: string
        YLeaf process_fsm; //type: string
        YLeaf going_active; //type: boolean

}; // L2Vpn::GlobalSettings


class L2Vpn::Pwr : public Entity
{
    public:
        Pwr();
        ~Pwr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: L2Vpn::Pwr::Summary

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary> summary;
        
}; // L2Vpn::Pwr


class L2Vpn::Pwr::Summary : public Entity
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

        YLeaf bgp_router_id; //type: string
        YLeaf cfg_router_id; //type: string
        YLeaf bgp_as; //type: uint32
        YLeaf cfg_global_id; //type: uint32
        YLeaf l2vpn_has_bgp_eod; //type: boolean
        class RdAuto; //type: L2Vpn::Pwr::Summary::RdAuto
        class RdConfigured; //type: L2Vpn::Pwr::Summary::RdConfigured

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdAuto> rd_auto;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdConfigured> rd_configured;
        
}; // L2Vpn::Pwr::Summary


class L2Vpn::Pwr::Summary::RdAuto : public Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rd; //type: L2VpnAdRdEnum
        class Auto_; //type: L2Vpn::Pwr::Summary::RdAuto::Auto_
        class TwoByteAs; //type: L2Vpn::Pwr::Summary::RdAuto::TwoByteAs
        class FourByteAs; //type: L2Vpn::Pwr::Summary::RdAuto::FourByteAs
        class V4Addr; //type: L2Vpn::Pwr::Summary::RdAuto::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdAuto::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdAuto::V4Addr> v4_addr;
        
}; // L2Vpn::Pwr::Summary::RdAuto


class L2Vpn::Pwr::Summary::RdAuto::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16

}; // L2Vpn::Pwr::Summary::RdAuto::Auto_


class L2Vpn::Pwr::Summary::RdAuto::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpn::Pwr::Summary::RdAuto::TwoByteAs


class L2Vpn::Pwr::Summary::RdAuto::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16

}; // L2Vpn::Pwr::Summary::RdAuto::FourByteAs


class L2Vpn::Pwr::Summary::RdAuto::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpn::Pwr::Summary::RdAuto::V4Addr


class L2Vpn::Pwr::Summary::RdConfigured : public Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rd; //type: L2VpnAdRdEnum
        class Auto_; //type: L2Vpn::Pwr::Summary::RdConfigured::Auto_
        class TwoByteAs; //type: L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs
        class FourByteAs; //type: L2Vpn::Pwr::Summary::RdConfigured::FourByteAs
        class V4Addr; //type: L2Vpn::Pwr::Summary::RdConfigured::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdConfigured::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Pwr::Summary::RdConfigured::V4Addr> v4_addr;
        
}; // L2Vpn::Pwr::Summary::RdConfigured


class L2Vpn::Pwr::Summary::RdConfigured::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16

}; // L2Vpn::Pwr::Summary::RdConfigured::Auto_


class L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpn::Pwr::Summary::RdConfigured::TwoByteAs


class L2Vpn::Pwr::Summary::RdConfigured::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16

}; // L2Vpn::Pwr::Summary::RdConfigured::FourByteAs


class L2Vpn::Pwr::Summary::RdConfigured::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpn::Pwr::Summary::RdConfigured::V4Addr


class L2Vpn::XconnectMp2MpCe2Ces : public Entity
{
    public:
        XconnectMp2MpCe2Ces();
        ~XconnectMp2MpCe2Ces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class XconnectMp2MpCe2Ce; //type: L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce> > xconnect_mp2mp_ce2ce;
        
}; // L2Vpn::XconnectMp2MpCe2Ces


class L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce : public Entity
{
    public:
        XconnectMp2MpCe2Ce();
        ~XconnectMp2MpCe2Ce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: string
        YLeaf mp2_mp_name; //type: string
        YLeaf local_ceid; //type: uint32
        YLeaf remote_ceid; //type: uint32
        YLeaf local_customer_edge_id; //type: uint16
        YLeaf remote_customer_edge_id; //type: uint16
        YLeaf ce_added; //type: boolean

}; // L2Vpn::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce


class L2Vpn::Xconnects : public Entity
{
    public:
        Xconnects();
        ~Xconnects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xconnect; //type: L2Vpn::Xconnects::Xconnect

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect> > xconnect;
        
}; // L2Vpn::Xconnects


class L2Vpn::Xconnects::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: string
        YLeaf xconnect_name; //type: string
        YLeaf group_name_xr; //type: string
        YLeaf xconnect_name_xr; //type: string
        YLeaf number_of_backup_p_ws; //type: uint32
        YLeaf state; //type: L2VpnXcStateEnum
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf diag_mask; //type: uint32
        YLeaf description; //type: string
        YLeaf is_mp2mp; //type: boolean
        class Backup; //type: L2Vpn::Xconnects::Xconnect::Backup
        class Segment1; //type: L2Vpn::Xconnects::Xconnect::Segment1
        class Segment2; //type: L2Vpn::Xconnects::Xconnect::Segment2
        class Ce2Ce; //type: L2Vpn::Xconnects::Xconnect::Ce2Ce
        class BackupSegment; //type: L2Vpn::Xconnects::Xconnect::BackupSegment

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup> backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::BackupSegment> > backup_segment;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Ce2Ce> ce2ce;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Segment1> segment1;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Segment2> segment2;
        
}; // L2Vpn::Xconnects::Xconnect


class L2Vpn::Xconnects::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf segment_type; //type: L2VpnSegmentEnum
        class AttachmentCircuit; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit
        class PseudoWire; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit> attachment_circuit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire> pseudo_wire;
        
}; // L2Vpn::Xconnects::Xconnect::Backup


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit : public Entity
{
    public:
        AttachmentCircuit();
        ~AttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: L2VpnSegmentStateEnum
        YLeaf msti; //type: string
        YLeaf internal_ms_ti; //type: string
        YLeaf interface_handle; //type: string
        YLeaf node_id; //type: string
        YLeaf xconnect_id; //type: uint32
        YLeaf ms_ti_mismatch; //type: boolean
        YLeaf mtu_mismatched; //type: boolean
        YLeaf tdm_media_mismatched; //type: boolean
        YLeaf bvi_mac_conflict; //type: boolean
        YLeaf bvi_no_port_up; //type: boolean
        YLeaf control_word_mismatched; //type: boolean
        YLeaf encapsulation_mismatched; //type: boolean
        YLeaf encapsulation_error; //type: string
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf out_of_memory_state; //type: uint32
        YLeaf msti_mismatch_down; //type: boolean
        YLeaf mac_limit_oper_down; //type: boolean
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_group_state; //type: L2VpnRgStateEnum
        YLeaf redundancy_object_id; //type: uint64
        YLeaf is_ac_partially_programmed; //type: boolean
        YLeaf evpn_internal_label; //type: uint32
        class Interface; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface
        class Statistics; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics
        class L2VpnProtection; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection> l2vpn_protection;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics> statistics;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters> parameters;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: L2VpnInterfaceEnum
        class Ethernet; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet
        class Vlan; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan
        class Tdm; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm
        class Atm; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm
        class Fr; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr
        class PseudowireEther; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan> vlan;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xconnect_tags; //type: uint8

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16
        class VlanRange; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum
        class TdmOptions; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32
        class Interface_; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_> > interface;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32
        class Interface_; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_> > interface;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ImpostionStats; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ImpositionStat; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DispositionStat; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber


class L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection : public Entity
{
    public:
        L2VpnProtection();
        ~L2VpnProtection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protection_type; //type: L2VpnProtectionEnum
        YLeaf protection_configured; //type: L2VpnProtectionRoleEnum
        YLeaf protection_name; //type: string
        YLeaf protected_name; //type: string
        YLeaf active; //type: boolean

}; // L2Vpn::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection


class L2Vpn::Xconnects::Xconnect::Backup::PseudoWire : public Entity
{
    public:
        PseudoWire();
        ~PseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_source_address; //type: string
        YLeaf ipv6_local_source_address; //type: string
        YLeaf pseudo_wire_id; //type: uint64
        YLeaf is_pwr_type; //type: boolean
        YLeaf is_evpnvpws_type; //type: boolean
        YLeaf xconnect_id; //type: uint32
        YLeaf state; //type: L2VpnSegmentStateEnum
        YLeaf pseudo_wire_state; //type: L2VpnPwStateEnum
        YLeaf protocol; //type: L2VpnSignallingProtoEnum
        YLeaf pw_class_name; //type: string
        YLeaf tag_rewrite; //type: uint16
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf fe_ctype; //type: L2VpnPwFecEnum
        YLeaf evpn_src_acid; //type: uint32
        YLeaf sequencing_type; //type: L2VpnPwSequenceEnum
        YLeaf resync_enabled; //type: boolean
        YLeaf resync_threshold; //type: uint32
        YLeaf local_control_word; //type: L2VpnPwControlWordEnum
        YLeaf remote_control_word; //type: L2VpnPwControlWordEnum
        YLeaf local_pseudo_wire_type; //type: L2VpnPwEnum
        YLeaf remote_pseudo_wire_type; //type: L2VpnPwEnum
        YLeaf imposed_vlan_id; //type: uint32
        YLeaf time_created; //type: string
        YLeaf time_elapsed_creation; //type: string
        YLeaf last_time_status_changed; //type: string
        YLeaf time_elapsed_status_changed; //type: string
        YLeaf last_time_status_down; //type: string
        YLeaf time_elapsed_status_down; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf pseudo_wire_type_mismatched; //type: boolean
        YLeaf payload_bytes_mismatched; //type: boolean
        YLeaf bitrate_mismatched; //type: boolean
        YLeaf rtp_mismatched; //type: boolean
        YLeaf diff_ts_mismatched; //type: boolean
        YLeaf sig_pkts_mismatched; //type: boolean
        YLeaf cas_mismatched; //type: boolean
        YLeaf payload_type_mismatched; //type: boolean
        YLeaf freq_mismatched; //type: boolean
        YLeaf ssrc_mismatched; //type: boolean
        YLeaf mtu_mismatched; //type: boolean
        YLeaf illegal_control_word; //type: boolean
        YLeaf ad_remote_down; //type: boolean
        YLeaf not_supported_qinq; //type: boolean
        YLeaf local_label_failed; //type: boolean
        YLeaf remote_label_failed; //type: boolean
        YLeaf preferred_path_disable_fallback; //type: boolean
        YLeaf backup_pw; //type: boolean
        YLeaf primary_pw; //type: boolean
        YLeaf backup_active; //type: boolean
        YLeaf backup_force_active; //type: boolean
        YLeaf disable_never; //type: boolean
        YLeaf disable_delay; //type: uint8
        YLeaf primary_peer_id; //type: string
        YLeaf primary_pseudo_wire_id; //type: uint64
        YLeaf number_ma_cwithdraw_message_sent; //type: uint32
        YLeaf num_ma_cwithdraw_msg_received; //type: uint32
        YLeaf out_of_memory_state; //type: uint32
        YLeaf transport_lsp_down; //type: boolean
        YLeaf mac_limit_oper_down; //type: boolean
        YLeaf pw_status_use; //type: boolean
        YLeaf auto_discovery; //type: boolean
        YLeaf ad_method; //type: uint32
        YLeaf pwlsd_rewrite_failed; //type: boolean
        YLeaf ldp_label_advertise_failed; //type: boolean
        YLeaf is_vfi; //type: boolean
        YLeaf is_multi_segment_pseudowire; //type: boolean
        YLeaf pw_redundancy_one_way; //type: boolean
        YLeaf load_balance; //type: L2VpnLoadBalEnum
        YLeaf pw_flow_label_type; //type: L2VpnPwFlowLabelEnum
        YLeaf pw_flow_label_type_cfg; //type: L2VpnPwFlowLabelEnum
        YLeaf pw_flow_label_code17_disabled; //type: boolean
        YLeaf is_flow_label_static; //type: boolean
        YLeaf is_partially_programmed; //type: boolean
        YLeaf pw_redundancy_initial_delay; //type: uint8
        YLeaf bridge_pw_type_mismatch; //type: boolean
        YLeaf required_bw; //type: uint32
        YLeaf admited_bw; //type: uint32
        YLeaf forward_class; //type: uint8
        YLeaf table_policy_name; //type: string
        class PeerId; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PeerId
        class EncapsulationInfo; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo
        class LocalInterface; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface
        class RemoteInterface; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface
        class PreferredPath; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath
        class LocalSignalling; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling
        class RemoteSignalling; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling
        class Statistics; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::Statistics
        class P2MpPw; //type: L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface> local_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling> local_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw> p2mp_pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PeerId> peer_id;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface> remote_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling> remote_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::Xconnects::Xconnect::Backup::PseudoWire::Statistics> statistics;
        
}; // L2Vpn::Xconnects::Xconnect::Backup::PseudoWire


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_28_ */

