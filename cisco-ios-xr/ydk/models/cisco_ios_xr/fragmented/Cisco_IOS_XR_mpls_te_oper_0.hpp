#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_0_
#define _CISCO_IOS_XR_MPLS_TE_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

class MplsTe : public Entity
{
    public:
        MplsTe();
        ~MplsTe();

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

        class SegmentRouting; //type: MplsTe::SegmentRouting
        class FibNextHopRoutes; //type: MplsTe::FibNextHopRoutes
        class NextHopRoutes; //type: MplsTe::NextHopRoutes
        class AutoRouteDestinationEntries; //type: MplsTe::AutoRouteDestinationEntries
        class TeMib; //type: MplsTe::TeMib
        class HardwareOutOfResources; //type: MplsTe::HardwareOutOfResources
        class P2PP2MpTunnel; //type: MplsTe::P2PP2MpTunnel
        class TopologyNodes; //type: MplsTe::TopologyNodes
        class AnnounceTunnelsInfo; //type: MplsTe::AnnounceTunnelsInfo
        class CollaboratorTimers; //type: MplsTe::CollaboratorTimers
        class AutoTunnel; //type: MplsTe::AutoTunnel
        class SoftPreemption; //type: MplsTe::SoftPreemption
        class ForwardingAdjacencyDestinations; //type: MplsTe::ForwardingAdjacencyDestinations
        class IgpAreas; //type: MplsTe::IgpAreas
        class WrapProtection; //type: MplsTe::WrapProtection
        class Topology; //type: MplsTe::Topology
        class SignallingCounters; //type: MplsTe::SignallingCounters
        class DiffServTeClasses; //type: MplsTe::DiffServTeClasses
        class Issu; //type: MplsTe::Issu
        class FastReroute; //type: MplsTe::FastReroute
        class AttributeSets; //type: MplsTe::AttributeSets
        class IgpAreaBriefs; //type: MplsTe::IgpAreaBriefs
        class Tunnels; //type: MplsTe::Tunnels
        class MaximumTunnels; //type: MplsTe::MaximumTunnels
        class PathProtection; //type: MplsTe::PathProtection
        class FibNextHopLabelRoutes; //type: MplsTe::FibNextHopLabelRoutes
        class P2Mp; //type: MplsTe::P2Mp
        class OpenConfig; //type: MplsTe::OpenConfig
        class LspOutOfResources; //type: MplsTe::LspOutOfResources
        class Bfd; //type: MplsTe::Bfd
        class Nsr; //type: MplsTe::Nsr
        class AutoTunnelServices; //type: MplsTe::AutoTunnelServices
        class AffinityMap; //type: MplsTe::AffinityMap
        class TopologyBriefs; //type: MplsTe::TopologyBriefs

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AffinityMap> affinity_map;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo> announce_tunnels_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets> attribute_sets;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoRouteDestinationEntries> auto_route_destination_entries;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel> auto_tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices> auto_tunnel_services;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::DiffServTeClasses> diff_serv_te_classes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes> fib_next_hop_label_routes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopRoutes> fib_next_hop_routes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::ForwardingAdjacencyDestinations> forwarding_adjacency_destinations;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources> hardware_out_of_resources;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs> igp_area_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas> igp_areas;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources> lsp_out_of_resources;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::MaximumTunnels> maximum_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes> next_hop_routes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::OpenConfig> open_config;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2Mp> p2mp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel> p2p_p2mp_tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection> path_protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting> segment_routing;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters> signalling_counters;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SoftPreemption> soft_preemption;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TeMib> te_mib;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology> topology;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs> topology_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes> topology_nodes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels> tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::WrapProtection> wrap_protection;
        
}; // MplsTe


class MplsTe::SegmentRouting : public Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrigpAreaInfos; //type: MplsTe::SegmentRouting::SrigpAreaInfos
        class SrNodeInfos; //type: MplsTe::SegmentRouting::SrNodeInfos
        class SrPrefixInfos; //type: MplsTe::SegmentRouting::SrPrefixInfos

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos> sr_node_infos;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos> sr_prefix_infos;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrigpAreaInfos> srigp_area_infos;
        
}; // MplsTe::SegmentRouting


class MplsTe::SegmentRouting::SrigpAreaInfos : public Entity
{
    public:
        SrigpAreaInfos();
        ~SrigpAreaInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrigpAreaInfo; //type: MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo> > srigp_area_info;
        
}; // MplsTe::SegmentRouting::SrigpAreaInfos


class MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo : public Entity
{
    public:
        SrigpAreaInfo();
        ~SrigpAreaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf area; //type: int32
        YLeaf segment_routing_enabled; //type: boolean
        YLeaf strict_spf_enabled; //type: boolean
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance_xr; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf igp_area_format; //type: IgpOspfAreaFormatEnum

}; // MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo


