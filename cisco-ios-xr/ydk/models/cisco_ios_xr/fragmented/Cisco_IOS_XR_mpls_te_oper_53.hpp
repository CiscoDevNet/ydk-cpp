#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_53_
#define _CISCO_IOS_XR_MPLS_TE_OPER_53_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_52.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability : public Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_type; //type: TeOduLevelEnum
        YLeaf stage1; //type: TeOduLevelEnum
        YLeaf stage2; //type: TeOduLevelEnum
        YLeaf stage3; //type: TeOduLevelEnum
        YLeaf stage4; //type: TeOduLevelEnum
        YLeaf terminable; //type: boolean
        YLeaf switchable; //type: boolean
        YLeaf tsg1p25; //type: boolean
        YLeaf tsg2p5; //type: boolean
        YLeaf vcat_capable; //type: boolean
        YLeaf lcas_capable; //type: boolean
        class BandwidthInfo; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeOduCapabilityEnum
        class Fixed; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_od_us; //type: uint8
        YLeaf unreserved_od_us; //type: uint8

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_bandwidth; //type: uint32
        YLeaf unreserved_bandwidth; //type: uint32
        YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup


class MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjacency_sid; //type: uint32
        YLeaf link_type; //type: IgpSubnetEnum
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string
        YLeaf nbr_node_igpid; //type: string
        YLeaf nbr_node_te_router_id; //type: string
        YLeaf flag_f; //type: boolean
        YLeaf flag_b; //type: boolean
        YLeaf flag_v; //type: boolean
        YLeaf flag_l; //type: boolean
        YLeaf flag_s; //type: boolean

}; // MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid


class MplsTeStandby::AnnounceTunnelsInfo : public Entity
{
    public:
        AnnounceTunnelsInfo();
        ~AnnounceTunnelsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AutorouteAnnounceTable; //type: MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable
        class AllAutorouteTable; //type: MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable> all_autoroute_table;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable> autoroute_announce_table;
        
}; // MplsTeStandby::AnnounceTunnelsInfo


class MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable : public Entity
{
    public:
        AutorouteAnnounceTable();
        ~AutorouteAnnounceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AnnounceDest; //type: MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest> > announce_dest;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable


class MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest : public Entity
{
    public:
        AnnounceDest();
        ~AnnounceDest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf area; //type: int32
        YLeaf igp_id; //type: string
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf destination; //type: string
        YLeaf announced_tunnels_count; //type: uint16
        YLeaf autorouted_tunnels_count; //type: uint16
        YLeaf forwarding_adjacency_tunnels_count; //type: uint16
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        class TotalTunnel; //type: MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel> > total_tunnel;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest


class MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel : public Entity
{
    public:
        TotalTunnel();
        ~TotalTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf tunnel_loadshare; //type: uint32
        YLeaf announce_type; //type: MplsTeTunnelAnnounceEnum
        YLeaf next_hop_address; //type: string
        YLeaf mode; //type: IgpteAaMetricModeEnum
        YLeaf igp_metric; //type: int32
        YLeaf hold_time; //type: uint32
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        YLeaf is_auto_mesh_aa; //type: boolean
        YLeaf is_sr; //type: boolean
        YLeaf is_sr_strict; //type: boolean
        YLeaf mesh_group_idaa; //type: uint32
        YLeaf is_exclude_segment_routing; //type: boolean
        class IgPs; //type: MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs> > ig_ps;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel


class MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs : public Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_area_id; //type: string
        YLeaf afi; //type: MplsTeAfiEnum

}; // MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs


class MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable : public Entity
{
    public:
        AllAutorouteTable();
        ~AllAutorouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AnnounceDest; //type: MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest> > announce_dest;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable


class MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest : public Entity
{
    public:
        AnnounceDest();
        ~AnnounceDest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf area; //type: int32
        YLeaf igp_id; //type: string
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf destination; //type: string
        YLeaf announced_tunnels_count; //type: uint16
        YLeaf autorouted_tunnels_count; //type: uint16
        YLeaf forwarding_adjacency_tunnels_count; //type: uint16
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        class TotalTunnel; //type: MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel> > total_tunnel;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest


class MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel : public Entity
{
    public:
        TotalTunnel();
        ~TotalTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf tunnel_loadshare; //type: uint32
        YLeaf announce_type; //type: MplsTeTunnelAnnounceEnum
        YLeaf next_hop_address; //type: string
        YLeaf mode; //type: IgpteAaMetricModeEnum
        YLeaf igp_metric; //type: int32
        YLeaf hold_time; //type: uint32
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        YLeaf is_auto_mesh_aa; //type: boolean
        YLeaf is_sr; //type: boolean
        YLeaf is_sr_strict; //type: boolean
        YLeaf mesh_group_idaa; //type: uint32
        YLeaf is_exclude_segment_routing; //type: boolean
        class IgPs; //type: MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs> > ig_ps;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel


class MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs : public Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_area_id; //type: string
        YLeaf afi; //type: MplsTeAfiEnum

}; // MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs


class MplsTeStandby::CollaboratorTimers : public Entity
{
    public:
        CollaboratorTimers();
        ~CollaboratorTimers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class P2MpTimer; //type: MplsTeStandby::CollaboratorTimers::P2MpTimer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::CollaboratorTimers::P2MpTimer> > p2mp_timer;
        
}; // MplsTeStandby::CollaboratorTimers


class MplsTeStandby::CollaboratorTimers::P2MpTimer : public Entity
{
    public:
        P2MpTimer();
        ~P2MpTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timer_type; //type: MplsTeP2MpTimerEnum
        YLeaf timer_name; //type: string
        YLeaf start_time; //type: uint32
        YLeaf expiry_time; //type: uint32
        YLeaf stop_time; //type: uint32
        YLeaf duration; //type: uint32
        YLeaf is_running; //type: boolean

}; // MplsTeStandby::CollaboratorTimers::P2MpTimer


class MplsTeStandby::AutoTunnel : public Entity
{
    public:
        AutoTunnel();
        ~AutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pcc; //type: MplsTeStandby::AutoTunnel::Pcc
        class Mesh; //type: MplsTeStandby::AutoTunnel::Mesh
        class Backup; //type: MplsTeStandby::AutoTunnel::Backup

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup> backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh> mesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Pcc> pcc;
        
}; // MplsTeStandby::AutoTunnel


class MplsTeStandby::AutoTunnel::Pcc : public Entity
{
    public:
        Pcc();
        ~Pcc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: MplsTeStandby::AutoTunnel::Pcc::Summary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Pcc::Summary> summary;
        
}; // MplsTeStandby::AutoTunnel::Pcc


class MplsTeStandby::AutoTunnel::Pcc::Summary : public Entity
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

