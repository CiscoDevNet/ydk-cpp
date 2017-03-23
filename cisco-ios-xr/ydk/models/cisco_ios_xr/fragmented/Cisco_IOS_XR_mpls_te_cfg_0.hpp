#ifndef _CISCO_IOS_XR_MPLS_TE_CFG_0_
#define _CISCO_IOS_XR_MPLS_TE_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_cfg {

class MplsTe : public Entity
{
    public:
        MplsTe();
        ~MplsTe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf enable_traffic_engineering; //type: empty

        class DiffServTrafficEngineering; //type: MplsTe::DiffServTrafficEngineering
        class NamedTunnels; //type: MplsTe::NamedTunnels
        class GmplsUni; //type: MplsTe::GmplsUni
        class GlobalAttributes; //type: MplsTe::GlobalAttributes
        class TransportProfile; //type: MplsTe::TransportProfile
        class Interfaces; //type: MplsTe::Interfaces
        class GmplsNni; //type: MplsTe::GmplsNni
        class Lcac; //type: MplsTe::Lcac

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::DiffServTrafficEngineering> diff_serv_traffic_engineering;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes> global_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni> gmpls_nni;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni> gmpls_uni;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac> lcac;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels> named_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile> transport_profile;


}; // MplsTe


class MplsTe::DiffServTrafficEngineering : public Entity
{
    public:
        DiffServTrafficEngineering();
        ~DiffServTrafficEngineering();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_constraint_model; //type: BandwidthConstraintEnum
        YLeaf mode_ietf; //type: IetfModeEnum

        class Classes; //type: MplsTe::DiffServTrafficEngineering::Classes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::DiffServTrafficEngineering::Classes> classes;


}; // MplsTe::DiffServTrafficEngineering


class MplsTe::DiffServTrafficEngineering::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Class_; //type: MplsTe::DiffServTrafficEngineering::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::DiffServTrafficEngineering::Classes::Class_> > class_;


}; // MplsTe::DiffServTrafficEngineering::Classes


class MplsTe::DiffServTrafficEngineering::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_number; //type: uint32
        YLeaf class_type; //type: uint32
        YLeaf class_priority; //type: uint32
        YLeaf unused; //type: boolean



}; // MplsTe::DiffServTrafficEngineering::Classes::Class_


class MplsTe::NamedTunnels : public Entity
{
    public:
        NamedTunnels();
        ~NamedTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Tunnels; //type: MplsTe::NamedTunnels::Tunnels

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels> tunnels;


}; // MplsTe::NamedTunnels


class MplsTe::NamedTunnels::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnel; //type: MplsTe::NamedTunnels::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel> > tunnel;


}; // MplsTe::NamedTunnels::Tunnels