class MplsTe::SegmentRouting::SrNodeInfos : public Entity
{
    public:
        SrNodeInfos();
        ~SrNodeInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrNodeInfo; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo> > sr_node_info;
        
}; // MplsTe::SegmentRouting::SrNodeInfos


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo : public Entity
{
    public:
        SrNodeInfo();
        ~SrNodeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf area; //type: int32
        YLeaf igp_node_id; //type: string
        YLeaf local_node_igp_id; //type: string
        YLeaf topology_node_is_router; //type: boolean
        YLeaf local_node_te_router_id; //type: string
        YLeaf topology_node_overloaded; //type: boolean
        class IgpArea; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea
        class SrNodeInfo_; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_
        class NodeLink; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea> igp_area;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink> > node_link;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_> sr_node_info;
        
}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea : public Entity
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

        YLeaf segment_routing_enabled; //type: boolean
        YLeaf strict_spf_enabled; //type: boolean
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance_xr; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf igp_area_format; //type: IgpOspfAreaFormatEnum

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_ : public Entity
{
    public:
        SrNodeInfo_();
        ~SrNodeInfo_();

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

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink : public Entity
{
    public:
        NodeLink();
        ~NodeLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf topology_link_type; //type: IgpSubnetEnum
        YLeaf topology_link_interface_address; //type: string
        YLeaf topology_link_interface_id; //type: uint32
        YLeaf topology_link_neighbor_address; //type: string
        YLeaf topology_link_neighbor_id; //type: uint32
        YLeaf topology_link_neighbor_system_id; //type: string
        YLeaf topology_link_neighbor_node_id; //type: uint32
        YLeaf topology_link_neighbor_generation; //type: uint32
        YLeaf topology_link_fragment_id; //type: uint32
        YLeaf topology_link_te_metric; //type: uint32
        YLeaf topology_link_igp_metric; //type: uint32
        YLeafList topology_link_extended_affinity_bit; //type: list of  uint32
        class SharedRiskLinkGroup; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup
        class AdjacencySids; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids> > adjacency_sids;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        
}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup : public Entity
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

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids : public Entity
{
    public:
        AdjacencySids();
        ~AdjacencySids();

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

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids


class MplsTe::SegmentRouting::SrPrefixInfos : public Entity
{
    public:
        SrPrefixInfos();
        ~SrPrefixInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SrPrefixInfo; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo> > sr_prefix_info;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo : public Entity
{
    public:
        SrPrefixInfo();
        ~SrPrefixInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf igp_instance; //type: string
        YLeaf area; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf prefix_xr; //type: string
        YLeaf prefix_length_xr; //type: uint8
        YLeaf prefix_sid; //type: uint32
        YLeaf prefix_strict_sid; //type: uint32
        YLeaf flag_r; //type: boolean
        YLeaf flag_n; //type: boolean
        YLeaf flag_p; //type: boolean
        YLeaf flag_e; //type: boolean
        YLeaf flag_v; //type: boolean
        YLeaf flag_l; //type: boolean
        YLeaf strict_flag_p; //type: boolean
        YLeaf strict_flag_e; //type: boolean
        YLeaf strict_flag_v; //type: boolean
        YLeaf strict_flag_l; //type: boolean
        class IgpArea; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea
        class SrPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath
        class AdvertizingNode; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode
        class StrictAdvertizingNode; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode> > advertizing_node;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea> igp_area;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath> > sr_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode> > strict_advertizing_node;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea : public Entity
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

        YLeaf segment_routing_enabled; //type: boolean
        YLeaf strict_spf_enabled; //type: boolean
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf igp_instance_xr; //type: string
        YLeaf igp_area; //type: uint32
        YLeaf igp_area_format; //type: IgpOspfAreaFormatEnum

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath : public Entity
{
    public:
        SrPath();
        ~SrPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf has_backup_path; //type: boolean
        class PrimaryPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath
        class BackupPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath> backup_path;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath> primary_path;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath : public Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_interface; //type: string
        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_strict_label; //type: uint32
        YLeaf next_hop; //type: string
        YLeaf path_id; //type: uint32
        YLeaf backup_path_id; //type: uint32

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath : public Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_interface; //type: string
        YLeaf next_hop; //type: string
        YLeafList outgoing_labels_stack; //type: list of  uint32
        YLeafList outgoing_strict_labels_stack; //type: list of  uint32

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode : public Entity
{
    public:
        AdvertizingNode();
        ~AdvertizingNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: string

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode : public Entity
{
    public:
        StrictAdvertizingNode();
        ~StrictAdvertizingNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: string

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode


class MplsTe::FibNextHopRoutes : public Entity
{
    public:
        FibNextHopRoutes();
        ~FibNextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FibNextHopRoute; //type: MplsTe::FibNextHopRoutes::FibNextHopRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopRoutes::FibNextHopRoute> > fib_next_hop_route;
        
}; // MplsTe::FibNextHopRoutes


class MplsTe::FibNextHopRoutes::FibNextHopRoute : public Entity
{
    public:
        FibNextHopRoute();
        ~FibNextHopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_address; //type: string
        YLeaf prefix_addr; //type: string
        YLeaf create_time; //type: uint32
        YLeaf last_used_time; //type: uint32
        YLeaf last_update_time; //type: uint32
        YLeaf expire_time; //type: uint32
        YLeaf is_registered; //type: boolean
        YLeaf is_notified; //type: boolean
        YLeaf is_stale; //type: boolean
        YLeaf route_version; //type: uint64
        class TargetAddress; //type: MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress
        class NextHopPath; //type: MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath> > next_hop_path;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress> target_address;
        
}; // MplsTe::FibNextHopRoutes::FibNextHopRoute


class MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress : public Entity
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

        YLeaf type; //type: TeTargetAddrEnum
        YLeaf ip_address; //type: string
        YLeaf label; //type: uint32

}; // MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress


class MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath : public Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf path_id; //type: uint32
        YLeaf backup_path_id; //type: uint32
        YLeaf pure_backup; //type: boolean
        YLeafList label_stack; //type: list of  uint32

}; // MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath


class MplsTe::NextHopRoutes : public Entity
{
    public:
        NextHopRoutes();
        ~NextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NextHopRoute; //type: MplsTe::NextHopRoutes::NextHopRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute> > next_hop_route;
        
}; // MplsTe::NextHopRoutes


class MplsTe::NextHopRoutes::NextHopRoute : public Entity
{
    public:
        NextHopRoute();
        ~NextHopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf next_hop_type; //type: MplsTeNextHopEnum
        YLeaf prefix_address_xr; //type: string
        YLeaf prefix_length_xr; //type: uint32
        YLeaf exact_match; //type: boolean
        YLeaf create_time; //type: uint32
        YLeaf last_used_time; //type: uint32
        YLeaf expire_time; //type: uint32
        YLeaf installed_tunnel_path_num; //type: uint32
        class ActiveRoute; //type: MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute
        class BackupRoute; //type: MplsTe::NextHopRoutes::NextHopRoute::BackupRoute
        class TunnelPath; //type: MplsTe::NextHopRoutes::NextHopRoute::TunnelPath

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute> active_route;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::BackupRoute> backup_route;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::TunnelPath> > tunnel_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute


class MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute : public Entity
{
    public:
        ActiveRoute();
        ~ActiveRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_protocol_name; //type: string
        YLeaf route_distance; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf last_update_time; //type: uint32
        YLeaf is_registered; //type: boolean
        YLeaf is_stale; //type: boolean
        YLeaf is_default; //type: boolean
        YLeaf is_connected; //type: boolean
        YLeaf is_populated; //type: boolean
        YLeaf route_type; //type: uint16
        class NextHopPath; //type: MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath> > next_hop_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute


class MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath : public Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf address; //type: string
        YLeaf abr_address; //type: string

}; // MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath


class MplsTe::NextHopRoutes::NextHopRoute::BackupRoute : public Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_protocol_name; //type: string
        YLeaf route_distance; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf last_update_time; //type: uint32
        YLeaf is_registered; //type: boolean
        YLeaf is_stale; //type: boolean
        YLeaf is_default; //type: boolean
        YLeaf is_connected; //type: boolean
        YLeaf is_populated; //type: boolean
        YLeaf route_type; //type: uint16
        class NextHopPath; //type: MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath> > next_hop_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute::BackupRoute


class MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath : public Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf address; //type: string
        YLeaf abr_address; //type: string

}; // MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath


class MplsTe::NextHopRoutes::NextHopRoute::TunnelPath : public Entity
{
    public:
        TunnelPath();
        ~TunnelPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_id; //type: uint16
        YLeaf interface_handle; //type: string
        YLeaf install_time; //type: uint32
        YLeaf installed_metric; //type: uint32

}; // MplsTe::NextHopRoutes::NextHopRoute::TunnelPath


class MplsTe::AutoRouteDestinationEntries : public Entity
{
    public:
        AutoRouteDestinationEntries();
        ~AutoRouteDestinationEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AutoRouteDestinationEntry; //type: MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry> > auto_route_destination_entry;
        
}; // MplsTe::AutoRouteDestinationEntries


class MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry : public Entity
{
    public:
        AutoRouteDestinationEntry();
        ~AutoRouteDestinationEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_id_xr; //type: uint16
        class TunnelAutorouteDest; //type: MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest> > tunnel_autoroute_dest;
        
}; // MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry


class MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest : public Entity
{
    public:
        TunnelAutorouteDest();
        ~TunnelAutorouteDest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf install_time; //type: uint32
        YLeaf interface_handle; //type: string

}; // MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest


class MplsTe::TeMib : public Entity
{
    public:
        TeMib();
        ~TeMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Scalars; //type: MplsTe::TeMib::Scalars

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::TeMib::Scalars> scalars;
        
}; // MplsTe::TeMib


class MplsTe::TeMib::Scalars : public Entity
{
    public:
        Scalars();
        ~Scalars();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpls_tunnel_configured; //type: uint32
        YLeaf mpls_tunnel_active; //type: uint32
        YLeaf mpls_tunnel_te_dist_proto; //type: uint8
        YLeaf mpls_tunnel_max_hops; //type: uint32
        YLeaf mpls_tunnel_notification_max_rate; //type: uint32

}; // MplsTe::TeMib::Scalars


class MplsTe::HardwareOutOfResources : public Entity
{
    public:
        HardwareOutOfResources();
        ~HardwareOutOfResources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: MplsTe::HardwareOutOfResources::Summary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources::Summary> summary;
        
}; // MplsTe::HardwareOutOfResources


class MplsTe::HardwareOutOfResources::Summary : public Entity
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

        class HardwareOutOfResourcesState; //type: MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState> > hardware_out_of_resources_state;
        
}; // MplsTe::HardwareOutOfResources::Summary


class MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState : public Entity
{
    public:
        HardwareOutOfResourcesState();
        ~HardwareOutOfResourcesState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hw_oor_state; //type: HwOorStateEnum
        YLeaf te_metric_penalty; //type: uint32
        YLeaf available_bw_percentage; //type: uint32
        YLeaf node_protection_disable; //type: boolean
        YLeaf transition_duration; //type: uint32
        YLeaf minimum_lsp_bandwidth; //type: uint32
        YLeaf accept_reopt; //type: boolean
        class Statistics; //type: MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics> statistics;
        
}; // MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState


class MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics : public Entity
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

        YLeaf hw_oor_state; //type: HwOorStateEnum
        YLeaf transitions; //type: uint32
        YLeaf node_protection_disable_number; //type: uint32
        YLeaf rejected_ls_ps_number; //type: uint32
        YLeaf accepted_ls_ps_number; //type: uint32
        YLeaf accepted_reopt_ls_ps_number; //type: uint32
        YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics


class MplsTe::P2PP2MpTunnel : public Entity
{
    public:
        P2PP2MpTunnel();
        ~P2PP2MpTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TunnelRemoteBriefs; //type: MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs
        class TunnelRemotes; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes
        class NniTunnels; //type: MplsTe::P2PP2MpTunnel::NniTunnels
        class TunnelHeads; //type: MplsTe::P2PP2MpTunnel::TunnelHeads

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::NniTunnels> nni_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelHeads> tunnel_heads;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs> tunnel_remote_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes> tunnel_remotes;
        
}; // MplsTe::P2PP2MpTunnel


class MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs : public Entity
{
    public:
        TunnelRemoteBriefs();
        ~TunnelRemoteBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TunnelRemoteBrief; //type: MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief> > tunnel_remote_brief;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs


class MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief : public Entity
{
    public:
        TunnelRemoteBrief();
        ~TunnelRemoteBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: int32
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf source_address; //type: string
        YLeaf ctype; //type: CtypeEnum
        YLeaf destination_address; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf signaled_name; //type: string
        YLeaf uptime; //type: uint32
        class LspFec; //type: MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec
        class S2L; //type: MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec> lsp_fec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L> > s2l;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief


class MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec : public Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec


class MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L : public Entity
{
    public:
        S2L();
        ~S2L();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf uptime; //type: uint32
        YLeaf egress_interface; //type: string
        YLeaf ingress_interface; //type: string
        YLeaf role; //type: MplsTeTunnelRoleEnum
        YLeaf oper_state; //type: boolean
        class S2LFec; //type: MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec> s2l_fec;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L


class MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec : public Entity
{
    public:
        S2LFec();
        ~S2LFec();

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

}; // MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec


class MplsTe::P2PP2MpTunnel::TunnelRemotes : public Entity
{
    public:
        TunnelRemotes();
        ~TunnelRemotes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TunnelRemote; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote> > tunnel_remote;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote : public Entity
{
    public:
        TunnelRemote();
        ~TunnelRemote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_id; //type: int32
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf source_address; //type: string
        YLeaf ctype; //type: CtypeEnum
        YLeaf destination_address; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf signaled_name; //type: string
        YLeaf is_frr_failed; //type: boolean
        YLeaf frr_active_reason; //type: uint32
        YLeaf lsp_bandwidth; //type: uint32
        YLeaf lsp_setup_priority; //type: uint8
        YLeaf lsp_hold_priority; //type: uint8
        YLeaf lsp_bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf dste_class_match; //type: boolean
        YLeaf dste_class_index; //type: uint8
        YLeaf type; //type: MplsTeLspEnum
        YLeaf uptime; //type: uint32
        YLeaf s2_ls_up; //type: uint32
        YLeaf s2_ls_proceeding; //type: uint32
        YLeaf s2_ls_down; //type: uint32
        YLeaf reoptimize_reason; //type: MplsTeReoptDecisionReasonEnum
        YLeaf reoptimize_trigger; //type: MteReoptTriggerEnum
        YLeaf timer_left; //type: uint32
        YLeaf is_passive; //type: boolean
        YLeaf is_interface; //type: boolean
        YLeaf last_path_change; //type: uint32
        YLeaf persistent_bytes; //type: uint64
        YLeaf persistent_packets; //type: uint64
        class LspFec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec
        class S2L; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec> lsp_fec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L> > s2l;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec : public Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L : public Entity
{
    public:
        S2L();
        ~S2L();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pcalc_area; //type: string
        YLeaf is_expanded_ero; //type: boolean
        YLeaf path_reeval_query_mid; //type: uint32
        YLeaf time_since_last_query_received_mid; //type: uint32
        YLeaf time_since_last_preferred_path_exists_send_mid; //type: uint32
        YLeaf time_since_last_preferred_tree_exists_send_mid; //type: uint32
        YLeaf expanded_ero_area_id; //type: string
        YLeaf expanded_ero_affinity_bits; //type: uint32
        YLeaf expanded_ero_affinity_mask; //type: uint32
        YLeaf expanded_ero_metric_type; //type: MplsTeMetricEnum
        YLeaf expanded_ero_metric; //type: uint32
        YLeaf abr_auto_discovered; //type: string
        YLeaf is_frr_enabled; //type: boolean
        YLeaf is_node_protected; //type: boolean
        YLeaf is_bandwidth_protect; //type: boolean
        YLeaf path_rro_enabled; //type: boolean
        YLeaf weight; //type: uint64
        YLeaf reverse_weight; //type: uint64
        YLeaf uptime; //type: uint32
        YLeaf egress_interface; //type: string
        YLeaf egress_interface_state; //type: TeControllerStateEnum
        YLeaf egress_interface_brief; //type: string
        YLeaf ingress_interface; //type: string
        YLeaf ingress_interface_state; //type: TeControllerStateEnum
        YLeaf ingress_interface_brief; //type: string
        YLeaf s2l_local_label; //type: uint32
        YLeaf s2l_out_label; //type: uint32
        YLeaf outbound_frr_state; //type: MplsTeFrrStateEnum
        YLeaf frr_out_tunnel_interface; //type: string
        YLeaf role; //type: MplsTeTunnelRoleEnum
        YLeaf signalling_status; //type: MplsTeTunnelsSignalingStatusEnum
        YLeaf local_router_id; //type: string
        YLeaf upstream_router_id; //type: string
        YLeaf downstream_router_id; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf previous_hop_address; //type: string
        YLeaf incoming_address; //type: string
        YLeaf backup_tunnel_interface; //type: string
        YLeaf node_hop_count; //type: uint8
        YLeaf is_optical; //type: boolean
        YLeaf s2l_reverse_ero_obj_present; //type: boolean
        YLeaf reverse_lsp_present; //type: boolean
        YLeaf reverse_lsp_connected; //type: boolean
        YLeaf reverse_lsp_name; //type: string
        YLeaf s2l_reverse_tspec_obj_present; //type: boolean
        YLeaf path_using_strict_spf; //type: boolean
        YLeafList s2l_reverse_lsp_sub_obj; //type: list of  uint8
        class S2LFec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec
        class ActivePathOption; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption
        class OutXro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro
        class InXro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro
        class Tspec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec
        class GenericTspec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GenericTspec
        class Fspec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Fspec
        class GenericFspec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GenericFspec
        class NextHopAddressGeneric; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::NextHopAddressGeneric
        class PreviousHopAddressGeneric; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric
        class IncomingAddressGeneric; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::IncomingAddressGeneric
        class S2LConvergence; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence
        class SoftPreemption; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption
        class GmplsLabels; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GmplsLabels
        class OtnS2L; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L
        class HeadEndBfdInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::HeadEndBfdInfo
        class TailEndBfdInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo
        class SrlgCollection; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection
        class Association; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Association
        class Protection; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection
        class ReverseLspFec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec
        class ReverseTspec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec
        class FlexInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::FlexInfo
        class LspWrapInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::LspWrapInfo
        class DiversityInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::DiversityInfo
        class SharedRiskLinkGroup; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup
        class OutEro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro
        class InEro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InEro
        class PathRro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro
        class ResvRro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro
        class PathAffinityArray; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray
        class ReverseEroIn; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn
        class S2LSegmentRoutingPath; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption> active_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::DiversityInfo> diversity_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::FlexInfo> flex_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Fspec> fspec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GenericFspec> generic_fspec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GenericTspec> generic_tspec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GmplsLabels> gmpls_labels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::HeadEndBfdInfo> head_end_bfd_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InEro> > in_ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro> in_xro;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::IncomingAddressGeneric> incoming_address_generic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::LspWrapInfo> lsp_wrap_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::NextHopAddressGeneric> next_hop_address_generic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L> otn_s2l;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro> > out_ero;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro> out_xro;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray> > path_affinity_array;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro> > path_rro;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric> previous_hop_address_generic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection> protection;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro> > resv_rro;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn> > reverse_ero_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec> reverse_tspec;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence> s2l_convergence;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec> s2l_fec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath> > s2l_segment_routing_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption> soft_preemption;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection> srlg_collection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo> tail_end_bfd_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec> tspec;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec : public Entity
{
    public:
        S2LFec();
        ~S2LFec();

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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption : public Entity
{
    public:
        ActivePathOption();
        ~ActivePathOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf option_index_is_valid; //type: boolean
        YLeaf option_index; //type: uint32
        YLeaf path_option_name; //type: string
        YLeaf path_option_type; //type: MplsTePathoptionEnum
        YLeaf explicit_path_name; //type: string
        YLeaf explicit_path_id; //type: uint16
        YLeaf holddown_duration; //type: uint16
        YLeaf pce_address; //type: string
        YLeaf path_option_area_id; //type: string
        YLeaf is_strict_explicit_path; //type: boolean
        YLeaf is_helddown; //type: boolean
        YLeaf is_lockdown; //type: boolean
        YLeaf is_verbatim; //type: boolean
        YLeaf is_disabled; //type: boolean
        YLeaf has_attribute_set; //type: boolean
        YLeaf attribute_set_found; //type: boolean
        YLeaf has_xro_attribute_set; //type: boolean
        YLeaf xro_attribute_set_found; //type: boolean
        YLeaf is_segment_routing; //type: boolean
        YLeaf protected_by_path_option_index; //type: uint32
        YLeaf restored_from_path_option_index; //type: uint32
        class AttributeSet; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet
        class XroAttributeSet; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet
        class PathCalculationError; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError
        class RemergeError; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError
        class SignallingError; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet> attribute_set;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError> > path_calculation_error;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError> > remerge_error;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError> > signalling_error;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet> xro_attribute_set;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet : public Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion : public Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSetEnum
        class AttributeSetPathOption; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured_bandwidth; //type: uint32
        YLeaf cost_limit; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_cost_limit_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf generation; //type: uint32
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: uint32
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf exclude_list_name; //type: string
        YLeaf is_exclude_list_name_configured; //type: boolean
        YLeaf is_pce_configured; //type: boolean
        YLeaf is_pce_disj_source_configured; //type: boolean
        YLeaf is_pce_disj_type_configured; //type: boolean
        YLeaf is_pce_disj_group_id_configured; //type: boolean
        YLeaf pcedp_source_address; //type: uint32
        YLeaf pcedp_type; //type: TePceDisjointEnum
        YLeaf pcedp_group_id; //type: uint32
        YLeaf is_pceb_dj_source_configured; //type: boolean
        YLeaf is_pcebd_group_id_configured; //type: boolean
        YLeaf pcebd_source_address; //type: uint32
        YLeaf pcebd_group_id; //type: uint32
        YLeaf is_bfd_reverse_pat_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class VersionInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf path_type; //type: TeBfdReversePathEnum
        YLeaf binding_label; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attribute_type; //type: string
        YLeaf generation; //type: uint32
        YLeaf is_default; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_signalled_name_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf record_route; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList tunnel_id; //type: list of  uint16
        class SignalledName; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class ProtectedInterface; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public Entity
{
    public:
        SignalledName();
        ~SignalledName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf source_type; //type: TeSigNameAppendEnum
        YLeaf protected_interface_type; //type: TeSigNameAppendEnum
        YLeaf is_mp_addresses; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protected_interface; //type: string

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf forward_class; //type: uint32
        YLeaf is_affinity_configured; //type: boolean
        YLeaf fast_reroute; //type: boolean
        YLeaf frr_node_protection; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf record_route; //type: boolean
        YLeaf auto_bandwidth_collect; //type: boolean
        YLeaf auto_route_announce; //type: boolean
        YLeaf soft_preemption_configured; //type: boolean
        YLeaf bandwidth; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf is_interface_bw_configured; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList mesh_group_id; //type: list of  uint32
        YLeafList tunnel_id; //type: list of  uint16
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro : public Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeXroSubobjEnum
        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_router_id; //type: string
        YLeaf interface_id; //type: uint32
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: uint16

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_id; //type: uint32
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore_lsp_id; //type: boolean
        YLeaf processing_node_exception; //type: boolean
        YLeaf penultimate_node_exception; //type: boolean
        YLeaf destination_node_exception; //type: boolean
        YLeaf exclusion_type; //type: TeXroExclusionEnum
        class Fec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snc_mode; //type: TeApsSncModeEnum
        YLeaf tcm_id; //type: uint32
        YLeaf protection_type; //type: TeProtectEnum
        YLeaf protection_mode; //type: TePnrRevertOptionsEnum
        YLeaf wait_to_restore_time; //type: uint32
        YLeaf hold_off_time; //type: uint32
        YLeaf path_prot_profile_type; //type: TePathProtProfileEnum
        YLeaf restoration_style; //type: TeRestorationStyleEnum
        class RevertSchedule; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf schedulename; //type: string
        YLeaf schedule_date; //type: uint32
        YLeaf schedule_frequency; //type: TeSchFreqEnum
        YLeaf duration; //type: uint32
        YLeaf max_tries; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe : public Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_affinity_configured; //type: boolean
        YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelectionEnum
        YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_selection_invalidation_action; //type: TePathInvalActionEnum
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf path_selection_metric; //type: MplsTeMetricEnum
        YLeaf is_path_selection_metric_configured; //type: boolean
        YLeaf path_selection_segment_routing_margin; //type: uint32
        YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        YLeaf is_path_select_configured; //type: boolean
        YLeaf is_prepend_list_configured; //type: boolean
        YLeaf is_pce_configured; //type: boolean
        YLeaf is_pce_disj_source_configured; //type: boolean
        YLeaf is_pce_disj_type_configured; //type: boolean
        YLeaf is_pce_disj_group_id_configured; //type: boolean
        YLeaf pcedp_source_address; //type: uint32
        YLeaf pcedp_type; //type: TePceDisjointEnum
        YLeaf pcedp_group_id; //type: uint32
        YLeaf is_pceb_dj_source_configured; //type: boolean
        YLeaf is_pcebd_group_id_configured; //type: boolean
        YLeaf pcebd_source_address; //type: uint32
        YLeaf pcebd_group_id; //type: uint32
        YLeafList tunnel_id; //type: list of  uint16
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrependEntry; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeAttributeSetSrPrependEnum
        YLeaf index_; //type: uint32
        YLeaf next_label; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet : public Entity
{
    public:
        XroAttributeSet();
        ~XroAttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion : public Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSetEnum
        class AttributeSetPathOption; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption : public Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured_bandwidth; //type: uint32
        YLeaf cost_limit; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_cost_limit_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf generation; //type: uint32
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: uint32
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf exclude_list_name; //type: string
        YLeaf is_exclude_list_name_configured; //type: boolean
        YLeaf is_pce_configured; //type: boolean
        YLeaf is_pce_disj_source_configured; //type: boolean
        YLeaf is_pce_disj_type_configured; //type: boolean
        YLeaf is_pce_disj_group_id_configured; //type: boolean
        YLeaf pcedp_source_address; //type: uint32
        YLeaf pcedp_type; //type: TePceDisjointEnum
        YLeaf pcedp_group_id; //type: uint32
        YLeaf is_pceb_dj_source_configured; //type: boolean
        YLeaf is_pcebd_group_id_configured; //type: boolean
        YLeaf pcebd_source_address; //type: uint32
        YLeaf pcebd_group_id; //type: uint32
        YLeaf is_bfd_reverse_pat_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class VersionInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf path_type; //type: TeBfdReversePathEnum
        YLeaf binding_label; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attribute_type; //type: string
        YLeaf generation; //type: uint32
        YLeaf is_default; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_signalled_name_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf record_route; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList tunnel_id; //type: list of  uint16
        class SignalledName; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class ProtectedInterface; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public Entity
{
    public:
        SignalledName();
        ~SignalledName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf source_type; //type: TeSigNameAppendEnum
        YLeaf protected_interface_type; //type: TeSigNameAppendEnum
        YLeaf is_mp_addresses; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protected_interface; //type: string

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf forward_class; //type: uint32
        YLeaf is_affinity_configured; //type: boolean
        YLeaf fast_reroute; //type: boolean
        YLeaf frr_node_protection; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf record_route; //type: boolean
        YLeaf auto_bandwidth_collect; //type: boolean
        YLeaf auto_route_announce; //type: boolean
        YLeaf soft_preemption_configured; //type: boolean
        YLeaf bandwidth; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf is_interface_bw_configured; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList mesh_group_id; //type: list of  uint32
        YLeafList tunnel_id; //type: list of  uint16
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xro; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeXroSubobjEnum
        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_router_id; //type: string
        YLeaf interface_id; //type: uint32
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: uint16

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_id; //type: uint32
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore_lsp_id; //type: boolean
        YLeaf processing_node_exception; //type: boolean
        YLeaf penultimate_node_exception; //type: boolean
        YLeaf destination_node_exception; //type: boolean
        YLeaf exclusion_type; //type: TeXroExclusionEnum
        class Fec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snc_mode; //type: TeApsSncModeEnum
        YLeaf tcm_id; //type: uint32
        YLeaf protection_type; //type: TeProtectEnum
        YLeaf protection_mode; //type: TePnrRevertOptionsEnum
        YLeaf wait_to_restore_time; //type: uint32
        YLeaf hold_off_time; //type: uint32
        YLeaf path_prot_profile_type; //type: TePathProtProfileEnum
        YLeaf restoration_style; //type: TeRestorationStyleEnum
        class RevertSchedule; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf schedulename; //type: string
        YLeaf schedule_date; //type: uint32
        YLeaf schedule_frequency; //type: TeSchFreqEnum
        YLeaf duration; //type: uint32
        YLeaf max_tries; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe : public Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_affinity_configured; //type: boolean
        YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelectionEnum
        YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_selection_invalidation_action; //type: TePathInvalActionEnum
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf path_selection_metric; //type: MplsTeMetricEnum
        YLeaf is_path_selection_metric_configured; //type: boolean
        YLeaf path_selection_segment_routing_margin; //type: uint32
        YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        YLeaf is_path_select_configured; //type: boolean
        YLeaf is_prepend_list_configured; //type: boolean
        YLeaf is_pce_configured; //type: boolean
        YLeaf is_pce_disj_source_configured; //type: boolean
        YLeaf is_pce_disj_type_configured; //type: boolean
        YLeaf is_pce_disj_group_id_configured; //type: boolean
        YLeaf pcedp_source_address; //type: uint32
        YLeaf pcedp_type; //type: TePceDisjointEnum
        YLeaf pcedp_group_id; //type: uint32
        YLeaf is_pceb_dj_source_configured; //type: boolean
        YLeaf is_pcebd_group_id_configured; //type: boolean
        YLeaf pcebd_source_address; //type: uint32
        YLeaf pcebd_group_id; //type: uint32
        YLeafList tunnel_id; //type: list of  uint16
        class Affinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public Entity
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
        class NamedAffinity; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public Entity
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

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrependEntry; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeAttributeSetSrPrependEnum
        YLeaf index_; //type: uint32
        YLeaf next_label; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError : public Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf error_message; //type: string
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError : public Entity
{
    public:
        RemergeError();
        ~RemergeError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf error_message; //type: string
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError : public Entity
{
    public:
        SignallingError();
        ~SignallingError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf error_node; //type: uint32
        YLeaf error; //type: uint8
        YLeaf sub_code; //type: uint16
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf log_time; //type: uint32
        YLeaf signalling_lsp_id; //type: uint16
        YLeaf error_message; //type: string
        YLeaf reverse_lsp; //type: boolean

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro : public Entity
{
    public:
        OutXro();
        ~OutXro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject> > xro_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject : public Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeXroSubobjEnum
        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject : public Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject : public Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject : public Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_router_id; //type: string
        YLeaf interface_id; //type: uint32
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject : public Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: uint16

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject : public Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf srlg_id; //type: uint32
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject : public Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore_lsp_id; //type: boolean
        YLeaf processing_node_exception; //type: boolean
        YLeaf penultimate_node_exception; //type: boolean
        YLeaf destination_node_exception; //type: boolean
        YLeaf exclusion_type; //type: TeXroExclusionEnum
        class Fec; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro : public Entity
{
    public:
        InXro();
        ~InXro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject> > xro_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject : public Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TeXroSubobjEnum
        class Ipv4Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        
}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject : public Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject : public Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject : public Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_router_id; //type: string
        YLeaf interface_id; //type: uint32
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject


class MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject : public Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: uint16

}; // MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject

class MplsTeLspModeEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_te_lsp_mode_not_set;
        static const Enum::YLeaf mpls_te_lsp_mode_current;
        static const Enum::YLeaf mpls_te_lsp_mode_reopt;
        static const Enum::YLeaf mpls_te_lsp_mode_clean;
        static const Enum::YLeaf mpls_te_lsp_mode_standby;
        static const Enum::YLeaf mpls_te_lsp_mode_pp_clean;
        static const Enum::YLeaf mpls_te_lsp_mode_restore;
        static const Enum::YLeaf mpls_te_lsp_mode_reopt_standby;

};

class MteReoptTriggerEnum : public Enum
{
    public:
        static const Enum::YLeaf no_trigger;
        static const Enum::YLeaf timer_trigger;
        static const Enum::YLeaf bandwidth_change_trigger;
        static const Enum::YLeaf auto_bandwidth_overflow_trigger;
        static const Enum::YLeaf auto_bandwidth_underflow_trigger;
        static const Enum::YLeaf auto_bandwidth_adjustment_trigger;
        static const Enum::YLeaf metric_type_change_trigger;
        static const Enum::YLeaf user_trigger;
        static const Enum::YLeaf frr_trigger;
        static const Enum::YLeaf remerge_error_trigger;
        static const Enum::YLeaf preferred_path_trigger;
        static const Enum::YLeaf preferred_tree_trigger;
        static const Enum::YLeaf due_to_maximum_metric;
        static const Enum::YLeaf path_option_switchover_trigger;
        static const Enum::YLeaf path_protection_switchover_trigger;
        static const Enum::YLeaf iep_enable_reoptimization_trigger;
        static const Enum::YLeaf affinity_path_verification_fail_trigger;
        static const Enum::YLeaf cost_limit_path_verification_fail_trigger;
        static const Enum::YLeaf soft_preemption_trigger;
        static const Enum::YLeaf iep_changed;
        static const Enum::YLeaf po_changed;
        static const Enum::YLeaf dest_changed;
        static const Enum::YLeaf reopt_try_to_force_it;
        static const Enum::YLeaf topology_change_trigger;
        static const Enum::YLeaf reopt_link_up_event;
        static const Enum::YLeaf bfd_session_down_trigger;
        static const Enum::YLeaf reverse_assoc_s2l_received_trigger;
        static const Enum::YLeaf gmpls_uni_multilayer_trigger;
        static const Enum::YLeaf gmpls_uni_user_trigger;
        static const Enum::YLeaf path_selection_tiebreaker_change_trigger;
        static const Enum::YLeaf sr_egress_path_change_trigger;
        static const Enum::YLeaf overload_bit_trigger;
        static const Enum::YLeaf pce_trigger;
        static const Enum::YLeaf lockout_metric_trigger;
        static const Enum::YLeaf bfd_session_config_change_trigger;
        static const Enum::YLeaf higher_priority_po_change_trigger;
        static const Enum::YLeaf sr_area_spf_support_change_trigger;
        static const Enum::YLeaf trigger_not_used;

};

class MplsTpLspBfdStateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};

class FlexLspLockoutOriginationEnum : public Enum
{
    public:
        static const Enum::YLeaf lockout_origination_none;
        static const Enum::YLeaf lockout_origination_local;
        static const Enum::YLeaf lockout_origination_remote;

};

class MplsTeMetricQualifierEnum : public Enum
{
    public:
        static const Enum::YLeaf metric_default;
        static const Enum::YLeaf metric_global;
        static const Enum::YLeaf metric_interface;

};

class TeSyncStatusShowEnum : public Enum
{
    public:
        static const Enum::YLeaf master_sync_status_show;
        static const Enum::YLeaf slave_sync_status_show;

};

class MplsTeTunnelsProcessStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_running;
        static const Enum::YLeaf running;
        static const Enum::YLeaf not_registered_with_rsvp;

};

class MplsTeUniEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf xc;
        static const Enum::YLeaf term;

};

class TeStatsSigFilterEnum : public Enum
{
    public:
        static const Enum::YLeaf te_stat_sig_filter_vif;
        static const Enum::YLeaf te_stat_sig_filter_lsp;

};

class RsvpMgmtEroSubobjEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_ero_type_ipv4;
        static const Enum::YLeaf rsvp_mgmt_ero_type_un_num;

};

class CtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ctype_null;
        static const Enum::YLeaf ctype_ipv4;
        static const Enum::YLeaf ctype_ipv4_p2p_tunnel;
        static const Enum::YLeaf ctype_ipv6_p2p_tunnel;
        static const Enum::YLeaf ctype_ipv4_uni;
        static const Enum::YLeaf ctype_ipv4_p2mp_tunnel;
        static const Enum::YLeaf ctype_ipv6_p2mp_tunnel;

};

class IgpProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ospf;

};

class MplsTePathoptionEnum : public Enum
{
    public:
        static const Enum::YLeaf path_option_unknown;
        static const Enum::YLeaf path_option_dynamic;
        static const Enum::YLeaf path_option_explicit_name;
        static const Enum::YLeaf path_option_explicit_id;
        static const Enum::YLeaf path_option_pce;
        static const Enum::YLeaf path_option_no_ero;
        static const Enum::YLeaf path_option_segment_routing;

};

class BandwidthUnitEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf kilo_bits_per_second;
        static const Enum::YLeaf kilo_bytes_per_second;

};

class MteTunnelAdminStateEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_state_admin_unknown;
        static const Enum::YLeaf admin_shutdown;
        static const Enum::YLeaf admin_up;

};

class TeApsSncModeEnum : public Enum
{
    public:
        static const Enum::YLeaf snc_mode_not_set;
        static const Enum::YLeaf snc_mode_n;
        static const Enum::YLeaf snc_mode_i;
        static const Enum::YLeaf snc_mode_s;

};

class TeAutobwAppRejEnum : public Enum
{
    public:
        static const Enum::YLeaf application_allowed;
        static const Enum::YLeaf auto_bw_disabled;
        static const Enum::YLeaf tunnel_is_down;
        static const Enum::YLeaf tunnel_is_frr;
        static const Enum::YLeaf tunnel_is_backup;
        static const Enum::YLeaf tunnel_is_lock_down;

};

class PceStateEnum : public Enum
{
    public:
        static const Enum::YLeaf tcp_close;
        static const Enum::YLeaf tcp_listen;
        static const Enum::YLeaf tcp_connect;
        static const Enum::YLeaf pcep_closed;
        static const Enum::YLeaf pcep_opening;
        static const Enum::YLeaf pcep_open;

};

class TeSyncNotReadyReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf idt_in_progress;
        static const Enum::YLeaf standby_not_connected;
        static const Enum::YLeaf collaborator_disconnected;
        static const Enum::YLeaf collaborator_timeout;
        static const Enum::YLeaf unknown;

};

class TeBfdLspSessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_over_lsp_session_state_none;
        static const Enum::YLeaf bfd_over_lsp_session_state_created;
        static const Enum::YLeaf bfd_over_lsp_session_state_up;
        static const Enum::YLeaf bfd_over_lsp_session_state_down;
        static const Enum::YLeaf bfd_over_lsp_session_state_admin_down;
        static const Enum::YLeaf bfd_over_lsp_session_state_deleted;
        static const Enum::YLeaf bfd_over_lsp_session_state_create_failed;

};

class MplsTpLspOamStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ldi;
        static const Enum::YLeaf lkr;
        static const Enum::YLeaf ais;

};

class TePpDiversityEnum : public Enum
{
    public:
        static const Enum::YLeaf diversity_none;
        static const Enum::YLeaf link;
        static const Enum::YLeaf node;
        static const Enum::YLeaf node_link;
        static const Enum::YLeaf srlg;
        static const Enum::YLeaf diversity_user;
        static const Enum::YLeaf diversity_reverse_ero;

};

class LinkDirectionEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf link_direction_up_stream;
        static const Enum::YLeaf link_direction_down_stream;
        static const Enum::YLeaf link_direction_unknown;

};

class MplsTeBackupUsageEnum : public Enum
{
    public:
        static const Enum::YLeaf backup_not_protecting;
        static const Enum::YLeaf backup_protecting;

};

class FloodingTriggerEnum : public Enum
{
    public:
        static const Enum::YLeaf flooding_reason_unknown;
        static const Enum::YLeaf link_up;
        static const Enum::YLeaf link_down;
        static const Enum::YLeaf threshold_up;
        static const Enum::YLeaf threshold_down;
        static const Enum::YLeaf threshold_up_pool1;
        static const Enum::YLeaf threshold_down_pool1;
        static const Enum::YLeaf timer_expired;
        static const Enum::YLeaf bandwidth_change;
        static const Enum::YLeaf user;
        static const Enum::YLeaf rsvp_timeout;
        static const Enum::YLeaf rsvp_reconnect;
        static const Enum::YLeaf te_exited;
        static const Enum::YLeaf srlg_change;
        static const Enum::YLeaf hw_oor_green;
        static const Enum::YLeaf hw_oor_yellow;
        static const Enum::YLeaf hw_oor_red;
        static const Enum::YLeaf hw_oor_recovery_duration_expired;
        static const Enum::YLeaf lsp_oor_green;
        static const Enum::YLeaf lsp_oor_yellow;
        static const Enum::YLeaf lsp_oor_red;
        static const Enum::YLeaf lsp_oor_recovery_duration_expired;
        static const Enum::YLeaf max_res_bandwidth_threshold_up;
        static const Enum::YLeaf max_res_bandwidth_threshold_down;

};

class MplsTeTunnelStateEnum : public Enum
{
    public:
        static const Enum::YLeaf state_down;
        static const Enum::YLeaf state_up;
        static const Enum::YLeaf state_down_policy;
        static const Enum::YLeaf state_lockout;

};

class MplsTeLspRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_te_lsp_role_unknown;
        static const Enum::YLeaf mpls_te_lsp_role_head;
        static const Enum::YLeaf mpls_te_lsp_role_transit;
        static const Enum::YLeaf mpls_te_lsp_role_tail;

};

class TeVifBfdEncapModeEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf gal;

};

class IgpteLibBwModelEnum : public Enum
{
    public:
        static const Enum::YLeaf rdm;
        static const Enum::YLeaf mam;
        static const Enum::YLeaf not_set;

};

class OcMplsTeMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf oc_mpls_te_metric_type_igp;
        static const Enum::YLeaf oc_mpls_te_metric_type_te;

};

class MplsTeBackupEnum : public Enum
{
    public:
        static const Enum::YLeaf backup_static;
        static const Enum::YLeaf backup_auto;

};

class SignalingAgentEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf no_signaling;
        static const Enum::YLeaf rsvp_signaling;

};