        YLeaf pcc_auto_tunnel; //type: uint32
        YLeaf up_pcc_auto_tunnels; //type: uint32
        YLeaf down_pcc_auto_tunnels; //type: uint32

}; // MplsTeStandby::AutoTunnel::Pcc::Summary


class MplsTeStandby::AutoTunnel::Mesh : public Entity
{
    public:
        Mesh();
        ~Mesh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MeshGroups; //type: MplsTeStandby::AutoTunnel::Mesh::MeshGroups
        class Statistics; //type: MplsTeStandby::AutoTunnel::Mesh::Statistics
        class Summary; //type: MplsTeStandby::AutoTunnel::Mesh::Summary
        class Config; //type: MplsTeStandby::AutoTunnel::Mesh::Config
        class OneHop; //type: MplsTeStandby::AutoTunnel::Mesh::OneHop

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::Config> config;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::MeshGroups> mesh_groups;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::OneHop> one_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::Summary> summary;
        
}; // MplsTeStandby::AutoTunnel::Mesh


class MplsTeStandby::AutoTunnel::Mesh::MeshGroups : public Entity
{
    public:
        MeshGroups();
        ~MeshGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MeshGroup; //type: MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup> > mesh_group;
        
}; // MplsTeStandby::AutoTunnel::Mesh::MeshGroups


class MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup : public Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mesh_group_id; //type: uint32
        YLeaf mesh_group_id_xr; //type: uint32
        YLeaf is_meshgroup_disabled; //type: boolean
        YLeaf attribute_set_name; //type: string
        YLeaf is_attribute_set_configured; //type: boolean
        YLeaf is_attribute_set_in_db; //type: boolean
        YLeaf destination_list_name; //type: string
        YLeaf is_destination_list_configured; //type: boolean
        YLeaf destination_list_type; //type: TeAclEnum
        YLeaf remaining_time; //type: uint32
        YLeaf auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_total_destinations; //type: uint32
        YLeaf up_auto_mesh_tunnels; //type: uint32
        YLeaf down_auto_mesh_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_group_type; //type: TeMeshgroupEnum
        class Destination; //type: MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination> > destination;
        
}; // MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup


class MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf operational_status; //type: MplsTeTunnelStateEnum
        YLeaf remaining_time; //type: uint32

}; // MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination


class MplsTeStandby::AutoTunnel::Mesh::Statistics : public Entity
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