class MplsTe::NamedTunnels::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_type; //type: MplsTeConfigTunnelEnum
        YLeaf enable; //type: empty

        class TunnelAttributes; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes
        class TunnelId; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes> tunnel_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId> tunnel_id; // presence node


}; // MplsTe::NamedTunnels::Tunnels::Tunnel


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes : public Entity
{
    public:
        TunnelAttributes();
        ~TunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shutdown; //type: empty
        YLeaf forward_class; //type: uint32
        YLeaf destination; //type: string
        YLeaf record_route; //type: empty
        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
        YLeaf soft_preemption; //type: empty
        YLeaf load_share; //type: uint32

        class PathSetups; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups
        class TunnelPathSelection; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection
        class AutoBandwidth; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth
        class Priority; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority
        class Logging; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging
        class Bandwidth; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth
        class Autoroute; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute
        class NewStyleAffinityAffinityTypes; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes
        class FastReroute; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth> auto_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute> autoroute;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth> bandwidth; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups> path_setups;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority> priority; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection> tunnel_path_selection;


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups : public Entity
{
    public:
        PathSetups();
        ~PathSetups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathSetup; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup> > path_setup;


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup : public Entity
{
    public:
        PathSetup();
        ~PathSetup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_setup_name; //type: string
        YLeaf preference; //type: int32
        YLeaf enable; //type: empty

        class PathComputation; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation> path_computation; // presence node


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation : public Entity
{
    public:
        PathComputation();
        ~PathComputation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_computation_method; //type: MplsTePathComputationMethodEnum
        YLeaf explicit_path_name; //type: string
        YLeaf path_computation_server; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection : public Entity
{
    public:
        TunnelPathSelection();
        ~TunnelPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tiebreaker; //type: MplsTePathSelectionTiebreakerEnum
        YLeaf path_selection_hop_limit; //type: uint32
        YLeaf path_selection_cost_limit; //type: uint32

        class Invalidation; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation : public Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: PathInvalidationActionEnum



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth : public Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf underflow_enable; //type: boolean
        YLeaf enabled; //type: boolean
        YLeaf application_frequency; //type: uint32
        YLeaf overflow_enable; //type: boolean
        YLeaf collection_only; //type: empty

        class Underflow; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow
        class Overflow; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow
        class BandwidthLimits; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits
        class AdjustmentThreshold; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow> overflow; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow> underflow; // presence node


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow : public Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf underflow_threshold_percent; //type: uint32
        YLeaf underflow_threshold_value; //type: uint32
        YLeaf underflow_threshold_limit; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow : public Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf overflow_threshold_percent; //type: uint32
        YLeaf overflow_threshold_value; //type: uint32
        YLeaf overflow_threshold_limit; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits : public Entity
{
    public:
        BandwidthLimits();
        ~BandwidthLimits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_min_limit; //type: uint32
        YLeaf bandwidth_max_limit; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold : public Entity
{
    public:
        AdjustmentThreshold();
        ~AdjustmentThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adjustment_threshold_percent; //type: uint32
        YLeaf adjustment_threshold_value; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint32
        YLeaf hold_priority; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_switch_over_change_message; //type: empty
        YLeaf all; //type: empty
        YLeaf record_route_messsage; //type: empty
        YLeaf bfd_state_message; //type: empty
        YLeaf bandwidth_change_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf reroute_messsage; //type: empty
        YLeaf state_message; //type: empty
        YLeaf insufficient_bw_message; //type: empty
        YLeaf reoptimized_message; //type: empty
        YLeaf pcalc_failure_message; //type: empty



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf class_or_pool_type; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute : public Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination; //type: empty

        class Metric; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric
        class AutorouteAnnounce; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce
        class DestinationXr; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr> destination_xr;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric> metric;


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
        YLeaf absolute_metric; //type: uint32
        YLeaf relative_metric; //type: int32
        YLeaf constant_metric; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce : public Entity
{
    public:
        AutorouteAnnounce();
        ~AutorouteAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf include_ipv6; //type: empty

        class ExcludeTraffic; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic
        class Metric; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic> exclude_traffic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric> metric;


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic : public Entity
{
    public:
        ExcludeTraffic();
        ~ExcludeTraffic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_routing; //type: empty



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
        YLeaf absolute_metric; //type: uint32
        YLeaf relative_metric; //type: int32
        YLeaf constant_metric; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr : public Entity
{
    public:
        DestinationXr();
        ~DestinationXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Destination; //type: MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination> > destination;


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes : public Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string
        YLeaf affinity10; //type: string



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_protection; //type: uint32
        YLeaf node_protection; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute


class MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId : public Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id_type; //type: MplsTeTunnelIdEnum
        YLeaf tunnel_id; //type: uint32



}; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId


class MplsTe::GmplsUni : public Entity
{
    public:
        GmplsUni();
        ~GmplsUni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Timers; //type: MplsTe::GmplsUni::Timers
        class Controllers; //type: MplsTe::GmplsUni::Controllers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers> controllers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers> timers;


}; // MplsTe::GmplsUni


class MplsTe::GmplsUni::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOptionTimers; //type: MplsTe::GmplsUni::Timers::PathOptionTimers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers::PathOptionTimers> path_option_timers;


}; // MplsTe::GmplsUni::Timers


class MplsTe::GmplsUni::Timers::PathOptionTimers : public Entity
{
    public:
        PathOptionTimers();
        ~PathOptionTimers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Holddown; //type: MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown> holddown;


}; // MplsTe::GmplsUni::Timers::PathOptionTimers


class MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown : public Entity
{
    public:
        Holddown();
        ~Holddown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32



}; // MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown


class MplsTe::GmplsUni::Controllers : public Entity
{
    public:
        Controllers();
        ~Controllers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Controller; //type: MplsTe::GmplsUni::Controllers::Controller

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller> > controller;


}; // MplsTe::GmplsUni::Controllers


class MplsTe::GmplsUni::Controllers::Controller : public Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf controller_name; //type: string
        YLeaf enable; //type: empty

        class Announce; //type: MplsTe::GmplsUni::Controllers::Controller::Announce
        class ControllerLogging; //type: MplsTe::GmplsUni::Controllers::Controller::ControllerLogging
        class GmplsUnitunnelHead; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::Announce> announce;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::ControllerLogging> controller_logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead> gmpls_unitunnel_head;


}; // MplsTe::GmplsUni::Controllers::Controller


class MplsTe::GmplsUni::Controllers::Controller::Announce : public Entity
{
    public:
        Announce();
        ~Announce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srl_gs; //type: empty



}; // MplsTe::GmplsUni::Controllers::Controller::Announce


class MplsTe::GmplsUni::Controllers::Controller::ControllerLogging : public Entity
{
    public:
        ControllerLogging();
        ~ControllerLogging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf discovered_srlg_change_logging; //type: empty



}; // MplsTe::GmplsUni::Controllers::Controller::ControllerLogging


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead : public Entity
{
    public:
        GmplsUnitunnelHead();
        ~GmplsUnitunnelHead();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: uint32
        YLeaf enable; //type: empty
        YLeaf destination; //type: string
        YLeaf record_route; //type: empty
        YLeaf signalled_name; //type: string

        class PathOptions; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions
        class Recording; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording
        class Logging; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging
        class Priority; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions> path_options;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority> priority; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording> recording;


}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions : public Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOption; //type: MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption> > path_option;


}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption : public Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf preference_level; //type: uint32
        YLeaf path_type; //type: MplsTePathOptionEnum
        YLeaf path_id; //type: uint32
        YLeaf path_name; //type: string
        YLeaf xro_type; //type: empty
        YLeaf xro_attribute_set_name; //type: string
        YLeaf lockdown; //type: MplsTePathOptionPropertyEnum
        YLeaf verbatim; //type: MplsTePathOptionPropertyEnum
        YLeaf signaled_label; //type: MplsTeSignaledLabelEnum
        YLeaf dwdm_channel; //type: uint32



}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording : public Entity
{
    public:
        Recording();
        ~Recording();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg; //type: empty



}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state_message; //type: empty



}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging


class MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint32
        YLeaf hold_priority; //type: uint32



}; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority


class MplsTe::GlobalAttributes : public Entity
{
    public:
        GlobalAttributes();
        ~GlobalAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf log_nsr_status; //type: empty
        YLeaf log_issu_status; //type: empty
        YLeaf reoptimize_link_up; //type: empty
        YLeaf reoptimize_delay_cleanup_timer; //type: uint32
        YLeaf disable_reoptimize_affinity_failure; //type: empty
        YLeaf maximum_tunnels; //type: uint32
        YLeaf link_holddown_timer; //type: uint32
        YLeaf fault_oam; //type: empty
        YLeaf enable_unequal_load_balancing; //type: empty
        YLeaf log_tail; //type: empty
        YLeaf reoptimize_delay_after_frr_timer; //type: uint32
        YLeaf auto_bandwidth_collect_frequency; //type: uint32
        YLeaf reopt_delay_path_protect_switchover_timer; //type: uint32
        YLeaf log_all; //type: empty
        YLeaf loose_path_retry_period; //type: uint32
        YLeaf reoptimize_load_balancing; //type: empty
        YLeaf log_head; //type: empty
        YLeaf path_selection_ignore_overload; //type: empty
        YLeaf graceful_preemption_on_bandwidth_reduction; //type: empty
        YLeaf advertise_explicit_nulls; //type: empty
        YLeaf reoptimize_delay_install_timer; //type: uint32
        YLeaf reoptimize_delay_after_affinity_failure_timer; //type: uint32
        YLeaf log_frr_protection; //type: MplsTeLogFrrProtectionEnum
        YLeaf reoptimize_timer_frequency; //type: uint32
        YLeaf log_mid; //type: empty
        YLeaf log_preemption; //type: empty

        class AutoTunnel; //type: MplsTe::GlobalAttributes::AutoTunnel
        class HardwareOutOfResource; //type: MplsTe::GlobalAttributes::HardwareOutOfResource
        class SecondaryRouterIds; //type: MplsTe::GlobalAttributes::SecondaryRouterIds
        class Srlg; //type: MplsTe::GlobalAttributes::Srlg
        class Queues; //type: MplsTe::GlobalAttributes::Queues
        class Mib; //type: MplsTe::GlobalAttributes::Mib
        class AttributeSet; //type: MplsTe::GlobalAttributes::AttributeSet
        class BfdOverLsp; //type: MplsTe::GlobalAttributes::BfdOverLsp
        class PceAttributes; //type: MplsTe::GlobalAttributes::PceAttributes
        class LspOutOfResource; //type: MplsTe::GlobalAttributes::LspOutOfResource
        class SoftPreemption; //type: MplsTe::GlobalAttributes::SoftPreemption
        class FastReroute; //type: MplsTe::GlobalAttributes::FastReroute
        class PathSelection; //type: MplsTe::GlobalAttributes::PathSelection
        class AffinityMappings; //type: MplsTe::GlobalAttributes::AffinityMappings

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AffinityMappings> affinity_mappings;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet> attribute_set;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel> auto_tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp> bfd_over_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource> hardware_out_of_resource;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::LspOutOfResource> lsp_out_of_resource;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Mib> mib;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes> pce_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Queues> queues;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SecondaryRouterIds> secondary_router_ids;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SoftPreemption> soft_preemption;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg> srlg;


}; // MplsTe::GlobalAttributes


class MplsTe::GlobalAttributes::AutoTunnel : public Entity
{
    public:
        AutoTunnel();
        ~AutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pcc; //type: MplsTe::GlobalAttributes::AutoTunnel::Pcc
        class P2PAutoTunnel; //type: MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel
        class Backup; //type: MplsTe::GlobalAttributes::AutoTunnel::Backup
        class Mesh; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh
        class P2MpAutoTunnel; //type: MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup> backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh> mesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel> p2mp_auto_tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel> p2p_auto_tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Pcc> pcc;


}; // MplsTe::GlobalAttributes::AutoTunnel


class MplsTe::GlobalAttributes::AutoTunnel::Pcc : public Entity
{
    public:
        Pcc();
        ~Pcc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange> tunnel_range;


}; // MplsTe::GlobalAttributes::AutoTunnel::Pcc


class MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange : public Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_tunnel_id; //type: uint32
        YLeaf max_tunnel_id; //type: uint32



}; // MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange


class MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel : public Entity
{
    public:
        P2PAutoTunnel();
        ~P2PAutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange> tunnel_range;


}; // MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel


class MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange : public Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_tunnel_id; //type: uint32
        YLeaf max_tunnel_id; //type: uint32



}; // MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange


class MplsTe::GlobalAttributes::AutoTunnel::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_ignore; //type: empty

        class Timers; //type: MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers
        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange> tunnel_range;


}; // MplsTe::GlobalAttributes::AutoTunnel::Backup


class MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Removal; //type: MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal> removal;


}; // MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers


class MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal : public Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unused; //type: uint32



}; // MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal


class MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange : public Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_tunnel_id; //type: uint32
        YLeaf max_tunnel_id; //type: uint32



}; // MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange


class MplsTe::GlobalAttributes::AutoTunnel::Mesh : public Entity
{
    public:
        Mesh();
        ~Mesh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MeshGroups; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups
        class Timers; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers
        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups> mesh_groups;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange> tunnel_range;


}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups : public Entity
{
    public:
        MeshGroups();
        ~MeshGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MeshGroup; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup> > mesh_group;


}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup : public Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mesh_group_id; //type: uint32
        YLeaf destination_list; //type: string
        YLeaf disable; //type: empty
        YLeaf attribute_set; //type: string
        YLeaf create; //type: empty
        YLeaf one_hop; //type: empty



}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Removal; //type: MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal> removal;


}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal : public Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unused; //type: uint32



}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal


class MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange : public Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_tunnel_id; //type: uint32
        YLeaf max_tunnel_id; //type: uint32



}; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange


class MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel : public Entity
{
    public:
        P2MpAutoTunnel();
        ~P2MpAutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelRange; //type: MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange> tunnel_range;


}; // MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel


class MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange : public Entity
{
    public:
        TunnelRange();
        ~TunnelRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_tunnel_id; //type: uint32
        YLeaf max_tunnel_id; //type: uint32



}; // MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange


class MplsTe::GlobalAttributes::HardwareOutOfResource : public Entity
{
    public:
        HardwareOutOfResource();
        ~HardwareOutOfResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OorRedState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState
        class OorYellowState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState
        class OorGreenState; //type: MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState> oor_green_state;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState> oor_red_state;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState> oor_yellow_state;


}; // MplsTe::GlobalAttributes::HardwareOutOfResource


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState : public Entity
{
    public:
        OorRedState();
        ~OorRedState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oor_node_protection_disable; //type: empty
        YLeaf oor_available_bandwidth_percentage; //type: uint32
        YLeaf oor_accept_lsp_min_bandwidth; //type: int32
        YLeaf oor_accept_reopt_lsp; //type: empty
        YLeaf oor_metric_te_penalty; //type: int32



}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState : public Entity
{
    public:
        OorYellowState();
        ~OorYellowState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oor_node_protection_disable; //type: empty
        YLeaf oor_available_bandwidth_percentage; //type: uint32
        YLeaf oor_accept_lsp_min_bandwidth; //type: int32
        YLeaf oor_accept_reopt_lsp; //type: empty
        YLeaf oor_metric_te_penalty; //type: int32



}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState


class MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState : public Entity
{
    public:
        OorGreenState();
        ~OorGreenState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oor_recovery_duration; //type: uint32
        YLeaf oor_node_protection_disable; //type: empty
        YLeaf oor_available_bandwidth_percentage; //type: uint32
        YLeaf oor_accept_lsp_min_bandwidth; //type: int32
        YLeaf oor_accept_reopt_lsp; //type: empty
        YLeaf oor_metric_te_penalty; //type: int32



}; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState


class MplsTe::GlobalAttributes::SecondaryRouterIds : public Entity
{
    public:
        SecondaryRouterIds();
        ~SecondaryRouterIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SecondaryRouterId; //type: MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId> > secondary_router_id;


}; // MplsTe::GlobalAttributes::SecondaryRouterIds


class MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId : public Entity
{
    public:
        SecondaryRouterId();
        ~SecondaryRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf secondary_router_id_value; //type: string



}; // MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId


class MplsTe::GlobalAttributes::Srlg : public Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_admin_weight; //type: int32
        YLeaf enable; //type: empty

        class Names; //type: MplsTe::GlobalAttributes::Srlg::Names
        class Values; //type: MplsTe::GlobalAttributes::Srlg::Values

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names> names;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Values> values;


}; // MplsTe::GlobalAttributes::Srlg


class MplsTe::GlobalAttributes::Srlg::Names : public Entity
{
    public:
        Names();
        ~Names();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Name; //type: MplsTe::GlobalAttributes::Srlg::Names::Name

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name> > name;


}; // MplsTe::GlobalAttributes::Srlg::Names


class MplsTe::GlobalAttributes::Srlg::Names::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_name; //type: string
        YLeaf admin_weight; //type: int32

        class StaticSrlgMembers; //type: MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers> static_srlg_members;


}; // MplsTe::GlobalAttributes::Srlg::Names::Name


class MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers : public Entity
{
    public:
        StaticSrlgMembers();
        ~StaticSrlgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticSrlgMember; //type: MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember> > static_srlg_member;


}; // MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers


class MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember : public Entity
{
    public:
        StaticSrlgMember();
        ~StaticSrlgMember();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf from_address; //type: string
        YLeaf to_address; //type: string



}; // MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember


class MplsTe::GlobalAttributes::Srlg::Values : public Entity
{
    public:
        Values();
        ~Values();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Value_; //type: MplsTe::GlobalAttributes::Srlg::Values::Value_

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Values::Value_> > value_;


}; // MplsTe::GlobalAttributes::Srlg::Values


class MplsTe::GlobalAttributes::Srlg::Values::Value_ : public Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_number; //type: uint32
        YLeaf admin_weight; //type: int32

        class Ipv4AddressMaps; //type: MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps> ipv4_address_maps;


}; // MplsTe::GlobalAttributes::Srlg::Values::Value_


class MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps : public Entity
{
    public:
        Ipv4AddressMaps();
        ~Ipv4AddressMaps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4AddressMap; //type: MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap> > ipv4_address_map;


}; // MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps


class MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap : public Entity
{
    public:
        Ipv4AddressMap();
        ~Ipv4AddressMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_ipv4_address; //type: string
        YLeaf remote_ipv4_address; //type: string



}; // MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap


class MplsTe::GlobalAttributes::Queues : public Entity
{
    public:
        Queues();
        ~Queues();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Queue; //type: MplsTe::GlobalAttributes::Queues::Queue

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Queues::Queue> > queue;


}; // MplsTe::GlobalAttributes::Queues


class MplsTe::GlobalAttributes::Queues::Queue : public Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RoutePriorityRoleEnum
        YLeaf value_; //type: uint32



}; // MplsTe::GlobalAttributes::Queues::Queue


class MplsTe::GlobalAttributes::Mib : public Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf midpoint_lsp_stats_collection_disable; //type: empty



}; // MplsTe::GlobalAttributes::Mib


