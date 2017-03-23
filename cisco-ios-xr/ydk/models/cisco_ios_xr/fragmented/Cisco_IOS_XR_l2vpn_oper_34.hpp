#ifndef _CISCO_IOS_XR_L2VPN_OPER_34_
#define _CISCO_IOS_XR_L2VPN_OPER_34_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_28.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_32.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_33.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath : public Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf option; //type: L2VpnPrefpathOptionEnum
        YLeaf next_hop_ip; //type: uint32
        YLeaf te_tunnel_interface_number; //type: uint32
        YLeaf ip_tunnel_interface_number; //type: uint32
        YLeaf tp_tunnel_interface_number; //type: uint32



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling : public Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_status; //type: uint32

        class StatusTlv; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv
        class Tlv; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv> > tlv;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv : public Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling : public Entity
{
    public:
        RemoteSignalling();
        ~RemoteSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_status; //type: uint32

        class StatusTlv; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv> > tlv;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv : public Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpostionStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber> sequence_number;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpositionStat; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DispositionStat; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw : public Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf dhcpv4_trust; //type: boolean

        class Base; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base
        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac : public Entity
{
    public:
        StaticMac();
        ~StaticMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf bmac; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo : public Entity
{
    public:
        BridgeDomainInfo();
        ~BridgeDomainInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_name; //type: string
        YLeaf bridge_name; //type: string
        YLeaf bridge_domain_id; //type: uint32
        YLeaf bridge_description; //type: string
        YLeaf bridge_state; //type: L2VpnBridgeStateEnum
        YLeaf bridge_coupled_state; //type: L2VpnBridgeCoupledStateEnum
        YLeaf bridge_shg_id; //type: uint32
        YLeaf bridge_msti; //type: uint32
        YLeaf acpwup; //type: uint32
        YLeaf bridge_internal_msti; //type: uint32
        YLeaf configured; //type: boolean
        YLeaf number_vf_is; //type: uint32
        YLeaf number_access_vf_is; //type: uint32
        YLeaf number_a_cs; //type: uint32
        YLeaf number_a_cs_up; //type: uint32
        YLeaf number_pseudowires; //type: uint32
        YLeaf number_p_ws_up; //type: uint32
        YLeaf standby_pseudowires; //type: uint32
        YLeaf number_pb_bs; //type: uint8
        YLeaf number_pb_bs_up; //type: uint8
        YLeaf num_vn_is; //type: uint32
        YLeaf num_vn_is_up; //type: uint32
        YLeaf partially_programmed_pseudowires; //type: uint32
        YLeaf partially_programmed_a_cs; //type: uint32
        YLeaf bridge_mtu; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf mac_limit_down; //type: boolean
        YLeaf flodd_group_id_down; //type: boolean
        YLeaf mac_withdraw; //type: boolean
        YLeaf mac_withdraw_access; //type: boolean
        YLeaf mac_withdraw_relay; //type: boolean
        YLeaf mac_withdraw_option; //type: L2VpnBagMacWithdrawOptionEnum
        YLeaf p2mp_enabled; //type: boolean
        YLeaf bridge_type; //type: L2VpnBridgeEnum
        YLeaf vine_fsm_state; //type: string
        YLeaf time_created; //type: string
        YLeaf time_elapsed_creation; //type: string
        YLeaf last_time_status_changed; //type: string
        YLeaf time_elapsed_status_changed; //type: string
        YLeaf load_balance; //type: L2VpnLoadBalEnum
        YLeaf is_bridge_partially_programmed; //type: boolean
        YLeaf evi; //type: uint32
        YLeaf is_rd_configured; //type: boolean
        YLeaf imposition_pkt_count; //type: uint64
        YLeaf imposition_byte_count; //type: uint64
        YLeaf disposition_pkt_count; //type: uint64
        YLeaf disposition_bytecount; //type: uint64
        YLeaf as; //type: uint32
        YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean

        class SecurityParameters; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters
        class PbbParameters; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters
        class EvpnParameters; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters
        class VniParameters; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters
        class Rd; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd
        class MacFilter; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter
        class BridgeVfi; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi
        class BridgeAccessVfi; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi> > bridge_access_vfi;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi> > bridge_vfi;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters> evpn_parameters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter> > mac_filter;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters> pbb_parameters;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd> rd;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters> security_parameters;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters> vni_parameters;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters : public Entity
{
    public:
        PbbParameters();
        ~PbbParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnBridgeEnum

        class PbbEdge; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge
        class PbbCore; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore> pbb_core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge> pbb_edge;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge : public Entity
{
    public:
        PbbEdge();
        ~PbbEdge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf i_sid; //type: uint32
        YLeaf core_bridge_name; //type: string
        YLeaf core_bridge_state; //type: L2VpnBridgeStateEnum
        YLeaf mirp_lite_status; //type: L2VpnMirpLiteStatusEnum
        YLeaf mirp_lite_protocol; //type: L2VpnMirpLiteProtocolInfoEnum

        class EdgePort; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort> edge_port;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort : public Entity
{
    public:
        EdgePort();
        ~EdgePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_id; //type: uint32
        YLeaf unknown_unicast_mac_set; //type: boolean
        YLeaf unknown_unicast_mac; //type: string
        YLeaf edge_port_state; //type: L2VpnVirtualportStateEnum

        class SecurityParameters; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters
        class Statistics; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics
        class BmacMapping; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping> > bmac_mapping;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters> security_parameters;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics> statistics;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf dhcpv4_trust; //type: boolean

        class Base; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base
        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpostionStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber> sequence_number;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpositionStat; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DispositionStat; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop> unicast_drop;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping : public Entity
{
    public:
        BmacMapping();
        ~BmacMapping();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf bmac; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore : public Entity
{
    public:
        PbbCore();
        ~PbbCore();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_ass_edge; //type: uint32

        class CorePort; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort> core_port;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort : public Entity
{
    public:
        CorePort();
        ~CorePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_id; //type: uint32
        YLeaf vlan_id; //type: uint32
        YLeaf core_port_state; //type: L2VpnVirtualportStateEnum

        class SecurityParameters; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters> security_parameters;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf dhcpv4_trust; //type: boolean

        class Base; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base
        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters : public Entity
{
    public:
        EvpnParameters();
        ~EvpnParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evi; //type: uint32

        class EvpnPort; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort> evpn_port;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort : public Entity
{
    public:
        EvpnPort();
        ~EvpnPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_id; //type: uint32
        YLeaf evpn_port_state; //type: L2VpnVirtualportStateEnum

        class SecurityParameters; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters
        class Statistics; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters> security_parameters;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics> statistics;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf dhcpv4_trust; //type: boolean

        class Base; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base
        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpostionStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber> sequence_number;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpositionStat; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DispositionStat; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop> unicast_drop;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters : public Entity
{
    public:
        VniParameters();
        ~VniParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vni; //type: uint32
        YLeaf overlay; //type: string
        YLeaf source_ip_addr; //type: string
        YLeaf multicast_group_addr; //type: string
        YLeaf anycast_vtep_ip_addr; //type: string
        YLeaf anycast_mcast_group_addr; //type: string
        YLeaf udp_port; //type: uint32
        YLeaf vni_encap_type; //type: L2VpnVniEncapsEnum
        YLeaf vni_port_state; //type: L2VpnSegmentStateEnum
        YLeaf vni_mode; //type: L2VpnVniModeEnum
        YLeaf xconnect_id; //type: uint32

        class SecurityParameters; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters
        class Statistics; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics
        class StaticMac; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters> security_parameters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac> > static_mac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics> statistics;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf dhcpv4_trust; //type: boolean

        class Base; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base
        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl> storm_control;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpostionStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber> sequence_number;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpositionStat; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DispositionStat; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop> unicast_drop;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac : public Entity
{
    public:
        StaticMac();
        ~StaticMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf bmac; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd : public Entity
{
    public:
        Rd();
        ~Rd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_
        class TwoByteAs; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs
        class FourByteAs; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs
        class V4Addr; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr> v4_addr;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::Auto_


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::TwoByteAs


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::FourByteAs


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd::V4Addr


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter : public Entity
{
    public:
        MacFilter();
        ~MacFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf bmac; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter


class L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi : public Entity
{
    public:
        BridgeVfi();
        ~BridgeVfi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vfi_name; //type: string
        YLeaf shutdown; //type: boolean
        YLeaf access; //type: boolean
        YLeaf vfi_state; //type: L2VpnVfiStateEnum
        YLeaf number_pseudowires; //type: uint32

        class DiscoveryInformation; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation
        class P2MpInformation; //type: L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::DiscoveryInformation> discovery_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi::P2MpInformation> > p2mp_information;


}; // L2Vpn::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_34_ */