class RrrDsteMigrationModeEnum : public Enum
{
    public:
        static const Enum::YLeaf rrr_dste_mode_none;
        static const Enum::YLeaf rrr_dste_mode_prestandard;
        static const Enum::YLeaf rrr_dste_mode_standard;

};

class TeXroSubobjEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf unnumbered;
        static const Enum::YLeaf as;
        static const Enum::YLeaf srlg;
        static const Enum::YLeaf p2p_lsp;

};

class MplsProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_protection_type_unprotected;
        static const Enum::YLeaf mpls_protection_type_link;
        static const Enum::YLeaf mpls_protection_type_link_node;

};

class TePathInvalActionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf tear;
        static const Enum::YLeaf drop;

};

class AdmissionPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf reject_all;
        static const Enum::YLeaf allow_all;
        static const Enum::YLeaf reject_huge;
        static const Enum::YLeaf allow_if_room;

};

class MplsMteTunnelFailReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf mtunnel_fail_reason_unapplicable;
        static const Enum::YLeaf mtunnel_fail_reason_shutdown;
        static const Enum::YLeaf mtunnel_fail_reason_no_destination;
        static const Enum::YLeaf mtunnel_fail_reason_no_path_option;
        static const Enum::YLeaf mtunnel_fail_reason_no_source;
        static const Enum::YLeaf mtunnel_fail_reason_collaborator_disc;
        static const Enum::YLeaf mtunnel_fail_reason_unmatched_class_type_priority;
        static const Enum::YLeaf mtunnel_fail_reason_invalid_bidir_cfg;
        static const Enum::YLeaf mtunnel_fail_reason_po_switchover;
        static const Enum::YLeaf mtunnel_fail_reason_no_tunnel_id;
        static const Enum::YLeaf mtunnel_fail_reason_no_link;
        static const Enum::YLeaf mtunnel_fail_reason_link_shutdown;
        static const Enum::YLeaf mtunnel_fail_reason_link_lmp_down;
        static const Enum::YLeaf mtunnel_fail_reason_source_destination_same;
        static const Enum::YLeaf mtunnel_fail_reason_otn_no_odu_level;
        static const Enum::YLeaf mtunnel_fail_reason_bidir_assoc_id_missing;
        static const Enum::YLeaf mtunnel_fail_reason_bfdgal_on_unidirectional;

};

