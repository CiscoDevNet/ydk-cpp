#ifndef _CISCO_IOS_XR_MPLS_TE_CFG_0_
#define _CISCO_IOS_XR_MPLS_TE_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {

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

        ydk::YLeaf enable_traffic_engineering; //type: empty
        class DiffServTrafficEngineering; //type: MplsTe::DiffServTrafficEngineering
        class NamedTunnels; //type: MplsTe::NamedTunnels
        class GmplsUni; //type: MplsTe::GmplsUni
        class GlobalAttributes; //type: MplsTe::GlobalAttributes
        class TransportProfile; //type: MplsTe::TransportProfile
        class Interfaces; //type: MplsTe::Interfaces
        class GmplsNni; //type: MplsTe::GmplsNni
        class Lcac; //type: MplsTe::Lcac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::DiffServTrafficEngineering> diff_serv_traffic_engineering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels> named_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni> gmpls_uni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes> global_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile> transport_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni> gmpls_nni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac> lcac;
        
}; // MplsTe


class MplsTe::DiffServTrafficEngineering : public ydk::Entity
{
    public:
        DiffServTrafficEngineering();
        ~DiffServTrafficEngineering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bandwidth_constraint_model; //type: BandwidthConstraint
        ydk::YLeaf mode_ietf; //type: IetfMode
        class Classes; //type: MplsTe::DiffServTrafficEngineering::Classes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::DiffServTrafficEngineering::Classes> classes;
        
}; // MplsTe::DiffServTrafficEngineering


class MplsTe::DiffServTrafficEngineering::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Class; //type: MplsTe::DiffServTrafficEngineering::Classes::Class

        ydk::YList class_;
        
}; // MplsTe::DiffServTrafficEngineering::Classes


class MplsTe::DiffServTrafficEngineering::Classes::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf class_number; //type: uint32
        ydk::YLeaf class_type; //type: uint32
        ydk::YLeaf class_priority; //type: uint32
        ydk::YLeaf unused; //type: boolean

}; // MplsTe::DiffServTrafficEngineering::Classes::Class


class MplsTe::NamedTunnels : public ydk::Entity
{
    public:
        NamedTunnels();
        ~NamedTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty
        class Tunnels; //type: MplsTe::NamedTunnels::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels> tunnels;
        
}; // MplsTe::NamedTunnels


class MplsTe::NamedTunnels::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Tunnel; //type: MplsTe::NamedTunnels::Tunnels::Tunnel

        ydk::YList tunnel;
        
}; // MplsTe::NamedTunnels::Tunnels