class MplsTe::GlobalAttributes::AttributeSet : public Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOptionAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes
        class P2MpteAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes
        class P2PTeAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes
        class AutoBackupAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes
        class OtnPpAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes
        class AutoMeshAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes
        class XroAttributes; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes> auto_backup_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes> auto_mesh_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes> otn_pp_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes> p2mpte_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes> p2p_te_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes> path_option_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes> xro_attributes;


}; // MplsTe::GlobalAttributes::AttributeSet


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes : public Entity
{
    public:
        PathOptionAttributes();
        ~PathOptionAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathOptionAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute> > path_option_attribute;


}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute : public Entity
{
    public:
        PathOptionAttribute();
        ~PathOptionAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_set_name; //type: string
        YLeaf enable; //type: empty

        class BfdReversePath; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath
        class AttPathOptionPathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection
        class Pce; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce
        class AffinityMask; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask
        class Bandwidth; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth
        class NewStyleAffinityAffinityTypes; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection> att_path_option_path_selection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth> bandwidth; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath> bfd_reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce> pce;


}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath : public Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_reverse_path_type; //type: BfdReversePathEnum
        YLeaf binding_label; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection : public Entity
{
    public:
        AttPathOptionPathSelection();
        ~AttPathOptionPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_selection_exclude_list; //type: string
        YLeaf enable; //type: empty
        YLeaf path_selection_cost_limit; //type: uint32

        class Invalidation; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation> invalidation; // presence node


}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation : public Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: PathInvalidationActionEnum



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce : public Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Bidirectional; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional
        class DisjointPath; //type: MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional> bidirectional; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath> disjoint_path; // presence node


}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional : public Entity
{
    public:
        Bidirectional();
        ~Bidirectional();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_source_address; //type: string
        YLeaf bd_group_id; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath : public Entity
{
    public:
        DisjointPath();
        ~DisjointPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dp_source_address; //type: string
        YLeaf dp_type; //type: uint32
        YLeaf dp_group_id; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask : public Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity; //type: string
        YLeaf mask; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf class_or_pool_type; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes : public Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string
        YLeaf affinity10; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes : public Entity
{
    public:
        P2MpteAttributes();
        ~P2MpteAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class P2MpteAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute> > p2mpte_attribute;


}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute : public Entity
{
    public:
        P2MpteAttribute();
        ~P2MpteAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_set_name; //type: string
        YLeaf interface_bandwidth; //type: uint32
        YLeaf enable; //type: empty
        YLeaf record_route; //type: empty

        class Priority; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority
        class AffinityMask; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask
        class Bandwidth; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth
        class PathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection
        class NewStyleAffinityAffinityTypes; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes
        class FastReroute; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute
        class Logging; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth> bandwidth; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority> priority; // presence node


}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint32
        YLeaf hold_priority; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask : public Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity; //type: string
        YLeaf mask; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
        YLeaf class_or_pool_type; //type: uint32
        YLeaf bandwidth; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection : public Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes : public Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NewStyleAffinityAffinityType; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string
        YLeaf affinity2; //type: string
        YLeaf affinity3; //type: string
        YLeaf affinity4; //type: string
        YLeaf affinity5; //type: string
        YLeaf affinity6; //type: string
        YLeaf affinity7; //type: string
        YLeaf affinity8; //type: string
        YLeaf affinity9; //type: string
        YLeaf affinity10; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_protection; //type: uint32
        YLeaf node_protection; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute


class MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf insufficient_bw_message; //type: empty
        YLeaf reoptimized_message; //type: empty
        YLeaf bandwidth_change_message; //type: empty
        YLeaf all; //type: empty
        YLeaf pcalc_failure_message; //type: empty
        YLeaf state_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf sub_lsp_state_message; //type: empty
        YLeaf reroute_messsage; //type: empty



}; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes : public Entity
{
    public:
        P2PTeAttributes();
        ~P2PTeAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class P2PTeAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute> > p2p_te_attribute;


}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute : public Entity
{
    public:
        P2PTeAttribute();
        ~P2PTeAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_set_name; //type: string
        YLeaf enable; //type: empty

        class PathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection
        class Pce; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce
        class AffinityMask; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask
        class Logging; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging
        class NewStyleAffinityAffinityTypes; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce> pce;


}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection : public Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
        YLeaf path_selection_segment_routing_adjacency_protection; //type: MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum
        YLeaf enable; //type: empty

        class SegmentRoutingPrepend; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend
        class Invalidation; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation> invalidation;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend> segment_routing_prepend;


}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend : public Entity
{
    public:
        SegmentRoutingPrepend();
        ~SegmentRoutingPrepend();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Indexes; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes> indexes;


}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes : public Entity
{
    public:
        Indexes();
        ~Indexes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Index_; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_> > index_;


}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_ : public Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_number; //type: uint32
        YLeaf prepend_type; //type: SrPrependEnum
        YLeaf mpls_label; //type: int32



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation : public Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf invalidation_timer; //type: uint32
        YLeaf invalidation_timer_expire_type; //type: MplsTePathSelectionInvalidationTimerExpireEnum



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce : public Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Bidirectional; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional
        class DisjointPath; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional> bidirectional; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath> disjoint_path; // presence node


}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional : public Entity
{
    public:
        Bidirectional();
        ~Bidirectional();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_source_address; //type: string
        YLeaf bd_group_id; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath : public Entity
{
    public:
        DisjointPath();
        ~DisjointPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dp_source_address; //type: string
        YLeaf dp_type; //type: uint32
        YLeaf dp_group_id; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask : public Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity; //type: string
        YLeaf mask; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_switch_over_change_message; //type: empty
        YLeaf all; //type: empty
        YLeaf record_route_messsage; //type: empty
        YLeaf bfd_state_message; //type: empty
        YLeaf bandwidth_change_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf reroute_messsage; //type: empty
        YLeaf state_message; //type: empty
        YLeaf insufficient_bw_message; //type: empty
        YLeaf reoptimized_message; //type: empty
        YLeaf pcalc_failure_message; //type: empty



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes : public Entity
{
    public:
        NewStyleAffinityAffinityTypes();
        ~NewStyleAffinityAffinityTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NewStyleAffinityAffinityType; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public Entity
{
    public:
        NewStyleAffinityAffinityType();
        ~NewStyleAffinityAffinityType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public Entity
{
    public:
        NewStyleAffinityAffinityTypeAffinity1();
        ~NewStyleAffinityAffinityTypeAffinity1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
        YLeaf affinity1; //type: string



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1

class MplsTeBackupBandwidthClassEnum : public Enum
{
    public:
        static const Enum::YLeaf class0;
        static const Enum::YLeaf class1;
        static const Enum::YLeaf any_class;

};

class SrPrependEnum : public Enum
{
    public:
        static const Enum::YLeaf none_type;
        static const Enum::YLeaf next_label;
        static const Enum::YLeaf bgp_n_hop;

};

class MplsTePathComputationMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf pce;
        static const Enum::YLeaf explicit_;

};

class OtnDestinationEnum : public Enum
{
    public:
        static const Enum::YLeaf number_ed;
        static const Enum::YLeaf un_number_ed;

};

class MplsTeSwitchingCapEnum : public Enum
{
    public:
        static const Enum::YLeaf psc1;
        static const Enum::YLeaf lsc;
        static const Enum::YLeaf fsc;

};

class MplsTeBfdSessionDownActionEnum : public Enum
{
    public:
        static const Enum::YLeaf re_setup;

};

class RoutePriorityRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf route_priority_role_head_back_up;
        static const Enum::YLeaf route_priority_role_head_primary;
        static const Enum::YLeaf route_priority_role_middle;

};

class MplsTebfdSessionEnum : public Enum
{
    public:
        static const Enum::YLeaf regular_bfd;
        static const Enum::YLeaf sbfd;
        static const Enum::YLeaf redundant_sbfd;

};

class MplsTeLogFrrProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf frr_active_primary;
        static const Enum::YLeaf backup;
        static const Enum::YLeaf frr_ready_primary;
        static const Enum::YLeaf primary;
        static const Enum::YLeaf all;

};

class MplsTeTunnelAffinityEnum : public Enum
{
    public:
        static const Enum::YLeaf include;
        static const Enum::YLeaf include_strict;
        static const Enum::YLeaf exclude;
        static const Enum::YLeaf exclude_all;
        static const Enum::YLeaf ignore;

};

class IetfModeEnum : public Enum
{
    public:
        static const Enum::YLeaf standard;

};

class MplsTePathOptionPropertyEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf lockdown;
        static const Enum::YLeaf verbatim;
        static const Enum::YLeaf pce;
        static const Enum::YLeaf segment_routing;

};

class GmplsttiModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sm;
        static const Enum::YLeaf pm;
        static const Enum::YLeaf tcm;

};