class TeAclEnum : public Enum
{
    public:
        static const Enum::YLeaf acl_type_unknown;
        static const Enum::YLeaf acl_type_access_list;
        static const Enum::YLeaf acl_type_prefix_list;
        static const Enum::YLeaf acl_type_unregistered;

};

class TeSigNameAppendEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf address;
        static const Enum::YLeaf name;

};

class BandwidthTypeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf pool0;
        static const Enum::YLeaf pool1;
        static const Enum::YLeaf unknown;

};

class TeBfdReversePathEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_reverse_path_none;
        static const Enum::YLeaf bfd_reverse_path_binding_label;

};

class TeSchFreqEnum : public Enum
{
    public:
        static const Enum::YLeaf sch_freq_not_set;
        static const Enum::YLeaf sch_freq_set_once;
        static const Enum::YLeaf sch_freq_set_daily;
        static const Enum::YLeaf sch_freq_set_weekly;

};

class MplsTeBwPoolEnum : public Enum
{
    public:
        static const Enum::YLeaf te_bandwidth_pool0;
        static const Enum::YLeaf te_bandwidth_pool1;
        static const Enum::YLeaf te_bandwidth_any_pool;

};

class MplsTeMgmtGmplsLabelOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf uni_c;
        static const Enum::YLeaf uni_n;

};

class PceSrSidEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown_segment_id;
        static const Enum::YLeaf ipv4_node_segment_id;
        static const Enum::YLeaf ipv4_adjacency_segment_id;

};

class MplsTpTunnelSwitchoverTrigEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf bfd;
        static const Enum::YLeaf local_lockout;
        static const Enum::YLeaf remote_lockout;
        static const Enum::YLeaf ais;
        static const Enum::YLeaf ldi;
        static const Enum::YLeaf lkr;
        static const Enum::YLeaf link_down;

};

class MplsTeLoadshareEnum : public Enum
{
    public:
        static const Enum::YLeaf loadshare_equal;
        static const Enum::YLeaf loadshare_bandwidth_based;
        static const Enum::YLeaf loadshare_configured;

};

class MplsTpTunnelActiveLspEnum : public Enum
{
    public:
        static const Enum::YLeaf working;
        static const Enum::YLeaf protect;
        static const Enum::YLeaf none;

};

class PceLspAutorouteMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf relative;
        static const Enum::YLeaf absolute;

};

class MplsTeBackupStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf backup_none;
        static const Enum::YLeaf backup_unused;
        static const Enum::YLeaf backup_next_next_hop;
        static const Enum::YLeaf backup_next_hop;
        static const Enum::YLeaf backup_next_next_hop_srlg;
        static const Enum::YLeaf backup_next_hop_srlg;

};

class MplsTeMgmtGmplsLabelEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf fixed_wdm;
        static const Enum::YLeaf fixed_g709otn;

};

class TeAutoTunExpPathHopEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4_address_type;
        static const Enum::YLeaf mpls_label_type;
        static const Enum::YLeaf ipv4_and_label_type;

};

class TeVifBfdEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_disabled;
        static const Enum::YLeaf bfd_enabled;
        static const Enum::YLeaf sbfd_enabled;

};

class OcMplsTeTunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf p2p;
        static const Enum::YLeaf p2mp;

};

class MplsTpTunnelStateEnum : public Enum
{
    public:
        static const Enum::YLeaf admin_down;
        static const Enum::YLeaf admin_up;
        static const Enum::YLeaf oper_up;
        static const Enum::YLeaf oper_down;

};

class TeHopLimitIgnoreEnum : public Enum
{
    public:
        static const Enum::YLeaf ignore_unknown;
        static const Enum::YLeaf ignore_explicit;
        static const Enum::YLeaf ignore_pce;

};

class PceTunnelStateEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_state_none;
        static const Enum::YLeaf tunnel_state_admin_down;
        static const Enum::YLeaf tunnel_state_down;
        static const Enum::YLeaf tunnel_state_up;

};

class MplsTeSoftPreemptionResolutionEnum : public Enum
{
    public:
        static const Enum::YLeaf soft_preemption_resolution_none;
        static const Enum::YLeaf soft_preemption_resolution_pending;
        static const Enum::YLeaf soft_preemption_resolution_reopt_completed;
        static const Enum::YLeaf soft_preemption_resolution_teardown;
        static const Enum::YLeaf soft_preemption_resolution_frr_triggered;
        static const Enum::YLeaf soft_preemption_resolution_path_protetion_switchover;

};

class MplsTeSoftPreemptionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf soft_preemption_not_pending;
        static const Enum::YLeaf soft_preemption_pending;

};

class GmplsUniMgmtDwdmCsEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dwdm100g_hz;
        static const Enum::YLeaf dwdm50g_hz;
        static const Enum::YLeaf dwdm25g_hz;
        static const Enum::YLeaf dwdm12g_hz;

};

class MplsTeP2MpTimerEnum : public Enum
{
    public:
        static const Enum::YLeaf lmrib_restart;
        static const Enum::YLeaf lmrib_recovery;
        static const Enum::YLeaf rsvp_restart;
        static const Enum::YLeaf lsd_restart;
        static const Enum::YLeaf lsd_recovery;
        static const Enum::YLeaf clear_in_progress_bandwidth;
        static const Enum::YLeaf rsi_restart;
        static const Enum::YLeaf rsi_recovery;
        static const Enum::YLeaf ipv4_caps_replay;
        static const Enum::YLeaf retry_acl_registration_timer;
        static const Enum::YLeaf mpls_te_exit;
        static const Enum::YLeaf mpls_te_nsr_peer_restart;
        static const Enum::YLeaf mpls_te_issu_peer_restart;
        static const Enum::YLeaf bfd_restart;
        static const Enum::YLeaf bfd_recovery;
        static const Enum::YLeaf im_oc_restart;
        static const Enum::YLeaf im_oc_recovery;
        static const Enum::YLeaf rib_restart;
        static const Enum::YLeaf rib_recovery;
        static const Enum::YLeaf rib_next_hop_route_cleanup;
        static const Enum::YLeaf rsi_srlg_producer_retry;
        static const Enum::YLeaf eoc_reg_retry;
        static const Enum::YLeaf fib_restart;
        static const Enum::YLeaf fib_recovery;
        static const Enum::YLeaf fib_next_hop_route_cleanup;
        static const Enum::YLeaf fib_next_hop_register_retry;
        static const Enum::YLeaf tun_backend_scan_retry;
        static const Enum::YLeaf tunnel_checkpoint_list_service;
        static const Enum::YLeaf tunnel_service_binding_sid_allocation_retry;
        static const Enum::YLeaf timer_not_used;

};

class TeSrSidEnum : public Enum
{
    public:
        static const Enum::YLeaf srsid_not_set;
        static const Enum::YLeaf srsid_node;
        static const Enum::YLeaf srsid_adj;
        static const Enum::YLeaf srsid_unknown;

};

class TeS2LSrPathSelectionEnum : public Enum
{
    public:
        static const Enum::YLeaf te_s2l_sr_path_selection_any;
        static const Enum::YLeaf te_s2l_sr_path_selection_adj_unprotected;
        static const Enum::YLeaf te_s2l_sr_path_selection_adj_protected;

};

class ResourceProviderEnum : public Enum
{
    public:
        static const Enum::YLeaf resource_provider_none;
        static const Enum::YLeaf packet_switch_capable;
        static const Enum::YLeaf time_division_multiplex;
        static const Enum::YLeaf lambda_switch_capable;
        static const Enum::YLeaf fiber_switch_capable;
        static const Enum::YLeaf g709odu_capable;

};

class TpMidLspStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class AutoBackupProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf protection_none;
        static const Enum::YLeaf protection_next_hop;
        static const Enum::YLeaf protection_next_next_hop;

};

class MplsTeFrrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf frr_inactive;
        static const Enum::YLeaf frr_active;
        static const Enum::YLeaf frr_ready;

};

class MplsTeBfdSessionDownAction1Enum : public Enum
{
    public:
        static const Enum::YLeaf reopt;
        static const Enum::YLeaf re_setup;

};

class LspOperStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_te_lsp_oper_up;
        static const Enum::YLeaf mpls_te_lsp_oper_down;

};

class MplsTeProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_te_signaling_type_unknown;
        static const Enum::YLeaf mpls_te_signaling_type_rsvp;

};

class TeOduLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf te_odu_level_not_set;
        static const Enum::YLeaf te_odu_level_one;
        static const Enum::YLeaf te_odu_level_two;
        static const Enum::YLeaf te_odu_level_three;
        static const Enum::YLeaf te_odu_level_four;
        static const Enum::YLeaf te_odu_zero;
        static const Enum::YLeaf te_odu_level_two_e;
        static const Enum::YLeaf te_odu_level_flex_cbr;
        static const Enum::YLeaf te_odu_level_flex_gfpf_resizeable;
        static const Enum::YLeaf te_odu_level_flex_gfpf_non_resizable;
        static const Enum::YLeaf te_odu_level_one_e;
        static const Enum::YLeaf te_odu_level_one_f;
        static const Enum::YLeaf te_odu_level_two_f;
        static const Enum::YLeaf te_odu_level_three_e_one;
        static const Enum::YLeaf te_odu_level_three_e_two;
        static const Enum::YLeaf te_odu_level_c_two;
        static const Enum::YLeaf te_odu_level_c_three;
        static const Enum::YLeaf te_odu_level_c_four;

};

class IgpOspfAreaFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf igp_area_format_number;
        static const Enum::YLeaf igp_area_format_ip_addr;

};

class PceTunPathStateEnum : public Enum
{
    public:
        static const Enum::YLeaf state_none;
        static const Enum::YLeaf state_pending;
        static const Enum::YLeaf state_received_path;
        static const Enum::YLeaf state_no_peer;
        static const Enum::YLeaf state_pcep_down;
        static const Enum::YLeaf state_received_no_path;

};

class AutoBackupSrlgModeEnum : public Enum
{
    public:
        static const Enum::YLeaf srlg_not_set;
        static const Enum::YLeaf srlg_strict;
        static const Enum::YLeaf srlg_preferred;
        static const Enum::YLeaf srlg_weighted;

};

class TeRevEroRejectReasonsEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf bad_reverse_ero;
        static const Enum::YLeaf tie_rejected;
        static const Enum::YLeaf standby_not_required;
        static const Enum::YLeaf admin_state;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf class_type;
        static const Enum::YLeaf bad_association;

};

class TeProtectEnum : public Enum
{
    public:
        static const Enum::YLeaf protect_type1_plus1_unidir_no_aps;
        static const Enum::YLeaf protect_type1_plus1_unidir_aps;
        static const Enum::YLeaf protect_type1_plus1_bidir_aps;
        static const Enum::YLeaf protect_type_not_set;

};

class LspAdminStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_te_lsp_admin_up;
        static const Enum::YLeaf mpls_te_lsp_admin_shutdown;

};

class TePathProtProfileEnum : public Enum
{
    public:
        static const Enum::YLeaf path_prot_profile_type1_plus0;
        static const Enum::YLeaf path_prot_profile_type1_plus_r;
        static const Enum::YLeaf path_prot_profile_type1_plus1;
        static const Enum::YLeaf path_prot_profile_type1_plus1_plus_r;
        static const Enum::YLeaf path_prot_profile_type_invalid;

};

class MplsTePceFailReasonsEnum : public Enum
{
    public:
        static const Enum::YLeaf te_pce_fail_no_reason;
        static const Enum::YLeaf te_pce_fail_no_pce;
        static const Enum::YLeaf te_pce_fail_sub_pool;
        static const Enum::YLeaf te_pce_fail_intra_area;
        static const Enum::YLeaf te_pce_fail_gmpls;
        static const Enum::YLeaf te_pce_fail_pending;
        static const Enum::YLeaf te_pce_fail_oor;
        static const Enum::YLeaf te_pce_fail_bidirectional;
        static const Enum::YLeaf te_pce_fail_no_path;
        static const Enum::YLeaf te_pce_fail_request_timeout;

};

class MplsTeFrrSharingEnum : public Enum
{
    public:
        static const Enum::YLeaf sharing_none;
        static const Enum::YLeaf sharing_pri_oi_backup_oi_parent;
        static const Enum::YLeaf sharing_pri_oi_parent_backup_oi;
        static const Enum::YLeaf sharing_pri_oi_parent_backup_oi_parent;

};

class TeSrlgCollectRequestEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf mandatory;
        static const Enum::YLeaf optional;

};

class TeAttributeSetSrPrependEnum : public Enum
{
    public:
        static const Enum::YLeaf te_attribute_set_sr_prepend_not_set;
        static const Enum::YLeaf te_attribute_set_sr_prepend_next_label;
        static const Enum::YLeaf te_attribute_set_sr_prepend_bgp_nhop;

};

class BandwidthStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf bandwidth_held;
        static const Enum::YLeaf bandwidth_reserved;
        static const Enum::YLeaf bandwidth_unknown;

};

class TeAffinityTableEnum : public Enum
{
    public:
        static const Enum::YLeaf affinity_table_mapping;
        static const Enum::YLeaf affinity_table_forward_reference;
        static const Enum::YLeaf affinity_table_count;

};

class MplsTeNodeEnum : public Enum
{
    public:
        static const Enum::YLeaf router;
        static const Enum::YLeaf network;

};

class TeMgmtGenericTspecEnum : public Enum
{
    public:
        static const Enum::YLeaf te_generic_tspec_type_g709otn;

};

class TePnrRevertOptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf pnr_optionnot_set;
        static const Enum::YLeaf pnr_option_revertive;
        static const Enum::YLeaf pnr_option_non_revertive;

};

class HwOorStateEnum : public Enum
{
    public:
        static const Enum::YLeaf oor_green;
        static const Enum::YLeaf oor_yellow;
        static const Enum::YLeaf oor_red;

};

class MplsTeMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf metric_not_set;
        static const Enum::YLeaf metric_igp;
        static const Enum::YLeaf metric_te;
        static const Enum::YLeaf metric_delay;

};

class TpLinkStateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf admin_down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf unknown;

};

class TeP2MpS2LDeletionSubcauseEnum : public Enum
{
    public:
        static const Enum::YLeaf no_subcause;
        static const Enum::YLeaf cleanup_req;
        static const Enum::YLeaf invalid_data;
        static const Enum::YLeaf fsm_inv_ctxt;
        static const Enum::YLeaf fsm_inv_ctxt_data;
        static const Enum::YLeaf fsm_inv_role;
        static const Enum::YLeaf ll_failure;
        static const Enum::YLeaf ll_rel_fail;
        static const Enum::YLeaf ll_mismatch;
        static const Enum::YLeaf ll_invalid;
        static const Enum::YLeaf ll_set_failure;
        static const Enum::YLeaf bad_out_label;
        static const Enum::YLeaf sl_err;
        static const Enum::YLeaf rl_mismatch;
        static const Enum::YLeaf sl_alloc_err;
        static const Enum::YLeaf upstream_downstream_label_mismatch;
        static const Enum::YLeaf upstream_label_failure;
        static const Enum::YLeaf upstream_label_rel_fail;
        static const Enum::YLeaf upstream_label_mismatch;
        static const Enum::YLeaf upstream_label_invalid;
        static const Enum::YLeaf bad_upstream_label;
        static const Enum::YLeaf ul_set_failure;
        static const Enum::YLeaf gmpls_label_alloc_err;
        static const Enum::YLeaf gmpls_label_clone_err;
        static const Enum::YLeaf rw_err;
        static const Enum::YLeaf up_rw_err;
        static const Enum::YLeaf path_admit;
        static const Enum::YLeaf bw;
        static const Enum::YLeaf admit_resv;
        static const Enum::YLeaf rrrm_err;
        static const Enum::YLeaf hardware_out_of_resources;
        static const Enum::YLeaf comp_rid;
        static const Enum::YLeaf comp_lcl_rid;
        static const Enum::YLeaf comp_up_rid;
        static const Enum::YLeaf comp_down_rid;
        static const Enum::YLeaf rest_if_hop;
        static const Enum::YLeaf inv_in_if;
        static const Enum::YLeaf nh_err;
        static const Enum::YLeaf inv_in_ero;
        static const Enum::YLeaf out_ero_fail;
        static const Enum::YLeaf frr_bk_asssign;
        static const Enum::YLeaf frr_bk_rm;
        static const Enum::YLeaf frr_bk_send;
        static const Enum::YLeaf frr_needs_del;
        static const Enum::YLeaf frr_reopt_lsp;
        static const Enum::YLeaf rsvp_api_h;
        static const Enum::YLeaf insane_path;
        static const Enum::YLeaf remerge_chk_fail;
        static const Enum::YLeaf remerge_detected;
        static const Enum::YLeaf xro;
        static const Enum::YLeaf resv_bw_set;
        static const Enum::YLeaf resv_prep_fail;
        static const Enum::YLeaf path_ch_proc;
        static const Enum::YLeaf path_ch_frr;
        static const Enum::YLeaf path_ch_sess_attri_fl;
        static const Enum::YLeaf path_ch_bw_ch;
        static const Enum::YLeaf path_err_proc;
        static const Enum::YLeaf path_err;
        static const Enum::YLeaf path_err_wpsr;
        static const Enum::YLeaf path_del;
        static const Enum::YLeaf resv_ch_proc;
        static const Enum::YLeaf resv_ch_rro;
        static const Enum::YLeaf resv_del;
        static const Enum::YLeaf resv_err;
        static const Enum::YLeaf perr_send_fail;
        static const Enum::YLeaf perr_proc_fail;
        static const Enum::YLeaf perr_rcv;
        static const Enum::YLeaf resv_err_rcv;
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf setup_conn_api_fail;
        static const Enum::YLeaf path_not_replayed;
        static const Enum::YLeaf resv_not_replayed;
        static const Enum::YLeaf rewrite_not_replayed;
        static const Enum::YLeaf label_not_replayed;
        static const Enum::YLeaf connection_not_ready;
        static const Enum::YLeaf master_did_not_replay;
        static const Enum::YLeaf head_s2l_has_no_vif;
        static const Enum::YLeaf frr_assigned_s2l_has_no_backup;
        static const Enum::YLeaf frr_assigned_s2l_has_down_backup;
        static const Enum::YLeaf out_link_down_and_no_frr;
        static const Enum::YLeaf collaborator_timeout_rsvp;
        static const Enum::YLeaf collaborator_timeout_lsd;
        static const Enum::YLeaf collaborator_timeout_lmrib;
        static const Enum::YLeaf collaborator_timeout_im;
        static const Enum::YLeaf collaborator_timeout_error;
        static const Enum::YLeaf topo_flush;
        static const Enum::YLeaf area_shut;
        static const Enum::YLeaf active_po_del;
        static const Enum::YLeaf path_verify_failed;
        static const Enum::YLeaf srlg_path_verify_failed;
        static const Enum::YLeaf affinity_path_verify_failed;
        static const Enum::YLeaf aff_fail_delayed_tear_timeout_failed;
        static const Enum::YLeaf cost_limit_verify_failed;
        static const Enum::YLeaf path_setup_timeout;
        static const Enum::YLeaf vif_destroyed;
        static const Enum::YLeaf vif_shut;
        static const Enum::YLeaf lsp_shut;
        static const Enum::YLeaf gmpls_uni_head;
        static const Enum::YLeaf head_resetup;
        static const Enum::YLeaf none_head_resetup;
        static const Enum::YLeaf dest_disabled;
        static const Enum::YLeaf iep_ch_act_po;
        static const Enum::YLeaf iep_ch_reopt;
        static const Enum::YLeaf iep_ch_standby;
        static const Enum::YLeaf dste_mode_ch;
        static const Enum::YLeaf reopt_del_frr_act;
        static const Enum::YLeaf new_reopt_tear_old;
        static const Enum::YLeaf reopt_failed_verify;
        static const Enum::YLeaf reopt_failed_install;
        static const Enum::YLeaf reopt_failed_rw;
        static const Enum::YLeaf reopt_failed_not_superset;
        static const Enum::YLeaf dclean_at_install_time;
        static const Enum::YLeaf dclean_at_clean_timer;
        static const Enum::YLeaf dclean_at_reopt_active;
        static const Enum::YLeaf lcl_notif_head;
        static const Enum::YLeaf in_if_fail;
        static const Enum::YLeaf out_if_fail;
        static const Enum::YLeaf if_fail_lc_oir;
        static const Enum::YLeaf te_rid_rm;
        static const Enum::YLeaf te_rsvp_oos_bkup;
        static const Enum::YLeaf in_if_fail_exp_null_cfg_ch;
        static const Enum::YLeaf new_curr_lsp_sig;
        static const Enum::YLeaf new_reopt_lsp_sig;
        static const Enum::YLeaf new_stdby_lsp_sig;
        static const Enum::YLeaf new_restore_lsp_sig;
        static const Enum::YLeaf new_cl_pp_lsp_sig;
        static const Enum::YLeaf chkpt_recovery_failed;
        static const Enum::YLeaf stdby_cr_failed;
        static const Enum::YLeaf reopt_lsp_rej;
        static const Enum::YLeaf reopt_po_sw_failed;
        static const Enum::YLeaf failed_to_find_path;
        static const Enum::YLeaf sig_rcv_fail_path_cr_ch;
        static const Enum::YLeaf lsp_db_shut;
        static const Enum::YLeaf reopt_hold_start;
        static const Enum::YLeaf vif_lspid_mismatch;
        static const Enum::YLeaf s2l_has_no_vif;
        static const Enum::YLeaf overload_reopt_timeout;
        static const Enum::YLeaf hop_limit_exceeded;
        static const Enum::YLeaf lingering_current_lsp;
        static const Enum::YLeaf lingering_standby_lsp;
        static const Enum::YLeaf lingering_restore_lsp;
        static const Enum::YLeaf double_lockout;
        static const Enum::YLeaf lockout_no_protection;
        static const Enum::YLeaf lockout_cleanup;
        static const Enum::YLeaf te_ppsw_lsp_mismatch;
        static const Enum::YLeaf te_stdbyup_no_curr_lsp;
        static const Enum::YLeaf stdby_failed_rw;
        static const Enum::YLeaf reopt_lsp_tear_ppsw;
        static const Enum::YLeaf delay_pp_lsp_tear_ppsw;
        static const Enum::YLeaf stdby_failed_verify;
        static const Enum::YLeaf stdby_not_needed_due_to_restore;
        static const Enum::YLeaf restore_failed_verify;
        static const Enum::YLeaf restore_failed_install;
        static const Enum::YLeaf restore_failed_rewrite;
        static const Enum::YLeaf te_ppsw_cfg_rmvd;
        static const Enum::YLeaf te_ppsw_manual_ppsw;
        static const Enum::YLeaf te_ppsw_bidir_p_chg_ppsw;
        static const Enum::YLeaf te_ppsw_bidir_lockout_ppsw;
        static const Enum::YLeaf dclean_at_pp_clean_timer;
        static const Enum::YLeaf reopt_standby_failed;
        static const Enum::YLeaf standby_reoptimized;
        static const Enum::YLeaf standby_reoptimize_aborted;
        static const Enum::YLeaf te_reoptup_no_curr_lsp;
        static const Enum::YLeaf te_reopt_curr_lsp_down;
        static const Enum::YLeaf te_cleanedt_curr_lsp_down;
        static const Enum::YLeaf te_delay_lsp_up;
        static const Enum::YLeaf no_route_due_to_affinity;
        static const Enum::YLeaf no_rib_lkup_bad_ero_gmpls;
        static const Enum::YLeaf cleanup_lingering;
        static const Enum::YLeaf te_s2l_del_sc_soft_preemption_timeout;
        static const Enum::YLeaf te_s2l_del_sc_soft_preempted_non_current;
        static const Enum::YLeaf te_s2l_del_sc_vif_sync_lsp_del;
        static const Enum::YLeaf rsvp_api_cleanup_req;
        static const Enum::YLeaf te_s2l_del_sc_frr_wrong_backup;
        static const Enum::YLeaf te_s2l_del_sc_bfd_session_create_failed;
        static const Enum::YLeaf te_s2l_del_sc_bfd_session_bringup_timeout;
        static const Enum::YLeaf te_s2l_del_sc_bfd_session_down;
        static const Enum::YLeaf te_s2l_del_sc_bfd_session_not_replayed;
        static const Enum::YLeaf te_s2l_del_sc_reopt_p2mp_egress_info_fail;
        static const Enum::YLeaf non_curr_frr_lcl_notif_event;
        static const Enum::YLeaf unsupported_encoding;
        static const Enum::YLeaf unsupported_gpid;
        static const Enum::YLeaf unsupported_switching_type;
        static const Enum::YLeaf upstream_label_change_not_permitted;
        static const Enum::YLeaf encoding_type_change_not_permitted;
        static const Enum::YLeaf aps_protect_info_change_failed;
        static const Enum::YLeaf incorrect_lsp_type;
        static const Enum::YLeaf local_hop_error;
        static const Enum::YLeaf unsupported_gmpls_attributes;
        static const Enum::YLeaf gmpls_uni_reopt_triggered;
        static const Enum::YLeaf maximum_acceptable_label_retries;
        static const Enum::YLeaf invalid_direction;
        static const Enum::YLeaf invalid_rewrite_context;
        static const Enum::YLeaf invalid_label_context;
        static const Enum::YLeaf dwdm_capability_changed;
        static const Enum::YLeaf dwdm_capability_removed;
        static const Enum::YLeaf dwdm_wavelength_removed;
        static const Enum::YLeaf gmpls_uni_multilayer_restoration;
        static const Enum::YLeaf gmpls_uni_user_triggered_reoptimization;
        static const Enum::YLeaf gmpls_uni_active_path_change_triggered_reopt;
        static const Enum::YLeaf passive_match_err;
        static const Enum::YLeaf egress_control_err;
        static const Enum::YLeaf egress_control_map_err;
        static const Enum::YLeaf restore_not_needed_for_current;
        static const Enum::YLeaf restore_not_needed_for_standby;
        static const Enum::YLeaf restore_dp_down;
        static const Enum::YLeaf current_not_needed_dp_down;
        static const Enum::YLeaf bad_protct_obj;
        static const Enum::YLeaf optical_link_down;
        static const Enum::YLeaf optical_link_lsp_out_of_sync;
        static const Enum::YLeaf optical_link_owner_out_of_sync;
        static const Enum::YLeaf optical_link_interface_handle_out_of_sync;
        static const Enum::YLeaf optical_link_hop_out_of_sync;
        static const Enum::YLeaf optical_link_role_out_of_sync;
        static const Enum::YLeaf optical_link_downstream_router_id_out_of_sync;
        static const Enum::YLeaf optical_link_upstream_router_id_out_of_sync;
        static const Enum::YLeaf optical_link_encoding_type_out_of_sync;
        static const Enum::YLeaf optical_link_switching_type_out_of_sync;
        static const Enum::YLeaf optical_link_gpid_out_of_sync;
        static const Enum::YLeaf egress_optical_link_not_found;
        static const Enum::YLeaf ingress_optical_link_not_found;
        static const Enum::YLeaf sync_dest_state;
        static const Enum::YLeaf prot_object_err;
        static const Enum::YLeaf reverse_s2l_deleted;
        static const Enum::YLeaf cancel_inprogress_by_slave;
        static const Enum::YLeaf invalid_reverse_ero;
        static const Enum::YLeaf reverse_lsp_not_found;
        static const Enum::YLeaf reverse_lsp_not_present;
        static const Enum::YLeaf associated_vif_down;
        static const Enum::YLeaf vif_sync_processing;
        static const Enum::YLeaf incoming_interface_lockout;
        static const Enum::YLeaf sr_egress_path_changed;
        static const Enum::YLeaf in_if_fail_imp_null_cfg_ch;
        static const Enum::YLeaf reverse_lsp_failure;
        static const Enum::YLeaf lsp_wrap_label_error;
        static const Enum::YLeaf lsp_wrap_rewrite_error;
        static const Enum::YLeaf transit_lsp_out_of_resources;
        static const Enum::YLeaf fsm_sc_must_be_last;

};

class TeProcRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf v1_active;
        static const Enum::YLeaf v2_active;
        static const Enum::YLeaf v1_standby;
        static const Enum::YLeaf v2_standby;
        static const Enum::YLeaf v1_active_post_big_bang;
        static const Enum::YLeaf v1_standby_post_big_bang;
        static const Enum::YLeaf number_of_role;

};

class TeControllerStateEnum : public Enum
{
    public:
        static const Enum::YLeaf notready;
        static const Enum::YLeaf admin_down;
        static const Enum::YLeaf down;
        static const Enum::YLeaf shutdown;
        static const Enum::YLeaf error_disabled;
        static const Enum::YLeaf up;
        static const Enum::YLeaf unknown;

};

class MtePathOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf explicit_;
        static const Enum::YLeaf no_ero;
        static const Enum::YLeaf segment_routing;
        static const Enum::YLeaf po_count;

};

class TunnelAttributeSetEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_attribute_set_none;
        static const Enum::YLeaf tunnel_attribute_set_static;
        static const Enum::YLeaf tunnel_attribute_set_path_option;
        static const Enum::YLeaf tunnel_attribute_set_not_used;
        static const Enum::YLeaf tunnel_attribute_set_auto_backup;
        static const Enum::YLeaf tunnel_attribute_set_auto_mesh;
        static const Enum::YLeaf tunnel_attribute_set_xro;
        static const Enum::YLeaf tunnel_attribute_set_p2mpte;
        static const Enum::YLeaf tunnel_attribute_aps_pp;
        static const Enum::YLeaf tunnel_attribute_set_p2p_te;

};

class TeP2MpS2LDeletionCauseEnum : public Enum
{
    public:
        static const Enum::YLeaf no_cause;
        static const Enum::YLeaf hpath_cr_err;
        static const Enum::YLeaf hpath_chg_setup;
        static const Enum::YLeaf hpath_chg_up_err;
        static const Enum::YLeaf hresv_cr_err;
        static const Enum::YLeaf hresv_chg_err;
        static const Enum::YLeaf hresv_chg_err_up;
        static const Enum::YLeaf hlbl_avail_err;
        static const Enum::YLeaf hup_lbl_avail_err;
        static const Enum::YLeaf hfrr_act_err;
        static const Enum::YLeaf hbkup_ch_err;
        static const Enum::YLeaf hpath_ch_frr_err;
        static const Enum::YLeaf hcleanup;
        static const Enum::YLeaf hlingering_cleanup;
        static const Enum::YLeaf hpat_err;
        static const Enum::YLeaf hresv_err;
        static const Enum::YLeaf hresv_del;
        static const Enum::YLeaf hrw_fail;
        static const Enum::YLeaf hup_rw_fail;
        static const Enum::YLeaf ha_failure;
        static const Enum::YLeaf rw_del;
        static const Enum::YLeaf up_rw_del;
        static const Enum::YLeaf mpath_cr;
        static const Enum::YLeaf mpath_chg_setup_err;
        static const Enum::YLeaf mpath_chg_up_err;
        static const Enum::YLeaf mresv_cr_err;
        static const Enum::YLeaf mresv_chg_err;
        static const Enum::YLeaf mresv_chg_err_up;
        static const Enum::YLeaf mlbl_avail_err;
        static const Enum::YLeaf mlbl_rel_err;
        static const Enum::YLeaf mup_lbl_avail_err;
        static const Enum::YLeaf mup_lbl_rel_err;
        static const Enum::YLeaf mfrr_act_err;
        static const Enum::YLeaf mbkup_ch_err;
        static const Enum::YLeaf mpath_ch_frr_err;
        static const Enum::YLeaf mresv_del;
        static const Enum::YLeaf mresv_err;
        static const Enum::YLeaf mpreempt;
        static const Enum::YLeaf mcleanup;
        static const Enum::YLeaf mlingering_cleanup;
        static const Enum::YLeaf mrw_fail;
        static const Enum::YLeaf mup_rw_fail;
        static const Enum::YLeaf tpath_cr_err;
        static const Enum::YLeaf tpath_chg_err;
        static const Enum::YLeaf tresv_cr_err;
        static const Enum::YLeaf tlbl_avail_err;
        static const Enum::YLeaf tcleanup;
        static const Enum::YLeaf tlingering_cleanup;
        static const Enum::YLeaf lbl_err;
        static const Enum::YLeaf qfailure;
        static const Enum::YLeaf rsvp_recovery;
        static const Enum::YLeaf lsd_recovery;
        static const Enum::YLeaf lmrib_recovery;
        static const Enum::YLeaf te_restart;
        static const Enum::YLeaf switchover;
        static const Enum::YLeaf master_te_recovery;
        static const Enum::YLeaf optical_r_mgr_recovery;
        static const Enum::YLeaf te_exit;
        static const Enum::YLeaf bkup_assign_fail;
        static const Enum::YLeaf bfd_fail;
        static const Enum::YLeaf bfd_recovery;
        static const Enum::YLeaf lsp_wrap_act_err;
        static const Enum::YLeaf lsp_wrap_rw_err;
        static const Enum::YLeaf fsm_cause_must_be_last;

};

class TePathSelectionTiebreakerEnum : public Enum
{
    public:
        static const Enum::YLeaf min_fill;
        static const Enum::YLeaf max_fill;
        static const Enum::YLeaf random;

};

class MplsTeTunnelAnnounceEnum : public Enum
{
    public:
        static const Enum::YLeaf announce_type_not_set;
        static const Enum::YLeaf autoroute;
        static const Enum::YLeaf forward_adjacency;

};

class GmplsUniMgmtWdmGridEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dwdm;
        static const Enum::YLeaf cwdm;

};

class MplsTeAfiEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4_unicast;
        static const Enum::YLeaf ipv4_multicast;
        static const Enum::YLeaf ipv6_unicast;
        static const Enum::YLeaf ipv6_multicast;

};

