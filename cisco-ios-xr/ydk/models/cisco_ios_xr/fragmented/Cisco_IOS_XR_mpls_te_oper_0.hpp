#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_0_
#define _CISCO_IOS_XR_MPLS_TE_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

class MplsTe : public ydk::Entity
{
    public:
        MplsTe();
        ~MplsTe();

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

        class SegmentRouting; //type: MplsTe::SegmentRouting
        class FibNextHopRoutes; //type: MplsTe::FibNextHopRoutes
        class NextHopRoutes; //type: MplsTe::NextHopRoutes
        class TeMib; //type: MplsTe::TeMib
        class HardwareOutOfResources; //type: MplsTe::HardwareOutOfResources
        class P2pP2mpTunnel; //type: MplsTe::P2pP2mpTunnel
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
        class AutoRouteDestinationEntries; //type: MplsTe::AutoRouteDestinationEntries
        class FastReroute; //type: MplsTe::FastReroute
        class AttributeSets; //type: MplsTe::AttributeSets
        class IgpAreaBriefs; //type: MplsTe::IgpAreaBriefs
        class BandwidthAccountingCounters; //type: MplsTe::BandwidthAccountingCounters
        class Tunnels; //type: MplsTe::Tunnels
        class MaximumTunnels; //type: MplsTe::MaximumTunnels
        class PathProtection; //type: MplsTe::PathProtection
        class FibNextHopLabelRoutes; //type: MplsTe::FibNextHopLabelRoutes
        class P2mp; //type: MplsTe::P2mp
        class LspOutOfResources; //type: MplsTe::LspOutOfResources
        class Bfd; //type: MplsTe::Bfd
        class Nsr; //type: MplsTe::Nsr
        class AutoTunnelServices; //type: MplsTe::AutoTunnelServices
        class AffinityMap; //type: MplsTe::AffinityMap
        class TopologyBriefs; //type: MplsTe::TopologyBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopRoutes> fib_next_hop_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes> next_hop_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TeMib> te_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources> hardware_out_of_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel> p2p_p2mp_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes> topology_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AnnounceTunnelsInfo> announce_tunnels_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnel> auto_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::ForwardingAdjacencyDestinations> forwarding_adjacency_destinations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreas> igp_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::WrapProtection> wrap_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Topology> topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters> signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::DiffServTeClasses> diff_serv_te_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoRouteDestinationEntries> auto_route_destination_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets> attribute_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs> igp_area_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::BandwidthAccountingCounters> bandwidth_accounting_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels> tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::MaximumTunnels> maximum_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopLabelRoutes> fib_next_hop_label_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2mp> p2mp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::LspOutOfResources> lsp_out_of_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AutoTunnelServices> auto_tunnel_services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::AffinityMap> affinity_map;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs> topology_briefs;
        
}; // MplsTe


class MplsTe::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrigpAreaInfos; //type: MplsTe::SegmentRouting::SrigpAreaInfos
        class SrNodeInfos; //type: MplsTe::SegmentRouting::SrNodeInfos
        class SrPrefixInfos; //type: MplsTe::SegmentRouting::SrPrefixInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrigpAreaInfos> srigp_area_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos> sr_node_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos> sr_prefix_infos;
        
}; // MplsTe::SegmentRouting


class MplsTe::SegmentRouting::SrigpAreaInfos : public ydk::Entity
{
    public:
        SrigpAreaInfos();
        ~SrigpAreaInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrigpAreaInfo; //type: MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo

        ydk::YList srigp_area_info;
        
}; // MplsTe::SegmentRouting::SrigpAreaInfos


class MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo : public ydk::Entity
{
    public:
        SrigpAreaInfo();
        ~SrigpAreaInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf area; //type: uint32
        ydk::YLeaf segment_routing_enabled; //type: boolean
        ydk::YLeaf strict_spf_enabled; //type: boolean
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance_xr; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat

}; // MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo


class MplsTe::SegmentRouting::SrNodeInfos : public ydk::Entity
{
    public:
        SrNodeInfos();
        ~SrNodeInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrNodeInfo; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo

        ydk::YList sr_node_info;
        
}; // MplsTe::SegmentRouting::SrNodeInfos


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo : public ydk::Entity
{
    public:
        SrNodeInfo();
        ~SrNodeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf area; //type: uint32
        ydk::YLeaf igp_node_id; //type: string
        ydk::YLeaf local_node_igp_id; //type: string
        ydk::YLeaf topology_node_is_router; //type: boolean
        ydk::YLeaf local_node_te_router_id; //type: string
        ydk::YLeaf topology_node_overloaded; //type: boolean
        class IgpArea; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea
        class SrNodeInfo_; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_
        class NodeLink; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea> igp_area;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_> sr_node_info;
        ydk::YList node_link;
        
}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea : public ydk::Entity
{
    public:
        IgpArea();
        ~IgpArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_routing_enabled; //type: boolean
        ydk::YLeaf strict_spf_enabled; //type: boolean
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance_xr; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_ : public ydk::Entity
{
    public:
        SrNodeInfo_();
        ~SrNodeInfo_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_id; //type: uint32
        ydk::YLeaf segment_id_local_absolute_value; //type: uint32
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_size; //type: uint32

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink : public ydk::Entity
{
    public:
        NodeLink();
        ~NodeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_link_type; //type: IgpSubnet
        ydk::YLeaf topology_link_interface_address; //type: string
        ydk::YLeaf topology_link_interface_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_address; //type: string
        ydk::YLeaf topology_link_neighbor_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_system_id; //type: string
        ydk::YLeaf topology_link_neighbor_node_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_generation; //type: uint32
        ydk::YLeaf topology_link_fragment_id; //type: uint32
        ydk::YLeaf topology_link_te_metric; //type: uint32
        ydk::YLeaf topology_link_igp_metric; //type: uint32
        class TopologyLinkExtendedAffinityBit; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit
        class SharedRiskLinkGroup; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup
        class AdjacencySids; //type: MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids

        ydk::YList topology_link_extended_affinity_bit;
        ydk::YList shared_risk_link_group;
        ydk::YList adjacency_sids;
        
}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit : public ydk::Entity
{
    public:
        TopologyLinkExtendedAffinityBit();
        ~TopologyLinkExtendedAffinityBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::TopologyLinkExtendedAffinityBit


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup


class MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids : public ydk::Entity
{
    public:
        AdjacencySids();
        ~AdjacencySids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid; //type: uint32
        ydk::YLeaf link_type; //type: IgpSubnet
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf nbr_node_igpid; //type: string
        ydk::YLeaf nbr_node_te_router_id; //type: string
        ydk::YLeaf flag_f; //type: boolean
        ydk::YLeaf flag_b; //type: boolean
        ydk::YLeaf flag_v; //type: boolean
        ydk::YLeaf flag_l; //type: boolean
        ydk::YLeaf flag_s; //type: boolean

}; // MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids


class MplsTe::SegmentRouting::SrPrefixInfos : public ydk::Entity
{
    public:
        SrPrefixInfos();
        ~SrPrefixInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrPrefixInfo; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo

        ydk::YList sr_prefix_info;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo : public ydk::Entity
{
    public:
        SrPrefixInfo();
        ~SrPrefixInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf area; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf prefix_xr; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf prefix_sid; //type: uint32
        ydk::YLeaf prefix_strict_sid; //type: uint32
        ydk::YLeaf flag_r; //type: boolean
        ydk::YLeaf flag_n; //type: boolean
        ydk::YLeaf flag_p; //type: boolean
        ydk::YLeaf flag_e; //type: boolean
        ydk::YLeaf flag_v; //type: boolean
        ydk::YLeaf flag_l; //type: boolean
        ydk::YLeaf strict_flag_p; //type: boolean
        ydk::YLeaf strict_flag_e; //type: boolean
        ydk::YLeaf strict_flag_v; //type: boolean
        ydk::YLeaf strict_flag_l; //type: boolean
        class IgpArea; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea
        class SrPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath
        class AdvertizingNode; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode
        class StrictAdvertizingNode; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea> igp_area;
        ydk::YList sr_path;
        ydk::YList advertizing_node;
        ydk::YList strict_advertizing_node;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea : public ydk::Entity
{
    public:
        IgpArea();
        ~IgpArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_routing_enabled; //type: boolean
        ydk::YLeaf strict_spf_enabled; //type: boolean
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance_xr; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath : public ydk::Entity
{
    public:
        SrPath();
        ~SrPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf has_backup_path; //type: boolean
        class PrimaryPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath
        class BackupPath; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath> primary_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath> backup_path;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_strict_label; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf backup_path_id; //type: uint32

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath : public ydk::Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf next_hop; //type: string
        class OutgoingLabelsStack; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack
        class OutgoingStrictLabelsStack; //type: MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack

        ydk::YList outgoing_labels_stack;
        ydk::YList outgoing_strict_labels_stack;
        
}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack : public ydk::Entity
{
    public:
        OutgoingLabelsStack();
        ~OutgoingLabelsStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingLabelsStack


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack : public ydk::Entity
{
    public:
        OutgoingStrictLabelsStack();
        ~OutgoingStrictLabelsStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::OutgoingStrictLabelsStack


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode : public ydk::Entity
{
    public:
        AdvertizingNode();
        ~AdvertizingNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode


class MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode : public ydk::Entity
{
    public:
        StrictAdvertizingNode();
        ~StrictAdvertizingNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string

}; // MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode


class MplsTe::FibNextHopRoutes : public ydk::Entity
{
    public:
        FibNextHopRoutes();
        ~FibNextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FibNextHopRoute; //type: MplsTe::FibNextHopRoutes::FibNextHopRoute

        ydk::YList fib_next_hop_route;
        
}; // MplsTe::FibNextHopRoutes


class MplsTe::FibNextHopRoutes::FibNextHopRoute : public ydk::Entity
{
    public:
        FibNextHopRoute();
        ~FibNextHopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf prefix_address; //type: string
        ydk::YLeaf prefix_addr; //type: string
        ydk::YLeaf create_time; //type: uint32
        ydk::YLeaf last_used_time; //type: uint32
        ydk::YLeaf last_update_time; //type: uint32
        ydk::YLeaf expire_time; //type: uint32
        ydk::YLeaf is_registered; //type: boolean
        ydk::YLeaf is_notified; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf route_version; //type: uint64
        class TargetAddress; //type: MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress
        class NextHopPath; //type: MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress> target_address;
        ydk::YList next_hop_path;
        
}; // MplsTe::FibNextHopRoutes::FibNextHopRoute


class MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress : public ydk::Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeTargetAddr
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress


class MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath : public ydk::Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

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
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf backup_path_id; //type: uint32
        ydk::YLeaf pure_backup; //type: boolean
        class LabelStack; //type: MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::LabelStack

        ydk::YList label_stack;
        
}; // MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath


class MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::LabelStack


class MplsTe::NextHopRoutes : public ydk::Entity
{
    public:
        NextHopRoutes();
        ~NextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NextHopRoute; //type: MplsTe::NextHopRoutes::NextHopRoute

        ydk::YList next_hop_route;
        
}; // MplsTe::NextHopRoutes


class MplsTe::NextHopRoutes::NextHopRoute : public ydk::Entity
{
    public:
        NextHopRoute();
        ~NextHopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf prefix_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf next_hop_type; //type: MplsTeNextHop
        ydk::YLeaf prefix_address_xr; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint32
        ydk::YLeaf exact_match; //type: boolean
        ydk::YLeaf create_time; //type: uint32
        ydk::YLeaf last_used_time; //type: uint32
        ydk::YLeaf expire_time; //type: uint32
        ydk::YLeaf installed_tunnel_path_num; //type: uint32
        class ActiveRoute; //type: MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute
        class BackupRoute; //type: MplsTe::NextHopRoutes::NextHopRoute::BackupRoute
        class TunnelPath; //type: MplsTe::NextHopRoutes::NextHopRoute::TunnelPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute> active_route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::NextHopRoutes::NextHopRoute::BackupRoute> backup_route;
        ydk::YList tunnel_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute


class MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute : public ydk::Entity
{
    public:
        ActiveRoute();
        ~ActiveRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_protocol_name; //type: string
        ydk::YLeaf route_distance; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf last_update_time; //type: uint32
        ydk::YLeaf is_registered; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf is_populated; //type: boolean
        ydk::YLeaf route_type; //type: uint16
        class NextHopPath; //type: MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath

        ydk::YList next_hop_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute


class MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath : public ydk::Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf abr_address; //type: string

}; // MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath


class MplsTe::NextHopRoutes::NextHopRoute::BackupRoute : public ydk::Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_protocol_name; //type: string
        ydk::YLeaf route_distance; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf last_update_time; //type: uint32
        ydk::YLeaf is_registered; //type: boolean
        ydk::YLeaf is_stale; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf is_populated; //type: boolean
        ydk::YLeaf route_type; //type: uint16
        class NextHopPath; //type: MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath

        ydk::YList next_hop_path;
        
}; // MplsTe::NextHopRoutes::NextHopRoute::BackupRoute


class MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath : public ydk::Entity
{
    public:
        NextHopPath();
        ~NextHopPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf abr_address; //type: string

}; // MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath


class MplsTe::NextHopRoutes::NextHopRoute::TunnelPath : public ydk::Entity
{
    public:
        TunnelPath();
        ~TunnelPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf install_time; //type: uint32
        ydk::YLeaf installed_metric; //type: uint32

}; // MplsTe::NextHopRoutes::NextHopRoute::TunnelPath


class MplsTe::TeMib : public ydk::Entity
{
    public:
        TeMib();
        ~TeMib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Scalars; //type: MplsTe::TeMib::Scalars

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TeMib::Scalars> scalars;
        
}; // MplsTe::TeMib


class MplsTe::TeMib::Scalars : public ydk::Entity
{
    public:
        Scalars();
        ~Scalars();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mpls_tunnel_configured; //type: uint32
        ydk::YLeaf mpls_tunnel_active; //type: uint32
        ydk::YLeaf mpls_tunnel_te_dist_proto; //type: uint8
        ydk::YLeaf mpls_tunnel_max_hops; //type: uint32
        ydk::YLeaf mpls_tunnel_notification_max_rate; //type: uint32

}; // MplsTe::TeMib::Scalars


class MplsTe::HardwareOutOfResources : public ydk::Entity
{
    public:
        HardwareOutOfResources();
        ~HardwareOutOfResources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Summary; //type: MplsTe::HardwareOutOfResources::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources::Summary> summary;
        
}; // MplsTe::HardwareOutOfResources


class MplsTe::HardwareOutOfResources::Summary : public ydk::Entity
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

        class HardwareOutOfResourcesState; //type: MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState

        ydk::YList hardware_out_of_resources_state;
        
}; // MplsTe::HardwareOutOfResources::Summary


class MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState : public ydk::Entity
{
    public:
        HardwareOutOfResourcesState();
        ~HardwareOutOfResourcesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hw_oor_state; //type: HwOorState
        ydk::YLeaf te_metric_penalty; //type: uint32
        ydk::YLeaf available_bw_percentage; //type: uint32
        ydk::YLeaf node_protection_disable; //type: boolean
        ydk::YLeaf transition_duration; //type: uint32
        ydk::YLeaf minimum_lsp_bandwidth; //type: uint32
        ydk::YLeaf accept_reopt; //type: boolean
        class Statistics; //type: MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics> statistics;
        
}; // MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState


class MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics : public ydk::Entity
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

        ydk::YLeaf hw_oor_state; //type: HwOorState
        ydk::YLeaf transitions; //type: uint32
        ydk::YLeaf node_protection_disable_number; //type: uint32
        ydk::YLeaf rejected_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_reopt_ls_ps_number; //type: uint32
        ydk::YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics


class MplsTe::P2pP2mpTunnel : public ydk::Entity
{
    public:
        P2pP2mpTunnel();
        ~P2pP2mpTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRemoteBriefs; //type: MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs
        class TunnelRemotes; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes
        class NniTunnels; //type: MplsTe::P2pP2mpTunnel::NniTunnels
        class TunnelHeads; //type: MplsTe::P2pP2mpTunnel::TunnelHeads

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs> tunnel_remote_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes> tunnel_remotes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::NniTunnels> nni_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelHeads> tunnel_heads;
        
}; // MplsTe::P2pP2mpTunnel


class MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs : public ydk::Entity
{
    public:
        TunnelRemoteBriefs();
        ~TunnelRemoteBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRemoteBrief; //type: MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief

        ydk::YList tunnel_remote_brief;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs


class MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief : public ydk::Entity
{
    public:
        TunnelRemoteBrief();
        ~TunnelRemoteBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf uptime; //type: uint32
        class LspFec; //type: MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec
        class S2l; //type: MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec> lsp_fec;
        ydk::YList s2l;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief


class MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec


class MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo


class MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l : public ydk::Entity
{
    public:
        S2l();
        ~S2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf ingress_interface; //type: string
        ydk::YLeaf role; //type: MplsTeTunnelRole
        ydk::YLeaf oper_state; //type: boolean
        class S2lFec; //type: MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec> s2l_fec;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l


class MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec : public ydk::Entity
{
    public:
        S2lFec();
        ~S2lFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // MplsTe::P2pP2mpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2l::S2lFec


class MplsTe::P2pP2mpTunnel::TunnelRemotes : public ydk::Entity
{
    public:
        TunnelRemotes();
        ~TunnelRemotes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRemote; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote

        ydk::YList tunnel_remote;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote : public ydk::Entity
{
    public:
        TunnelRemote();
        ~TunnelRemote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf is_frr_failed; //type: boolean
        ydk::YLeaf frr_active_reason; //type: uint32
        ydk::YLeaf lsp_bandwidth; //type: uint32
        ydk::YLeaf lsp_setup_priority; //type: uint8
        ydk::YLeaf lsp_hold_priority; //type: uint8
        ydk::YLeaf lsp_bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf dste_class_match; //type: boolean
        ydk::YLeaf dste_class_index; //type: uint8
        ydk::YLeaf type; //type: MplsTeLsp
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf s2_ls_up; //type: uint32
        ydk::YLeaf s2_ls_proceeding; //type: uint32
        ydk::YLeaf s2_ls_down; //type: uint32
        ydk::YLeaf reoptimize_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf reoptimize_trigger; //type: MteReoptTrigger
        ydk::YLeaf timer_left; //type: uint32
        ydk::YLeaf is_passive; //type: boolean
        ydk::YLeaf is_interface; //type: boolean
        ydk::YLeaf last_path_change; //type: uint32
        ydk::YLeaf persistent_bytes; //type: uint64
        ydk::YLeaf persistent_packets; //type: uint64
        class LspFec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec
        class S2l; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec> lsp_fec;
        ydk::YList s2l;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec : public ydk::Entity
{
    public:
        LspFec();
        ~LspFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l : public ydk::Entity
{
    public:
        S2l();
        ~S2l();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcalc_area; //type: string
        ydk::YLeaf is_expanded_ero; //type: boolean
        ydk::YLeaf path_reeval_query_mid; //type: uint32
        ydk::YLeaf time_since_last_query_received_mid; //type: uint32
        ydk::YLeaf time_since_last_preferred_path_exists_send_mid; //type: uint32
        ydk::YLeaf time_since_last_preferred_tree_exists_send_mid; //type: uint32
        ydk::YLeaf expanded_ero_area_id; //type: string
        ydk::YLeaf expanded_ero_affinity_bits; //type: uint32
        ydk::YLeaf expanded_ero_affinity_mask; //type: uint32
        ydk::YLeaf expanded_ero_metric_type; //type: MplsTeMetric
        ydk::YLeaf expanded_ero_metric; //type: uint32
        ydk::YLeaf abr_auto_discovered; //type: string
        ydk::YLeaf is_frr_enabled; //type: boolean
        ydk::YLeaf is_node_protected; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf path_rro_enabled; //type: boolean
        ydk::YLeaf weight; //type: uint64
        ydk::YLeaf reverse_weight; //type: uint64
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf egress_interface_state; //type: TeControllerState
        ydk::YLeaf egress_interface_brief; //type: string
        ydk::YLeaf ingress_interface; //type: string
        ydk::YLeaf ingress_interface_state; //type: TeControllerState
        ydk::YLeaf ingress_interface_brief; //type: string
        ydk::YLeaf s2l_local_label; //type: uint32
        ydk::YLeaf s2l_out_label; //type: uint32
        ydk::YLeaf outbound_frr_state; //type: MplsTeFrrState
        ydk::YLeaf frr_out_tunnel_interface; //type: string
        ydk::YLeaf role; //type: MplsTeTunnelRole
        ydk::YLeaf signalling_status; //type: MplsTeTunnelsSignalingStatus
        ydk::YLeaf local_router_id; //type: string
        ydk::YLeaf upstream_router_id; //type: string
        ydk::YLeaf downstream_router_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf next_next_hop_address; //type: string
        ydk::YLeaf previous_hop_address; //type: string
        ydk::YLeaf incoming_address; //type: string
        ydk::YLeaf backup_tunnel_interface; //type: string
        ydk::YLeaf node_hop_count; //type: uint8
        ydk::YLeaf is_optical; //type: boolean
        ydk::YLeaf s2l_reverse_ero_obj_present; //type: boolean
        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        ydk::YLeaf reverse_lsp_name; //type: string
        ydk::YLeaf s2l_reverse_tspec_obj_present; //type: boolean
        ydk::YLeaf path_using_strict_spf; //type: boolean
        class S2lFec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec
        class ActivePathOption; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption
        class OutXro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OutXro
        class InXro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::InXro
        class Tspec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Tspec
        class GenericTspec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GenericTspec
        class Fspec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Fspec
        class GenericFspec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GenericFspec
        class NextHopAddressGeneric; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::NextHopAddressGeneric
        class PreviousHopAddressGeneric; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::PreviousHopAddressGeneric
        class IncomingAddressGeneric; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::IncomingAddressGeneric
        class S2lConvergence; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lConvergence
        class SoftPreemption; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SoftPreemption
        class GmplsLabels; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GmplsLabels
        class OtnS2l; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OtnS2l
        class HeadEndBfdInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::HeadEndBfdInfo
        class TailEndBfdInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::TailEndBfdInfo
        class SrlgCollection; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SrlgCollection
        class Association; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Association
        class Protection; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Protection
        class ReverseLspFec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseLspFec
        class ReverseTspec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseTspec
        class FlexInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::FlexInfo
        class LspWrapInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::LspWrapInfo
        class DiversityInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::DiversityInfo
        class AccumulatedPathMetrics; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::AccumulatedPathMetrics
        class AccumulatedReversePathMetrics; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::AccumulatedReversePathMetrics
        class S2lReverseLspSubObj; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lReverseLspSubObj
        class SharedRiskLinkGroup; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SharedRiskLinkGroup
        class OutEro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OutEro
        class InEro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::InEro
        class PathRro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::PathRro
        class ResvRro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ResvRro
        class PathAffinityArray; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::PathAffinityArray
        class ReverseEroIn; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseEroIn
        class S2lSegmentRoutingPath; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lSegmentRoutingPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec> s2l_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption> active_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OutXro> out_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::InXro> in_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Tspec> tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GenericTspec> generic_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Fspec> fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GenericFspec> generic_fspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::NextHopAddressGeneric> next_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::PreviousHopAddressGeneric> previous_hop_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::IncomingAddressGeneric> incoming_address_generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lConvergence> s2l_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::GmplsLabels> gmpls_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::OtnS2l> otn_s2l;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::HeadEndBfdInfo> head_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::TailEndBfdInfo> tail_end_bfd_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::SrlgCollection> srlg_collection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseLspFec> reverse_lsp_fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ReverseTspec> reverse_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::FlexInfo> flex_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::LspWrapInfo> lsp_wrap_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::DiversityInfo> diversity_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::AccumulatedPathMetrics> accumulated_path_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::AccumulatedReversePathMetrics> accumulated_reverse_path_metrics;
        ydk::YList s2l_reverse_lsp_sub_obj;
        ydk::YList shared_risk_link_group;
        ydk::YList out_ero;
        ydk::YList in_ero;
        ydk::YList path_rro;
        ydk::YList resv_rro;
        ydk::YList path_affinity_array;
        ydk::YList reverse_ero_in;
        ydk::YList s2l_segment_routing_path;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec : public ydk::Entity
{
    public:
        S2lFec();
        ~S2lFec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::S2lFec


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption : public ydk::Entity
{
    public:
        ActivePathOption();
        ~ActivePathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index_is_valid; //type: boolean
        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf path_option_name; //type: string
        ydk::YLeaf path_option_type; //type: MplsTePathoption
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf explicit_path_id; //type: uint16
        ydk::YLeaf holddown_duration; //type: uint16
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf path_option_area_id; //type: string
        ydk::YLeaf is_strict_explicit_path; //type: boolean
        ydk::YLeaf is_helddown; //type: boolean
        ydk::YLeaf is_lockdown; //type: boolean
        ydk::YLeaf is_verbatim; //type: boolean
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf has_attribute_set; //type: boolean
        ydk::YLeaf attribute_set_found; //type: boolean
        ydk::YLeaf has_xro_attribute_set; //type: boolean
        ydk::YLeaf xro_attribute_set_found; //type: boolean
        ydk::YLeaf is_segment_routing; //type: boolean
        ydk::YLeaf protected_by_path_option_index; //type: uint32
        ydk::YLeaf restored_from_path_option_index; //type: uint32
        class AttributeSet; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet
        class XroAttributeSet; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet
        class PathCalculationError; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::PathCalculationError
        class RemergeError; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::RemergeError
        class SignallingError; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::SignallingError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet> attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet> xro_attribute_set;
        ydk::YList path_calculation_error;
        ydk::YList remerge_error;
        ydk::YList signalling_error;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2mpte; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte
        class AttributeSetApsPp; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2pTe; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe> attribute_set_p2p_te;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        ydk::YLeaf is_delay_limit_configured; //type: boolean
        ydk::YLeaf delay_limit; //type: uint32
        class Affinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        ydk::YList tunnel_id;
        ydk::YList version_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_signalled_name_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        class SignalledName; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList tunnel_id;
        ydk::YList protected_interface;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
{
    public:
        SignalledName();
        ~SignalledName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf source_type; //type: TeSigNameAppend
        ydk::YLeaf protected_interface_type; //type: TeSigNameAppend
        ydk::YLeaf is_mp_addresses; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_interface; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf is_forward_class_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_node_protection; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf auto_bandwidth_collect; //type: boolean
        ydk::YLeaf auto_route_announce; //type: boolean
        ydk::YLeaf soft_preemption_configured; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf is_interface_bw_configured; //type: boolean
        class Affinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList mesh_group_id;
        ydk::YList tunnel_id;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
{
    public:
        MeshGroupId();
        ~MeshGroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte : public ydk::Entity
{
    public:
        AttributeSetP2mpte();
        ~AttributeSetP2mpte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        class Affinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity> affinity;
        ydk::YList tunnel_id;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe : public ydk::Entity
{
    public:
        AttributeSetP2pTe();
        ~AttributeSetP2pTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2lSrPathSelection
        ydk::YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_selection_invalidation_action; //type: TePathInvalAction
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf path_selection_metric; //type: MplsTeMetric
        ydk::YLeaf is_path_selection_metric_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_margin; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        ydk::YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        ydk::YLeaf is_path_select_configured; //type: boolean
        ydk::YLeaf is_prepend_list_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        class Affinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity
        class Logging; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging
        class PrependList; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList> prepend_list;
        ydk::YList tunnel_id;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList : public ydk::Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrependEntry; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry

        ydk::YList prepend_entry;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry : public ydk::Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAttributeSetSrPrepend
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf next_label; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet : public ydk::Entity
{
    public:
        XroAttributeSet();
        ~XroAttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2mpte; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte
        class AttributeSetApsPp; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2pTe; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe> attribute_set_p2p_te;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        ydk::YLeaf is_delay_limit_configured; //type: boolean
        ydk::YLeaf delay_limit; //type: uint32
        class Affinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        ydk::YList tunnel_id;
        ydk::YList version_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_signalled_name_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        class SignalledName; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList tunnel_id;
        ydk::YList protected_interface;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
{
    public:
        SignalledName();
        ~SignalledName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf source_type; //type: TeSigNameAppend
        ydk::YLeaf protected_interface_type; //type: TeSigNameAppend
        ydk::YLeaf is_mp_addresses; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_interface; //type: string

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf is_forward_class_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_node_protection; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf auto_bandwidth_collect; //type: boolean
        ydk::YLeaf auto_route_announce; //type: boolean
        ydk::YLeaf soft_preemption_configured; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf is_interface_bw_configured; //type: boolean
        class Affinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        ydk::YList policy_class_entry;
        ydk::YList mesh_group_id;
        ydk::YList tunnel_id;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        ydk::YList named_affinity;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        ydk::YList constraint_extended_value;
        ydk::YList extended_forward_ref_value;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
{
    public:
        MeshGroupId();
        ~MeshGroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xro; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        ydk::YList xro_subobject;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::P2pP2mpTunnel::TunnelRemotes::TunnelRemote::S2l::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

class MplsTeLspMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_not_set;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_current;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_reopt;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_clean;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_standby;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_pp_clean;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_restore;
        static const ydk::Enum::YLeaf mpls_te_lsp_mode_reopt_standby;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls-te-lsp-mode-not-set") return 0;
            if (name == "mpls-te-lsp-mode-current") return 1;
            if (name == "mpls-te-lsp-mode-reopt") return 2;
            if (name == "mpls-te-lsp-mode-clean") return 3;
            if (name == "mpls-te-lsp-mode-standby") return 4;
            if (name == "mpls-te-lsp-mode-pp-clean") return 5;
            if (name == "mpls-te-lsp-mode-restore") return 6;
            if (name == "mpls-te-lsp-mode-reopt-standby") return 7;
            return -1;
        }
};

class MteReoptTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_trigger;
        static const ydk::Enum::YLeaf timer_trigger;
        static const ydk::Enum::YLeaf bandwidth_change_trigger;
        static const ydk::Enum::YLeaf auto_bandwidth_overflow_trigger;
        static const ydk::Enum::YLeaf auto_bandwidth_underflow_trigger;
        static const ydk::Enum::YLeaf auto_bandwidth_adjustment_trigger;
        static const ydk::Enum::YLeaf metric_type_change_trigger;
        static const ydk::Enum::YLeaf user_trigger;
        static const ydk::Enum::YLeaf frr_trigger;
        static const ydk::Enum::YLeaf remerge_error_trigger;
        static const ydk::Enum::YLeaf preferred_path_trigger;
        static const ydk::Enum::YLeaf preferred_tree_trigger;
        static const ydk::Enum::YLeaf due_to_maximum_metric;
        static const ydk::Enum::YLeaf path_option_switchover_trigger;
        static const ydk::Enum::YLeaf path_protection_switchover_trigger;
        static const ydk::Enum::YLeaf iep_enable_reoptimization_trigger;
        static const ydk::Enum::YLeaf affinity_path_verification_fail_trigger;
        static const ydk::Enum::YLeaf cost_limit_path_verification_fail_trigger;
        static const ydk::Enum::YLeaf delay_limit_path_verification_fail_trigger;
        static const ydk::Enum::YLeaf soft_preemption_trigger;
        static const ydk::Enum::YLeaf iep_changed;
        static const ydk::Enum::YLeaf po_changed;
        static const ydk::Enum::YLeaf dest_changed;
        static const ydk::Enum::YLeaf reopt_try_to_force_it;
        static const ydk::Enum::YLeaf topology_change_trigger;
        static const ydk::Enum::YLeaf reopt_link_up_event;
        static const ydk::Enum::YLeaf bfd_session_down_trigger;
        static const ydk::Enum::YLeaf reverse_assoc_s2l_received_trigger;
        static const ydk::Enum::YLeaf gmpls_uni_multilayer_trigger;
        static const ydk::Enum::YLeaf gmpls_uni_user_trigger;
        static const ydk::Enum::YLeaf path_selection_tiebreaker_change_trigger;
        static const ydk::Enum::YLeaf sr_egress_path_change_trigger;
        static const ydk::Enum::YLeaf overload_bit_trigger;
        static const ydk::Enum::YLeaf pce_trigger;
        static const ydk::Enum::YLeaf lockout_metric_trigger;
        static const ydk::Enum::YLeaf bfd_session_config_change_trigger;
        static const ydk::Enum::YLeaf higher_priority_po_change_trigger;
        static const ydk::Enum::YLeaf sr_area_spf_support_change_trigger;
        static const ydk::Enum::YLeaf path_protection_non_revertive_config_change;
        static const ydk::Enum::YLeaf trigger_not_used;

        static int get_enum_value(const std::string & name) {
            if (name == "no-trigger") return 0;
            if (name == "timer-trigger") return 1;
            if (name == "bandwidth-change-trigger") return 2;
            if (name == "auto-bandwidth-overflow-trigger") return 3;
            if (name == "auto-bandwidth-underflow-trigger") return 4;
            if (name == "auto-bandwidth-adjustment-trigger") return 5;
            if (name == "metric-type-change-trigger") return 6;
            if (name == "user-trigger") return 7;
            if (name == "frr-trigger") return 8;
            if (name == "remerge-error-trigger") return 9;
            if (name == "preferred-path-trigger") return 10;
            if (name == "preferred-tree-trigger") return 11;
            if (name == "due-to-maximum-metric") return 12;
            if (name == "path-option-switchover-trigger") return 13;
            if (name == "path-protection-switchover-trigger") return 14;
            if (name == "iep-enable-reoptimization-trigger") return 15;
            if (name == "affinity-path-verification-fail-trigger") return 16;
            if (name == "cost-limit-path-verification-fail-trigger") return 17;
            if (name == "delay-limit-path-verification-fail-trigger") return 18;
            if (name == "soft-preemption-trigger") return 19;
            if (name == "iep-changed") return 20;
            if (name == "po-changed") return 21;
            if (name == "dest-changed") return 22;
            if (name == "reopt-try-to-force-it") return 23;
            if (name == "topology-change-trigger") return 24;
            if (name == "reopt-link-up-event") return 25;
            if (name == "bfd-session-down-trigger") return 26;
            if (name == "reverse-assoc-s2l-received-trigger") return 27;
            if (name == "gmpls-uni-multilayer-trigger") return 28;
            if (name == "gmpls-uni-user-trigger") return 29;
            if (name == "path-selection-tiebreaker-change-trigger") return 30;
            if (name == "sr-egress-path-change-trigger") return 31;
            if (name == "overload-bit-trigger") return 32;
            if (name == "pce-trigger") return 33;
            if (name == "lockout-metric-trigger") return 34;
            if (name == "bfd-session-config-change-trigger") return 35;
            if (name == "higher-priority-po-change-trigger") return 36;
            if (name == "sr-area-spf-support-change-trigger") return 37;
            if (name == "path-protection-non-revertive-config-change") return 38;
            if (name == "trigger-not-used") return 39;
            return -1;
        }
};

class MplsTpLspBfdState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class FlexLspLockoutOrigination : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lockout_origination_none;
        static const ydk::Enum::YLeaf lockout_origination_local;
        static const ydk::Enum::YLeaf lockout_origination_remote;

        static int get_enum_value(const std::string & name) {
            if (name == "lockout-origination-none") return 0;
            if (name == "lockout-origination-local") return 1;
            if (name == "lockout-origination-remote") return 2;
            return -1;
        }
};

class MplsTeMetricQualifier : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf metric_default;
        static const ydk::Enum::YLeaf metric_global;
        static const ydk::Enum::YLeaf metric_interface;

        static int get_enum_value(const std::string & name) {
            if (name == "metric-default") return 0;
            if (name == "metric-global") return 1;
            if (name == "metric-interface") return 2;
            return -1;
        }
};

class TeSyncStatusShow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf master_sync_status_show;
        static const ydk::Enum::YLeaf slave_sync_status_show;

        static int get_enum_value(const std::string & name) {
            if (name == "master-sync-status-show") return 0;
            if (name == "slave-sync-status-show") return 1;
            return -1;
        }
};

class MplsTeTunnelsProcessStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_running;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf not_registered_with_rsvp;

        static int get_enum_value(const std::string & name) {
            if (name == "not-running") return 0;
            if (name == "running") return 1;
            if (name == "not-registered-with-rsvp") return 2;
            return -1;
        }
};

class MplsTeUni : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf xc;
        static const ydk::Enum::YLeaf term;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "xc") return 1;
            if (name == "term") return 2;
            return -1;
        }
};

class TeStatsSigFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_stat_sig_filter_vif;
        static const ydk::Enum::YLeaf te_stat_sig_filter_lsp;

        static int get_enum_value(const std::string & name) {
            if (name == "te-stat-sig-filter-vif") return 0;
            if (name == "te-stat-sig-filter-lsp") return 1;
            return -1;
        }
};

class RsvpMgmtEroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_type_ipv4;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_type_un_num;

        static int get_enum_value(const std::string & name) {
            if (name == "rsvp-mgmt-ero-type-ipv4") return 1;
            if (name == "rsvp-mgmt-ero-type-un-num") return 4;
            return -1;
        }
};

class Ctype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ctype_null;
        static const ydk::Enum::YLeaf ctype_ipv4;
        static const ydk::Enum::YLeaf ctype_ipv4_p2p_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv6_p2p_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv4_uni;
        static const ydk::Enum::YLeaf ctype_ipv4_p2mp_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv6_p2mp_tunnel;

        static int get_enum_value(const std::string & name) {
            if (name == "ctype-null") return 0;
            if (name == "ctype-ipv4") return 1;
            if (name == "ctype-ipv4-p2p-tunnel") return 7;
            if (name == "ctype-ipv6-p2p-tunnel") return 8;
            if (name == "ctype-ipv4-uni") return 9;
            if (name == "ctype-ipv4-p2mp-tunnel") return 13;
            if (name == "ctype-ipv6-p2mp-tunnel") return 14;
            return -1;
        }
};

class IgpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "isis") return 1;
            if (name == "ospf") return 2;
            return -1;
        }
};

class MplsTePathoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf path_option_unknown;
        static const ydk::Enum::YLeaf path_option_dynamic;
        static const ydk::Enum::YLeaf path_option_explicit_name;
        static const ydk::Enum::YLeaf path_option_explicit_id;
        static const ydk::Enum::YLeaf path_option_pce;
        static const ydk::Enum::YLeaf path_option_no_ero;
        static const ydk::Enum::YLeaf path_option_segment_routing;

        static int get_enum_value(const std::string & name) {
            if (name == "path-option-unknown") return 0;
            if (name == "path-option-dynamic") return 1;
            if (name == "path-option-explicit-name") return 2;
            if (name == "path-option-explicit-id") return 3;
            if (name == "path-option-pce") return 4;
            if (name == "path-option-no-ero") return 5;
            if (name == "path-option-segment-routing") return 6;
            return -1;
        }
};

class BandwidthUnitEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf kilo_bits_per_second;
        static const ydk::Enum::YLeaf kilo_bytes_per_second;

        static int get_enum_value(const std::string & name) {
            if (name == "kilo-bits-per-second") return 0;
            if (name == "kilo-bytes-per-second") return 1;
            return -1;
        }
};

class MteTunnelAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_state_admin_unknown;
        static const ydk::Enum::YLeaf admin_shutdown;
        static const ydk::Enum::YLeaf admin_up;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-state-admin-unknown") return 0;
            if (name == "admin-shutdown") return 1;
            if (name == "admin-up") return 2;
            return -1;
        }
};

class TeApsSncMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snc_mode_not_set;
        static const ydk::Enum::YLeaf snc_mode_n;
        static const ydk::Enum::YLeaf snc_mode_i;
        static const ydk::Enum::YLeaf snc_mode_s;

        static int get_enum_value(const std::string & name) {
            if (name == "snc-mode-not-set") return 0;
            if (name == "snc-mode-n") return 1;
            if (name == "snc-mode-i") return 2;
            if (name == "snc-mode-s") return 3;
            return -1;
        }
};

class TeAutobwAppRej : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf application_allowed;
        static const ydk::Enum::YLeaf auto_bw_disabled;
        static const ydk::Enum::YLeaf tunnel_is_down;
        static const ydk::Enum::YLeaf tunnel_is_frr;
        static const ydk::Enum::YLeaf tunnel_is_backup;
        static const ydk::Enum::YLeaf tunnel_is_lock_down;

        static int get_enum_value(const std::string & name) {
            if (name == "application-allowed") return 0;
            if (name == "auto-bw-disabled") return 1;
            if (name == "tunnel-is-down") return 2;
            if (name == "tunnel-is-frr") return 3;
            if (name == "tunnel-is-backup") return 4;
            if (name == "tunnel-is-lock-down") return 5;
            return -1;
        }
};

class TeSyncNotReadyReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idt_in_progress;
        static const ydk::Enum::YLeaf standby_not_connected;
        static const ydk::Enum::YLeaf collaborator_disconnected;
        static const ydk::Enum::YLeaf collaborator_timeout;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "idt-in-progress") return 0;
            if (name == "standby-not-connected") return 1;
            if (name == "collaborator-disconnected") return 2;
            if (name == "collaborator-timeout") return 3;
            if (name == "unknown") return 4;
            return -1;
        }
};

class TunnelAttributeSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_attribute_set_none;
        static const ydk::Enum::YLeaf tunnel_attribute_set_static;
        static const ydk::Enum::YLeaf tunnel_attribute_set_path_option;
        static const ydk::Enum::YLeaf tunnel_attribute_set_not_used;
        static const ydk::Enum::YLeaf tunnel_attribute_set_auto_backup;
        static const ydk::Enum::YLeaf tunnel_attribute_set_auto_mesh;
        static const ydk::Enum::YLeaf tunnel_attribute_set_xro;
        static const ydk::Enum::YLeaf tunnel_attribute_set_p2mpte;
        static const ydk::Enum::YLeaf tunnel_attribute_aps_pp;
        static const ydk::Enum::YLeaf tunnel_attribute_set_p2p_te;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-attribute-set-none") return 0;
            if (name == "tunnel-attribute-set-static") return 1;
            if (name == "tunnel-attribute-set-path-option") return 2;
            if (name == "tunnel-attribute-set-not-used") return 3;
            if (name == "tunnel-attribute-set-auto-backup") return 4;
            if (name == "tunnel-attribute-set-auto-mesh") return 5;
            if (name == "tunnel-attribute-set-xro") return 6;
            if (name == "tunnel-attribute-set-p2mpte") return 7;
            if (name == "tunnel-attribute-aps-pp") return 8;
            if (name == "tunnel-attribute-set-p2p-te") return 9;
            return -1;
        }
};

class TeBfdLspSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_none;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_created;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_up;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_down;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_admin_down;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_deleted;
        static const ydk::Enum::YLeaf bfd_over_lsp_session_state_create_failed;

        static int get_enum_value(const std::string & name) {
            if (name == "bfd-over-lsp-session-state-none") return 0;
            if (name == "bfd-over-lsp-session-state-created") return 1;
            if (name == "bfd-over-lsp-session-state-up") return 2;
            if (name == "bfd-over-lsp-session-state-down") return 3;
            if (name == "bfd-over-lsp-session-state-admin-down") return 4;
            if (name == "bfd-over-lsp-session-state-deleted") return 5;
            if (name == "bfd-over-lsp-session-state-create-failed") return 6;
            return -1;
        }
};

class MplsTpLspOamState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ldi;
        static const ydk::Enum::YLeaf lkr;
        static const ydk::Enum::YLeaf ais;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ldi") return 1;
            if (name == "lkr") return 2;
            if (name == "ais") return 3;
            return -1;
        }
};

class TePpDiversity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf diversity_none;
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf node_link;
        static const ydk::Enum::YLeaf srlg;
        static const ydk::Enum::YLeaf node_srlg;
        static const ydk::Enum::YLeaf node_link_srlg;
        static const ydk::Enum::YLeaf diversity_user;
        static const ydk::Enum::YLeaf diversity_reverse_ero;

        static int get_enum_value(const std::string & name) {
            if (name == "diversity-none") return 0;
            if (name == "link") return 1;
            if (name == "node") return 2;
            if (name == "node-link") return 3;
            if (name == "srlg") return 4;
            if (name == "node-srlg") return 5;
            if (name == "node-link-srlg") return 6;
            if (name == "diversity-user") return 7;
            if (name == "diversity-reverse-ero") return 8;
            return -1;
        }
};

class LinkDirectionEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_direction_up_stream;
        static const ydk::Enum::YLeaf link_direction_down_stream;
        static const ydk::Enum::YLeaf link_direction_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "link-direction-up-stream") return 0;
            if (name == "link-direction-down-stream") return 1;
            if (name == "link-direction-unknown") return 2;
            return -1;
        }
};

class MplsTeBackupUsage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf backup_not_protecting;
        static const ydk::Enum::YLeaf backup_protecting;

        static int get_enum_value(const std::string & name) {
            if (name == "backup-not-protecting") return 0;
            if (name == "backup-protecting") return 1;
            return -1;
        }
};

class FloodingTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flooding_reason_unknown;
        static const ydk::Enum::YLeaf link_up;
        static const ydk::Enum::YLeaf link_down;
        static const ydk::Enum::YLeaf threshold_up;
        static const ydk::Enum::YLeaf threshold_down;
        static const ydk::Enum::YLeaf threshold_up_pool1;
        static const ydk::Enum::YLeaf threshold_down_pool1;
        static const ydk::Enum::YLeaf timer_expired;
        static const ydk::Enum::YLeaf bandwidth_change;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf rsvp_timeout;
        static const ydk::Enum::YLeaf rsvp_reconnect;
        static const ydk::Enum::YLeaf te_exited;
        static const ydk::Enum::YLeaf srlg_change;
        static const ydk::Enum::YLeaf hw_oor_green;
        static const ydk::Enum::YLeaf hw_oor_yellow;
        static const ydk::Enum::YLeaf hw_oor_red;
        static const ydk::Enum::YLeaf hw_oor_recovery_duration_expired;
        static const ydk::Enum::YLeaf lsp_oor_green;
        static const ydk::Enum::YLeaf lsp_oor_yellow;
        static const ydk::Enum::YLeaf lsp_oor_red;
        static const ydk::Enum::YLeaf lsp_oor_recovery_duration_expired;
        static const ydk::Enum::YLeaf max_res_bandwidth_threshold_up;
        static const ydk::Enum::YLeaf max_res_bandwidth_threshold_down;

        static int get_enum_value(const std::string & name) {
            if (name == "flooding-reason-unknown") return 0;
            if (name == "link-up") return 1;
            if (name == "link-down") return 2;
            if (name == "threshold-up") return 3;
            if (name == "threshold-down") return 4;
            if (name == "threshold-up-pool1") return 5;
            if (name == "threshold-down-pool1") return 6;
            if (name == "timer-expired") return 7;
            if (name == "bandwidth-change") return 8;
            if (name == "user") return 9;
            if (name == "rsvp-timeout") return 10;
            if (name == "rsvp-reconnect") return 11;
            if (name == "te-exited") return 12;
            if (name == "srlg-change") return 13;
            if (name == "hw-oor-green") return 14;
            if (name == "hw-oor-yellow") return 15;
            if (name == "hw-oor-red") return 16;
            if (name == "hw-oor-recovery-duration-expired") return 17;
            if (name == "lsp-oor-green") return 18;
            if (name == "lsp-oor-yellow") return 19;
            if (name == "lsp-oor-red") return 20;
            if (name == "lsp-oor-recovery-duration-expired") return 21;
            if (name == "max-res-bandwidth-threshold-up") return 22;
            if (name == "max-res-bandwidth-threshold-down") return 23;
            return -1;
        }
};

class MplsTeTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_down;
        static const ydk::Enum::YLeaf state_up;
        static const ydk::Enum::YLeaf state_down_policy;
        static const ydk::Enum::YLeaf state_lockout;

        static int get_enum_value(const std::string & name) {
            if (name == "state-down") return 0;
            if (name == "state-up") return 1;
            if (name == "state-down-policy") return 2;
            if (name == "state-lockout") return 3;
            return -1;
        }
};

class TeVifBfdEncapMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf gal;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 0;
            if (name == "gal") return 1;
            return -1;
        }
};

class IgpteLibBwModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rdm;
        static const ydk::Enum::YLeaf mam;
        static const ydk::Enum::YLeaf not_set;

        static int get_enum_value(const std::string & name) {
            if (name == "rdm") return 0;
            if (name == "mam") return 1;
            if (name == "not-set") return 2;
            return -1;
        }
};

class MplsTeBackup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf backup_static;
        static const ydk::Enum::YLeaf backup_auto;

        static int get_enum_value(const std::string & name) {
            if (name == "backup-static") return 0;
            if (name == "backup-auto") return 1;
            return -1;
        }
};

class SignalingAgentEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_signaling;
        static const ydk::Enum::YLeaf rsvp_signaling;

        static int get_enum_value(const std::string & name) {
            if (name == "no-signaling") return 0;
            if (name == "rsvp-signaling") return 1;
            return -1;
        }
};

class RrrDsteMigrationMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rrr_dste_mode_none;
        static const ydk::Enum::YLeaf rrr_dste_mode_prestandard;
        static const ydk::Enum::YLeaf rrr_dste_mode_standard;

        static int get_enum_value(const std::string & name) {
            if (name == "rrr-dste-mode-none") return 0;
            if (name == "rrr-dste-mode-prestandard") return 1;
            if (name == "rrr-dste-mode-standard") return 3;
            return -1;
        }
};

class TeXroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf unnumbered;
        static const ydk::Enum::YLeaf as;
        static const ydk::Enum::YLeaf srlg;
        static const ydk::Enum::YLeaf p2p_lsp;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "unnumbered") return 6;
            if (name == "as") return 32;
            if (name == "srlg") return 34;
            if (name == "p2p-lsp") return 36;
            return -1;
        }
};

class TePathInvalAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tear;
        static const ydk::Enum::YLeaf drop;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "tear") return 1;
            if (name == "drop") return 2;
            return -1;
        }
};

class AdmissionPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reject_all;
        static const ydk::Enum::YLeaf allow_all;
        static const ydk::Enum::YLeaf reject_huge;
        static const ydk::Enum::YLeaf allow_if_room;

        static int get_enum_value(const std::string & name) {
            if (name == "reject-all") return 0;
            if (name == "allow-all") return 1;
            if (name == "reject-huge") return 2;
            if (name == "allow-if-room") return 3;
            return -1;
        }
};

class MplsMteTunnelFailReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mtunnel_fail_reason_unapplicable;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_shutdown;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_destination;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_path_option;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_source;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_collaborator_disc;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_unmatched_class_type_priority;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_invalid_bidir_cfg;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_po_switchover;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_tunnel_id;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_no_link;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_link_shutdown;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_link_lmp_down;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_source_destination_same;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_otn_no_odu_level;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_bidir_assoc_id_missing;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_bfdgal_on_unidirectional;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_destination_invalid;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_termination_bandwidth_mismatch;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_termination_has_protection;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_termination_has_invalid_src_dest_ifindex;
        static const ydk::Enum::YLeaf mtunnel_fail_reason_termination_has_invalid_payload_type;

        static int get_enum_value(const std::string & name) {
            if (name == "mtunnel-fail-reason-unapplicable") return 0;
            if (name == "mtunnel-fail-reason-shutdown") return 1;
            if (name == "mtunnel-fail-reason-no-destination") return 2;
            if (name == "mtunnel-fail-reason-no-path-option") return 3;
            if (name == "mtunnel-fail-reason-no-source") return 4;
            if (name == "mtunnel-fail-reason-collaborator-disc") return 5;
            if (name == "mtunnel-fail-reason-unmatched-class-type-priority") return 6;
            if (name == "mtunnel-fail-reason-invalid-bidir-cfg") return 7;
            if (name == "mtunnel-fail-reason-po-switchover") return 8;
            if (name == "mtunnel-fail-reason-no-tunnel-id") return 9;
            if (name == "mtunnel-fail-reason-no-link") return 10;
            if (name == "mtunnel-fail-reason-link-shutdown") return 11;
            if (name == "mtunnel-fail-reason-link-lmp-down") return 12;
            if (name == "mtunnel-fail-reason-source-destination-same") return 13;
            if (name == "mtunnel-fail-reason-otn-no-odu-level") return 14;
            if (name == "mtunnel-fail-reason-bidir-assoc-id-missing") return 15;
            if (name == "mtunnel-fail-reason-bfdgal-on-unidirectional") return 16;
            if (name == "mtunnel-fail-reason-destination-invalid") return 17;
            if (name == "mtunnel-fail-reason-termination-bandwidth-mismatch") return 18;
            if (name == "mtunnel-fail-reason-termination-has-protection") return 19;
            if (name == "mtunnel-fail-reason-termination-has-invalid-src-dest-ifindex") return 20;
            if (name == "mtunnel-fail-reason-termination-has-invalid-payload-type") return 21;
            return -1;
        }
};