class MplsTePathSelectionInvalidationTimerExpireEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_action_tear;
        static const Enum::YLeaf tunnel_action_drop;

};

class MplsTeOtnApsProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1plus1_unidir_no_aps;
        static const Enum::YLeaf Y_1plus1_unidir_aps;
        static const Enum::YLeaf Y_1plus1_bdir_aps;

};

class MplsTeSwitchingEncodingEnum : public Enum
{
    public:
        static const Enum::YLeaf packet;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf sondet_sdh;

};

class MplsTeSigNameOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf address;
        static const Enum::YLeaf name;

};

class OtnProtectionSwitchLockoutEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf working;

};

class MplsTeTunnelIdEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf explicit_;

};

class MplsTeAffinityValueEnum : public Enum
{
    public:
        static const Enum::YLeaf hex_value;
        static const Enum::YLeaf bit_position;

};

class OtnStaticUniEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf xc;
        static const Enum::YLeaf termination;

};

class MplsTeOtnSncModeEnum : public Enum
{
    public:
        static const Enum::YLeaf snc_n;
        static const Enum::YLeaf snc_i;
        static const Enum::YLeaf snc_s;

};

class OtnPayloadEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf bmp;
        static const Enum::YLeaf gfp_f;
        static const Enum::YLeaf gmp;
        static const Enum::YLeaf gfp_f_ext;

};

class OspfAreaModeEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf_int;
        static const Enum::YLeaf ospfip_addr;

};

class MplsTeIgpProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ospf;

};

class MplsTePathSelectionTiebreakerEnum : public Enum
{
    public:
        static const Enum::YLeaf min_fill;
        static const Enum::YLeaf max_fill;
        static const Enum::YLeaf random;

};

class MplsTePathOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf explicit_name;
        static const Enum::YLeaf explicit_number;
        static const Enum::YLeaf no_ero;
        static const Enum::YLeaf sr;

};

class PathInvalidationActionEnum : public Enum
{
    public:
        static const Enum::YLeaf tear;
        static const Enum::YLeaf drop;

};

class OtnSignaledBandwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf odu1;
        static const Enum::YLeaf odu2;
        static const Enum::YLeaf odu3;
        static const Enum::YLeaf odu4;
        static const Enum::YLeaf odu0;
        static const Enum::YLeaf odu2e;
        static const Enum::YLeaf od_uflex_cbr;
        static const Enum::YLeaf od_uflex_gfp_resize;
        static const Enum::YLeaf od_uflex_gfp_not_resize;
        static const Enum::YLeaf odu1e;
        static const Enum::YLeaf odu1f;
        static const Enum::YLeaf odu2f;
        static const Enum::YLeaf odu3e1;
        static const Enum::YLeaf odu3e2;

};

class MplsTeAutorouteMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf relative;
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf constant;

};

class BindingSegmentIdEnum : public Enum
{
    public:
        static const Enum::YLeaf any_label;
        static const Enum::YLeaf specified_label;

};

class MplsTesrlgExcludeEnum : public Enum
{
    public:
        static const Enum::YLeaf mandatory;
        static const Enum::YLeaf preferred;
        static const Enum::YLeaf weighted;

};

class MplsTeSignaledLabelEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dwdm;

};

class BandwidthConstraintEnum : public Enum
{
    public:
        static const Enum::YLeaf bandwidth_constraint_maximum_allocation_model;

};

class MplsTeSwitchingEncodeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf packet;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf sondet_sdh;

};

class MplsTePathSelectionMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf te;
        static const Enum::YLeaf delay;

};

class MplsTePathOptionProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf protecting;

};

class OtnSignaledBandwidthFlexFramingEnum : public Enum
{
    public:
        static const Enum::YLeaf cbr;
        static const Enum::YLeaf framed_gfp_fixed;
        static const Enum::YLeaf framed_gfp_resize;

};

class MplsTeBandwidthLimitEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;
        static const Enum::YLeaf limited;

};

class MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf adj_unprotected;
        static const Enum::YLeaf adj_protected;

};

class LinkNextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4_address;

};

class MplsLcacFloodingIgpEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf;

};

class BfdReversePathEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_reverse_path_binding_label;

};

class MplsTeOtnApsRestorationStyleEnum : public Enum
{
    public:
        static const Enum::YLeaf keep_failed_lsp;
        static const Enum::YLeaf delete_failed_lsp;

};

class MplsTeBandwidthDsteEnum : public Enum
{
    public:
        static const Enum::YLeaf standard_dste;
        static const Enum::YLeaf pre_standard_dste;

};

class MplsTePathDiversityConformanceEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf best_effort;

};

class MplsTeBackupBandwidthPoolEnum : public Enum
{
    public:
        static const Enum::YLeaf any_pool;
        static const Enum::YLeaf global_pool;
        static const Enum::YLeaf sub_pool;

};

class MplsTeOtnApsProtectionModeEnum : public Enum
{
    public:
        static const Enum::YLeaf revertive;
        static const Enum::YLeaf non_revertive;

};

class MplsTeSwitchingIndexEnum : public Enum
{
    public:
        static const Enum::YLeaf link;

};

class MplsTeConfigTunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf p2p;
        static const Enum::YLeaf p2mp;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_CFG_0_ */