        YLeaf created; //type: uint32
        YLeaf connected; //type: uint32
        YLeaf removed_unused; //type: uint32
        YLeaf removed_in_use; //type: uint32
        YLeaf removed_range_exceeded; //type: uint32
        YLeaf last_cleared_time; //type: uint32

}; // MplsTeStandby::AutoTunnel::Mesh::Statistics


class MplsTeStandby::AutoTunnel::Mesh::Summary : public Entity
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

        YLeaf auto_mesh_tunnels; //type: uint32
        YLeaf up_auto_mesh_tunnels; //type: uint32
        YLeaf down_auto_mesh_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_groups; //type: uint32
        YLeaf auto_mesh_destinations; //type: uint32

}; // MplsTeStandby::AutoTunnel::Mesh::Summary


class MplsTeStandby::AutoTunnel::Mesh::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_configured; //type: boolean
        YLeaf unused_removal_timeout_configured; //type: uint32
        YLeaf min_tunnel_id; //type: uint16
        YLeaf max_tunnel_id; //type: uint16

}; // MplsTeStandby::AutoTunnel::Mesh::Config


class MplsTeStandby::AutoTunnel::Mesh::OneHop : public Entity
{
    public:
        OneHop();
        ~OneHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interfaces; //type: MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces
        class Statistics; //type: MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics
        class Summary; //type: MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary> summary;
        
}; // MplsTeStandby::AutoTunnel::Mesh::OneHop


class MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface> > interface;
        
}; // MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces


class MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        class Tunnel; //type: MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel> > tunnel;
        
}; // MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface


class MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_id; //type: uint16
        YLeaf destination_address; //type: string
        YLeaf tunnel_lspid; //type: uint16
        YLeaf mesh_group_id; //type: uint32
        YLeaf tunnel_state; //type: MplsTeTunnelStateEnum

}; // MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel


class MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics : public Entity
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

        YLeaf created; //type: uint32
        YLeaf connected; //type: uint32
        YLeaf removed_unused; //type: uint32
        YLeaf removed_in_use; //type: uint32
        YLeaf removed_range_exceeded; //type: uint32
        YLeaf last_cleared_time; //type: uint32

}; // MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics


class MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary : public Entity
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

        YLeaf auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf up_auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf down_auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_one_hop_groups; //type: uint32
        YLeaf auto_mesh_one_hop_destinations; //type: uint32

}; // MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary


class MplsTeStandby::AutoTunnel::Backup : public Entity
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

        class Tunnels; //type: MplsTeStandby::AutoTunnel::Backup::Tunnels
        class Statistics; //type: MplsTeStandby::AutoTunnel::Backup::Statistics
        class Summary; //type: MplsTeStandby::AutoTunnel::Backup::Summary
        class Config; //type: MplsTeStandby::AutoTunnel::Backup::Config

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Config> config;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Tunnels> tunnels;
        
}; // MplsTeStandby::AutoTunnel::Backup


class MplsTeStandby::AutoTunnel::Backup::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tunnel; //type: MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel> > tunnel;
        
}; // MplsTeStandby::AutoTunnel::Backup::Tunnels


class MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup_tunnel_name; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf operational_status; //type: MplsTeTunnelStateEnum
        YLeaf srlg_mode; //type: AutoBackupSrlgModeEnum
        YLeaf atb_protection_type; //type: AutoBackupProtectionEnum
        YLeaf protected_flows; //type: uint32
        YLeaf protected_interface_name; //type: string
        YLeaf protected_router_id; //type: string

}; // MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel


class MplsTeStandby::AutoTunnel::Backup::Statistics : public Entity
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

        YLeaf last_cleared_time; //type: uint32
        class Created; //type: MplsTeStandby::AutoTunnel::Backup::Statistics::Created
        class Connected; //type: MplsTeStandby::AutoTunnel::Backup::Statistics::Connected
        class RemovedDown; //type: MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown
        class RemovedUnused; //type: MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused
        class RemovedInUse; //type: MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse
        class RemovedRangeExceeded; //type: MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Statistics::Connected> connected;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Statistics::Created> created;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown> removed_down;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse> removed_in_use;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded> removed_range_exceeded;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused> removed_unused;
        
}; // MplsTeStandby::AutoTunnel::Backup::Statistics


class MplsTeStandby::AutoTunnel::Backup::Statistics::Created : public Entity
{
    public:
        Created();
        ~Created();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32

}; // MplsTeStandby::AutoTunnel::Backup::Statistics::Created


class MplsTeStandby::AutoTunnel::Backup::Statistics::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32

}; // MplsTeStandby::AutoTunnel::Backup::Statistics::Connected


class MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown : public Entity
{
    public:
        RemovedDown();
        ~RemovedDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32

}; // MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown


class MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused : public Entity
{
    public:
        RemovedUnused();
        ~RemovedUnused();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32

}; // MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused


class MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse : public Entity
{
    public:
        RemovedInUse();
        ~RemovedInUse();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32

}; // MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse


class MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded : public Entity
{
    public:
        RemovedRangeExceeded();
        ~RemovedRangeExceeded();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_tunnels; //type: uint32
        YLeaf next_hop_tunnels; //type: uint32
        YLeaf next_next_hop_tunnels; //type: uint32

}; // MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded


class MplsTeStandby::AutoTunnel::Backup::Summary : public Entity
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

        YLeaf autobackups; //type: uint32
        YLeaf up_autobackups; //type: uint32
        YLeaf down_autobackups; //type: uint32
        YLeaf unused_autobackups; //type: uint32
        YLeaf next_hop_autobackups; //type: uint32
        YLeaf next_next_hop_autobackups; //type: uint32
        YLeaf srlg_strict_autobackups; //type: uint32
        YLeaf srlg_preferred_autobackups; //type: uint32
        YLeaf srlg_weighted_autobackups; //type: uint32
        YLeaf next_hop_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_next_hop_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_hop_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_next_hop_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_hop_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_next_hop_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_s2_ls; //type: uint32

}; // MplsTeStandby::AutoTunnel::Backup::Summary


class MplsTeStandby::AutoTunnel::Backup::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_configured; //type: boolean
        YLeaf interface_count; //type: uint32
        YLeaf unused_removal_timeout_configured; //type: uint32
        YLeaf min_tunnel_id; //type: uint16
        YLeaf max_tunnel_id; //type: uint16

}; // MplsTeStandby::AutoTunnel::Backup::Config


class MplsTeStandby::SoftPreemption : public Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Statistics; //type: MplsTeStandby::SoftPreemption::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SoftPreemption::Statistics> statistics;
        
}; // MplsTeStandby::SoftPreemption


class MplsTeStandby::SoftPreemption::Statistics : public Entity
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

        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf soft_preemption_events; //type: uint32
        YLeaf soft_preempted_ls_ps; //type: uint32
        YLeaf timed_out_soft_preempted_lsp_ss; //type: uint32
        YLeaf torn_down_soft_preempted_ls_ps; //type: uint32
        YLeaf frr_triggered_soft_preempted_lsp_ss; //type: uint32
        YLeaf minimum_time_in_soft_preempted_state; //type: uint16
        YLeaf time_in_soft_preempted_state_max; //type: uint16
        YLeaf time_in_soft_preempted_state_avg; //type: uint16
        YLeaf soft_preempted_head_ls_ps; //type: uint32
        YLeaf reoptimized_soft_preempted_ls_ps; //type: uint32
        YLeaf torndown_soft_preempted_ls_ps; //type: uint32
        YLeaf path_protected_switchover_soft_preempted_ls_ps; //type: uint32

}; // MplsTeStandby::SoftPreemption::Statistics


class MplsTeStandby::ForwardingAdjacencyDestinations : public Entity
{
    public:
        ForwardingAdjacencyDestinations();
        ~ForwardingAdjacencyDestinations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ForwardingAdjacencyDestination; //type: MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination> > forwarding_adjacency_destination;
        
}; // MplsTeStandby::ForwardingAdjacencyDestinations


class MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination : public Entity
{
    public:
        ForwardingAdjacencyDestination();
        ~ForwardingAdjacencyDestination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf adjacencies; //type: uint32
        YLeaf ipv6_adjacencies; //type: uint32
        YLeaf destination_address_xr; //type: string
        class ForwardAdjacency; //type: MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency> > forward_adjacency;
        
}; // MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination


class MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency : public Entity
{
    public:
        ForwardAdjacency();
        ~ForwardAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        YLeaf traffic_share; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf is_adjacency_up; //type: boolean
        class IgPs; //type: MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs> > ig_ps;
        
}; // MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency


class MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs : public Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_area_id; //type: string
        YLeaf afi; //type: MplsTeAfiEnum

}; // MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs


class MplsTeStandby::IgpAreas : public Entity
{
    public:
        IgpAreas();
        ~IgpAreas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IgpArea; //type: MplsTeStandby::IgpAreas::IgpArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea> > igp_area;
        
}; // MplsTeStandby::IgpAreas