class MplsTe::NamedTunnels::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_type; //type: MplsTeConfigTunnel
        ydk::YLeaf enable; //type: empty
        class TunnelAttributes; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes
        class TunnelId; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes> tunnel_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId> tunnel_id; // presence node
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes : public ydk::Entity
{
    public:
        TunnelAttributes();
        ~TunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf destination; //type: string
        ydk::YLeaf record_route; //type: empty
        ydk::YLeaf path_selection_metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf soft_preemption; //type: empty
        ydk::YLeaf load_share; //type: uint32
        class PathSetups; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups
        class TunnelPathSelection; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection
        class AutoBandwidth; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth
        class Priority; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority
        class AffinityMask; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask
        class ForwardingAdjacency; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::ForwardingAdjacency
        class Logging; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging
        class Bandwidth; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth
        class Autoroute; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute
        class NewStyleAffinityAffinityTypes; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes
        class FastReroute; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups> path_setups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection> tunnel_path_selection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth> auto_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority> priority; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::ForwardingAdjacency> forwarding_adjacency;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute> autoroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute> fast_reroute; // presence node
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups : public ydk::Entity
{
    public:
        PathSetups();
        ~PathSetups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathSetup; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup

        ydk::YList path_setup;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup : public ydk::Entity
{
    public:
        PathSetup();
        ~PathSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_setup_name; //type: string
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf enable; //type: empty
        class PathComputation; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation> path_computation; // presence node
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation : public ydk::Entity
{
    public:
        PathComputation();
        ~PathComputation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_computation_method; //type: MplsTePathComputationMethod
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf path_computation_server; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection : public ydk::Entity
{
    public:
        TunnelPathSelection();
        ~TunnelPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker; //type: MplsTePathSelectionTiebreaker
        ydk::YLeaf path_selection_hop_limit; //type: uint32
        ydk::YLeaf path_selection_delay_limit; //type: uint32
        ydk::YLeaf path_selection_cost_limit; //type: uint32
        class Invalidation; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: PathInvalidationAction

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth : public ydk::Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf underflow_enable; //type: boolean
        ydk::YLeaf resignal_last_bandwidth_time_out; //type: uint32
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf application_frequency; //type: uint32
        ydk::YLeaf overflow_enable; //type: boolean
        ydk::YLeaf collection_only; //type: empty
        class Underflow; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow
        class Overflow; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow
        class BandwidthLimits; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits
        class AdjustmentThreshold; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold
        class AutoCapacity; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AutoCapacity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow> underflow; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow> overflow; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AutoCapacity> auto_capacity;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow : public ydk::Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf underflow_threshold_percent; //type: uint32
        ydk::YLeaf underflow_threshold_value; //type: uint32
        ydk::YLeaf underflow_threshold_limit; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow : public ydk::Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overflow_threshold_percent; //type: uint32
        ydk::YLeaf overflow_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_limit; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits : public ydk::Entity
{
    public:
        BandwidthLimits();
        ~BandwidthLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_min_limit; //type: uint32
        ydk::YLeaf bandwidth_max_limit; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold : public ydk::Entity
{
    public:
        AdjustmentThreshold();
        ~AdjustmentThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjustment_threshold_percent; //type: uint32
        ydk::YLeaf adjustment_threshold_value; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AutoCapacity : public ydk::Entity
{
    public:
        AutoCapacity();
        ~AutoCapacity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nominal_bandwidth; //type: uint32
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf clones_minimum; //type: uint32
        ydk::YLeaf split_bandwidth; //type: uint32
        ydk::YLeaf merge_bandwidth; //type: uint32
        ydk::YLeaf clones_maximum; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AutoCapacity


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint32
        ydk::YLeaf hold_priority; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AffinityMask


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::ForwardingAdjacency : public ydk::Entity
{
    public:
        ForwardingAdjacency();
        ~ForwardingAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf include_ipv6; //type: empty
        ydk::YLeaf hold_time; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::ForwardingAdjacency


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_switch_over_change_message; //type: empty
        ydk::YLeaf all; //type: empty
        ydk::YLeaf record_route_messsage; //type: empty
        ydk::YLeaf bfd_state_message; //type: empty
        ydk::YLeaf bandwidth_change_message; //type: empty
        ydk::YLeaf reoptimize_attempts_message; //type: empty
        ydk::YLeaf reroute_messsage; //type: empty
        ydk::YLeaf state_message; //type: empty
        ydk::YLeaf insufficient_bw_message; //type: empty
        ydk::YLeaf reoptimized_message; //type: empty
        ydk::YLeaf pcalc_failure_message; //type: empty

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_type; //type: MplsTeBandwidthDste
        ydk::YLeaf class_or_pool_type; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutorouteAnnounce; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce
        class Destinations; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations> destinations;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce : public ydk::Entity
{
    public:
        AutorouteAnnounce();
        ~AutorouteAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf include_ipv6; //type: empty
        class ExcludeTraffic; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic
        class Metric; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic> exclude_traffic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric> metric;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic : public ydk::Entity
{
    public:
        ExcludeTraffic();
        ~ExcludeTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_routing; //type: empty

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: MplsTeAutorouteMetric
        ydk::YLeaf absolute_metric; //type: uint32
        ydk::YLeaf relative_metric; //type: int32
        ydk::YLeaf constant_metric; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations : public ydk::Entity
{
    public:
        Destinations();
        ~Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination

        ydk::YList destination;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NewStyleAffinityAffinityType; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        ydk::YList new_style_affinity_affinity_type;
        ydk::YList new_style_affinity_affinity_type_affinity1;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;
        
}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string
        ydk::YLeaf affinity10; //type: string

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_protection; //type: uint32
        ydk::YLeaf node_protection; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId : public ydk::Entity
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

        ydk::YLeaf tunnel_id_type; //type: MplsTeTunnelId
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId


class MplsTe::GmplsUni : public ydk::Entity
{
    public:
        GmplsUni();
        ~GmplsUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Timers; //type: MplsTe::GmplsUni::Timers
        class Controllers; //type: MplsTe::GmplsUni::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers> controllers;
        
}; // MplsTe::GmplsUni


class MplsTe::GmplsUni::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PathOptionTimers; //type: MplsTe::GmplsUni::Timers::PathOptionTimers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers::PathOptionTimers> path_option_timers;
        
}; // MplsTe::GmplsUni::Timers


class MplsTe::GmplsUni::Timers::PathOptionTimers : public ydk::Entity
{
    public:
        PathOptionTimers();
        ~PathOptionTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Holddown; //type: MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown> holddown;
        
}; // MplsTe::GmplsUni::Timers::PathOptionTimers


class MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown : public ydk::Entity
{
    public:
        Holddown();
        ~Holddown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32

}; // MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown


class MplsTe::GmplsUni::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Controller; //type: MplsTe::GmplsUni::Controllers::Controller

        ydk::YList controller;
        
}; // MplsTe::GmplsUni::Controllers


class MplsTe::GmplsUni::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Announce; //type: MplsTe::GmplsUni::Controllers::Controller::Announce
        class ControllerLogging; //type: MplsTe::GmplsUni::Controllers::Controller::ControllerLogging
        class GmplsUnitunnelHead; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::Announce> announce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::ControllerLogging> controller_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead> gmpls_unitunnel_head;
        
}; // MplsTe::GmplsUni::Controllers::Controller


class MplsTe::GmplsUni::Controllers::Controller::Announce : public ydk::Entity
{
    public:
        Announce();
        ~Announce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srl_gs; //type: empty

}; // MplsTe::GmplsUni::Controllers::Controller::Announce


class MplsTe::GmplsUni::Controllers::Controller::ControllerLogging : public ydk::Entity
{
    public:
        ControllerLogging();
        ~ControllerLogging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discovered_srlg_change_logging; //type: empty

}; // MplsTe::GmplsUni::Controllers::Controller::ControllerLogging


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead : public ydk::Entity
{
    public:
        GmplsUnitunnelHead();
        ~GmplsUnitunnelHead();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf destination; //type: string
        ydk::YLeaf record_route; //type: empty
        ydk::YLeaf signalled_name; //type: string
        class PathOptions; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions
        class Recording; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording
        class Logging; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging
        class Priority; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions> path_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording> recording;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority> priority; // presence node
        
}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions : public ydk::Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathOption; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption

        ydk::YList path_option;
        
}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preference_level; //type: uint32
        ydk::YLeaf path_type; //type: MplsTePathOption
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_name; //type: string
        ydk::YLeaf xro_type; //type: empty
        ydk::YLeaf xro_attribute_set_name; //type: string
        ydk::YLeaf lockdown; //type: MplsTePathOptionProperty
        ydk::YLeaf verbatim; //type: MplsTePathOptionProperty
        ydk::YLeaf signaled_label; //type: MplsTeSignaledLabel
        ydk::YLeaf dwdm_channel; //type: uint32

}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording : public ydk::Entity
{
    public:
        Recording();
        ~Recording();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg; //type: empty

}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging : public ydk::Entity
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

        ydk::YLeaf state_message; //type: empty

}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint32
        ydk::YLeaf hold_priority; //type: uint32

}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority


class MplsTe::GlobalAttributes : public ydk::Entity
{
    public:
        GlobalAttributes();
        ~GlobalAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf log_nsr_status; //type: empty
        ydk::YLeaf log_issu_status; //type: empty
        ydk::YLeaf reoptimize_link_up; //type: empty
        ydk::YLeaf reoptimize_delay_cleanup_timer; //type: uint32
        ydk::YLeaf disable_reoptimize_affinity_failure; //type: empty
        ydk::YLeaf maximum_tunnels; //type: uint32
        ydk::YLeaf link_holddown_timer; //type: uint32
        ydk::YLeaf fault_oam; //type: empty
        ydk::YLeaf enable_unequal_load_balancing; //type: empty
        ydk::YLeaf log_tail; //type: empty
        ydk::YLeaf reoptimize_delay_after_frr_timer; //type: uint32
        ydk::YLeaf auto_bandwidth_collect_frequency; //type: uint32
        ydk::YLeaf reopt_delay_path_protect_switchover_timer; //type: uint32
        ydk::YLeaf log_all; //type: empty
        ydk::YLeaf loose_path_retry_period; //type: uint32
        ydk::YLeaf reoptimize_load_balancing; //type: empty
        ydk::YLeaf log_head; //type: empty
        ydk::YLeaf path_selection_ignore_overload; //type: empty
        ydk::YLeaf graceful_preemption_on_bandwidth_reduction; //type: empty
        ydk::YLeaf advertise_explicit_nulls; //type: empty
        ydk::YLeaf reoptimize_delay_install_timer; //type: uint32
        ydk::YLeaf reoptimize_delay_after_affinity_failure_timer; //type: uint32
        ydk::YLeaf log_frr_protection; //type: MplsTeLogFrrProtection
        ydk::YLeaf reoptimize_timer_frequency; //type: uint32
        ydk::YLeaf log_mid; //type: empty
        ydk::YLeaf log_preemption; //type: empty
        class AutoTunnel; //type: MplsTe::GlobalAttributes::AutoTunnel
        class HardwareOutOfResource; //type: MplsTe::GlobalAttributes::HardwareOutOfResource
        class SecondaryRouterIds; //type: MplsTe::GlobalAttributes::SecondaryRouterIds
        class Srlg; //type: MplsTe::GlobalAttributes::Srlg
        class Queues; //type: MplsTe::GlobalAttributes::Queues
        class Mib; //type: MplsTe::GlobalAttributes::Mib
        class AttributeSet; //type: MplsTe::GlobalAttributes::AttributeSet
        class BfdOverLsp; //type: MplsTe::GlobalAttributes::BfdOverLsp
        class BandwidthAccounting; //type: MplsTe::GlobalAttributes::BandwidthAccounting
        class PceAttributes; //type: MplsTe::GlobalAttributes::PceAttributes
        class LspOutOfResource; //type: MplsTe::GlobalAttributes::LspOutOfResource
        class SoftPreemption; //type: MplsTe::GlobalAttributes::SoftPreemption
        class FastReroute; //type: MplsTe::GlobalAttributes::FastReroute
        class PathSelection; //type: MplsTe::GlobalAttributes::PathSelection
        class AffinityMappings; //type: MplsTe::GlobalAttributes::AffinityMappings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel> auto_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource> hardware_out_of_resource;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SecondaryRouterIds> secondary_router_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg> srlg;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Queues> queues;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Mib> mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet> attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp> bfd_over_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BandwidthAccounting> bandwidth_accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes> pce_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::LspOutOfResource> lsp_out_of_resource;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection> path_selection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AffinityMappings> affinity_mappings;
        
}; // MplsTe::GlobalAttributes


class MplsTe::GlobalAttributes::AutoTunnel : public ydk::Entity
{
    public:
        AutoTunnel();
        ~AutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pcc; //type: MplsTe::GlobalAttributes::AutoTunnel::Pcc
        class P2pAutoTunnel; //type: MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel
        class Backup; //type: MplsTe::GlobalAttributes::AutoTunnel::Backup
        class Mesh; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh
        class P2mpAutoTunnel; //type: MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Pcc> pcc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel> p2p_auto_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup> backup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh> mesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel> p2mp_auto_tunnel;
        
}; // MplsTe::GlobalAttributes::AutoTunnel


class MplsTe::GlobalAttributes::AutoTunnel::Pcc : public ydk::Entity
{
    public:
        Pcc();
        ~Pcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange> tunnel_range; // presence node
        
}; // MplsTe::GlobalAttributes::AutoTunnel::Pcc


class MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange : public ydk::Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min_tunnel_id; //type: uint32
        ydk::YLeaf max_tunnel_id; //type: uint32

}; // MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange


class MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel : public ydk::Entity
{
    public:
        P2pAutoTunnel();
        ~P2pAutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange> tunnel_range; // presence node
        
}; // MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel


class MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange : public ydk::Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min_tunnel_id; //type: uint32
        ydk::YLeaf max_tunnel_id; //type: uint32

}; // MplsTe::GlobalAttributes::AutoTunnel::P2pAutoTunnel::TunnelRange


class MplsTe::GlobalAttributes::AutoTunnel::Backup : public ydk::Entity
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

        ydk::YLeaf affinity_ignore; //type: empty
        class Timers; //type: MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers
        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange> tunnel_range; // presence node
        
}; // MplsTe::GlobalAttributes::AutoTunnel::Backup


class MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Removal; //type: MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal> removal;
        
}; // MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers


class MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf unused; //type: uint32

}; // MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal


class MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange : public ydk::Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min_tunnel_id; //type: uint32
        ydk::YLeaf max_tunnel_id; //type: uint32

}; // MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange


class MplsTe::GlobalAttributes::AutoTunnel::Mesh : public ydk::Entity
{
    public:
        Mesh();
        ~Mesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MeshGroups; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups
        class Timers; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers
        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups> mesh_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange> tunnel_range; // presence node
        
}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups : public ydk::Entity
{
    public:
        MeshGroups();
        ~MeshGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MeshGroup; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup

        ydk::YList mesh_group;
        
}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup : public ydk::Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mesh_group_id; //type: uint32
        ydk::YLeaf destination_list; //type: string
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf attribute_set; //type: string
        ydk::YLeaf create; //type: empty
        ydk::YLeaf one_hop; //type: empty

}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Removal; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal> removal;
        
}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf unused; //type: uint32

}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange : public ydk::Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min_tunnel_id; //type: uint32
        ydk::YLeaf max_tunnel_id; //type: uint32

}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange


class MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel : public ydk::Entity
{
    public:
        P2mpAutoTunnel();
        ~P2mpAutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange> tunnel_range; // presence node
        
}; // MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel


class MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange : public ydk::Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf min_tunnel_id; //type: uint32
        ydk::YLeaf max_tunnel_id; //type: uint32

}; // MplsTe::GlobalAttributes::AutoTunnel::P2mpAutoTunnel::TunnelRange