class TeAcl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acl_type_unknown;
        static const ydk::Enum::YLeaf acl_type_access_list;
        static const ydk::Enum::YLeaf acl_type_prefix_list;
        static const ydk::Enum::YLeaf acl_type_unregistered;

        static int get_enum_value(const std::string & name) {
            if (name == "acl-type-unknown") return 0;
            if (name == "acl-type-access-list") return 1;
            if (name == "acl-type-prefix-list") return 2;
            if (name == "acl-type-unregistered") return 3;
            return -1;
        }
};

class TeSigNameAppend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf address;
        static const ydk::Enum::YLeaf name;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "address") return 1;
            if (name == "name") return 2;
            return -1;
        }
};

class BandwidthTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pool0;
        static const ydk::Enum::YLeaf pool1;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "pool0") return 0;
            if (name == "pool1") return 1;
            if (name == "unknown") return 2;
            return -1;
        }
};

class TeBfdReversePath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_reverse_path_none;
        static const ydk::Enum::YLeaf bfd_reverse_path_binding_label;

        static int get_enum_value(const std::string & name) {
            if (name == "bfd-reverse-path-none") return 0;
            if (name == "bfd-reverse-path-binding-label") return 1;
            return -1;
        }
};

class TeSchFreq : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sch_freq_not_set;
        static const ydk::Enum::YLeaf sch_freq_set_once;
        static const ydk::Enum::YLeaf sch_freq_set_daily;
        static const ydk::Enum::YLeaf sch_freq_set_weekly;

        static int get_enum_value(const std::string & name) {
            if (name == "sch-freq-not-set") return 0;
            if (name == "sch-freq-set-once") return 1;
            if (name == "sch-freq-set-daily") return 2;
            if (name == "sch-freq-set-weekly") return 3;
            return -1;
        }
};

class MplsTeBwPool : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_bandwidth_pool0;
        static const ydk::Enum::YLeaf te_bandwidth_pool1;
        static const ydk::Enum::YLeaf te_bandwidth_any_pool;

        static int get_enum_value(const std::string & name) {
            if (name == "te-bandwidth-pool0") return 0;
            if (name == "te-bandwidth-pool1") return 1;
            if (name == "te-bandwidth-any-pool") return 2;
            return -1;
        }
};

class MplsTeMgmtGmplsLabelOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf uni_c;
        static const ydk::Enum::YLeaf uni_n;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "uni-c") return 1;
            if (name == "uni-n") return 2;
            return -1;
        }
};

class PceSrSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown_segment_id;
        static const ydk::Enum::YLeaf ipv4_node_segment_id;
        static const ydk::Enum::YLeaf ipv4_adjacency_segment_id;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown-segment-id") return 0;
            if (name == "ipv4-node-segment-id") return 1;
            if (name == "ipv4-adjacency-segment-id") return 2;
            return -1;
        }
};

class MplsTpTunnelSwitchoverTrig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf bfd;
        static const ydk::Enum::YLeaf local_lockout;
        static const ydk::Enum::YLeaf remote_lockout;
        static const ydk::Enum::YLeaf ais;
        static const ydk::Enum::YLeaf ldi;
        static const ydk::Enum::YLeaf lkr;
        static const ydk::Enum::YLeaf link_down;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "bfd") return 1;
            if (name == "local-lockout") return 2;
            if (name == "remote-lockout") return 3;
            if (name == "ais") return 4;
            if (name == "ldi") return 5;
            if (name == "lkr") return 6;
            if (name == "link-down") return 7;
            return -1;
        }
};

class MplsTeLoadshare : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loadshare_equal;
        static const ydk::Enum::YLeaf loadshare_bandwidth_based;
        static const ydk::Enum::YLeaf loadshare_configured;

        static int get_enum_value(const std::string & name) {
            if (name == "loadshare-equal") return 0;
            if (name == "loadshare-bandwidth-based") return 1;
            if (name == "loadshare-configured") return 2;
            return -1;
        }
};

class MplsTpTunnelActiveLsp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf working;
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "working") return 0;
            if (name == "protect") return 1;
            if (name == "none") return 2;
            return -1;
        }
};

class TePnrRevertOptions : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pnr_optionnot_set;
        static const ydk::Enum::YLeaf pnr_option_revertive;
        static const ydk::Enum::YLeaf pnr_option_non_revertive;

        static int get_enum_value(const std::string & name) {
            if (name == "pnr-optionnot-set") return 0;
            if (name == "pnr-option-revertive") return 1;
            if (name == "pnr-option-non-revertive") return 2;
            return -1;
        }
};

class PceLspAutorouteMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "relative") return 1;
            if (name == "absolute") return 2;
            return -1;
        }
};

class MplsTeBackupStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf backup_none;
        static const ydk::Enum::YLeaf backup_unused;
        static const ydk::Enum::YLeaf backup_next_next_hop;
        static const ydk::Enum::YLeaf backup_next_hop;
        static const ydk::Enum::YLeaf backup_next_next_hop_srlg;
        static const ydk::Enum::YLeaf backup_next_hop_srlg;

        static int get_enum_value(const std::string & name) {
            if (name == "backup-none") return 0;
            if (name == "backup-unused") return 1;
            if (name == "backup-next-next-hop") return 2;
            if (name == "backup-next-hop") return 3;
            if (name == "backup-next-next-hop-srlg") return 4;
            if (name == "backup-next-hop-srlg") return 5;
            return -1;
        }
};

class MplsTeMgmtGmplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf fixed_wdm;
        static const ydk::Enum::YLeaf fixed_g709otn;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "fixed-wdm") return 1;
            if (name == "fixed-g709otn") return 2;
            return -1;
        }
};

class TeAutoTunExpPathHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_address_type;
        static const ydk::Enum::YLeaf mpls_label_type;
        static const ydk::Enum::YLeaf ipv4_and_label_type;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-address-type") return 0;
            if (name == "mpls-label-type") return 1;
            if (name == "ipv4-and-label-type") return 2;
            return -1;
        }
};

class TeVifBfd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_disabled;
        static const ydk::Enum::YLeaf bfd_enabled;
        static const ydk::Enum::YLeaf sbfd_enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "bfd-disabled") return 0;
            if (name == "bfd-enabled") return 1;
            if (name == "sbfd-enabled") return 2;
            return -1;
        }
};

class MplsTpTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf admin_up;
        static const ydk::Enum::YLeaf oper_up;
        static const ydk::Enum::YLeaf oper_down;

        static int get_enum_value(const std::string & name) {
            if (name == "admin-down") return 0;
            if (name == "admin-up") return 1;
            if (name == "oper-up") return 2;
            if (name == "oper-down") return 3;
            return -1;
        }
};

class PceTunnelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_state_none;
        static const ydk::Enum::YLeaf tunnel_state_admin_down;
        static const ydk::Enum::YLeaf tunnel_state_down;
        static const ydk::Enum::YLeaf tunnel_state_up;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-state-none") return 0;
            if (name == "tunnel-state-admin-down") return 1;
            if (name == "tunnel-state-down") return 2;
            if (name == "tunnel-state-up") return 3;
            return -1;
        }
};

class MplsTeSoftPreemptionResolution : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf soft_preemption_resolution_none;
        static const ydk::Enum::YLeaf soft_preemption_resolution_pending;
        static const ydk::Enum::YLeaf soft_preemption_resolution_reopt_completed;
        static const ydk::Enum::YLeaf soft_preemption_resolution_teardown;
        static const ydk::Enum::YLeaf soft_preemption_resolution_frr_triggered;
        static const ydk::Enum::YLeaf soft_preemption_resolution_path_protetion_switchover;

        static int get_enum_value(const std::string & name) {
            if (name == "soft-preemption-resolution-none") return 0;
            if (name == "soft-preemption-resolution-pending") return 1;
            if (name == "soft-preemption-resolution-reopt-completed") return 2;
            if (name == "soft-preemption-resolution-teardown") return 3;
            if (name == "soft-preemption-resolution-frr-triggered") return 4;
            if (name == "soft-preemption-resolution-path-protetion-switchover") return 5;
            return -1;
        }
};

class MplsTeSoftPreemptionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf soft_preemption_not_pending;
        static const ydk::Enum::YLeaf soft_preemption_pending;

        static int get_enum_value(const std::string & name) {
            if (name == "soft-preemption-not-pending") return 0;
            if (name == "soft-preemption-pending") return 1;
            return -1;
        }
};

class GmplsUniMgmtDwdmCs : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dwdm100g_hz;
        static const ydk::Enum::YLeaf dwdm50g_hz;
        static const ydk::Enum::YLeaf dwdm25g_hz;
        static const ydk::Enum::YLeaf dwdm12g_hz;
        static const ydk::Enum::YLeaf dwdm6g_hz;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "dwdm100g-hz") return 1;
            if (name == "dwdm50g-hz") return 2;
            if (name == "dwdm25g-hz") return 3;
            if (name == "dwdm12g-hz") return 4;
            if (name == "dwdm6g-hz") return 5;
            return -1;
        }
};

class TeSrSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srsid_not_set;
        static const ydk::Enum::YLeaf srsid_node;
        static const ydk::Enum::YLeaf srsid_adj;
        static const ydk::Enum::YLeaf srsid_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "srsid-not-set") return 0;
            if (name == "srsid-node") return 1;
            if (name == "srsid-adj") return 2;
            if (name == "srsid-unknown") return 3;
            return -1;
        }
};

class TeS2lSrPathSelection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_s2l_sr_path_selection_any;
        static const ydk::Enum::YLeaf te_s2l_sr_path_selection_adj_unprotected;
        static const ydk::Enum::YLeaf te_s2l_sr_path_selection_adj_protected;

        static int get_enum_value(const std::string & name) {
            if (name == "te-s2l-sr-path-selection-any") return 0;
            if (name == "te-s2l-sr-path-selection-adj-unprotected") return 1;
            if (name == "te-s2l-sr-path-selection-adj-protected") return 2;
            return -1;
        }
};

class ResourceProvider : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf resource_provider_none;
        static const ydk::Enum::YLeaf packet_switch_capable;
        static const ydk::Enum::YLeaf time_division_multiplex;
        static const ydk::Enum::YLeaf lambda_switch_capable;
        static const ydk::Enum::YLeaf fiber_switch_capable;
        static const ydk::Enum::YLeaf g709odu_capable;

        static int get_enum_value(const std::string & name) {
            if (name == "resource-provider-none") return 0;
            if (name == "packet-switch-capable") return 1;
            if (name == "time-division-multiplex") return 2;
            if (name == "lambda-switch-capable") return 3;
            if (name == "fiber-switch-capable") return 4;
            if (name == "g709odu-capable") return 5;
            return -1;
        }
};

class AutoBackupProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protection_none;
        static const ydk::Enum::YLeaf protection_next_hop;
        static const ydk::Enum::YLeaf protection_next_next_hop;

        static int get_enum_value(const std::string & name) {
            if (name == "protection-none") return 0;
            if (name == "protection-next-hop") return 1;
            if (name == "protection-next-next-hop") return 2;
            return -1;
        }
};

class MplsTeFrrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frr_inactive;
        static const ydk::Enum::YLeaf frr_active;
        static const ydk::Enum::YLeaf frr_ready;

        static int get_enum_value(const std::string & name) {
            if (name == "frr-inactive") return 0;
            if (name == "frr-active") return 1;
            if (name == "frr-ready") return 2;
            return -1;
        }
};

class MplsTeBfdSessionDownAction1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reopt;
        static const ydk::Enum::YLeaf re_setup;

        static int get_enum_value(const std::string & name) {
            if (name == "reopt") return 0;
            if (name == "re-setup") return 1;
            return -1;
        }
};

class MplsTeP2mpTimer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lmrib_restart;
        static const ydk::Enum::YLeaf lmrib_recovery;
        static const ydk::Enum::YLeaf rsvp_restart;
        static const ydk::Enum::YLeaf lsd_restart;
        static const ydk::Enum::YLeaf lsd_recovery;
        static const ydk::Enum::YLeaf clear_in_progress_bandwidth;
        static const ydk::Enum::YLeaf rsi_restart;
        static const ydk::Enum::YLeaf rsi_recovery;
        static const ydk::Enum::YLeaf ipv4_caps_replay;
        static const ydk::Enum::YLeaf retry_acl_registration_timer;
        static const ydk::Enum::YLeaf mpls_te_exit;
        static const ydk::Enum::YLeaf mpls_te_nsr_peer_restart;
        static const ydk::Enum::YLeaf mpls_te_issu_peer_restart;
        static const ydk::Enum::YLeaf bfd_restart;
        static const ydk::Enum::YLeaf bfd_recovery;
        static const ydk::Enum::YLeaf im_oc_restart;
        static const ydk::Enum::YLeaf im_oc_recovery;
        static const ydk::Enum::YLeaf rib_restart;
        static const ydk::Enum::YLeaf rib_recovery;
        static const ydk::Enum::YLeaf rib_next_hop_route_cleanup;
        static const ydk::Enum::YLeaf rsi_srlg_producer_retry;
        static const ydk::Enum::YLeaf eoc_reg_retry;
        static const ydk::Enum::YLeaf fib_restart;
        static const ydk::Enum::YLeaf fib_recovery;
        static const ydk::Enum::YLeaf fib_next_hop_route_cleanup;
        static const ydk::Enum::YLeaf fib_next_hop_register_retry;
        static const ydk::Enum::YLeaf tun_backend_scan_retry;
        static const ydk::Enum::YLeaf tunnel_checkpoint_list_service;
        static const ydk::Enum::YLeaf tunnel_service_binding_sid_allocation_retry;
        static const ydk::Enum::YLeaf im_sync_delay;
        static const ydk::Enum::YLeaf timer_not_used;

        static int get_enum_value(const std::string & name) {
            if (name == "lmrib-restart") return 0;
            if (name == "lmrib-recovery") return 1;
            if (name == "rsvp-restart") return 2;
            if (name == "lsd-restart") return 3;
            if (name == "lsd-recovery") return 4;
            if (name == "clear-in-progress-bandwidth") return 5;
            if (name == "rsi-restart") return 6;
            if (name == "rsi-recovery") return 7;
            if (name == "ipv4-caps-replay") return 8;
            if (name == "retry-acl-registration-timer") return 9;
            if (name == "mpls-te-exit") return 10;
            if (name == "mpls-te-nsr-peer-restart") return 11;
            if (name == "mpls-te-issu-peer-restart") return 12;
            if (name == "bfd-restart") return 13;
            if (name == "bfd-recovery") return 14;
            if (name == "im-oc-restart") return 15;
            if (name == "im-oc-recovery") return 16;
            if (name == "rib-restart") return 17;
            if (name == "rib-recovery") return 18;
            if (name == "rib-next-hop-route-cleanup") return 19;
            if (name == "rsi-srlg-producer-retry") return 20;
            if (name == "eoc-reg-retry") return 21;
            if (name == "fib-restart") return 22;
            if (name == "fib-recovery") return 23;
            if (name == "fib-next-hop-route-cleanup") return 24;
            if (name == "fib-next-hop-register-retry") return 25;
            if (name == "tun-backend-scan-retry") return 26;
            if (name == "tunnel-checkpoint-list-service") return 27;
            if (name == "tunnel-service-binding-sid-allocation-retry") return 28;
            if (name == "im-sync-delay") return 29;
            if (name == "timer-not-used") return 30;
            return -1;
        }
};

class PceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp_close;
        static const ydk::Enum::YLeaf tcp_listen;
        static const ydk::Enum::YLeaf tcp_connect;
        static const ydk::Enum::YLeaf pcep_closed;
        static const ydk::Enum::YLeaf pcep_opening;
        static const ydk::Enum::YLeaf pcep_open;

        static int get_enum_value(const std::string & name) {
            if (name == "tcp-close") return 0;
            if (name == "tcp-listen") return 1;
            if (name == "tcp-connect") return 2;
            if (name == "pcep-closed") return 3;
            if (name == "pcep-opening") return 4;
            if (name == "pcep-open") return 5;
            return -1;
        }
};

class TeOduLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_odu_level_not_set;
        static const ydk::Enum::YLeaf te_odu_level_one;
        static const ydk::Enum::YLeaf te_odu_level_two;
        static const ydk::Enum::YLeaf te_odu_level_three;
        static const ydk::Enum::YLeaf te_odu_level_four;
        static const ydk::Enum::YLeaf te_odu_zero;
        static const ydk::Enum::YLeaf te_odu_level_two_e;
        static const ydk::Enum::YLeaf te_odu_level_flex_cbr;
        static const ydk::Enum::YLeaf te_odu_level_flex_gfpf_resizeable;
        static const ydk::Enum::YLeaf te_odu_level_flex_gfpf_non_resizable;
        static const ydk::Enum::YLeaf te_odu_level_one_e;
        static const ydk::Enum::YLeaf te_odu_level_one_f;
        static const ydk::Enum::YLeaf te_odu_level_two_f;
        static const ydk::Enum::YLeaf te_odu_level_three_e_one;
        static const ydk::Enum::YLeaf te_odu_level_three_e_two;
        static const ydk::Enum::YLeaf te_odu_level_c_two;
        static const ydk::Enum::YLeaf te_odu_level_c_three;
        static const ydk::Enum::YLeaf te_odu_level_c_four;

        static int get_enum_value(const std::string & name) {
            if (name == "te-odu-level-not-set") return 0;
            if (name == "te-odu-level-one") return 1;
            if (name == "te-odu-level-two") return 2;
            if (name == "te-odu-level-three") return 3;
            if (name == "te-odu-level-four") return 4;
            if (name == "te-odu-zero") return 10;
            if (name == "te-odu-level-two-e") return 11;
            if (name == "te-odu-level-flex-cbr") return 20;
            if (name == "te-odu-level-flex-gfpf-resizeable") return 21;
            if (name == "te-odu-level-flex-gfpf-non-resizable") return 22;
            if (name == "te-odu-level-one-e") return 23;
            if (name == "te-odu-level-one-f") return 24;
            if (name == "te-odu-level-two-f") return 25;
            if (name == "te-odu-level-three-e-one") return 26;
            if (name == "te-odu-level-three-e-two") return 27;
            if (name == "te-odu-level-c-two") return 38;
            if (name == "te-odu-level-c-three") return 39;
            if (name == "te-odu-level-c-four") return 40;
            return -1;
        }
};

class IgpOspfAreaFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp_area_format_number;
        static const ydk::Enum::YLeaf igp_area_format_ip_addr;

        static int get_enum_value(const std::string & name) {
            if (name == "igp-area-format-number") return 0;
            if (name == "igp-area-format-ip-addr") return 1;
            return -1;
        }
};

class PceTunPathState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_none;
        static const ydk::Enum::YLeaf state_pending;
        static const ydk::Enum::YLeaf state_received_path;
        static const ydk::Enum::YLeaf state_no_peer;
        static const ydk::Enum::YLeaf state_pcep_down;
        static const ydk::Enum::YLeaf state_received_no_path;

        static int get_enum_value(const std::string & name) {
            if (name == "state-none") return 0;
            if (name == "state-pending") return 1;
            if (name == "state-received-path") return 2;
            if (name == "state-no-peer") return 3;
            if (name == "state-pcep-down") return 4;
            if (name == "state-received-no-path") return 5;
            return -1;
        }
};

class AutoBackupSrlgMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srlg_not_set;
        static const ydk::Enum::YLeaf srlg_strict;
        static const ydk::Enum::YLeaf srlg_preferred;
        static const ydk::Enum::YLeaf srlg_weighted;

        static int get_enum_value(const std::string & name) {
            if (name == "srlg-not-set") return 0;
            if (name == "srlg-strict") return 1;
            if (name == "srlg-preferred") return 2;
            if (name == "srlg-weighted") return 3;
            return -1;
        }
};

class TeRevEroRejectReasons : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf bad_reverse_ero;
        static const ydk::Enum::YLeaf tie_rejected;
        static const ydk::Enum::YLeaf standby_not_required;
        static const ydk::Enum::YLeaf admin_state;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf class_type;
        static const ydk::Enum::YLeaf bad_association;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "bad-reverse-ero") return 1;
            if (name == "tie-rejected") return 2;
            if (name == "standby-not-required") return 3;
            if (name == "admin-state") return 4;
            if (name == "priority") return 5;
            if (name == "class-type") return 6;
            if (name == "bad-association") return 7;
            return -1;
        }
};

class TeProtect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect_type1_plus1_unidir_no_aps;
        static const ydk::Enum::YLeaf protect_type1_plus1_unidir_aps;
        static const ydk::Enum::YLeaf protect_type1_plus1_bidir_aps;
        static const ydk::Enum::YLeaf protect_type_not_set;

        static int get_enum_value(const std::string & name) {
            if (name == "protect-type1-plus1-unidir-no-aps") return 4;
            if (name == "protect-type1-plus1-unidir-aps") return 8;
            if (name == "protect-type1-plus1-bidir-aps") return 16;
            if (name == "protect-type-not-set") return 255;
            return -1;
        }
};

class TePathProtProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf path_prot_profile_type1_plus0;
        static const ydk::Enum::YLeaf path_prot_profile_type1_plus_r;
        static const ydk::Enum::YLeaf path_prot_profile_type1_plus1;
        static const ydk::Enum::YLeaf path_prot_profile_type1_plus1_plus_r;
        static const ydk::Enum::YLeaf path_prot_profile_type_invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "path-prot-profile-type1-plus0") return 0;
            if (name == "path-prot-profile-type1-plus-r") return 1;
            if (name == "path-prot-profile-type1-plus1") return 16;
            if (name == "path-prot-profile-type1-plus1-plus-r") return 32;
            if (name == "path-prot-profile-type-invalid") return 255;
            return -1;
        }
};

class MplsTePceFailReasons : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_pce_fail_no_reason;
        static const ydk::Enum::YLeaf te_pce_fail_no_pce;
        static const ydk::Enum::YLeaf te_pce_fail_sub_pool;
        static const ydk::Enum::YLeaf te_pce_fail_intra_area;
        static const ydk::Enum::YLeaf te_pce_fail_gmpls;
        static const ydk::Enum::YLeaf te_pce_fail_pending;
        static const ydk::Enum::YLeaf te_pce_fail_oor;
        static const ydk::Enum::YLeaf te_pce_fail_bidirectional;
        static const ydk::Enum::YLeaf te_pce_fail_no_path;
        static const ydk::Enum::YLeaf te_pce_fail_request_timeout;

        static int get_enum_value(const std::string & name) {
            if (name == "te-pce-fail-no-reason") return 0;
            if (name == "te-pce-fail-no-pce") return 1;
            if (name == "te-pce-fail-sub-pool") return 2;
            if (name == "te-pce-fail-intra-area") return 3;
            if (name == "te-pce-fail-gmpls") return 4;
            if (name == "te-pce-fail-pending") return 5;
            if (name == "te-pce-fail-oor") return 6;
            if (name == "te-pce-fail-bidirectional") return 7;
            if (name == "te-pce-fail-no-path") return 8;
            if (name == "te-pce-fail-request-timeout") return 9;
            return -1;
        }
};

class MplsTeFrrSharing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sharing_none;
        static const ydk::Enum::YLeaf sharing_pri_oi_backup_oi_parent;
        static const ydk::Enum::YLeaf sharing_pri_oi_parent_backup_oi;
        static const ydk::Enum::YLeaf sharing_pri_oi_parent_backup_oi_parent;

        static int get_enum_value(const std::string & name) {
            if (name == "sharing-none") return 0;
            if (name == "sharing-pri-oi-backup-oi-parent") return 1;
            if (name == "sharing-pri-oi-parent-backup-oi") return 2;
            if (name == "sharing-pri-oi-parent-backup-oi-parent") return 3;
            return -1;
        }
};

class TeSrlgCollectRequest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mandatory;
        static const ydk::Enum::YLeaf optional;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "mandatory") return 1;
            if (name == "optional") return 2;
            return -1;
        }
};

class TeAttributeSetSrPrepend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_attribute_set_sr_prepend_not_set;
        static const ydk::Enum::YLeaf te_attribute_set_sr_prepend_next_label;
        static const ydk::Enum::YLeaf te_attribute_set_sr_prepend_bgp_nhop;

        static int get_enum_value(const std::string & name) {
            if (name == "te-attribute-set-sr-prepend-not-set") return 0;
            if (name == "te-attribute-set-sr-prepend-next-label") return 1;
            if (name == "te-attribute-set-sr-prepend-bgp-nhop") return 2;
            return -1;
        }
};

class BandwidthStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bandwidth_held;
        static const ydk::Enum::YLeaf bandwidth_reserved;
        static const ydk::Enum::YLeaf bandwidth_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "bandwidth-held") return 0;
            if (name == "bandwidth-reserved") return 1;
            if (name == "bandwidth-unknown") return 2;
            return -1;
        }
};

class TeAffinityTable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf affinity_table_mapping;
        static const ydk::Enum::YLeaf affinity_table_forward_reference;
        static const ydk::Enum::YLeaf affinity_table_count;

        static int get_enum_value(const std::string & name) {
            if (name == "affinity-table-mapping") return 0;
            if (name == "affinity-table-forward-reference") return 1;
            if (name == "affinity-table-count") return 2;
            return -1;
        }
};

class MplsTeNode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf network;

        static int get_enum_value(const std::string & name) {
            if (name == "router") return 1;
            if (name == "network") return 2;
            return -1;
        }
};

class TeMgmtGenericTspec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_generic_tspec_type_g709otn;

        static int get_enum_value(const std::string & name) {
            if (name == "te-generic-tspec-type-g709otn") return 0;
            return -1;
        }
};

class LspOorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsp_oor_green;
        static const ydk::Enum::YLeaf lsp_oor_yellow;
        static const ydk::Enum::YLeaf lsp_oor_red;

        static int get_enum_value(const std::string & name) {
            if (name == "lsp-oor-green") return 0;
            if (name == "lsp-oor-yellow") return 1;
            if (name == "lsp-oor-red") return 2;
            return -1;
        }
};

class HwOorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oor_green;
        static const ydk::Enum::YLeaf oor_yellow;
        static const ydk::Enum::YLeaf oor_red;

        static int get_enum_value(const std::string & name) {
            if (name == "oor-green") return 0;
            if (name == "oor-yellow") return 1;
            if (name == "oor-red") return 2;
            return -1;
        }
};

class MplsTeMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf metric_not_set;
        static const ydk::Enum::YLeaf metric_igp;
        static const ydk::Enum::YLeaf metric_te;
        static const ydk::Enum::YLeaf metric_delay;

        static int get_enum_value(const std::string & name) {
            if (name == "metric-not-set") return 0;
            if (name == "metric-igp") return 1;
            if (name == "metric-te") return 2;
            if (name == "metric-delay") return 3;
            return -1;
        }
};

class TpLinkState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "admin-down") return 1;
            if (name == "up") return 2;
            if (name == "unknown") return 3;
            return -1;
        }
};