class MplsTeStandby::IgpAreas::IgpArea : public Entity
{
    public:
        IgpArea();
        ~IgpArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf process_tag; //type: string
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf instance_name; //type: string
        YLeaf igp_system_id; //type: string
        YLeaf configured_te_router_id; //type: string
        YLeaf global_router_id; //type: string
        YLeaf globall_router_id_optical; //type: string
        YLeaf in_use_te_router_id; //type: string
        YLeaf is_connection_up; //type: boolean
        YLeaf connection_up_count; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeafList secondary_router_id; //type: list of  string
        class Area; //type: MplsTeStandby::IgpAreas::IgpArea::Area

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea::Area> > area;
        
}; // MplsTeStandby::IgpAreas::IgpArea


class MplsTeStandby::IgpAreas::IgpArea::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_index; //type: uint32
        YLeaf area_number; //type: uint32
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        YLeaf is_config_ready; //type: boolean
        class ActiveData; //type: MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData> active_data;
        
}; // MplsTeStandby::IgpAreas::IgpArea::Area


class MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData : public Entity
{
    public:
        ActiveData();
        ~ActiveData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interfaces_count; //type: uint32
        YLeaf link_idt_received; //type: boolean
        YLeaf topology_idt_received; //type: boolean
        YLeaf sr_strict; //type: boolean
        YLeaf p2p_heads_count; //type: uint32
        YLeaf p2p_autoroute_announced_count; //type: uint32
        YLeaf p2p_forwarding_adjacency_count; //type: uint32
        YLeaf p2mp_destination_count; //type: uint32
        YLeaf tunnel_loose_hops; //type: uint32
        class AreaStatistics; //type: MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics> area_statistics;
        
}; // MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData


class MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics : public Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_adjacency_request_messages; //type: uint32
        YLeaf area_adjacency_announce_messages; //type: uint32
        YLeaf area_flood_messages; //type: uint32
        YLeaf area_lsa_announce_messages; //type: uint32
        YLeaf area_lsa_fragment_announce_messages; //type: uint32
        YLeaf area_lsa_delete_messages; //type: uint32
        YLeaf area_lsa_fragment_delete_messages; //type: uint32
        YLeaf area_tunnel_announce_messages; //type: uint32

}; // MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics


class MplsTeStandby::WrapProtection : public Entity
{
    public:
        WrapProtection();
        ~WrapProtection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtectedLsps; //type: MplsTeStandby::WrapProtection::ProtectedLsps

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::WrapProtection::ProtectedLsps> protected_lsps;
        
}; // MplsTeStandby::WrapProtection


class MplsTeStandby::WrapProtection::ProtectedLsps : public Entity
{
    public:
        ProtectedLsps();
        ~ProtectedLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtectedLsp; //type: MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp> > protected_lsp;
        
}; // MplsTeStandby::WrapProtection::ProtectedLsps


class MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp : public Entity
{
    public:
        ProtectedLsp();
        ~ProtectedLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: int32
        YLeaf sub_group_id; //type: int32
        YLeaf sub_group_originator; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf session_type; //type: CtypeEnum
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf tunnel_id_xr; //type: uint16
        YLeaf extended_tunnel_id_xr; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_instance; //type: uint32
        YLeaf lsp_wrap_protection_enable; //type: boolean
        YLeaf lsp_wrap_protection_label; //type: uint32
        YLeaf reverse_egress_interface; //type: string
        YLeaf reverse_lsp_label; //type: uint32
        YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapStateEnum
        YLeaf sub_group_original_id; //type: string
        YLeaf sub_group_id_xr; //type: uint16
        YLeaf p2mp_id_xr; //type: uint32

}; // MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp


class MplsTeStandby::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Global; //type: MplsTeStandby::Topology::Global
        class DestinationPaths; //type: MplsTeStandby::Topology::DestinationPaths
        class ConfiguredSrlgs; //type: MplsTeStandby::Topology::ConfiguredSrlgs
        class Srlgs; //type: MplsTeStandby::Topology::Srlgs
        class PathTunnels; //type: MplsTeStandby::Topology::PathTunnels

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::ConfiguredSrlgs> configured_srlgs;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths> destination_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Global> global;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels> path_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs> srlgs;
        
}; // MplsTeStandby::Topology


class MplsTeStandby::Topology::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hold_down_interval; //type: uint32
        YLeaf link_add_remove_count; //type: uint32
        YLeaf local_model_id; //type: uint32
        class Areas; //type: MplsTeStandby::Topology::Global::Areas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Global::Areas> > areas;
        
}; // MplsTeStandby::Topology::Global


class MplsTeStandby::Topology::Global::Areas : public Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: IgpProtocolEnum
        YLeaf node_id; //type: string
        YLeaf area_id; //type: string
        class LocalSidAndSrbg; //type: MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg> local_sid_and_srbg;
        
}; // MplsTeStandby::Topology::Global::Areas


class MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg : public Entity
{
    public:
        LocalSidAndSrbg();
        ~LocalSidAndSrbg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf segment_id; //type: uint32
        YLeaf segment_id_local_absolute_value; //type: uint32
        YLeaf srgb_start; //type: uint32
        YLeaf srgb_size; //type: uint32

}; // MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg


class MplsTeStandby::Topology::DestinationPaths : public Entity
{
    public:
        DestinationPaths();
        ~DestinationPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestinationPath; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath> > destination_path;
        
}; // MplsTeStandby::Topology::DestinationPaths


class MplsTeStandby::Topology::DestinationPaths::DestinationPath : public Entity
{
    public:
        DestinationPath();
        ~DestinationPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf affinity_bits; //type: int32
        YLeaf affinity_mask; //type: int32
        YLeaf setup_priority; //type: int32
        YLeaf hold_priority; //type: int32
        YLeaf bandwidth; //type: int32
        YLeaf igp_type; //type: MplsTeIgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: int32
        YLeaf hop_limit; //type: int32
        YLeaf exclude_srlg_ip_address; //type: string
        YLeaf path_type; //type: MplsTePathEnum
        YLeaf path_id; //type: int32
        YLeaf path_name; //type: string
        YLeaf cost_limit; //type: int32
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf destination_address_xr; //type: string
        YLeaf is_partial_path; //type: boolean
        YLeaf is_full_path; //type: boolean
        YLeaf is_topology_checked; //type: boolean
        YLeaf is_segment_routing_db_checked; //type: boolean
        YLeaf requested_bandwidth; //type: uint64
        YLeaf bandwidth_type; //type: uint64
        YLeaf mininum_bandwidth; //type: uint64
        YLeaf accumulated_admin_weight; //type: uint64
        YLeaf setup_priority_xr; //type: uint32
        YLeaf hold_priority_xr; //type: uint32
        YLeaf node_hop_count; //type: uint8
        YLeaf exclude_srlg_address; //type: string
        YLeafList hop; //type: list of  string
        class Affinity; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity
        class SharedRiskLinkGroup; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup
        class SrSegment; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity> affinity;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment> > sr_segment;
        
}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32

}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string

}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup


class MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment : public Entity
{
    public:
        SrSegment();
        ~SrSegment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_type; //type: TeSrSidEnum
        YLeaf has_ip_addresses; //type: boolean
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string
        YLeaf has_mpls_label; //type: boolean
        YLeaf mpls_label_value; //type: uint32
        YLeaf has_entropy_label; //type: boolean

}; // MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment


class MplsTeStandby::Topology::ConfiguredSrlgs : public Entity
{
    public:
        ConfiguredSrlgs();
        ~ConfiguredSrlgs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConfiguredSrlg; //type: MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg> > configured_srlg;
        
}; // MplsTeStandby::Topology::ConfiguredSrlgs


class MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg : public Entity
{
    public:
        ConfiguredSrlg();
        ~ConfiguredSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_number; //type: int32
        YLeaf srlg_number_xr; //type: uint32
        YLeaf srlg_name; //type: string
        YLeaf admin_weight; //type: uint32
        YLeaf is_admin_weight_configured; //type: boolean
        class SrlgLink; //type: MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink> > srlg_link;
        
}; // MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg


class MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink : public Entity
{
    public:
        SrlgLink();
        ~SrlgLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string

}; // MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink


class MplsTeStandby::Topology::Srlgs : public Entity
{
    public:
        Srlgs();
        ~Srlgs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Srlg; //type: MplsTeStandby::Topology::Srlgs::Srlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg> > srlg;
        
}; // MplsTeStandby::Topology::Srlgs