class MplsTe::GlobalAttributes::HardwareOutOfResource : public ydk::Entity
{
    public:
        HardwareOutOfResource();
        ~HardwareOutOfResource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OorRedState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState
        class OorYellowState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState
        class OorGreenState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState> oor_red_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState> oor_yellow_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState> oor_green_state;
        
}; // MplsTe::GlobalAttributes::HardwareOutOfResource


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState : public ydk::Entity
{
    public:
        OorRedState();
        ~OorRedState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf oor_node_protection_disable; //type: empty
        ydk::YLeaf oor_available_bandwidth_percentage; //type: uint32
        ydk::YLeaf oor_accept_lsp_min_bandwidth; //type: uint32
        ydk::YLeaf oor_accept_reopt_lsp; //type: empty
        ydk::YLeaf oor_metric_te_penalty; //type: uint32

}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState : public ydk::Entity
{
    public:
        OorYellowState();
        ~OorYellowState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf oor_node_protection_disable; //type: empty
        ydk::YLeaf oor_available_bandwidth_percentage; //type: uint32
        ydk::YLeaf oor_accept_lsp_min_bandwidth; //type: uint32
        ydk::YLeaf oor_accept_reopt_lsp; //type: empty
        ydk::YLeaf oor_metric_te_penalty; //type: uint32

}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState : public ydk::Entity
{
    public:
        OorGreenState();
        ~OorGreenState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf oor_recovery_duration; //type: uint32
        ydk::YLeaf oor_node_protection_disable; //type: empty
        ydk::YLeaf oor_available_bandwidth_percentage; //type: uint32
        ydk::YLeaf oor_accept_lsp_min_bandwidth; //type: uint32
        ydk::YLeaf oor_accept_reopt_lsp; //type: empty
        ydk::YLeaf oor_metric_te_penalty; //type: uint32

}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState


class MplsTe::GlobalAttributes::SecondaryRouterIds : public ydk::Entity
{
    public:
        SecondaryRouterIds();
        ~SecondaryRouterIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SecondaryRouterId; //type: MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId

        ydk::YList secondary_router_id;
        
}; // MplsTe::GlobalAttributes::SecondaryRouterIds


class MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId : public ydk::Entity
{
    public:
        SecondaryRouterId();
        ~SecondaryRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf secondary_router_id_value; //type: string

}; // MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId


class MplsTe::GlobalAttributes::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf default_admin_weight; //type: uint32
        ydk::YLeaf enable; //type: empty
        class Names; //type: MplsTe::GlobalAttributes::Srlg::Names

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names> names;
        
}; // MplsTe::GlobalAttributes::Srlg


class MplsTe::GlobalAttributes::Srlg::Names : public ydk::Entity
{
    public:
        Names();
        ~Names();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Name; //type: MplsTe::GlobalAttributes::Srlg::Names::Name

        ydk::YList name;
        
}; // MplsTe::GlobalAttributes::Srlg::Names


class MplsTe::GlobalAttributes::Srlg::Names::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32
        class StaticSrlgMembers; //type: MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers> static_srlg_members;
        
}; // MplsTe::GlobalAttributes::Srlg::Names::Name


class MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers : public ydk::Entity
{
    public:
        StaticSrlgMembers();
        ~StaticSrlgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticSrlgMember; //type: MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember

        ydk::YList static_srlg_member;
        
}; // MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers


class MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember : public ydk::Entity
{
    public:
        StaticSrlgMember();
        ~StaticSrlgMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string

}; // MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember


class MplsTe::GlobalAttributes::Queues : public ydk::Entity
{
    public:
        Queues();
        ~Queues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Queue; //type: MplsTe::GlobalAttributes::Queues::Queue

        ydk::YList queue;
        
}; // MplsTe::GlobalAttributes::Queues


class MplsTe::GlobalAttributes::Queues::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf role; //type: RoutePriorityRole
        ydk::YLeaf value_; //type: uint32

}; // MplsTe::GlobalAttributes::Queues::Queue


class MplsTe::GlobalAttributes::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf midpoint_lsp_stats_collection_disable; //type: empty

}; // MplsTe::GlobalAttributes::Mib


class MplsTe::GlobalAttributes::AttributeSet : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PathOptionAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes
        class P2mpteAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes
        class P2pTeAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes
        class AutoBackupAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes
        class OtnPpAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes
        class AutoMeshAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes
        class XroAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes> path_option_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes> p2mpte_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes> p2p_te_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes> auto_backup_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes> otn_pp_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes> auto_mesh_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes> xro_attributes;
        
}; // MplsTe::GlobalAttributes::AttributeSet


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes : public ydk::Entity
{
    public:
        PathOptionAttributes();
        ~PathOptionAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PathOptionAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute

        ydk::YList path_option_attribute;
        
}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute : public ydk::Entity
{
    public:
        PathOptionAttribute();
        ~PathOptionAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf attribute_set_name; //type: string
        ydk::YLeaf enable; //type: empty
        class BfdReversePath; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath
        class AttPathOptionPathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection
        class Pce; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce
        class AffinityMask; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask
        class Bandwidth; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth
        class NewStyleAffinityAffinityTypes; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath> bfd_reverse_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection> att_path_option_path_selection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce> pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        
}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath : public ydk::Entity
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

        ydk::YLeaf bfd_reverse_path_type; //type: BfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection : public ydk::Entity
{
    public:
        AttPathOptionPathSelection();
        ~AttPathOptionPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_selection_exclude_list; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf path_selection_delay_limit; //type: uint32
        ydk::YLeaf path_selection_cost_limit; //type: uint32
        class Invalidation; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation> invalidation; // presence node
        
}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: PathInvalidationAction

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce : public ydk::Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Bidirectional; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional
        class DisjointPath; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional> bidirectional; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath> disjoint_path; // presence node
        
}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional : public ydk::Entity
{
    public:
        Bidirectional();
        ~Bidirectional();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_source_address; //type: string
        ydk::YLeaf bd_group_id; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath : public ydk::Entity
{
    public:
        DisjointPath();
        ~DisjointPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dp_source_address; //type: string
        ydk::YLeaf dp_type; //type: uint32
        ydk::YLeaf dp_group_id; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_type; //type: MplsTeBandwidthDste
        ydk::YLeaf class_or_pool_type; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NewStyleAffinityAffinityType; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        ydk::YList new_style_affinity_affinity_type;
        ydk::YList new_style_affinity_affinity_type_affinity1;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;
        
}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string
        ydk::YLeaf affinity10; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes : public ydk::Entity
{
    public:
        P2mpteAttributes();
        ~P2mpteAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class P2mpteAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute

        ydk::YList p2mpte_attribute;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute : public ydk::Entity
{
    public:
        P2mpteAttribute();
        ~P2mpteAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf attribute_set_name; //type: string
        ydk::YLeaf interface_bandwidth; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf record_route; //type: empty
        class Priority; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority
        class AffinityMask; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask
        class Bandwidth; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth
        class PathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection
        class NewStyleAffinityAffinityTypes; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes
        class FastReroute; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute
        class Logging; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority> priority; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection> path_selection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute> fast_reroute; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging> logging;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint32
        ydk::YLeaf hold_priority; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Priority


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::AffinityMask


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_type; //type: MplsTeBandwidthDste
        ydk::YLeaf class_or_pool_type; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Bandwidth


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection : public ydk::Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::PathSelection


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NewStyleAffinityAffinityType; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        ydk::YList new_style_affinity_affinity_type;
        ydk::YList new_style_affinity_affinity_type_affinity1;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string
        ydk::YLeaf affinity4; //type: string
        ydk::YLeaf affinity5; //type: string
        ydk::YLeaf affinity6; //type: string
        ydk::YLeaf affinity7; //type: string
        ydk::YLeaf affinity8; //type: string
        ydk::YLeaf affinity9; //type: string
        ydk::YLeaf affinity10; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_protection; //type: uint32
        ydk::YLeaf node_protection; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::FastReroute


class MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging : public ydk::Entity
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

        ydk::YLeaf insufficient_bw_message; //type: empty
        ydk::YLeaf reoptimized_message; //type: empty
        ydk::YLeaf bandwidth_change_message; //type: empty
        ydk::YLeaf all; //type: empty
        ydk::YLeaf pcalc_failure_message; //type: empty
        ydk::YLeaf state_message; //type: empty
        ydk::YLeaf reoptimize_attempts_message; //type: empty
        ydk::YLeaf sub_lsp_state_message; //type: empty
        ydk::YLeaf reroute_messsage; //type: empty

}; // MplsTe::GlobalAttributes::AttributeSet::P2mpteAttributes::P2mpteAttribute::Logging


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes : public ydk::Entity
{
    public:
        P2pTeAttributes();
        ~P2pTeAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class P2pTeAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute

        ydk::YList p2p_te_attribute;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute : public ydk::Entity
{
    public:
        P2pTeAttribute();
        ~P2pTeAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf attribute_set_name; //type: string
        ydk::YLeaf enable; //type: empty
        class PathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection
        class Pce; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce
        class AffinityMask; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask
        class Logging; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging
        class NewStyleAffinityAffinityTypes; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection> path_selection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce> pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection : public ydk::Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_selection_metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf path_selection_segment_routing_adjacency_protection; //type: MplsTePathSelectionSegmentRoutingAdjacencyProtection
        ydk::YLeaf enable; //type: empty
        class SegmentRoutingPrepend; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend
        class Invalidation; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend> segment_routing_prepend;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation> invalidation;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend : public ydk::Entity
{
    public:
        SegmentRoutingPrepend();
        ~SegmentRoutingPrepend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Indexes; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes> indexes;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes : public ydk::Entity
{
    public:
        Indexes();
        ~Indexes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Index; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index

        ydk::YList index_;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index : public ydk::Entity
{
    public:
        Index();
        ~Index();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_number; //type: uint32
        ydk::YLeaf prepend_type; //type: SrPrepend
        ydk::YLeaf mpls_label; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invalidation_timer; //type: uint32
        ydk::YLeaf invalidation_timer_expire_type; //type: MplsTePathSelectionInvalidationTimerExpire

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::PathSelection::Invalidation


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce : public ydk::Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Bidirectional; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional
        class DisjointPath; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional> bidirectional; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath> disjoint_path; // presence node
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional : public ydk::Entity
{
    public:
        Bidirectional();
        ~Bidirectional();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_source_address; //type: string
        ydk::YLeaf bd_group_id; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::Bidirectional


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath : public ydk::Entity
{
    public:
        DisjointPath();
        ~DisjointPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dp_source_address; //type: string
        ydk::YLeaf dp_type; //type: uint32
        ydk::YLeaf dp_group_id; //type: uint32

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Pce::DisjointPath


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::AffinityMask


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging : public ydk::Entity
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

        ydk::YLeaf lsp_switch_over_change_message; //type: empty
        ydk::YLeaf all; //type: empty
        ydk::YLeaf record_route_messsage; //type: empty
        ydk::YLeaf bfd_state_message; //type: empty
        ydk::YLeaf bandwidth_change_message; //type: empty
        ydk::YLeaf reoptimize_attempts_message; //type: empty
        ydk::YLeaf reroute_messsage; //type: empty
        ydk::YLeaf state_message; //type: empty
        ydk::YLeaf insufficient_bw_message; //type: empty
        ydk::YLeaf reoptimized_message; //type: empty
        ydk::YLeaf pcalc_failure_message; //type: empty

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::Logging


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NewStyleAffinityAffinityType; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        ydk::YList new_style_affinity_affinity_type;
        ydk::YList new_style_affinity_affinity_type_affinity1;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        ydk::YList new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;
        
}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public ydk::Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_type; //type: MplsTeTunnelAffinity
        ydk::YLeaf affinity1; //type: string
        ydk::YLeaf affinity2; //type: string
        ydk::YLeaf affinity3; //type: string

}; // MplsTe::GlobalAttributes::AttributeSet::P2pTeAttributes::P2pTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3

class MplsTeBackupBandwidthClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class0;
        static const ydk::Enum::YLeaf class1;
        static const ydk::Enum::YLeaf any_class;

        static int get_enum_value(const std::string & name) {
            if (name == "class0") return 0;
            if (name == "class1") return 1;
            if (name == "any-class") return 9;
            return -1;
        }
};

class SrPrepend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none_type;
        static const ydk::Enum::YLeaf next_label;
        static const ydk::Enum::YLeaf bgp_n_hop;

        static int get_enum_value(const std::string & name) {
            if (name == "none-type") return 0;
            if (name == "next-label") return 1;
            if (name == "bgp-n-hop") return 2;
            return -1;
        }
};

class MplsTePathComputationMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf pce;
        static const ydk::Enum::YLeaf explicit_;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "dynamic") return 1;
            if (name == "pce") return 2;
            if (name == "explicit") return 3;
            return -1;
        }
};

class OtnDestination : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf number_ed;
        static const ydk::Enum::YLeaf un_number_ed;

        static int get_enum_value(const std::string & name) {
            if (name == "number-ed") return 0;
            if (name == "un-number-ed") return 1;
            return -1;
        }
};

class MplsTeSwitchingCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf psc1;
        static const ydk::Enum::YLeaf lsc;
        static const ydk::Enum::YLeaf fsc;

        static int get_enum_value(const std::string & name) {
            if (name == "psc1") return 1;
            if (name == "lsc") return 150;
            if (name == "fsc") return 200;
            return -1;
        }
};

class MplsTeBfdSessionDownAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf re_setup;

        static int get_enum_value(const std::string & name) {
            if (name == "re-setup") return 1;
            return -1;
        }
};

class RoutePriorityRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf route_priority_role_head_back_up;
        static const ydk::Enum::YLeaf route_priority_role_head_primary;
        static const ydk::Enum::YLeaf route_priority_role_middle;

        static int get_enum_value(const std::string & name) {
            if (name == "route-priority-role-head-back-up") return 0;
            if (name == "route-priority-role-head-primary") return 1;
            if (name == "route-priority-role-middle") return 2;
            return -1;
        }
};

class MplsTebfdSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular_bfd;
        static const ydk::Enum::YLeaf sbfd;
        static const ydk::Enum::YLeaf redundant_sbfd;

        static int get_enum_value(const std::string & name) {
            if (name == "regular-bfd") return 1;
            if (name == "sbfd") return 2;
            if (name == "redundant-sbfd") return 3;
            return -1;
        }
};

class MplsTeLogFrrProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frr_active_primary;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf frr_ready_primary;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "frr-active-primary") return 1;
            if (name == "backup") return 256;
            if (name == "frr-ready-primary") return 512;
            if (name == "primary") return 513;
            if (name == "all") return 769;
            return -1;
        }
};