class TeP2mpS2lDeletionSubcause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_subcause;
        static const ydk::Enum::YLeaf cleanup_req;
        static const ydk::Enum::YLeaf invalid_data;
        static const ydk::Enum::YLeaf fsm_inv_ctxt;
        static const ydk::Enum::YLeaf fsm_inv_ctxt_data;
        static const ydk::Enum::YLeaf fsm_inv_role;
        static const ydk::Enum::YLeaf ll_failure;
        static const ydk::Enum::YLeaf ll_rel_fail;
        static const ydk::Enum::YLeaf ll_mismatch;
        static const ydk::Enum::YLeaf ll_invalid;
        static const ydk::Enum::YLeaf ll_set_failure;
        static const ydk::Enum::YLeaf bad_out_label;
        static const ydk::Enum::YLeaf sl_err;
        static const ydk::Enum::YLeaf rl_mismatch;
        static const ydk::Enum::YLeaf sl_alloc_err;
        static const ydk::Enum::YLeaf upstream_downstream_label_mismatch;
        static const ydk::Enum::YLeaf upstream_label_failure;
        static const ydk::Enum::YLeaf upstream_label_rel_fail;
        static const ydk::Enum::YLeaf upstream_label_mismatch;
        static const ydk::Enum::YLeaf upstream_label_invalid;
        static const ydk::Enum::YLeaf bad_upstream_label;
        static const ydk::Enum::YLeaf ul_set_failure;
        static const ydk::Enum::YLeaf gmpls_label_alloc_err;
        static const ydk::Enum::YLeaf gmpls_label_clone_err;
        static const ydk::Enum::YLeaf rw_err;
        static const ydk::Enum::YLeaf up_rw_err;
        static const ydk::Enum::YLeaf path_admit;
        static const ydk::Enum::YLeaf bw;
        static const ydk::Enum::YLeaf admit_resv;
        static const ydk::Enum::YLeaf rrrm_err;
        static const ydk::Enum::YLeaf hardware_out_of_resources;
        static const ydk::Enum::YLeaf comp_rid;
        static const ydk::Enum::YLeaf comp_lcl_rid;
        static const ydk::Enum::YLeaf comp_up_rid;
        static const ydk::Enum::YLeaf comp_down_rid;
        static const ydk::Enum::YLeaf rest_if_hop;
        static const ydk::Enum::YLeaf inv_in_if;
        static const ydk::Enum::YLeaf nh_err;
        static const ydk::Enum::YLeaf inv_in_ero;
        static const ydk::Enum::YLeaf out_ero_fail;
        static const ydk::Enum::YLeaf frr_bk_asssign;
        static const ydk::Enum::YLeaf frr_bk_rm;
        static const ydk::Enum::YLeaf frr_bk_send;
        static const ydk::Enum::YLeaf frr_needs_del;
        static const ydk::Enum::YLeaf frr_reopt_lsp;
        static const ydk::Enum::YLeaf rsvp_api_h;
        static const ydk::Enum::YLeaf insane_path;
        static const ydk::Enum::YLeaf remerge_chk_fail;
        static const ydk::Enum::YLeaf remerge_detected;
        static const ydk::Enum::YLeaf xro;
        static const ydk::Enum::YLeaf resv_bw_set;
        static const ydk::Enum::YLeaf resv_prep_fail;
        static const ydk::Enum::YLeaf path_ch_proc;
        static const ydk::Enum::YLeaf path_ch_frr;
        static const ydk::Enum::YLeaf path_ch_sess_attri_fl;
        static const ydk::Enum::YLeaf path_ch_bw_ch;
        static const ydk::Enum::YLeaf path_err_proc;
        static const ydk::Enum::YLeaf path_err;
        static const ydk::Enum::YLeaf path_err_wpsr;
        static const ydk::Enum::YLeaf path_del;
        static const ydk::Enum::YLeaf resv_ch_proc;
        static const ydk::Enum::YLeaf resv_ch_rro;
        static const ydk::Enum::YLeaf resv_del;
        static const ydk::Enum::YLeaf resv_err;
        static const ydk::Enum::YLeaf perr_send_fail;
        static const ydk::Enum::YLeaf perr_proc_fail;
        static const ydk::Enum::YLeaf perr_rcv;
        static const ydk::Enum::YLeaf resv_err_rcv;
        static const ydk::Enum::YLeaf flowspec;
        static const ydk::Enum::YLeaf setup_conn_api_fail;
        static const ydk::Enum::YLeaf path_not_replayed;
        static const ydk::Enum::YLeaf resv_not_replayed;
        static const ydk::Enum::YLeaf rewrite_not_replayed;
        static const ydk::Enum::YLeaf label_not_replayed;
        static const ydk::Enum::YLeaf connection_not_ready;
        static const ydk::Enum::YLeaf master_did_not_replay;
        static const ydk::Enum::YLeaf head_s2l_has_no_vif;
        static const ydk::Enum::YLeaf frr_assigned_s2l_has_no_backup;
        static const ydk::Enum::YLeaf frr_assigned_s2l_has_down_backup;
        static const ydk::Enum::YLeaf out_link_down_and_no_frr;
        static const ydk::Enum::YLeaf collaborator_timeout_rsvp;
        static const ydk::Enum::YLeaf collaborator_timeout_lsd;
        static const ydk::Enum::YLeaf collaborator_timeout_lmrib;
        static const ydk::Enum::YLeaf collaborator_timeout_im;
        static const ydk::Enum::YLeaf collaborator_timeout_error;
        static const ydk::Enum::YLeaf topo_flush;
        static const ydk::Enum::YLeaf area_shut;
        static const ydk::Enum::YLeaf active_po_del;
        static const ydk::Enum::YLeaf path_verify_failed;
        static const ydk::Enum::YLeaf srlg_path_verify_failed;
        static const ydk::Enum::YLeaf affinity_path_verify_failed;
        static const ydk::Enum::YLeaf aff_fail_delayed_tear_timeout_failed;
        static const ydk::Enum::YLeaf cost_limit_verify_failed;
        static const ydk::Enum::YLeaf delay_limit_verify_failed;
        static const ydk::Enum::YLeaf lockout_metric_verify_failed;
        static const ydk::Enum::YLeaf path_setup_timeout;
        static const ydk::Enum::YLeaf vif_destroyed;
        static const ydk::Enum::YLeaf vif_shut;
        static const ydk::Enum::YLeaf lsp_shut;
        static const ydk::Enum::YLeaf gmpls_uni_head;
        static const ydk::Enum::YLeaf head_resetup;
        static const ydk::Enum::YLeaf none_head_resetup;
        static const ydk::Enum::YLeaf dest_disabled;
        static const ydk::Enum::YLeaf iep_ch_act_po;
        static const ydk::Enum::YLeaf iep_ch_reopt;
        static const ydk::Enum::YLeaf iep_ch_standby;
        static const ydk::Enum::YLeaf dste_mode_ch;
        static const ydk::Enum::YLeaf reopt_del_frr_act;
        static const ydk::Enum::YLeaf new_reopt_tear_old;
        static const ydk::Enum::YLeaf reopt_failed_verify;
        static const ydk::Enum::YLeaf reopt_failed_install;
        static const ydk::Enum::YLeaf reopt_failed_rw;
        static const ydk::Enum::YLeaf reopt_failed_not_superset;
        static const ydk::Enum::YLeaf dclean_at_install_time;
        static const ydk::Enum::YLeaf dclean_at_clean_timer;
        static const ydk::Enum::YLeaf dclean_at_reopt_active;
        static const ydk::Enum::YLeaf lcl_notif_head;
        static const ydk::Enum::YLeaf in_if_fail;
        static const ydk::Enum::YLeaf out_if_fail;
        static const ydk::Enum::YLeaf if_fail_lc_oir;
        static const ydk::Enum::YLeaf te_rid_rm;
        static const ydk::Enum::YLeaf te_rsvp_oos_bkup;
        static const ydk::Enum::YLeaf in_if_fail_exp_null_cfg_ch;
        static const ydk::Enum::YLeaf new_curr_lsp_sig;
        static const ydk::Enum::YLeaf new_reopt_lsp_sig;
        static const ydk::Enum::YLeaf new_stdby_lsp_sig;
        static const ydk::Enum::YLeaf new_restore_lsp_sig;
        static const ydk::Enum::YLeaf new_cl_pp_lsp_sig;
        static const ydk::Enum::YLeaf chkpt_recovery_failed;
        static const ydk::Enum::YLeaf stdby_cr_failed;
        static const ydk::Enum::YLeaf reopt_lsp_rej;
        static const ydk::Enum::YLeaf reopt_po_sw_failed;
        static const ydk::Enum::YLeaf failed_to_find_path;
        static const ydk::Enum::YLeaf sig_rcv_fail_path_cr_ch;
        static const ydk::Enum::YLeaf lsp_db_shut;
        static const ydk::Enum::YLeaf reopt_hold_start;
        static const ydk::Enum::YLeaf vif_lspid_mismatch;
        static const ydk::Enum::YLeaf s2l_has_no_vif;
        static const ydk::Enum::YLeaf overload_reopt_timeout;
        static const ydk::Enum::YLeaf hop_limit_exceeded;
        static const ydk::Enum::YLeaf lingering_current_lsp;
        static const ydk::Enum::YLeaf lingering_standby_lsp;
        static const ydk::Enum::YLeaf lingering_restore_lsp;
        static const ydk::Enum::YLeaf double_lockout;
        static const ydk::Enum::YLeaf lockout_no_protection;
        static const ydk::Enum::YLeaf lockout_cleanup;
        static const ydk::Enum::YLeaf te_ppsw_lsp_mismatch;
        static const ydk::Enum::YLeaf te_stdbyup_no_curr_lsp;
        static const ydk::Enum::YLeaf stdby_failed_rw;
        static const ydk::Enum::YLeaf reopt_lsp_tear_ppsw;
        static const ydk::Enum::YLeaf delay_pp_lsp_tear_ppsw;
        static const ydk::Enum::YLeaf stdby_failed_verify;
        static const ydk::Enum::YLeaf stdby_not_needed_due_to_restore;
        static const ydk::Enum::YLeaf restore_failed_verify;
        static const ydk::Enum::YLeaf restore_failed_install;
        static const ydk::Enum::YLeaf restore_failed_rewrite;
        static const ydk::Enum::YLeaf te_ppsw_cfg_rmvd;
        static const ydk::Enum::YLeaf te_ppsw_manual_ppsw;
        static const ydk::Enum::YLeaf te_ppsw_bidir_p_chg_ppsw;
        static const ydk::Enum::YLeaf te_ppsw_bidir_lockout_ppsw;
        static const ydk::Enum::YLeaf dclean_at_pp_clean_timer;
        static const ydk::Enum::YLeaf reopt_standby_failed;
        static const ydk::Enum::YLeaf standby_reoptimized;
        static const ydk::Enum::YLeaf standby_reoptimize_aborted;
        static const ydk::Enum::YLeaf te_reoptup_no_curr_lsp;
        static const ydk::Enum::YLeaf te_reopt_curr_lsp_down;
        static const ydk::Enum::YLeaf te_cleanedt_curr_lsp_down;
        static const ydk::Enum::YLeaf te_delay_lsp_up;
        static const ydk::Enum::YLeaf no_route_due_to_affinity;
        static const ydk::Enum::YLeaf no_rib_lkup_bad_ero_gmpls;
        static const ydk::Enum::YLeaf cleanup_lingering;
        static const ydk::Enum::YLeaf te_s2l_del_sc_soft_preemption_timeout;
        static const ydk::Enum::YLeaf te_s2l_del_sc_soft_preempted_non_current;
        static const ydk::Enum::YLeaf te_s2l_del_sc_vif_sync_lsp_del;
        static const ydk::Enum::YLeaf rsvp_api_cleanup_req;
        static const ydk::Enum::YLeaf te_s2l_del_sc_frr_wrong_backup;
        static const ydk::Enum::YLeaf te_s2l_del_sc_bfd_session_create_failed;
        static const ydk::Enum::YLeaf te_s2l_del_sc_bfd_session_bringup_timeout;
        static const ydk::Enum::YLeaf te_s2l_del_sc_bfd_session_down;
        static const ydk::Enum::YLeaf te_s2l_del_sc_bfd_session_not_replayed;
        static const ydk::Enum::YLeaf te_s2l_del_sc_reopt_p2mp_egress_info_fail;
        static const ydk::Enum::YLeaf non_curr_frr_lcl_notif_event;
        static const ydk::Enum::YLeaf unsupported_encoding;
        static const ydk::Enum::YLeaf unsupported_gpid;
        static const ydk::Enum::YLeaf unsupported_switching_type;
        static const ydk::Enum::YLeaf upstream_label_change_not_permitted;
        static const ydk::Enum::YLeaf encoding_type_change_not_permitted;
        static const ydk::Enum::YLeaf aps_protect_info_change_failed;
        static const ydk::Enum::YLeaf incorrect_lsp_type;
        static const ydk::Enum::YLeaf local_hop_error;
        static const ydk::Enum::YLeaf unsupported_gmpls_attributes;
        static const ydk::Enum::YLeaf gmpls_uni_reopt_triggered;
        static const ydk::Enum::YLeaf maximum_acceptable_label_retries;
        static const ydk::Enum::YLeaf invalid_direction;
        static const ydk::Enum::YLeaf invalid_rewrite_context;
        static const ydk::Enum::YLeaf invalid_label_context;
        static const ydk::Enum::YLeaf dwdm_capability_changed;
        static const ydk::Enum::YLeaf dwdm_capability_removed;
        static const ydk::Enum::YLeaf dwdm_wavelength_removed;
        static const ydk::Enum::YLeaf gmpls_uni_multilayer_restoration;
        static const ydk::Enum::YLeaf gmpls_uni_user_triggered_reoptimization;
        static const ydk::Enum::YLeaf gmpls_uni_active_path_change_triggered_reopt;
        static const ydk::Enum::YLeaf passive_match_err;
        static const ydk::Enum::YLeaf egress_control_err;
        static const ydk::Enum::YLeaf egress_control_map_err;
        static const ydk::Enum::YLeaf restore_not_needed_for_current;
        static const ydk::Enum::YLeaf restore_not_needed_for_standby;
        static const ydk::Enum::YLeaf restore_dp_down;
        static const ydk::Enum::YLeaf current_not_needed_dp_down;
        static const ydk::Enum::YLeaf bad_protct_obj;
        static const ydk::Enum::YLeaf head_flexi_cap_change;
        static const ydk::Enum::YLeaf tail_flexi_cap_change;
        static const ydk::Enum::YLeaf optical_link_down;
        static const ydk::Enum::YLeaf optical_link_lsp_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_owner_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_interface_handle_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_hop_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_role_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_downstream_router_id_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_upstream_router_id_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_encoding_type_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_switching_type_out_of_sync;
        static const ydk::Enum::YLeaf optical_link_gpid_out_of_sync;
        static const ydk::Enum::YLeaf egress_optical_link_not_found;
        static const ydk::Enum::YLeaf ingress_optical_link_not_found;
        static const ydk::Enum::YLeaf sync_dest_state;
        static const ydk::Enum::YLeaf prot_object_err;
        static const ydk::Enum::YLeaf reverse_s2l_deleted;
        static const ydk::Enum::YLeaf cancel_inprogress_by_slave;
        static const ydk::Enum::YLeaf invalid_reverse_ero;
        static const ydk::Enum::YLeaf reverse_lsp_not_found;
        static const ydk::Enum::YLeaf reverse_lsp_not_present;
        static const ydk::Enum::YLeaf associated_vif_down;
        static const ydk::Enum::YLeaf vif_sync_processing;
        static const ydk::Enum::YLeaf incoming_interface_lockout;
        static const ydk::Enum::YLeaf sr_egress_path_changed;
        static const ydk::Enum::YLeaf in_if_fail_imp_null_cfg_ch;
        static const ydk::Enum::YLeaf reverse_lsp_failure;
        static const ydk::Enum::YLeaf lsp_wrap_label_error;
        static const ydk::Enum::YLeaf lsp_wrap_rewrite_error;
        static const ydk::Enum::YLeaf transit_lsp_out_of_resources;
        static const ydk::Enum::YLeaf path_protection_configuration_change;
        static const ydk::Enum::YLeaf better_standby_path;
        static const ydk::Enum::YLeaf path_protection_non_revertive_config_changed;
        static const ydk::Enum::YLeaf fsm_sc_must_be_last;

        static int get_enum_value(const std::string & name) {
            if (name == "no-subcause") return 0;
            if (name == "cleanup-req") return 1;
            if (name == "invalid-data") return 2;
            if (name == "fsm-inv-ctxt") return 3;
            if (name == "fsm-inv-ctxt-data") return 4;
            if (name == "fsm-inv-role") return 5;
            if (name == "ll-failure") return 6;
            if (name == "ll-rel-fail") return 7;
            if (name == "ll-mismatch") return 8;
            if (name == "ll-invalid") return 9;
            if (name == "ll-set-failure") return 10;
            if (name == "bad-out-label") return 11;
            if (name == "sl-err") return 12;
            if (name == "rl-mismatch") return 13;
            if (name == "sl-alloc-err") return 14;
            if (name == "upstream-downstream-label-mismatch") return 15;
            if (name == "upstream-label-failure") return 16;
            if (name == "upstream-label-rel-fail") return 17;
            if (name == "upstream-label-mismatch") return 18;
            if (name == "upstream-label-invalid") return 19;
            if (name == "bad-upstream-label") return 20;
            if (name == "ul-set-failure") return 21;
            if (name == "gmpls-label-alloc-err") return 22;
            if (name == "gmpls-label-clone-err") return 23;
            if (name == "rw-err") return 24;
            if (name == "up-rw-err") return 25;
            if (name == "path-admit") return 26;
            if (name == "bw") return 27;
            if (name == "admit-resv") return 28;
            if (name == "rrrm-err") return 29;
            if (name == "hardware-out-of-resources") return 30;
            if (name == "comp-rid") return 31;
            if (name == "comp-lcl-rid") return 32;
            if (name == "comp-up-rid") return 33;
            if (name == "comp-down-rid") return 34;
            if (name == "rest-if-hop") return 35;
            if (name == "inv-in-if") return 36;
            if (name == "nh-err") return 37;
            if (name == "inv-in-ero") return 38;
            if (name == "out-ero-fail") return 39;
            if (name == "frr-bk-asssign") return 40;
            if (name == "frr-bk-rm") return 41;
            if (name == "frr-bk-send") return 42;
            if (name == "frr-needs-del") return 43;
            if (name == "frr-reopt-lsp") return 44;
            if (name == "rsvp-api-h") return 45;
            if (name == "insane-path") return 46;
            if (name == "remerge-chk-fail") return 47;
            if (name == "remerge-detected") return 48;
            if (name == "xro") return 49;
            if (name == "resv-bw-set") return 50;
            if (name == "resv-prep-fail") return 51;
            if (name == "path-ch-proc") return 52;
            if (name == "path-ch-frr") return 53;
            if (name == "path-ch-sess-attri-fl") return 54;
            if (name == "path-ch-bw-ch") return 55;
            if (name == "path-err-proc") return 56;
            if (name == "path-err") return 57;
            if (name == "path-err-wpsr") return 58;
            if (name == "path-del") return 59;
            if (name == "resv-ch-proc") return 60;
            if (name == "resv-ch-rro") return 61;
            if (name == "resv-del") return 62;
            if (name == "resv-err") return 63;
            if (name == "perr-send-fail") return 64;
            if (name == "perr-proc-fail") return 65;
            if (name == "perr-rcv") return 66;
            if (name == "resv-err-rcv") return 67;
            if (name == "flowspec") return 68;
            if (name == "setup-conn-api-fail") return 69;
            if (name == "path-not-replayed") return 70;
            if (name == "resv-not-replayed") return 71;
            if (name == "rewrite-not-replayed") return 72;
            if (name == "label-not-replayed") return 73;
            if (name == "connection-not-ready") return 74;
            if (name == "master-did-not-replay") return 75;
            if (name == "head-s2l-has-no-vif") return 76;
            if (name == "frr-assigned-s2l-has-no-backup") return 77;
            if (name == "frr-assigned-s2l-has-down-backup") return 78;
            if (name == "out-link-down-and-no-frr") return 79;
            if (name == "collaborator-timeout-rsvp") return 80;
            if (name == "collaborator-timeout-lsd") return 81;
            if (name == "collaborator-timeout-lmrib") return 82;
            if (name == "collaborator-timeout-im") return 83;
            if (name == "collaborator-timeout-error") return 84;
            if (name == "topo-flush") return 85;
            if (name == "area-shut") return 86;
            if (name == "active-po-del") return 87;
            if (name == "path-verify-failed") return 88;
            if (name == "srlg-path-verify-failed") return 89;
            if (name == "affinity-path-verify-failed") return 90;
            if (name == "aff-fail-delayed-tear-timeout-failed") return 91;
            if (name == "cost-limit-verify-failed") return 92;
            if (name == "delay-limit-verify-failed") return 93;
            if (name == "lockout-metric-verify-failed") return 94;
            if (name == "path-setup-timeout") return 95;
            if (name == "vif-destroyed") return 96;
            if (name == "vif-shut") return 97;
            if (name == "lsp-shut") return 98;
            if (name == "gmpls-uni-head") return 99;
            if (name == "head-resetup") return 100;
            if (name == "none-head-resetup") return 101;
            if (name == "dest-disabled") return 102;
            if (name == "iep-ch-act-po") return 103;
            if (name == "iep-ch-reopt") return 104;
            if (name == "iep-ch-standby") return 105;
            if (name == "dste-mode-ch") return 106;
            if (name == "reopt-del-frr-act") return 107;
            if (name == "new-reopt-tear-old") return 108;
            if (name == "reopt-failed-verify") return 109;
            if (name == "reopt-failed-install") return 110;
            if (name == "reopt-failed-rw") return 111;
            if (name == "reopt-failed-not-superset") return 112;
            if (name == "dclean-at-install-time") return 113;
            if (name == "dclean-at-clean-timer") return 114;
            if (name == "dclean-at-reopt-active") return 115;
            if (name == "lcl-notif-head") return 116;
            if (name == "in-if-fail") return 117;
            if (name == "out-if-fail") return 118;
            if (name == "if-fail-lc-oir") return 119;
            if (name == "te-rid-rm") return 120;
            if (name == "te-rsvp-oos-bkup") return 121;
            if (name == "in-if-fail-exp-null-cfg-ch") return 122;
            if (name == "new-curr-lsp-sig") return 123;
            if (name == "new-reopt-lsp-sig") return 124;
            if (name == "new-stdby-lsp-sig") return 125;
            if (name == "new-restore-lsp-sig") return 126;
            if (name == "new-cl-pp-lsp-sig") return 127;
            if (name == "chkpt-recovery-failed") return 128;
            if (name == "stdby-cr-failed") return 129;
            if (name == "reopt-lsp-rej") return 130;
            if (name == "reopt-po-sw-failed") return 131;
            if (name == "failed-to-find-path") return 132;
            if (name == "sig-rcv-fail-path-cr-ch") return 133;
            if (name == "lsp-db-shut") return 134;
            if (name == "reopt-hold-start") return 135;
            if (name == "vif-lspid-mismatch") return 136;
            if (name == "s2l-has-no-vif") return 137;
            if (name == "overload-reopt-timeout") return 138;
            if (name == "hop-limit-exceeded") return 139;
            if (name == "lingering-current-lsp") return 140;
            if (name == "lingering-standby-lsp") return 141;
            if (name == "lingering-restore-lsp") return 142;
            if (name == "double-lockout") return 143;
            if (name == "lockout-no-protection") return 144;
            if (name == "lockout-cleanup") return 145;
            if (name == "te-ppsw-lsp-mismatch") return 146;
            if (name == "te-stdbyup-no-curr-lsp") return 147;
            if (name == "stdby-failed-rw") return 148;
            if (name == "reopt-lsp-tear-ppsw") return 149;
            if (name == "delay-pp-lsp-tear-ppsw") return 150;
            if (name == "stdby-failed-verify") return 151;
            if (name == "stdby-not-needed-due-to-restore") return 152;
            if (name == "restore-failed-verify") return 153;
            if (name == "restore-failed-install") return 154;
            if (name == "restore-failed-rewrite") return 155;
            if (name == "te-ppsw-cfg-rmvd") return 156;
            if (name == "te-ppsw-manual-ppsw") return 157;
            if (name == "te-ppsw-bidir-p-chg-ppsw") return 158;
            if (name == "te-ppsw-bidir-lockout-ppsw") return 159;
            if (name == "dclean-at-pp-clean-timer") return 160;
            if (name == "reopt-standby-failed") return 161;
            if (name == "standby-reoptimized") return 162;
            if (name == "standby-reoptimize-aborted") return 163;
            if (name == "te-reoptup-no-curr-lsp") return 164;
            if (name == "te-reopt-curr-lsp-down") return 165;
            if (name == "te-cleanedt-curr-lsp-down") return 166;
            if (name == "te-delay-lsp-up") return 167;
            if (name == "no-route-due-to-affinity") return 168;
            if (name == "no-rib-lkup-bad-ero-gmpls") return 169;
            if (name == "cleanup-lingering") return 170;
            if (name == "te-s2l-del-sc-soft-preemption-timeout") return 171;
            if (name == "te-s2l-del-sc-soft-preempted-non-current") return 172;
            if (name == "te-s2l-del-sc-vif-sync-lsp-del") return 173;
            if (name == "rsvp-api-cleanup-req") return 174;
            if (name == "te-s2l-del-sc-frr-wrong-backup") return 175;
            if (name == "te-s2l-del-sc-bfd-session-create-failed") return 176;
            if (name == "te-s2l-del-sc-bfd-session-bringup-timeout") return 177;
            if (name == "te-s2l-del-sc-bfd-session-down") return 178;
            if (name == "te-s2l-del-sc-bfd-session-not-replayed") return 179;
            if (name == "te-s2l-del-sc-reopt-p2mp-egress-info-fail") return 180;
            if (name == "non-curr-frr-lcl-notif-event") return 181;
            if (name == "unsupported-encoding") return 182;
            if (name == "unsupported-gpid") return 183;
            if (name == "unsupported-switching-type") return 184;
            if (name == "upstream-label-change-not-permitted") return 185;
            if (name == "encoding-type-change-not-permitted") return 186;
            if (name == "aps-protect-info-change-failed") return 187;
            if (name == "incorrect-lsp-type") return 188;
            if (name == "local-hop-error") return 189;
            if (name == "unsupported-gmpls-attributes") return 190;
            if (name == "gmpls-uni-reopt-triggered") return 191;
            if (name == "maximum-acceptable-label-retries") return 192;
            if (name == "invalid-direction") return 193;
            if (name == "invalid-rewrite-context") return 194;
            if (name == "invalid-label-context") return 195;
            if (name == "dwdm-capability-changed") return 196;
            if (name == "dwdm-capability-removed") return 197;
            if (name == "dwdm-wavelength-removed") return 198;
            if (name == "gmpls-uni-multilayer-restoration") return 199;
            if (name == "gmpls-uni-user-triggered-reoptimization") return 200;
            if (name == "gmpls-uni-active-path-change-triggered-reopt") return 201;
            if (name == "passive-match-err") return 202;
            if (name == "egress-control-err") return 203;
            if (name == "egress-control-map-err") return 204;
            if (name == "restore-not-needed-for-current") return 205;
            if (name == "restore-not-needed-for-standby") return 206;
            if (name == "restore-dp-down") return 207;
            if (name == "current-not-needed-dp-down") return 208;
            if (name == "bad-protct-obj") return 209;
            if (name == "head-flexi-cap-change") return 210;
            if (name == "tail-flexi-cap-change") return 211;
            if (name == "optical-link-down") return 212;
            if (name == "optical-link-lsp-out-of-sync") return 213;
            if (name == "optical-link-owner-out-of-sync") return 214;
            if (name == "optical-link-interface-handle-out-of-sync") return 215;
            if (name == "optical-link-hop-out-of-sync") return 216;
            if (name == "optical-link-role-out-of-sync") return 217;
            if (name == "optical-link-downstream-router-id-out-of-sync") return 218;
            if (name == "optical-link-upstream-router-id-out-of-sync") return 219;
            if (name == "optical-link-encoding-type-out-of-sync") return 220;
            if (name == "optical-link-switching-type-out-of-sync") return 221;
            if (name == "optical-link-gpid-out-of-sync") return 222;
            if (name == "egress-optical-link-not-found") return 223;
            if (name == "ingress-optical-link-not-found") return 224;
            if (name == "sync-dest-state") return 225;
            if (name == "prot-object-err") return 226;
            if (name == "reverse-s2l-deleted") return 227;
            if (name == "cancel-inprogress-by-slave") return 228;
            if (name == "invalid-reverse-ero") return 229;
            if (name == "reverse-lsp-not-found") return 230;
            if (name == "reverse-lsp-not-present") return 231;
            if (name == "associated-vif-down") return 232;
            if (name == "vif-sync-processing") return 233;
            if (name == "incoming-interface-lockout") return 234;
            if (name == "sr-egress-path-changed") return 235;
            if (name == "in-if-fail-imp-null-cfg-ch") return 236;
            if (name == "reverse-lsp-failure") return 237;
            if (name == "lsp-wrap-label-error") return 238;
            if (name == "lsp-wrap-rewrite-error") return 239;
            if (name == "transit-lsp-out-of-resources") return 240;
            if (name == "path-protection-configuration-change") return 241;
            if (name == "better-standby-path") return 242;
            if (name == "path-protection-non-revertive-config-changed") return 243;
            if (name == "fsm-sc-must-be-last") return 244;
            return -1;
        }
};

class TeProcRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf v1_active;
        static const ydk::Enum::YLeaf v2_active;
        static const ydk::Enum::YLeaf v1_standby;
        static const ydk::Enum::YLeaf v2_standby;
        static const ydk::Enum::YLeaf v1_active_post_big_bang;
        static const ydk::Enum::YLeaf v1_standby_post_big_bang;
        static const ydk::Enum::YLeaf number_of_role;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "v1-active") return 1;
            if (name == "v2-active") return 2;
            if (name == "v1-standby") return 3;
            if (name == "v2-standby") return 4;
            if (name == "v1-active-post-big-bang") return 5;
            if (name == "v1-standby-post-big-bang") return 6;
            if (name == "number-of-role") return 7;
            return -1;
        }
};

class TeControllerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notready;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf error_disabled;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "notready") return 0;
            if (name == "admin-down") return 1;
            if (name == "down") return 2;
            if (name == "shutdown") return 3;
            if (name == "error-disabled") return 4;
            if (name == "up") return 5;
            if (name == "unknown") return 6;
            return -1;
        }
};

class MtePathOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf no_ero;
        static const ydk::Enum::YLeaf segment_routing;
        static const ydk::Enum::YLeaf po_count;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "dynamic") return 1;
            if (name == "explicit") return 2;
            if (name == "no-ero") return 3;
            if (name == "segment-routing") return 4;
            if (name == "po-count") return 5;
            return -1;
        }
};

class MplsTePathSelectionMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;
        static const ydk::Enum::YLeaf delay;

        static int get_enum_value(const std::string & name) {
            if (name == "igp") return 1;
            if (name == "te") return 2;
            if (name == "delay") return 4;
            return -1;
        }
};

class TeP2mpS2lDeletionCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_cause;
        static const ydk::Enum::YLeaf hpath_cr_err;
        static const ydk::Enum::YLeaf hpath_chg_setup;
        static const ydk::Enum::YLeaf hpath_chg_up_err;
        static const ydk::Enum::YLeaf hresv_cr_err;
        static const ydk::Enum::YLeaf hresv_chg_err;
        static const ydk::Enum::YLeaf hresv_chg_err_up;
        static const ydk::Enum::YLeaf hlbl_avail_err;
        static const ydk::Enum::YLeaf hup_lbl_avail_err;
        static const ydk::Enum::YLeaf hfrr_act_err;
        static const ydk::Enum::YLeaf hbkup_ch_err;
        static const ydk::Enum::YLeaf hpath_ch_frr_err;
        static const ydk::Enum::YLeaf hcleanup;
        static const ydk::Enum::YLeaf hlingering_cleanup;
        static const ydk::Enum::YLeaf hpat_err;
        static const ydk::Enum::YLeaf hresv_err;
        static const ydk::Enum::YLeaf hresv_del;
        static const ydk::Enum::YLeaf hrw_fail;
        static const ydk::Enum::YLeaf hup_rw_fail;
        static const ydk::Enum::YLeaf ha_failure;
        static const ydk::Enum::YLeaf rw_del;
        static const ydk::Enum::YLeaf up_rw_del;
        static const ydk::Enum::YLeaf mpath_cr;
        static const ydk::Enum::YLeaf mpath_chg_setup_err;
        static const ydk::Enum::YLeaf mpath_chg_up_err;
        static const ydk::Enum::YLeaf mresv_cr_err;
        static const ydk::Enum::YLeaf mresv_chg_err;
        static const ydk::Enum::YLeaf mresv_chg_err_up;
        static const ydk::Enum::YLeaf mlbl_avail_err;
        static const ydk::Enum::YLeaf mlbl_rel_err;
        static const ydk::Enum::YLeaf mup_lbl_avail_err;
        static const ydk::Enum::YLeaf mup_lbl_rel_err;
        static const ydk::Enum::YLeaf mfrr_act_err;
        static const ydk::Enum::YLeaf mbkup_ch_err;
        static const ydk::Enum::YLeaf mpath_ch_frr_err;
        static const ydk::Enum::YLeaf mresv_del;
        static const ydk::Enum::YLeaf mresv_err;
        static const ydk::Enum::YLeaf mpreempt;
        static const ydk::Enum::YLeaf mcleanup;
        static const ydk::Enum::YLeaf mlingering_cleanup;
        static const ydk::Enum::YLeaf mrw_fail;
        static const ydk::Enum::YLeaf mup_rw_fail;
        static const ydk::Enum::YLeaf tpath_cr_err;
        static const ydk::Enum::YLeaf tpath_chg_err;
        static const ydk::Enum::YLeaf tresv_cr_err;
        static const ydk::Enum::YLeaf tlbl_avail_err;
        static const ydk::Enum::YLeaf tcleanup;
        static const ydk::Enum::YLeaf tlingering_cleanup;
        static const ydk::Enum::YLeaf lbl_err;
        static const ydk::Enum::YLeaf qfailure;
        static const ydk::Enum::YLeaf rsvp_recovery;
        static const ydk::Enum::YLeaf lsd_recovery;
        static const ydk::Enum::YLeaf lmrib_recovery;
        static const ydk::Enum::YLeaf te_restart;
        static const ydk::Enum::YLeaf switchover;
        static const ydk::Enum::YLeaf master_te_recovery;
        static const ydk::Enum::YLeaf optical_r_mgr_recovery;
        static const ydk::Enum::YLeaf te_exit;
        static const ydk::Enum::YLeaf bkup_assign_fail;
        static const ydk::Enum::YLeaf bfd_fail;
        static const ydk::Enum::YLeaf bfd_recovery;
        static const ydk::Enum::YLeaf lsp_wrap_act_err;
        static const ydk::Enum::YLeaf lsp_wrap_rw_err;
        static const ydk::Enum::YLeaf fsm_cause_must_be_last;

        static int get_enum_value(const std::string & name) {
            if (name == "no-cause") return 0;
            if (name == "hpath-cr-err") return 1;
            if (name == "hpath-chg-setup") return 2;
            if (name == "hpath-chg-up-err") return 3;
            if (name == "hresv-cr-err") return 4;
            if (name == "hresv-chg-err") return 5;
            if (name == "hresv-chg-err-up") return 6;
            if (name == "hlbl-avail-err") return 7;
            if (name == "hup-lbl-avail-err") return 8;
            if (name == "hfrr-act-err") return 9;
            if (name == "hbkup-ch-err") return 10;
            if (name == "hpath-ch-frr-err") return 11;
            if (name == "hcleanup") return 12;
            if (name == "hlingering-cleanup") return 13;
            if (name == "hpat-err") return 14;
            if (name == "hresv-err") return 15;
            if (name == "hresv-del") return 16;
            if (name == "hrw-fail") return 17;
            if (name == "hup-rw-fail") return 18;
            if (name == "ha-failure") return 19;
            if (name == "rw-del") return 20;
            if (name == "up-rw-del") return 21;
            if (name == "mpath-cr") return 22;
            if (name == "mpath-chg-setup-err") return 23;
            if (name == "mpath-chg-up-err") return 24;
            if (name == "mresv-cr-err") return 25;
            if (name == "mresv-chg-err") return 26;
            if (name == "mresv-chg-err-up") return 27;
            if (name == "mlbl-avail-err") return 28;
            if (name == "mlbl-rel-err") return 29;
            if (name == "mup-lbl-avail-err") return 30;
            if (name == "mup-lbl-rel-err") return 31;
            if (name == "mfrr-act-err") return 32;
            if (name == "mbkup-ch-err") return 33;
            if (name == "mpath-ch-frr-err") return 34;
            if (name == "mresv-del") return 35;
            if (name == "mresv-err") return 36;
            if (name == "mpreempt") return 37;
            if (name == "mcleanup") return 38;
            if (name == "mlingering-cleanup") return 39;
            if (name == "mrw-fail") return 40;
            if (name == "mup-rw-fail") return 41;
            if (name == "tpath-cr-err") return 42;
            if (name == "tpath-chg-err") return 43;
            if (name == "tresv-cr-err") return 44;
            if (name == "tlbl-avail-err") return 45;
            if (name == "tcleanup") return 46;
            if (name == "tlingering-cleanup") return 47;
            if (name == "lbl-err") return 48;
            if (name == "qfailure") return 49;
            if (name == "rsvp-recovery") return 50;
            if (name == "lsd-recovery") return 51;
            if (name == "lmrib-recovery") return 52;
            if (name == "te-restart") return 53;
            if (name == "switchover") return 54;
            if (name == "master-te-recovery") return 55;
            if (name == "optical-r-mgr-recovery") return 56;
            if (name == "te-exit") return 57;
            if (name == "bkup-assign-fail") return 58;
            if (name == "bfd-fail") return 59;
            if (name == "bfd-recovery") return 60;
            if (name == "lsp-wrap-act-err") return 61;
            if (name == "lsp-wrap-rw-err") return 62;
            if (name == "fsm-cause-must-be-last") return 63;
            return -1;
        }
};

class TePathSelectionTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf min_fill;
        static const ydk::Enum::YLeaf max_fill;
        static const ydk::Enum::YLeaf random;

        static int get_enum_value(const std::string & name) {
            if (name == "min-fill") return 1;
            if (name == "max-fill") return 2;
            if (name == "random") return 3;
            return -1;
        }
};

class MplsTeTunnelAnnounce : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf announce_type_not_set;
        static const ydk::Enum::YLeaf autoroute;
        static const ydk::Enum::YLeaf forward_adjacency;

        static int get_enum_value(const std::string & name) {
            if (name == "announce-type-not-set") return 0;
            if (name == "autoroute") return 1;
            if (name == "forward-adjacency") return 2;
            return -1;
        }
};

class GmplsUniMgmtWdmGrid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dwdm;
        static const ydk::Enum::YLeaf cwdm;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "dwdm") return 1;
            if (name == "cwdm") return 2;
            return -1;
        }
};

class MplsTeAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_unicast;
        static const ydk::Enum::YLeaf ipv4_multicast;
        static const ydk::Enum::YLeaf ipv6_unicast;
        static const ydk::Enum::YLeaf ipv6_multicast;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-unicast") return 0;
            if (name == "ipv4-multicast") return 1;
            if (name == "ipv6-unicast") return 2;
            if (name == "ipv6-multicast") return 3;
            return -1;
        }
};

class IgpSubnet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp_subnet_type_none;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast_multiaccess;
        static const ydk::Enum::YLeaf p2mp;
        static const ydk::Enum::YLeaf loopback;

        static int get_enum_value(const std::string & name) {
            if (name == "igp-subnet-type-none") return 0;
            if (name == "p2p") return 1;
            if (name == "broadcast") return 2;
            if (name == "non-broadcast-multiaccess") return 3;
            if (name == "p2mp") return 4;
            if (name == "loopback") return 5;
            return -1;
        }
};

class MteTunnelOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_state_oper_unknown;
        static const ydk::Enum::YLeaf operational_down;
        static const ydk::Enum::YLeaf operational_up;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-state-oper-unknown") return 0;
            if (name == "operational-down") return 1;
            if (name == "operational-up") return 2;
            return -1;
        }
};

class BandwidthAccountingCollection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_te;
        static const ydk::Enum::YLeaf segment_routing;

        static int get_enum_value(const std::string & name) {
            if (name == "rsvp-te") return 0;
            if (name == "segment-routing") return 1;
            return -1;
        }
};

class TeServTunClient : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_serv_auto_tun_client_invalid;
        static const ydk::Enum::YLeaf te_serv_p2mp_tun_client_mvpn;
        static const ydk::Enum::YLeaf te_serv_p2mp_tun_client_vpls;
        static const ydk::Enum::YLeaf te_serv_p2mp_tun_client_mvpn6;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_bgp;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_staticv4;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_staticv6;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_isis;
        static const ydk::Enum::YLeaf te_serv_p2p_tun_client_ospf;
        static const ydk::Enum::YLeaf te_serv_auto_tun_client_count;

        static int get_enum_value(const std::string & name) {
            if (name == "te-serv-auto-tun-client-invalid") return 0;
            if (name == "te-serv-p2mp-tun-client-mvpn") return 1;
            if (name == "te-serv-p2mp-tun-client-vpls") return 2;
            if (name == "te-serv-p2mp-tun-client-mvpn6") return 3;
            if (name == "te-serv-p2p-tun-client-bgp") return 4;
            if (name == "te-serv-p2p-tun-client-staticv4") return 5;
            if (name == "te-serv-p2p-tun-client-staticv6") return 6;
            if (name == "te-serv-p2p-tun-client-isis") return 7;
            if (name == "te-serv-p2p-tun-client-ospf") return 8;
            if (name == "te-serv-auto-tun-client-count") return 9;
            return -1;
        }
};

class MplsTePath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_name;
        static const ydk::Enum::YLeaf explicit_id;
        static const ydk::Enum::YLeaf no_ero;
        static const ydk::Enum::YLeaf segment_routing;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "dynamic") return 1;
            if (name == "explicit-name") return 3;
            if (name == "explicit-id") return 4;
            if (name == "no-ero") return 5;
            if (name == "segment-routing") return 6;
            return -1;
        }
};

class TeS2lOutputRwExplicitNull : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tes2l_output_rw_exp_null;
        static const ydk::Enum::YLeaf tes2l_output_rw_exp_null_v4;
        static const ydk::Enum::YLeaf tes2l_output_rw_exp_null_v6;

        static int get_enum_value(const std::string & name) {
            if (name == "tes2l-output-rw-exp-null") return 0;
            if (name == "tes2l-output-rw-exp-null-v4") return 1;
            if (name == "tes2l-output-rw-exp-null-v6") return 2;
            return -1;
        }
};

class RsvpMgmtEroSubobjStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_not_available;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_available;
        static const ydk::Enum::YLeaf rsvp_mgmt_ero_status_bw_not_available;

        static int get_enum_value(const std::string & name) {
            if (name == "rsvp-mgmt-ero-status-not-available") return 0;
            if (name == "rsvp-mgmt-ero-status-available") return 1;
            if (name == "rsvp-mgmt-ero-status-bw-not-available") return 2;
            return -1;
        }
};

class TeHopLimitIgnore : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ignore_unknown;
        static const ydk::Enum::YLeaf ignore_explicit;
        static const ydk::Enum::YLeaf ignore_pce;

        static int get_enum_value(const std::string & name) {
            if (name == "ignore-unknown") return 0;
            if (name == "ignore-explicit") return 1;
            if (name == "ignore-pce") return 2;
            return -1;
        }
};

class MplsTeReoptDecisionReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf decision_reason_none;
        static const ydk::Enum::YLeaf not_superset;
        static const ydk::Enum::YLeaf superset;
        static const ydk::Enum::YLeaf lsp_frr_active;
        static const ydk::Enum::YLeaf bandwidth_change;
        static const ydk::Enum::YLeaf metric_type_change;
        static const ydk::Enum::YLeaf better_path_option_indexes;
        static const ydk::Enum::YLeaf inter_area_preferred_path_exists;
        static const ydk::Enum::YLeaf inter_area_preferred_tree_exists;
        static const ydk::Enum::YLeaf worse_path_option_indexes;
        static const ydk::Enum::YLeaf better_cumulative_metric;
        static const ydk::Enum::YLeaf worse_cumulative_metric;
        static const ydk::Enum::YLeaf identical;
        static const ydk::Enum::YLeaf no_s2_ls;
        static const ydk::Enum::YLeaf no_current_lsp;
        static const ydk::Enum::YLeaf user_path_option_switchover;
        static const ydk::Enum::YLeaf better_hops;
        static const ydk::Enum::YLeaf worse_hops;
        static const ydk::Enum::YLeaf pce_force;
        static const ydk::Enum::YLeaf affinity_changed;
        static const ydk::Enum::YLeaf cost_limit;
        static const ydk::Enum::YLeaf sig_timeout;
        static const ydk::Enum::YLeaf not_superset_inst_timer_expired;
        static const ydk::Enum::YLeaf path_verifiction_failed;
        static const ydk::Enum::YLeaf soft_preemption_recovery;
        static const ydk::Enum::YLeaf iep_changed;
        static const ydk::Enum::YLeaf po_changed;
        static const ydk::Enum::YLeaf dest_changed;
        static const ydk::Enum::YLeaf better_igp_area;
        static const ydk::Enum::YLeaf worse_igp_area;
        static const ydk::Enum::YLeaf better_bandwidth_load_balancing;
        static const ydk::Enum::YLeaf worse_bandwidth_load_balancing;
        static const ydk::Enum::YLeaf bfd_session_down;
        static const ydk::Enum::YLeaf auto_pcc_reopt;
        static const ydk::Enum::YLeaf sr_egress_path_changed;
        static const ydk::Enum::YLeaf overload_bit_set;
        static const ydk::Enum::YLeaf better_diversity;
        static const ydk::Enum::YLeaf worse_diversity;
        static const ydk::Enum::YLeaf bfd_session_type_changed;
        static const ydk::Enum::YLeaf lsp_drop_mode;
        static const ydk::Enum::YLeaf strict_spf;
        static const ydk::Enum::YLeaf delay_limit;
        static const ydk::Enum::YLeaf lockout_metric;
        static const ydk::Enum::YLeaf intra_area;
        static const ydk::Enum::YLeaf not_used;

        static int get_enum_value(const std::string & name) {
            if (name == "decision-reason-none") return 0;
            if (name == "not-superset") return 1;
            if (name == "superset") return 2;
            if (name == "lsp-frr-active") return 3;
            if (name == "bandwidth-change") return 4;
            if (name == "metric-type-change") return 5;
            if (name == "better-path-option-indexes") return 6;
            if (name == "inter-area-preferred-path-exists") return 7;
            if (name == "inter-area-preferred-tree-exists") return 8;
            if (name == "worse-path-option-indexes") return 9;
            if (name == "better-cumulative-metric") return 10;
            if (name == "worse-cumulative-metric") return 11;
            if (name == "identical") return 12;
            if (name == "no-s2-ls") return 13;
            if (name == "no-current-lsp") return 14;
            if (name == "user-path-option-switchover") return 15;
            if (name == "better-hops") return 16;
            if (name == "worse-hops") return 17;
            if (name == "pce-force") return 18;
            if (name == "affinity-changed") return 19;
            if (name == "cost-limit") return 20;
            if (name == "sig-timeout") return 21;
            if (name == "not-superset-inst-timer-expired") return 22;
            if (name == "path-verifiction-failed") return 23;
            if (name == "soft-preemption-recovery") return 24;
            if (name == "iep-changed") return 25;
            if (name == "po-changed") return 26;
            if (name == "dest-changed") return 27;
            if (name == "better-igp-area") return 28;
            if (name == "worse-igp-area") return 29;
            if (name == "better-bandwidth-load-balancing") return 30;
            if (name == "worse-bandwidth-load-balancing") return 31;
            if (name == "bfd-session-down") return 32;
            if (name == "auto-pcc-reopt") return 33;
            if (name == "sr-egress-path-changed") return 34;
            if (name == "overload-bit-set") return 35;
            if (name == "better-diversity") return 36;
            if (name == "worse-diversity") return 37;
            if (name == "bfd-session-type-changed") return 38;
            if (name == "lsp-drop-mode") return 39;
            if (name == "strict-spf") return 40;
            if (name == "delay-limit") return 41;
            if (name == "lockout-metric") return 42;
            if (name == "intra-area") return 43;
            if (name == "not-used") return 44;
            return -1;
        }
};

class TeAutobwAppTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf application_none;
        static const ydk::Enum::YLeaf application_periodic;
        static const ydk::Enum::YLeaf application_manual;
        static const ydk::Enum::YLeaf application_overflow;
        static const ydk::Enum::YLeaf application_underflow;

        static int get_enum_value(const std::string & name) {
            if (name == "application-none") return 0;
            if (name == "application-periodic") return 1;
            if (name == "application-manual") return 2;
            if (name == "application-overflow") return 3;
            if (name == "application-underflow") return 4;
            return -1;
        }
};

class TeDestinationState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf destination_disabled;
        static const ydk::Enum::YLeaf destination_down;
        static const ydk::Enum::YLeaf destination_up;

        static int get_enum_value(const std::string & name) {
            if (name == "destination-disabled") return 0;
            if (name == "destination-down") return 1;
            if (name == "destination-up") return 2;
            return -1;
        }
};

class MplsTeIepHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iep_hop_type_unknown;
        static const ydk::Enum::YLeaf iep_hop_type_strict_next;
        static const ydk::Enum::YLeaf iep_hop_type_exclude;
        static const ydk::Enum::YLeaf iep_hop_type_exclude_node;
        static const ydk::Enum::YLeaf iep_hop_type_exclude_srlg;
        static const ydk::Enum::YLeaf iep_hop_type_loose_next;
        static const ydk::Enum::YLeaf iep_hop_type_next;
        static const ydk::Enum::YLeaf iep_hop_type_share_srlg;

        static int get_enum_value(const std::string & name) {
            if (name == "iep-hop-type-unknown") return 0;
            if (name == "iep-hop-type-strict-next") return 1;
            if (name == "iep-hop-type-exclude") return 2;
            if (name == "iep-hop-type-exclude-node") return 3;
            if (name == "iep-hop-type-exclude-srlg") return 4;
            if (name == "iep-hop-type-loose-next") return 5;
            if (name == "iep-hop-type-next") return 6;
            if (name == "iep-hop-type-share-srlg") return 7;
            return -1;
        }
};

class TunnelStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_state_unknown;
        static const ydk::Enum::YLeaf new_;
        static const ydk::Enum::YLeaf preempting;
        static const ydk::Enum::YLeaf admitting;
        static const ydk::Enum::YLeaf half_admitted;
        static const ydk::Enum::YLeaf admitted;
        static const ydk::Enum::YLeaf reservation_admitting;
        static const ydk::Enum::YLeaf reservation_half_admitted;
        static const ydk::Enum::YLeaf reservation_admitted;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-state-unknown") return 0;
            if (name == "new") return 1;
            if (name == "preempting") return 2;
            if (name == "admitting") return 3;
            if (name == "half-admitted") return 4;
            if (name == "admitted") return 5;
            if (name == "reservation-admitting") return 6;
            if (name == "reservation-half-admitted") return 7;
            if (name == "reservation-admitted") return 8;
            return -1;
        }
};

class MplsTeTunnelsSignalingStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf recovering;
        static const ydk::Enum::YLeaf recovered;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf proceeding;
        static const ydk::Enum::YLeaf wait_bfd_session_up;
        static const ydk::Enum::YLeaf wait_sr_segment_path_up;
        static const ydk::Enum::YLeaf wait_local_label;
        static const ydk::Enum::YLeaf wait_local_label_rewrite;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "recovering") return 1;
            if (name == "recovered") return 2;
            if (name == "connected") return 3;
            if (name == "disabled") return 4;
            if (name == "proceeding") return 5;
            if (name == "wait-bfd-session-up") return 6;
            if (name == "wait-sr-segment-path-up") return 7;
            if (name == "wait-local-label") return 8;
            if (name == "wait-local-label-rewrite") return 9;
            return -1;
        }
};

class TeAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv4_unnumbered;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv4-unnumbered") return 2;
            return -1;
        }
};

class MplsTeBwLimit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bandwidth_limited;
        static const ydk::Enum::YLeaf bandwidth_unlimited;
        static const ydk::Enum::YLeaf bandwidth_none;

        static int get_enum_value(const std::string & name) {
            if (name == "bandwidth-limited") return 0;
            if (name == "bandwidth-unlimited") return 1;
            if (name == "bandwidth-none") return 2;
            return -1;
        }
};

class MplsLibC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_lib_c_type_null;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4_p2p_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv6_p2p_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4_uni;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4_p2mp_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv6_p2mp_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv4_tp_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_ipv6_tp_tunnel;
        static const ydk::Enum::YLeaf mpls_lib_c_type_p2p_binding_label;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls-lib-c-type-null") return 0;
            if (name == "mpls-lib-c-type-ipv4") return 1;
            if (name == "mpls-lib-c-type-ipv4-p2p-tunnel") return 7;
            if (name == "mpls-lib-c-type-ipv6-p2p-tunnel") return 8;
            if (name == "mpls-lib-c-type-ipv4-uni") return 9;
            if (name == "mpls-lib-c-type-ipv4-p2mp-tunnel") return 13;
            if (name == "mpls-lib-c-type-ipv6-p2mp-tunnel") return 14;
            if (name == "mpls-lib-c-type-ipv4-tp-tunnel") return 15;
            if (name == "mpls-lib-c-type-ipv6-tp-tunnel") return 16;
            if (name == "mpls-lib-c-type-p2p-binding-label") return 17;
            return -1;
        }
};

class MplsTeAttrSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_used;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf lsp;
        static const ydk::Enum::YLeaf unassigned;
        static const ydk::Enum::YLeaf auto_backup;
        static const ydk::Enum::YLeaf auto_mesh;
        static const ydk::Enum::YLeaf xro;
        static const ydk::Enum::YLeaf p2mp_te;
        static const ydk::Enum::YLeaf otn_pp;
        static const ydk::Enum::YLeaf p2p_te;

        static int get_enum_value(const std::string & name) {
            if (name == "not-used") return 0;
            if (name == "static") return 1;
            if (name == "lsp") return 2;
            if (name == "unassigned") return 3;
            if (name == "auto-backup") return 4;
            if (name == "auto-mesh") return 5;
            if (name == "xro") return 6;
            if (name == "p2mp-te") return 7;
            if (name == "otn-pp") return 8;
            if (name == "p2p-te") return 9;
            return -1;
        }
};

class TePceDisjoint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srlg;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "link") return 1;
            if (name == "node") return 2;
            if (name == "srlg") return 3;
            return -1;
        }
};

class IgpteAaMetricMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf metric_mode_none;
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf constant;

        static int get_enum_value(const std::string & name) {
            if (name == "metric-mode-none") return 0;
            if (name == "relative") return 1;
            if (name == "absolute") return 2;
            if (name == "constant") return 3;
            return -1;
        }
};

class TeXroExclusion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mandatory;
        static const ydk::Enum::YLeaf best_effort;

        static int get_enum_value(const std::string & name) {
            if (name == "mandatory") return 0;
            if (name == "best-effort") return 1;
            return -1;
        }
};

class RsvpMgmtRroSubobj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4rro_type;
        static const ydk::Enum::YLeaf label_rro_type;
        static const ydk::Enum::YLeaf unnumbered_rro_type;
        static const ydk::Enum::YLeaf srlg_rro_type;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4rro-type") return 1;
            if (name == "label-rro-type") return 3;
            if (name == "unnumbered-rro-type") return 4;
            if (name == "srlg-rro-type") return 34;
            return -1;
        }
};

class TpMidLspStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class MplsTeLsp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_te_lsp_type_not_set;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_p2p;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_p2mp;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_gmpls_ouni;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_gmpls_nni;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_p2p_bidir;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_gmpls_tp;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_gmpls_nni_otn;
        static const ydk::Enum::YLeaf mpls_te_lsp_type_segment_routing_p2p;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls-te-lsp-type-not-set") return 0;
            if (name == "mpls-te-lsp-type-p2p") return 1;
            if (name == "mpls-te-lsp-type-p2mp") return 2;
            if (name == "mpls-te-lsp-type-gmpls-ouni") return 3;
            if (name == "mpls-te-lsp-type-gmpls-nni") return 4;
            if (name == "mpls-te-lsp-type-p2p-bidir") return 5;
            if (name == "mpls-te-lsp-type-gmpls-tp") return 6;
            if (name == "mpls-te-lsp-type-gmpls-nni-otn") return 7;
            if (name == "mpls-te-lsp-type-segment-routing-p2p") return 8;
            return -1;
        }
};

class MplsTeIgpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "isis") return 1;
            if (name == "ospf") return 2;
            return -1;
        }
};

class MplsTeNextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egress_resolve;
        static const ydk::Enum::YLeaf autoroute_dest;

        static int get_enum_value(const std::string & name) {
            if (name == "egress-resolve") return 0;
            if (name == "autoroute-dest") return 1;
            return -1;
        }
};

class TeTargetAddr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid_te_target_type;
        static const ydk::Enum::YLeaf te_target_type_ipv4;
        static const ydk::Enum::YLeaf te_target_type_label;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid-te-target-type") return 0;
            if (name == "te-target-type-ipv4") return 1;
            if (name == "te-target-type-label") return 2;
            return -1;
        }
};

class TeRestorationStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restoration_style_not_set;
        static const ydk::Enum::YLeaf restoration_style_keep_failed_lsp;
        static const ydk::Enum::YLeaf restoration_style_delete_failed_lsp;

        static int get_enum_value(const std::string & name) {
            if (name == "restoration-style-not-set") return 0;
            if (name == "restoration-style-keep-failed-lsp") return 1;
            if (name == "restoration-style-delete-failed-lsp") return 2;
            return -1;
        }
};

class MplsTeDsteClassStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configured;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf unused;

        static int get_enum_value(const std::string & name) {
            if (name == "configured") return 0;
            if (name == "default") return 1;
            if (name == "unused") return 2;
            return -1;
        }
};

class MplsTeTunnelRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_unknown;
        static const ydk::Enum::YLeaf tunnel_head;
        static const ydk::Enum::YLeaf tunnel_mid;
        static const ydk::Enum::YLeaf tunnel_tail;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-unknown") return 0;
            if (name == "tunnel-head") return 1;
            if (name == "tunnel-mid") return 2;
            if (name == "tunnel-tail") return 3;
            return -1;
        }
};

class TeAssociationTieRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "master") return 1;
            if (name == "slave") return 2;
            return -1;
        }
};

class PceLspOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf going_down;
        static const ydk::Enum::YLeaf going_up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            if (name == "active") return 2;
            if (name == "going-down") return 3;
            if (name == "going-up") return 4;
            return -1;
        }
};

class TeMeshgroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf meshgroup_type_automesh;
        static const ydk::Enum::YLeaf meshgroup_type_onehop;

        static int get_enum_value(const std::string & name) {
            if (name == "meshgroup-type-automesh") return 0;
            if (name == "meshgroup-type-onehop") return 1;
            return -1;
        }
};

class TeMgmtGenericFspec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_generic_fspec_type_g709otn;

        static int get_enum_value(const std::string & name) {
            if (name == "te-generic-fspec-type-g709otn") return 0;
            return -1;
        }
};

class MplsTeTermination : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ether;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ether") return 1;
            return -1;
        }
};

class MplsTeLspWrapState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lsp_wrap_not_ready;
        static const ydk::Enum::YLeaf lsp_wrap_active;
        static const ydk::Enum::YLeaf lsp_wrap_ready;

        static int get_enum_value(const std::string & name) {
            if (name == "lsp-wrap-not-ready") return 0;
            if (name == "lsp-wrap-active") return 1;
            if (name == "lsp-wrap-ready") return 2;
            return -1;
        }
};

class TeOduCapability : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf fixed;
        static const ydk::Enum::YLeaf flex;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "fixed") return 1;
            if (name == "flex") return 2;
            return -1;
        }
};

class TeSyncPendingReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf current_lspoos;
        static const ydk::Enum::YLeaf reopt_lspoos;
        static const ydk::Enum::YLeaf standby_lspoos;
        static const ydk::Enum::YLeaf standby_reopt_lspoos;
        static const ydk::Enum::YLeaf restore_lspoos;
        static const ydk::Enum::YLeaf invalid_sync_id;
        static const ydk::Enum::YLeaf null_pointer;
        static const ydk::Enum::YLeaf pending_flag;
        static const ydk::Enum::YLeaf del_from_act_flag;
        static const ydk::Enum::YLeaf oos_from_act_flag;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "current-lspoos") return 0;
            if (name == "reopt-lspoos") return 1;
            if (name == "standby-lspoos") return 2;
            if (name == "standby-reopt-lspoos") return 3;
            if (name == "restore-lspoos") return 4;
            if (name == "invalid-sync-id") return 5;
            if (name == "null-pointer") return 6;
            if (name == "pending-flag") return 7;
            if (name == "del-from-act-flag") return 8;
            if (name == "oos-from-act-flag") return 9;
            if (name == "unknown") return 10;
            return -1;
        }
};

class MplsTpLspState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            if (name == "active") return 2;
            if (name == "unknown") return 3;
            return -1;
        }
};

class TeXroAttribute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf srl_gs;

        static int get_enum_value(const std::string & name) {
            if (name == "interface") return 0;
            if (name == "node") return 1;
            if (name == "srl-gs") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_0_ */