class MplsTeStandby::Topology::Srlgs::Srlg : public Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_number; //type: int32
        YLeaf srlg_name; //type: string
        YLeaf admin_weight; //type: uint32
        class SrlgAreas; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas> > srlg_areas;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas : public Entity
{
    public:
        SrlgAreas();
        ~SrlgAreas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf igp_area_format; //type: IgpOspfAreaFormatEnum
        class SrlgLink; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink> > srlg_link;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink : public Entity
{
    public:
        SrlgLink();
        ~SrlgLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_address; //type: string
        YLeaf te_router_id; //type: string
        class LinkAddressGeneric; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric> link_address_generic;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric : public Entity
{
    public:
        LinkAddressGeneric();
        ~LinkAddressGeneric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TeAddr; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr> te_addr;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr : public Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeAddrEnum
        YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr


class MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress : public Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf interface_index; //type: uint32

}; // MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::Topology::PathTunnels : public Entity
{
    public:
        PathTunnels();
        ~PathTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PathTunnel; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel> > path_tunnel;
        
}; // MplsTeStandby::Topology::PathTunnels


class MplsTeStandby::Topology::PathTunnels::PathTunnel : public Entity
{
    public:
        PathTunnel();
        ~PathTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf destination_address_xr; //type: string
        YLeaf is_partial_path; //type: boolean
        YLeaf is_full_path; //type: boolean
        YLeaf is_topology_checked; //type: boolean
        YLeaf is_segment_routing_db_checked; //type: boolean
        YLeaf requested_bandwidth; //type: uint64
        YLeaf bandwidth_type; //type: uint64
        YLeaf mininum_bandwidth; //type: uint64
        YLeaf accumulated_admin_weight; //type: uint64
        YLeaf setup_priority_xr; //type: uint32
        YLeaf hold_priority_xr; //type: uint32
        YLeaf node_hop_count; //type: uint8
        YLeaf exclude_srlg_address; //type: string
        YLeafList hop; //type: list of  string
        class Affinity; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity
        class SharedRiskLinkGroup; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup
        class SrSegment; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity> affinity;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment> > sr_segment;
        
}; // MplsTeStandby::Topology::PathTunnels::PathTunnel


class MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity


class MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32

}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity


class MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string

}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup


class MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment : public Entity
{
    public:
        SrSegment();
        ~SrSegment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_type; //type: TeSrSidEnum
        YLeaf has_ip_addresses; //type: boolean
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string
        YLeaf has_mpls_label; //type: boolean
        YLeaf mpls_label_value; //type: uint32
        YLeaf has_entropy_label; //type: boolean

}; // MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment


class MplsTeStandby::SignallingCounters : public Entity
{
    public:
        SignallingCounters();
        ~SignallingCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Issu; //type: MplsTeStandby::SignallingCounters::Issu
        class HeadsCounters; //type: MplsTeStandby::SignallingCounters::HeadsCounters
        class MidsCounters; //type: MplsTeStandby::SignallingCounters::MidsCounters
        class HeadSignallingCounters; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters
        class RemoteSignallingCounters; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters
        class TailsCounters; //type: MplsTeStandby::SignallingCounters::TailsCounters
        class Signallings; //type: MplsTeStandby::SignallingCounters::Signallings
        class SignallingSummary; //type: MplsTeStandby::SignallingCounters::SignallingSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters> head_signalling_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadsCounters> heads_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::MidsCounters> mids_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters> remote_signalling_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::SignallingSummary> signalling_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings> signallings;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::TailsCounters> tails_counters;
        
}; // MplsTeStandby::SignallingCounters


class MplsTeStandby::SignallingCounters::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf role; //type: TeProcRoleEnum
        YLeaf last_idt_states; //type: uint32
        YLeaf total_states; //type: uint32
        YLeaf total_deletions; //type: uint32
        YLeaf total_nac_ks; //type: uint64
        YLeaf total_id_ts; //type: uint32

}; // MplsTeStandby::SignallingCounters::Issu


class MplsTeStandby::SignallingCounters::HeadsCounters : public Entity
{
    public:
        HeadsCounters();
        ~HeadsCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HeadsCounter; //type: MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter> > heads_counter;
        
}; // MplsTeStandby::SignallingCounters::HeadsCounters


class MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter : public Entity
{
    public:
        HeadsCounter();
        ~HeadsCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf lsp_id; //type: uint16
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics
        class DestinationStatistic; //type: MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic> > destination_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter


class MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics


class MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic : public Entity
{
    public:
        DestinationStatistic();
        ~DestinationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic


class MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics


class MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic


class MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::MidsCounters : public Entity
{
    public:
        MidsCounters();
        ~MidsCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MidsCounter; //type: MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter> > mids_counter;
        
}; // MplsTeStandby::SignallingCounters::MidsCounters


class MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter : public Entity
{
    public:
        MidsCounter();
        ~MidsCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: int32
        YLeaf tunnel_name; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter


class MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics


class MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic


class MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::HeadSignallingCounters : public Entity
{
    public:
        HeadSignallingCounters();
        ~HeadSignallingCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HeadSignallingCounter; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter> > head_signalling_counter;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter : public Entity
{
    public:
        HeadSignallingCounter();
        ~HeadSignallingCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf lsp_id; //type: uint16
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics
        class DestinationStatistic; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic> > destination_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic : public Entity
{
    public:
        DestinationStatistic();
        ~DestinationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic


class MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters : public Entity
{
    public:
        RemoteSignallingCounters();
        ~RemoteSignallingCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteSignallingCounter; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter> > remote_signalling_counter;
        
}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter : public Entity
{
    public:
        RemoteSignallingCounter();
        ~RemoteSignallingCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf lsp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: int32
        YLeaf tunnel_name; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic


class MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::TailsCounters : public Entity
{
    public:
        TailsCounters();
        ~TailsCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TailsCounter; //type: MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter> > tails_counter;
        
}; // MplsTeStandby::SignallingCounters::TailsCounters


class MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter : public Entity
{
    public:
        TailsCounter();
        ~TailsCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: int32
        YLeaf tunnel_name; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter


class MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics


class MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic


class MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::Signallings : public Entity
{
    public:
        Signallings();
        ~Signallings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Signalling; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling> > signalling;
        
}; // MplsTeStandby::SignallingCounters::Signallings


class MplsTeStandby::SignallingCounters::Signallings::Signalling : public Entity
{
    public:
        Signalling();
        ~Signalling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf lsp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: int32
        class TeSignallingFilterData; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData> te_signalling_filter_data;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData : public Entity
{
    public:
        TeSignallingFilterData();
        ~TeSignallingFilterData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf statistics_filter; //type: TeStatsSigFilterEnum
        class TeSignallingFilterVif; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif
        class TeSignallingFilterLsp; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp> te_signalling_filter_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif> te_signalling_filter_vif;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif : public Entity
{
    public:
        TeSignallingFilterVif();
        ~TeSignallingFilterVif();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf lsp_id; //type: uint16
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics
        class DestinationStatistic; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic> > destination_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic : public Entity
{
    public:
        DestinationStatistic();
        ~DestinationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp : public Entity
{
    public:
        TeSignallingFilterLsp();
        ~TeSignallingFilterLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics
        class S2LStatistic; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string
        class Statistics; //type: MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics> statistics;
        
}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic


class MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics : public Entity
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

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics


class MplsTeStandby::SignallingCounters::SignallingSummary : public Entity
{
    public:
        SignallingSummary();
        ~SignallingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32

}; // MplsTeStandby::SignallingCounters::SignallingSummary


class MplsTeStandby::DiffServTeClasses : public Entity
{
    public:
        DiffServTeClasses();
        ~DiffServTeClasses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TeClass; //type: MplsTeStandby::DiffServTeClasses::TeClass

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::DiffServTeClasses::TeClass> > te_class;
        
}; // MplsTeStandby::DiffServTeClasses


class MplsTeStandby::DiffServTeClasses::TeClass : public Entity
{
    public:
        TeClass();
        ~TeClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_number; //type: uint8
        YLeaf class_type; //type: uint8
        YLeaf priority; //type: uint8
        YLeaf class_status; //type: MplsTeDsteClassStatusEnum

}; // MplsTeStandby::DiffServTeClasses::TeClass


class MplsTeStandby::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Status; //type: MplsTeStandby::Issu::Status
        class Detail; //type: MplsTeStandby::Issu::Detail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status> status;
        
}; // MplsTeStandby::Issu


class MplsTeStandby::Issu::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: TeProcRoleEnum
        class SyncStatusInformation; //type: MplsTeStandby::Issu::Status::SyncStatusInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation> sync_status_information;
        
}; // MplsTeStandby::Issu::Status


class MplsTeStandby::Issu::Status::SyncStatusInformation : public Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_show_type; //type: TeSyncStatusShowEnum
        class SlaveSyncInformation; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation : public Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf insync_tunnels; //type: uint32
        YLeaf insync_sub_ls_ps; //type: uint32
        YLeaf pending_tunnels; //type: uint32
        YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf tunnel_name; //type: string

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf signaled_name; //type: string
        YLeaf s2l_role; //type: MplsTeTunnelRoleEnum

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation : public Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Idt; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTeStandby::Issu::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: TeProcRoleEnum
        class SyncStatusInformation; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation> sync_status_information;
        
}; // MplsTeStandby::Issu::Detail


class MplsTeStandby::Issu::Detail::SyncStatusInformation : public Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_show_type; //type: TeSyncStatusShowEnum
        class SlaveSyncInformation; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;
        
}; // MplsTeStandby::Issu::Detail::SyncStatusInformation


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation : public Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf insync_tunnels; //type: uint32
        YLeaf insync_sub_ls_ps; //type: uint32
        YLeaf pending_tunnels; //type: uint32
        YLeaf pending_sub_ls_ps; //type: uint32
        class Idt; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;
        
}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CurrentIdtInfo; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;
        
}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_53_ */