class MplsTeTunnelAffinity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf include;
        static const ydk::Enum::YLeaf include_strict;
        static const ydk::Enum::YLeaf exclude;
        static const ydk::Enum::YLeaf exclude_all;
        static const ydk::Enum::YLeaf ignore;

        static int get_enum_value(const std::string & name) {
            if (name == "include") return 1;
            if (name == "include-strict") return 2;
            if (name == "exclude") return 3;
            if (name == "exclude-all") return 4;
            if (name == "ignore") return 5;
            return -1;
        }
};

class IetfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;

        static int get_enum_value(const std::string & name) {
            if (name == "standard") return 3;
            return -1;
        }
};

class MplsTePathOptionProperty : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lockdown;
        static const ydk::Enum::YLeaf verbatim;
        static const ydk::Enum::YLeaf pce;
        static const ydk::Enum::YLeaf segment_routing;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "lockdown") return 1;
            if (name == "verbatim") return 4;
            if (name == "pce") return 8;
            if (name == "segment-routing") return 16;
            return -1;
        }
};

class GmplsttiMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sm;
        static const ydk::Enum::YLeaf pm;
        static const ydk::Enum::YLeaf tcm;

        static int get_enum_value(const std::string & name) {
            if (name == "sm") return 1;
            if (name == "pm") return 2;
            if (name == "tcm") return 3;
            return -1;
        }
};

class MplsTePathSelectionInvalidationTimerExpire : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_action_tear;
        static const ydk::Enum::YLeaf tunnel_action_drop;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-action-tear") return 1;
            if (name == "tunnel-action-drop") return 2;
            return -1;
        }
};

class MplsTeOtnApsProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1plus1_unidir_no_aps;
        static const ydk::Enum::YLeaf Y_1plus1_unidir_aps;
        static const ydk::Enum::YLeaf Y_1plus1_bdir_aps;

        static int get_enum_value(const std::string & name) {
            if (name == "1plus1-unidir-no-aps") return 4;
            if (name == "1plus1-unidir-aps") return 8;
            if (name == "1plus1-bdir-aps") return 16;
            return -1;
        }
};

class MplsTeSwitchingEncoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf sondet_sdh;

        static int get_enum_value(const std::string & name) {
            if (name == "packet") return 1;
            if (name == "ethernet") return 2;
            if (name == "sondet-sdh") return 5;
            return -1;
        }
};

class MplsTeSigNameOption : public ydk::Enum
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

class OtnProtectionSwitchLockout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf working;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "working") return 1;
            return -1;
        }
};

class MplsTeTunnelId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf explicit_;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 0;
            if (name == "explicit") return 1;
            return -1;
        }
};

class MplsTeAffinityValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hex_value;
        static const ydk::Enum::YLeaf bit_position;

        static int get_enum_value(const std::string & name) {
            if (name == "hex-value") return 1;
            if (name == "bit-position") return 2;
            return -1;
        }
};

class OtnStaticUni : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf xc;
        static const ydk::Enum::YLeaf termination;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "xc") return 1;
            if (name == "termination") return 2;
            return -1;
        }
};

class MplsTeOtnSncMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snc_n;
        static const ydk::Enum::YLeaf snc_i;
        static const ydk::Enum::YLeaf snc_s;

        static int get_enum_value(const std::string & name) {
            if (name == "snc-n") return 1;
            if (name == "snc-i") return 2;
            if (name == "snc-s") return 3;
            return -1;
        }
};

class OtnPayload : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf bmp;
        static const ydk::Enum::YLeaf gfp_f;
        static const ydk::Enum::YLeaf gmp;
        static const ydk::Enum::YLeaf gfp_f_ext;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "bmp") return 50;
            if (name == "gfp-f") return 54;
            if (name == "gmp") return 55;
            if (name == "gfp-f-ext") return 70;
            return -1;
        }
};

class OspfAreaMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_int;
        static const ydk::Enum::YLeaf ospfip_addr;

        static int get_enum_value(const std::string & name) {
            if (name == "ospf-int") return 0;
            if (name == "ospfip-addr") return 1;
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

class MplsTePathSelectionTiebreaker : public ydk::Enum
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

class MplsTePathOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_name;
        static const ydk::Enum::YLeaf explicit_number;
        static const ydk::Enum::YLeaf no_ero;
        static const ydk::Enum::YLeaf sr;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "dynamic") return 1;
            if (name == "explicit-name") return 3;
            if (name == "explicit-number") return 4;
            if (name == "no-ero") return 5;
            if (name == "sr") return 6;
            return -1;
        }
};

class PathInvalidationAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tear;
        static const ydk::Enum::YLeaf drop;

        static int get_enum_value(const std::string & name) {
            if (name == "tear") return 1;
            if (name == "drop") return 2;
            return -1;
        }
};

class OtnSignaledBandwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf odu1;
        static const ydk::Enum::YLeaf odu2;
        static const ydk::Enum::YLeaf odu3;
        static const ydk::Enum::YLeaf odu4;
        static const ydk::Enum::YLeaf odu0;
        static const ydk::Enum::YLeaf odu2e;
        static const ydk::Enum::YLeaf od_uflex_cbr;
        static const ydk::Enum::YLeaf od_uflex_gfp_resize;
        static const ydk::Enum::YLeaf od_uflex_gfp_not_resize;
        static const ydk::Enum::YLeaf odu1e;
        static const ydk::Enum::YLeaf odu1f;
        static const ydk::Enum::YLeaf odu2f;
        static const ydk::Enum::YLeaf odu3e1;
        static const ydk::Enum::YLeaf odu3e2;

        static int get_enum_value(const std::string & name) {
            if (name == "odu1") return 1;
            if (name == "odu2") return 2;
            if (name == "odu3") return 3;
            if (name == "odu4") return 4;
            if (name == "odu0") return 10;
            if (name == "odu2e") return 11;
            if (name == "od-uflex-cbr") return 20;
            if (name == "od-uflex-gfp-resize") return 21;
            if (name == "od-uflex-gfp-not-resize") return 22;
            if (name == "odu1e") return 23;
            if (name == "odu1f") return 24;
            if (name == "odu2f") return 25;
            if (name == "odu3e1") return 26;
            if (name == "odu3e2") return 27;
            return -1;
        }
};

class MplsTeAutorouteMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf constant;

        static int get_enum_value(const std::string & name) {
            if (name == "relative") return 1;
            if (name == "absolute") return 2;
            if (name == "constant") return 3;
            return -1;
        }
};

class BindingSegmentId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any_label;
        static const ydk::Enum::YLeaf specified_label;

        static int get_enum_value(const std::string & name) {
            if (name == "any-label") return 1;
            if (name == "specified-label") return 2;
            return -1;
        }
};

class MplsTesrlgExclude : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mandatory;
        static const ydk::Enum::YLeaf preferred;
        static const ydk::Enum::YLeaf weighted;

        static int get_enum_value(const std::string & name) {
            if (name == "mandatory") return 1;
            if (name == "preferred") return 2;
            if (name == "weighted") return 3;
            return -1;
        }
};

class MplsTeSignaledLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dwdm;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "dwdm") return 1;
            return -1;
        }
};

class BandwidthConstraint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bandwidth_constraint_maximum_allocation_model;

        static int get_enum_value(const std::string & name) {
            if (name == "bandwidth-constraint-maximum-allocation-model") return 1;
            return -1;
        }
};

class MplsTeSwitchingEncode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf sondet_sdh;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "packet") return 1;
            if (name == "ethernet") return 2;
            if (name == "sondet-sdh") return 5;
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

class MplsTePathOptionProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf protecting;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 0;
            if (name == "protecting") return 1;
            return -1;
        }
};

class OtnSignaledBandwidthFlexFraming : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf framed_gfp_fixed;
        static const ydk::Enum::YLeaf framed_gfp_resize;

        static int get_enum_value(const std::string & name) {
            if (name == "cbr") return 20;
            if (name == "framed-gfp-fixed") return 21;
            if (name == "framed-gfp-resize") return 22;
            return -1;
        }
};

class MplsTeBandwidthLimit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unlimited;
        static const ydk::Enum::YLeaf limited;

        static int get_enum_value(const std::string & name) {
            if (name == "unlimited") return 64;
            if (name == "limited") return 128;
            return -1;
        }
};

class MplsTePathSelectionSegmentRoutingAdjacencyProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf adj_unprotected;
        static const ydk::Enum::YLeaf adj_protected;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "adj-unprotected") return 1;
            if (name == "adj-protected") return 2;
            return -1;
        }
};

class LinkNextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4_address;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "ipv4-address") return 2;
            return -1;
        }
};

class MplsLcacFloodingIgp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf;

        static int get_enum_value(const std::string & name) {
            if (name == "ospf") return 0;
            return -1;
        }
};

class BfdReversePath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_reverse_path_binding_label;

        static int get_enum_value(const std::string & name) {
            if (name == "bfd-reverse-path-binding-label") return 1;
            return -1;
        }
};

class MplsTeOtnApsRestorationStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf keep_failed_lsp;
        static const ydk::Enum::YLeaf delete_failed_lsp;

        static int get_enum_value(const std::string & name) {
            if (name == "keep-failed-lsp") return 1;
            if (name == "delete-failed-lsp") return 2;
            return -1;
        }
};

class MplsTeBandwidthDste : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard_dste;
        static const ydk::Enum::YLeaf pre_standard_dste;

        static int get_enum_value(const std::string & name) {
            if (name == "standard-dste") return 0;
            if (name == "pre-standard-dste") return 1;
            return -1;
        }
};

class MplsTePathDiversityConformance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf best_effort;

        static int get_enum_value(const std::string & name) {
            if (name == "strict") return 0;
            if (name == "best-effort") return 1;
            return -1;
        }
};

class MplsTeBackupBandwidthPool : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any_pool;
        static const ydk::Enum::YLeaf global_pool;
        static const ydk::Enum::YLeaf sub_pool;

        static int get_enum_value(const std::string & name) {
            if (name == "any-pool") return 1;
            if (name == "global-pool") return 2;
            if (name == "sub-pool") return 4;
            return -1;
        }
};

class MplsTeOtnApsProtectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf revertive;
        static const ydk::Enum::YLeaf non_revertive;

        static int get_enum_value(const std::string & name) {
            if (name == "revertive") return 1;
            if (name == "non-revertive") return 2;
            return -1;
        }
};

class MplsTeSwitchingIndex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;

        static int get_enum_value(const std::string & name) {
            if (name == "link") return 255;
            return -1;
        }
};

class MplsTeConfigTunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf p2mp;

        static int get_enum_value(const std::string & name) {
            if (name == "p2p") return 0;
            if (name == "p2mp") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_CFG_0_ */