class IgpSubnetEnum : public Enum
{
    public:
        static const Enum::YLeaf igp_subnet_type_none;
        static const Enum::YLeaf p2p;
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf non_broadcast_multiaccess;
        static const Enum::YLeaf p2mp;
        static const Enum::YLeaf loopback;

};

class MteTunnelOperStateEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_state_oper_unknown;
        static const Enum::YLeaf operational_down;
        static const Enum::YLeaf operational_up;

};

class BandwidthAccountingCollectionEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_te;
        static const Enum::YLeaf segment_routing;

};

class TeServTunClientEnum : public Enum
{
    public:
        static const Enum::YLeaf te_serv_auto_tun_client_invalid;
        static const Enum::YLeaf te_serv_p2mp_tun_client_mvpn;
        static const Enum::YLeaf te_serv_p2mp_tun_client_vpls;
        static const Enum::YLeaf te_serv_p2mp_tun_client_mvpn6;
        static const Enum::YLeaf te_serv_p2p_tun_client_bgp;
        static const Enum::YLeaf te_serv_p2p_tun_client_staticv4;
        static const Enum::YLeaf te_serv_p2p_tun_client_staticv6;
        static const Enum::YLeaf te_serv_p2p_tun_client_isis;
        static const Enum::YLeaf te_serv_p2p_tun_client_ospf;
        static const Enum::YLeaf te_serv_auto_tun_client_count;

};

class MplsTePathEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf explicit_name;
        static const Enum::YLeaf explicit_id;
        static const Enum::YLeaf no_ero;
        static const Enum::YLeaf segment_routing;

};

class TeS2LOutputRwExplicitNullEnum : public Enum
{
    public:
        static const Enum::YLeaf tes2l_output_rw_exp_null;
        static const Enum::YLeaf tes2l_output_rw_exp_null_v4;
        static const Enum::YLeaf tes2l_output_rw_exp_null_v6;

};

class RsvpMgmtEroSubobjStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf rsvp_mgmt_ero_status_not_available;
        static const Enum::YLeaf rsvp_mgmt_ero_status_available;
        static const Enum::YLeaf rsvp_mgmt_ero_status_bw_not_available;

};

class LspOorStateEnum : public Enum
{
    public:
        static const Enum::YLeaf lsp_oor_green;
        static const Enum::YLeaf lsp_oor_yellow;
        static const Enum::YLeaf lsp_oor_red;

};

class MplsTeReoptDecisionReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf decision_reason_none;
        static const Enum::YLeaf not_superset;
        static const Enum::YLeaf superset;
        static const Enum::YLeaf lsp_frr_active;
        static const Enum::YLeaf bandwidth_change;
        static const Enum::YLeaf metric_type_change;
        static const Enum::YLeaf better_path_option_indexes;
        static const Enum::YLeaf inter_area_preferred_path_exists;
        static const Enum::YLeaf inter_area_preferred_tree_exists;
        static const Enum::YLeaf worse_path_option_indexes;
        static const Enum::YLeaf better_cumulative_metric;
        static const Enum::YLeaf worse_cumulative_metric;
        static const Enum::YLeaf identical;
        static const Enum::YLeaf no_s2_ls;
        static const Enum::YLeaf no_current_lsp;
        static const Enum::YLeaf user_path_option_switchover;
        static const Enum::YLeaf better_hops;
        static const Enum::YLeaf worse_hops;
        static const Enum::YLeaf pce_force;
        static const Enum::YLeaf affinity_changed;
        static const Enum::YLeaf cost_limit;
        static const Enum::YLeaf sig_timeout;
        static const Enum::YLeaf not_superset_inst_timer_expired;
        static const Enum::YLeaf path_verifiction_failed;
        static const Enum::YLeaf soft_preemption_recovery;
        static const Enum::YLeaf iep_changed;
        static const Enum::YLeaf po_changed;
        static const Enum::YLeaf dest_changed;
        static const Enum::YLeaf better_igp_area;
        static const Enum::YLeaf worse_igp_area;
        static const Enum::YLeaf better_bandwidth_load_balancing;
        static const Enum::YLeaf worse_bandwidth_load_balancing;
        static const Enum::YLeaf bfd_session_down;
        static const Enum::YLeaf auto_pcc_reopt;
        static const Enum::YLeaf sr_egress_path_changed;
        static const Enum::YLeaf overload_bit_set;
        static const Enum::YLeaf better_diversity;
        static const Enum::YLeaf worse_diversity;
        static const Enum::YLeaf bfd_session_type_changed;
        static const Enum::YLeaf lsp_drop_mode;
        static const Enum::YLeaf strict_spf;
        static const Enum::YLeaf not_used;

};

class TeAutobwAppTriggerEnum : public Enum
{
    public:
        static const Enum::YLeaf application_none;
        static const Enum::YLeaf application_periodic;
        static const Enum::YLeaf application_manual;
        static const Enum::YLeaf application_overflow;
        static const Enum::YLeaf application_underflow;

};

class TeDestinationStateEnum : public Enum
{
    public:
        static const Enum::YLeaf destination_disabled;
        static const Enum::YLeaf destination_down;
        static const Enum::YLeaf destination_up;

};

class MplsTeIepHopEnum : public Enum
{
    public:
        static const Enum::YLeaf iep_hop_type_unknown;
        static const Enum::YLeaf iep_hop_type_strict_next;
        static const Enum::YLeaf iep_hop_type_exclude;
        static const Enum::YLeaf iep_hop_type_exclude_node;
        static const Enum::YLeaf iep_hop_type_exclude_srlg;
        static const Enum::YLeaf iep_hop_type_loose_next;
        static const Enum::YLeaf iep_hop_type_next;
        static const Enum::YLeaf iep_hop_type_share_srlg;

};

class TunnelStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_state_unknown;
        static const Enum::YLeaf new_;
        static const Enum::YLeaf preempting;
        static const Enum::YLeaf admitting;
        static const Enum::YLeaf half_admitted;
        static const Enum::YLeaf admitted;
        static const Enum::YLeaf reservation_admitting;
        static const Enum::YLeaf reservation_half_admitted;
        static const Enum::YLeaf reservation_admitted;

};

class MplsTeTunnelsSignalingStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf recovering;
        static const Enum::YLeaf recovered;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf proceeding;
        static const Enum::YLeaf wait_bfd_session_up;
        static const Enum::YLeaf wait_sr_segment_path_up;
        static const Enum::YLeaf wait_local_label;
        static const Enum::YLeaf wait_local_label_rewrite;

};

class TeAddrEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv4_unnumbered;

};

class MplsTeBwLimitEnum : public Enum
{
    public:
        static const Enum::YLeaf bandwidth_limited;
        static const Enum::YLeaf bandwidth_unlimited;
        static const Enum::YLeaf bandwidth_none;

};

class MplsLibCEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_lib_c_type_null;
        static const Enum::YLeaf mpls_lib_c_type_ipv4;
        static const Enum::YLeaf mpls_lib_c_type_ipv4_p2p_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv6_p2p_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv4_uni;
        static const Enum::YLeaf mpls_lib_c_type_ipv4_p2mp_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv6_p2mp_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv4_tp_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv6_tp_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_p2p_binding_label;

};

class MplsTeAttrSetEnum : public Enum
{
    public:
        static const Enum::YLeaf not_used;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf lsp;
        static const Enum::YLeaf unassigned;
        static const Enum::YLeaf auto_backup;
        static const Enum::YLeaf auto_mesh;
        static const Enum::YLeaf xro;
        static const Enum::YLeaf p2mp_te;
        static const Enum::YLeaf otn_pp;
        static const Enum::YLeaf p2p_te;

};

class TePceDisjointEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf link;
        static const Enum::YLeaf node;
        static const Enum::YLeaf srlg;

};

class IgpteAaMetricModeEnum : public Enum
{
    public:
        static const Enum::YLeaf metric_mode_none;
        static const Enum::YLeaf relative;
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf constant;

};

class TeXroExclusionEnum : public Enum
{
    public:
        static const Enum::YLeaf mandatory;
        static const Enum::YLeaf best_effort;

};

class RsvpMgmtRroSubobjEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4rro_type;
        static const Enum::YLeaf label_rro_type;
        static const Enum::YLeaf unnumbered_rro_type;
        static const Enum::YLeaf srlg_rro_type;

};

class MplsTeLspWrapStateEnum : public Enum
{
    public:
        static const Enum::YLeaf lsp_wrap_not_ready;
        static const Enum::YLeaf lsp_wrap_active;
        static const Enum::YLeaf lsp_wrap_ready;

};

class MplsTeLspEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_te_lsp_type_not_set;
        static const Enum::YLeaf mpls_te_lsp_type_p2p;
        static const Enum::YLeaf mpls_te_lsp_type_p2mp;
        static const Enum::YLeaf mpls_te_lsp_type_gmpls_ouni;
        static const Enum::YLeaf mpls_te_lsp_type_gmpls_nni;
        static const Enum::YLeaf mpls_te_lsp_type_p2p_bidir;
        static const Enum::YLeaf mpls_te_lsp_type_gmpls_tp;
        static const Enum::YLeaf mpls_te_lsp_type_gmpls_nni_otn;
        static const Enum::YLeaf mpls_te_lsp_type_segment_routing_p2p;

};

class MplsTeIgpProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ospf;

};

class MplsTeNextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf egress_resolve;
        static const Enum::YLeaf autoroute_dest;

};

class TeTargetAddrEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid_te_target_type;
        static const Enum::YLeaf te_target_type_ipv4;
        static const Enum::YLeaf te_target_type_label;

};

class TeRestorationStyleEnum : public Enum
{
    public:
        static const Enum::YLeaf restoration_style_not_set;
        static const Enum::YLeaf restoration_style_keep_failed_lsp;
        static const Enum::YLeaf restoration_style_delete_failed_lsp;

};

class MplsTeDsteClassStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf configured;
        static const Enum::YLeaf default_;
        static const Enum::YLeaf unused;

};

class MplsTeTunnelRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_unknown;
        static const Enum::YLeaf tunnel_head;
        static const Enum::YLeaf tunnel_mid;
        static const Enum::YLeaf tunnel_tail;

};

class TeAssociationTieRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};

class PceLspOperStateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf active;
        static const Enum::YLeaf going_down;
        static const Enum::YLeaf going_up;

};

class TeMeshgroupEnum : public Enum
{
    public:
        static const Enum::YLeaf meshgroup_type_automesh;
        static const Enum::YLeaf meshgroup_type_onehop;

};

class TeMgmtGenericFspecEnum : public Enum
{
    public:
        static const Enum::YLeaf te_generic_fspec_type_g709otn;

};

class MplsTeTerminationEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ether;

};

class OcMplsTeLspEnum : public Enum
{
    public:
        static const Enum::YLeaf oc_mpls_te_lsp_type_not_set;
        static const Enum::YLeaf oc_mpls_te_lsp_type_p2p;
        static const Enum::YLeaf oc_mpls_te_lsp_type_p2mp;

};

class TeOduCapabilityEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf fixed;
        static const Enum::YLeaf flex;

};

class TeSyncPendingReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf current_lspoos;
        static const Enum::YLeaf reopt_lspoos;
        static const Enum::YLeaf standby_lspoos;
        static const Enum::YLeaf standby_reopt_lspoos;
        static const Enum::YLeaf restore_lspoos;
        static const Enum::YLeaf invalid_sync_id;
        static const Enum::YLeaf null_pointer;
        static const Enum::YLeaf pending_flag;
        static const Enum::YLeaf del_from_act_flag;
        static const Enum::YLeaf oos_from_act_flag;
        static const Enum::YLeaf unknown;

};

class MplsTpLspStateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf active;
        static const Enum::YLeaf unknown;

};

class TeXroAttributeEnum : public Enum
{
    public:
        static const Enum::YLeaf interface;
        static const Enum::YLeaf node;
        static const Enum::YLeaf srl_gs;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_0_ */

