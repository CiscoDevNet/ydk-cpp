#ifndef _CISCO_IOS_XR_MPLS_TE_CFG_
#define _CISCO_IOS_XR_MPLS_TE_CFG_

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


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes : public Entity
{
    public:
        AutoBackupAttributes();
        ~AutoBackupAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AutoBackupAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute> > auto_backup_attribute;


}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute : public Entity
{
    public:
        AutoBackupAttribute();
        ~AutoBackupAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_set_name; //type: string
        YLeaf enable; //type: empty
        YLeaf record_route; //type: empty

        class SignalledName; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName
        class AutoBackupLogging; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging
        class Priority; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority
        class AffinityMask; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask
        class PathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection
        class PolicyClasses; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses
        class NewStyleAffinityAffinityTypes; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging> auto_backup_logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses> policy_classes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority> priority; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName> signalled_name;


}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName : public Entity
{
    public:
        SignalledName();
        ~SignalledName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf source_type; //type: MplsTeSigNameOptionEnum
        YLeaf protected_interface_type; //type: MplsTeSigNameOptionEnum
        YLeaf mp_address; //type: boolean



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging : public Entity
{
    public:
        AutoBackupLogging();
        ~AutoBackupLogging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_change_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf state_message; //type: empty
        YLeaf reoptimized_message; //type: empty



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses : public Entity
{
    public:
        PolicyClasses();
        ~PolicyClasses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList policy_class; //type: list of  uint32



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes : public Entity
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



        class NewStyleAffinityAffinityType; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes : public Entity
{
    public:
        OtnPpAttributes();
        ~OtnPpAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OtnPpAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute> > otn_pp_attribute;


}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute : public Entity
{
    public:
        OtnPpAttribute();
        ~OtnPpAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_set_name; //type: string
        YLeaf aps_protection_mode; //type: MplsTeOtnApsProtectionModeEnum
        YLeaf aps_restoration_style; //type: MplsTeOtnApsRestorationStyleEnum
        YLeaf aps_protection_type; //type: MplsTeOtnApsProtectionEnum
        YLeaf enable; //type: empty

        class RevertScheduleNames; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames
        class SubNetworkConnectionMode; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode
        class Timers; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers
        class PathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames> revert_schedule_names;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode> sub_network_connection_mode;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers> timers;


}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames : public Entity
{
    public:
        RevertScheduleNames();
        ~RevertScheduleNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RevertScheduleName; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName> > revert_schedule_name;


}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName : public Entity
{
    public:
        RevertScheduleName();
        ~RevertScheduleName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf schedule_name; //type: string
        YLeaf revert_schedule_max_tries; //type: uint32
        YLeaf sch_name_enable; //type: empty
        YLeaf revert_schedule_frequency; //type: uint32

        class ScheduleDuration; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration
        class ScheduleDate; //type: MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate> schedule_date; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration> schedule_duration; // presence node


}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration : public Entity
{
    public:
        ScheduleDuration();
        ~ScheduleDuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hour; //type: uint32
        YLeaf minutes; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate : public Entity
{
    public:
        ScheduleDate();
        ~ScheduleDate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hour; //type: uint32
        YLeaf minutes; //type: uint32
        YLeaf month; //type: uint32
        YLeaf day; //type: uint32
        YLeaf year; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode : public Entity
{
    public:
        SubNetworkConnectionMode();
        ~SubNetworkConnectionMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf connection_mode; //type: MplsTeOtnSncModeEnum
        YLeaf connection_monitoring_mode; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers : public Entity
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


        YLeaf aps_wait_to_restore; //type: uint32
        YLeaf aps_hold_off; //type: uint32



}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers


class MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes : public Entity
{
    public:
        AutoMeshAttributes();
        ~AutoMeshAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AutoMeshAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute> > auto_mesh_attribute;


}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute : public Entity
{
    public:
        AutoMeshAttribute();
        ~AutoMeshAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_set_name; //type: string
        YLeaf autoroute_announce; //type: empty
        YLeaf interface_bandwidth; //type: uint32
        YLeaf forward_class; //type: uint32
        YLeaf enable; //type: empty
        YLeaf record_route; //type: empty
        YLeaf collection_only; //type: empty
        YLeaf soft_preemption; //type: empty
        YLeaf load_share; //type: uint32

        class AutoMeshLogging; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging
        class Priority; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority
        class AffinityMask; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask
        class Bandwidth; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth
        class PathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection
        class PolicyClasses; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses
        class NewStyleAffinityAffinityTypes; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes
        class FastReroute; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging> auto_mesh_logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth> bandwidth; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses> policy_classes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority> priority; // presence node


}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging : public Entity
{
    public:
        AutoMeshLogging();
        ~AutoMeshLogging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_change_message; //type: empty
        YLeaf reoptimize_attempts_message; //type: empty
        YLeaf reroute_messsage; //type: empty
        YLeaf state_message; //type: empty
        YLeaf insufficient_bw_message; //type: empty
        YLeaf reoptimized_message; //type: empty
        YLeaf pcalc_failure_message; //type: empty



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses : public Entity
{
    public:
        PolicyClasses();
        ~PolicyClasses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList policy_class; //type: list of  uint32



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes : public Entity
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



        class NewStyleAffinityAffinityType; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType
        class NewStyleAffinityAffinityTypeAffinity1; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1
        class NewStyleAffinityAffinityTypeAffinity1Affinity2; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9
        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10; //type: MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


class MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes : public Entity
{
    public:
        XroAttributes();
        ~XroAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class XroAttribute; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute> > xro_attribute;


}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute : public Entity
{
    public:
        XroAttribute();
        ~XroAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_set_name; //type: string
        YLeaf enable; //type: empty

        class PathDiversity; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity
        class PathSelection; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity> path_diversity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection> path_selection;


}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity : public Entity
{
    public:
        PathDiversity();
        ~PathDiversity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Srlgs; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs
        class Lsp; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp> lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs> srlgs;


}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs : public Entity
{
    public:
        Srlgs();
        ~Srlgs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Srlg; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg> > srlg;


}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg : public Entity
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


        YLeaf srlg; //type: uint32
        YLeaf conformance; //type: MplsTePathDiversityConformanceEnum



}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fecs; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs> fecs;


}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs : public Entity
{
    public:
        Fecs();
        ~Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fec; //type: MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec> > fec;


}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: string
        YLeaf destination; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: uint32
        YLeaf conformance; //type: MplsTePathDiversityConformanceEnum



}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec


class MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection : public Entity
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



}; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection


class MplsTe::GlobalAttributes::BfdOverLsp : public Entity
{
    public:
        BfdOverLsp();
        ~BfdOverLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tail; //type: MplsTe::GlobalAttributes::BfdOverLsp::Tail
        class Head; //type: MplsTe::GlobalAttributes::BfdOverLsp::Head

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp::Head> head;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp::Tail> tail;


}; // MplsTe::GlobalAttributes::BfdOverLsp


class MplsTe::GlobalAttributes::BfdOverLsp::Tail : public Entity
{
    public:
        Tail();
        ~Tail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf multiplier; //type: uint32
        YLeaf minimum_interval; //type: uint32



}; // MplsTe::GlobalAttributes::BfdOverLsp::Tail


class MplsTe::GlobalAttributes::BfdOverLsp::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reopt_timeout; //type: uint32
        YLeaf down_action; //type: MplsTeBfdSessionDownActionEnum



}; // MplsTe::GlobalAttributes::BfdOverLsp::Head


class MplsTe::GlobalAttributes::PceAttributes : public Entity
{
    public:
        PceAttributes();
        ~PceAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf request_timeout; //type: uint32
        YLeaf reoptimize_period; //type: uint32
        YLeaf address; //type: string
        YLeaf deadtimer; //type: uint32
        YLeaf keepalive; //type: uint32
        YLeaf keepalive_tolerance; //type: uint32
        YLeaf peer_source_addr; //type: string
        YLeaf speaker_entity_id; //type: string
        YLeaf segment_routing; //type: empty
        YLeaf password; //type: string
        YLeaf keychain; //type: string
        YLeaf precedence; //type: uint32

        class PceStateful; //type: MplsTe::GlobalAttributes::PceAttributes::PceStateful
        class Timer; //type: MplsTe::GlobalAttributes::PceAttributes::Timer
        class Peers; //type: MplsTe::GlobalAttributes::PceAttributes::Peers
        class Logging; //type: MplsTe::GlobalAttributes::PceAttributes::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::PceStateful> pce_stateful;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Peers> peers;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Timer> timer;


}; // MplsTe::GlobalAttributes::PceAttributes


class MplsTe::GlobalAttributes::PceAttributes::PceStateful : public Entity
{
    public:
        PceStateful();
        ~PceStateful();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_repair; //type: empty
        YLeaf instantiation; //type: empty
        YLeaf cisco_extension; //type: empty
        YLeaf delegation; //type: empty
        YLeaf report; //type: empty
        YLeaf enable; //type: empty

        class StatefulTimers; //type: MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers> stateful_timers;


}; // MplsTe::GlobalAttributes::PceAttributes::PceStateful


class MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers : public Entity
{
    public:
        StatefulTimers();
        ~StatefulTimers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf redelegation_timeout; //type: uint32
        YLeaf state_timeout; //type: uint32



}; // MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers


class MplsTe::GlobalAttributes::PceAttributes::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::GlobalAttributes::PceAttributes::Timer


class MplsTe::GlobalAttributes::PceAttributes::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: MplsTe::GlobalAttributes::PceAttributes::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Peers::Peer> > peer;


}; // MplsTe::GlobalAttributes::PceAttributes::Peers


class MplsTe::GlobalAttributes::PceAttributes::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pce_peer_address; //type: string
        YLeaf enable; //type: empty
        YLeaf password; //type: string
        YLeaf keychain; //type: string
        YLeaf precedence; //type: uint32



}; // MplsTe::GlobalAttributes::PceAttributes::Peers::Peer


class MplsTe::GlobalAttributes::PceAttributes::Logging : public Entity
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



        class Events; //type: MplsTe::GlobalAttributes::PceAttributes::Logging::Events

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Logging::Events> events;


}; // MplsTe::GlobalAttributes::PceAttributes::Logging


class MplsTe::GlobalAttributes::PceAttributes::Logging::Events : public Entity
{
    public:
        Events();
        ~Events();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_status; //type: empty



}; // MplsTe::GlobalAttributes::PceAttributes::Logging::Events


class MplsTe::GlobalAttributes::LspOutOfResource : public Entity
{
    public:
        LspOutOfResource();
        ~LspOutOfResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspOorRedState; //type: MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState
        class LspOorYellowState; //type: MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState> lsp_oor_red_state;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState> lsp_oor_yellow_state;


}; // MplsTe::GlobalAttributes::LspOutOfResource


class MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState : public Entity
{
    public:
        LspOorRedState();
        ~LspOorRedState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_transit_lsp_threshold; //type: int32
        YLeaf unprotected_transit_lsp_threshold; //type: int32



}; // MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState


class MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState : public Entity
{
    public:
        LspOorYellowState();
        ~LspOorYellowState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_transit_lsp_threshold; //type: int32
        YLeaf unprotected_transit_lsp_threshold; //type: int32



}; // MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState


class MplsTe::GlobalAttributes::SoftPreemption : public Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeout; //type: uint32
        YLeaf frr_rewrite; //type: empty
        YLeaf enable; //type: boolean



}; // MplsTe::GlobalAttributes::SoftPreemption


class MplsTe::GlobalAttributes::FastReroute : public Entity
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



        class Timers; //type: MplsTe::GlobalAttributes::FastReroute::Timers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::FastReroute::Timers> timers;


}; // MplsTe::GlobalAttributes::FastReroute


class MplsTe::GlobalAttributes::FastReroute::Timers : public Entity
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


        YLeaf hold_backup; //type: uint32
        YLeaf promotion; //type: uint32



}; // MplsTe::GlobalAttributes::FastReroute::Timers


class MplsTe::GlobalAttributes::PathSelection : public Entity
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


        YLeaf cost_limit; //type: uint32
        YLeaf tiebreaker; //type: MplsTePathSelectionTiebreakerEnum
        YLeaf metric; //type: MplsTePathSelectionMetricEnum
        YLeaf loose_domain_match; //type: boolean

        class LooseMetrics; //type: MplsTe::GlobalAttributes::PathSelection::LooseMetrics
        class Invalidation; //type: MplsTe::GlobalAttributes::PathSelection::Invalidation
        class IgnoreOverloadRole; //type: MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole
        class LooseAffinities; //type: MplsTe::GlobalAttributes::PathSelection::LooseAffinities

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole> ignore_overload_role;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::Invalidation> invalidation;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseAffinities> loose_affinities;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseMetrics> loose_metrics;


}; // MplsTe::GlobalAttributes::PathSelection


class MplsTe::GlobalAttributes::PathSelection::LooseMetrics : public Entity
{
    public:
        LooseMetrics();
        ~LooseMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LooseMetric; //type: MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric> > loose_metric;


}; // MplsTe::GlobalAttributes::PathSelection::LooseMetrics


class MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric : public Entity
{
    public:
        LooseMetric();
        ~LooseMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_type; //type: uint32
        YLeaf metric_type; //type: MplsTePathSelectionMetricEnum



}; // MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric


class MplsTe::GlobalAttributes::PathSelection::Invalidation : public Entity
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



}; // MplsTe::GlobalAttributes::PathSelection::Invalidation


class MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole : public Entity
{
    public:
        IgnoreOverloadRole();
        ~IgnoreOverloadRole();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf head; //type: boolean
        YLeaf mid; //type: boolean
        YLeaf tail; //type: boolean



}; // MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole


class MplsTe::GlobalAttributes::PathSelection::LooseAffinities : public Entity
{
    public:
        LooseAffinities();
        ~LooseAffinities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LooseAffinity; //type: MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity> > loose_affinity;


}; // MplsTe::GlobalAttributes::PathSelection::LooseAffinities


class MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity : public Entity
{
    public:
        LooseAffinity();
        ~LooseAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_type; //type: uint32
        YLeaf affinity; //type: string
        YLeaf mask; //type: string



}; // MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity


class MplsTe::GlobalAttributes::AffinityMappings : public Entity
{
    public:
        AffinityMappings();
        ~AffinityMappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AffinityMapping; //type: MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping> > affinity_mapping;


}; // MplsTe::GlobalAttributes::AffinityMappings


class MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping : public Entity
{
    public:
        AffinityMapping();
        ~AffinityMapping();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_name; //type: string
        YLeaf value_type; //type: MplsTeAffinityValueEnum
        YLeaf value_; //type: string



}; // MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping


class MplsTe::TransportProfile : public Entity
{
    public:
        TransportProfile();
        ~TransportProfile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf global_id; //type: uint32
        YLeaf node_id; //type: string

        class Fault; //type: MplsTe::TransportProfile::Fault
        class Alarm; //type: MplsTe::TransportProfile::Alarm
        class Bfd; //type: MplsTe::TransportProfile::Bfd
        class Midpoints; //type: MplsTe::TransportProfile::Midpoints

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Alarm> alarm;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault> fault;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints> midpoints;


}; // MplsTe::TransportProfile


class MplsTe::TransportProfile::Fault : public Entity
{
    public:
        Fault();
        ~Fault();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wait_to_restore_interval; //type: uint32
        YLeaf refresh_interval; //type: uint32

        class ProtectionTrigger; //type: MplsTe::TransportProfile::Fault::ProtectionTrigger

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger> protection_trigger;


}; // MplsTe::TransportProfile::Fault


class MplsTe::TransportProfile::Fault::ProtectionTrigger : public Entity
{
    public:
        ProtectionTrigger();
        ~ProtectionTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ais; //type: empty

        class Ldi; //type: MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi
        class Lkr; //type: MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi> ldi;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr> lkr;


}; // MplsTe::TransportProfile::Fault::ProtectionTrigger


class MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi : public Entity
{
    public:
        Ldi();
        ~Ldi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: empty



}; // MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi


class MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr : public Entity
{
    public:
        Lkr();
        ~Lkr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: empty



}; // MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr


class MplsTe::TransportProfile::Alarm : public Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf soak_time; //type: uint32
        YLeaf enable_alarm; //type: empty

        class SuppressEvent; //type: MplsTe::TransportProfile::Alarm::SuppressEvent

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Alarm::SuppressEvent> suppress_event;


}; // MplsTe::TransportProfile::Alarm


class MplsTe::TransportProfile::Alarm::SuppressEvent : public Entity
{
    public:
        SuppressEvent();
        ~SuppressEvent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: empty



}; // MplsTe::TransportProfile::Alarm::SuppressEvent


class MplsTe::TransportProfile::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier_standby; //type: uint32
        YLeaf detection_multiplier; //type: uint32

        class MinIntervalStandby; //type: MplsTe::TransportProfile::Bfd::MinIntervalStandby
        class MinInterval; //type: MplsTe::TransportProfile::Bfd::MinInterval

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd::MinInterval> min_interval;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd::MinIntervalStandby> min_interval_standby;


}; // MplsTe::TransportProfile::Bfd


class MplsTe::TransportProfile::Bfd::MinIntervalStandby : public Entity
{
    public:
        MinIntervalStandby();
        ~MinIntervalStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval_standby_ms; //type: uint32
        YLeaf interval_standby_us; //type: uint32



}; // MplsTe::TransportProfile::Bfd::MinIntervalStandby


class MplsTe::TransportProfile::Bfd::MinInterval : public Entity
{
    public:
        MinInterval();
        ~MinInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval_ms; //type: uint32
        YLeaf interval_us; //type: uint32



}; // MplsTe::TransportProfile::Bfd::MinInterval


class MplsTe::TransportProfile::Midpoints : public Entity
{
    public:
        Midpoints();
        ~Midpoints();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Midpoint; //type: MplsTe::TransportProfile::Midpoints::Midpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint> > midpoint;


}; // MplsTe::TransportProfile::Midpoints


class MplsTe::TransportProfile::Midpoints::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf midpoint_name; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf lsp_protect; //type: empty
        YLeaf lsp_id; //type: uint32

        class Source; //type: MplsTe::TransportProfile::Midpoints::Midpoint::Source
        class Destination; //type: MplsTe::TransportProfile::Midpoints::Midpoint::Destination
        class ForwardLsp; //type: MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp
        class ReverseLsp; //type: MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::Destination> destination; // presence node
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp> forward_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp> reverse_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::Source> source; // presence node


}; // MplsTe::TransportProfile::Midpoints::Midpoint


class MplsTe::TransportProfile::Midpoints::Midpoint::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf global_id; //type: uint32



}; // MplsTe::TransportProfile::Midpoints::Midpoint::Source


class MplsTe::TransportProfile::Midpoints::Midpoint::Destination : public Entity
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


        YLeaf node_id; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf global_id; //type: uint32



}; // MplsTe::TransportProfile::Midpoints::Midpoint::Destination


class MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp : public Entity
{
    public:
        ForwardLsp();
        ~ForwardLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf forward_bandwidth; //type: uint32

        class ForwardIoMap; //type: MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap> forward_io_map; // presence node


}; // MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp


class MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap : public Entity
{
    public:
        ForwardIoMap();
        ~ForwardIoMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_label; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_link; //type: uint32



}; // MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap


class MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_bandwidth; //type: uint32

        class ReverseIoMap; //type: MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap> reverse_io_map; // presence node


}; // MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp


class MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap : public Entity
{
    public:
        ReverseIoMap();
        ~ReverseIoMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_label; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_link; //type: uint32



}; // MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap


class MplsTe::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: MplsTe::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface> > interface;


}; // MplsTe::Interfaces


class MplsTe::Interfaces::Interface : public Entity
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

        class TransportProfileLink; //type: MplsTe::Interfaces::Interface::TransportProfileLink
        class Lcac; //type: MplsTe::Interfaces::Interface::Lcac
        class GlobalAttributes; //type: MplsTe::Interfaces::Interface::GlobalAttributes

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes> global_attributes;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac> lcac;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink> transport_profile_link;


}; // MplsTe::Interfaces::Interface


class MplsTe::Interfaces::Interface::TransportProfileLink : public Entity
{
    public:
        TransportProfileLink();
        ~TransportProfileLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Links; //type: MplsTe::Interfaces::Interface::TransportProfileLink::Links

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink::Links> links;


}; // MplsTe::Interfaces::Interface::TransportProfileLink


class MplsTe::Interfaces::Interface::TransportProfileLink::Links : public Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Link; //type: MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link> > link;


}; // MplsTe::Interfaces::Interface::TransportProfileLink::Links


class MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_id; //type: uint32
        YLeaf next_hop_type; //type: LinkNextHopEnum
        YLeaf next_hop_address; //type: string



}; // MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link


class MplsTe::Interfaces::Interface::Lcac : public Entity
{
    public:
        Lcac();
        ~Lcac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd; //type: empty
        YLeaf fault_oam_lockout; //type: empty
        YLeaf attribute_flags; //type: string
        YLeaf enable; //type: empty
        YLeaf admin_weight; //type: int32

        class Switchings; //type: MplsTe::Interfaces::Interface::Lcac::Switchings
        class FloodArea; //type: MplsTe::Interfaces::Interface::Lcac::FloodArea
        class AttributeNameXr; //type: MplsTe::Interfaces::Interface::Lcac::AttributeNameXr
        class AttributeNames; //type: MplsTe::Interfaces::Interface::Lcac::AttributeNames
        class Srlgs; //type: MplsTe::Interfaces::Interface::Lcac::Srlgs
        class UpThresholds; //type: MplsTe::Interfaces::Interface::Lcac::UpThresholds
        class DownThresholds; //type: MplsTe::Interfaces::Interface::Lcac::DownThresholds

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNameXr> attribute_name_xr;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNames> attribute_names;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::DownThresholds> down_thresholds;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::FloodArea> flood_area;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Srlgs> srlgs;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Switchings> switchings;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::UpThresholds> up_thresholds;


}; // MplsTe::Interfaces::Interface::Lcac


class MplsTe::Interfaces::Interface::Lcac::Switchings : public Entity
{
    public:
        Switchings();
        ~Switchings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Switching; //type: MplsTe::Interfaces::Interface::Lcac::Switchings::Switching

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Switchings::Switching> > switching;


}; // MplsTe::Interfaces::Interface::Lcac::Switchings


class MplsTe::Interfaces::Interface::Lcac::Switchings::Switching : public Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf switching_id; //type: one of uint32, enumeration
        YLeaf encoding; //type: MplsTeSwitchingEncodingEnum
        YLeaf capability; //type: MplsTeSwitchingCapEnum



}; // MplsTe::Interfaces::Interface::Lcac::Switchings::Switching


class MplsTe::Interfaces::Interface::Lcac::FloodArea : public Entity
{
    public:
        FloodArea();
        ~FloodArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_type; //type: MplsLcacFloodingIgpEnum
        YLeaf process_name; //type: string
        YLeaf area_id; //type: int32



}; // MplsTe::Interfaces::Interface::Lcac::FloodArea


class MplsTe::Interfaces::Interface::Lcac::AttributeNameXr : public Entity
{
    public:
        AttributeNameXr();
        ~AttributeNameXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList attribute_name; //type: list of  string



}; // MplsTe::Interfaces::Interface::Lcac::AttributeNameXr


class MplsTe::Interfaces::Interface::Lcac::AttributeNames : public Entity
{
    public:
        AttributeNames();
        ~AttributeNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AttributeName; //type: MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName> > attribute_name;


}; // MplsTe::Interfaces::Interface::Lcac::AttributeNames


class MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName : public Entity
{
    public:
        AttributeName();
        ~AttributeName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_index; //type: uint32
        YLeafList value_; //type: list of  string



}; // MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName


class MplsTe::Interfaces::Interface::Lcac::Srlgs : public Entity
{
    public:
        Srlgs();
        ~Srlgs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Srlg; //type: MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg> > srlg;


}; // MplsTe::Interfaces::Interface::Lcac::Srlgs


class MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg : public Entity
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


        YLeaf srlg_number; //type: uint32



}; // MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg


class MplsTe::Interfaces::Interface::Lcac::UpThresholds : public Entity
{
    public:
        UpThresholds();
        ~UpThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList up_threshold; //type: list of  uint32



}; // MplsTe::Interfaces::Interface::Lcac::UpThresholds


class MplsTe::Interfaces::Interface::Lcac::DownThresholds : public Entity
{
    public:
        DownThresholds();
        ~DownThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList down_threshold; //type: list of  uint32



}; // MplsTe::Interfaces::Interface::Lcac::DownThresholds


class MplsTe::Interfaces::Interface::GlobalAttributes : public Entity
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



        class BackupTunnels; //type: MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels
        class AutoTunnel; //type: MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel
        class BackupPaths; //type: MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel> auto_tunnel;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths> backup_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels> backup_tunnels;


}; // MplsTe::Interfaces::Interface::GlobalAttributes


class MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels : public Entity
{
    public:
        BackupTunnels();
        ~BackupTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupTunnel; //type: MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel> > backup_tunnel;


}; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels


class MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel : public Entity
{
    public:
        BackupTunnel();
        ~BackupTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string



}; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel


class MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel : public Entity
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



        class Backup; //type: MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup> backup;


}; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel


class MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup : public Entity
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


        YLeaf enable; //type: empty
        YLeaf attribute_set; //type: string
        YLeaf next_hop_only; //type: empty

        class Exclude; //type: MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude> exclude;


}; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup


class MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude : public Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_mode; //type: MplsTesrlgExcludeEnum



}; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude


class MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths : public Entity
{
    public:
        BackupPaths();
        ~BackupPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupPath; //type: MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath> > backup_path;


}; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths


class MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath : public Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_number; //type: uint32



}; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath


class MplsTe::GmplsNni : public Entity
{
    public:
        GmplsNni();
        ~GmplsNni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
        YLeaf enable_gmpls_nni; //type: empty

        class TopologyInstances; //type: MplsTe::GmplsNni::TopologyInstances
        class TunnelHeads; //type: MplsTe::GmplsNni::TunnelHeads

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances> topology_instances;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads> tunnel_heads;


}; // MplsTe::GmplsNni


class MplsTe::GmplsNni::TopologyInstances : public Entity
{
    public:
        TopologyInstances();
        ~TopologyInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyInstance; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance> > topology_instance;


}; // MplsTe::GmplsNni::TopologyInstances


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance : public Entity
{
    public:
        TopologyInstance();
        ~TopologyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ospf_area_type; //type: OspfAreaModeEnum
        YLeaf igp_instance_name; //type: string
        YLeaf igp_type; //type: MplsTeIgpProtocolEnum

        class OspfInt; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt
        class OspfipAddr; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt> > ospf_int;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr> > ospfip_addr;


}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt : public Entity
{
    public:
        OspfInt();
        ~OspfInt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_area; //type: int32

        class Controllers; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers> controllers;


}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers : public Entity
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



        class Controller; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller> > controller;


}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller : public Entity
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
        YLeaf admin_weight; //type: uint32
        YLeaf enable; //type: empty
        YLeaf delay; //type: uint32

        class TtiMode; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode> tti_mode;


}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode : public Entity
{
    public:
        TtiMode();
        ~TtiMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tti_mode_type; //type: GmplsttiModeEnum
        YLeaf tcmid; //type: uint32



}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr : public Entity
{
    public:
        OspfipAddr();
        ~OspfipAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string

        class Controllers; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers> controllers;


}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers : public Entity
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



        class Controller; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller> > controller;


}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller : public Entity
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
        YLeaf admin_weight; //type: uint32
        YLeaf enable; //type: empty
        YLeaf delay; //type: uint32

        class TtiMode; //type: MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode> tti_mode;


}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller


class MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode : public Entity
{
    public:
        TtiMode();
        ~TtiMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tti_mode_type; //type: GmplsttiModeEnum
        YLeaf tcmid; //type: uint32



}; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode


class MplsTe::GmplsNni::TunnelHeads : public Entity
{
    public:
        TunnelHeads();
        ~TunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelHead; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead> > tunnel_head;


}; // MplsTe::GmplsNni::TunnelHeads


class MplsTe::GmplsNni::TunnelHeads::TunnelHead : public Entity
{
    public:
        TunnelHead();
        ~TunnelHead();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: uint32
        YLeaf enable; //type: empty
        YLeaf restore_lsp_shutdown; //type: empty
        YLeaf current_lsp_shutdown; //type: empty
        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
        YLeaf payload; //type: OtnPayloadEnum
        YLeaf standby_lsp_shutdown; //type: empty
        YLeaf shutdown; //type: empty
        YLeaf path_protection_attribute_set_profile; //type: string
        YLeaf record_route; //type: empty
        YLeaf signalled_name; //type: string

        class SignalledBandwidth; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth
        class Destination; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination
        class ProtectionSwitching; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching
        class Logging; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging
        class PathOptions; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions
        class StaticUni; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination> destination;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions> path_options;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching> protection_switching;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth> signalled_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni> static_uni;


}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth : public Entity
{
    public:
        SignalledBandwidth();
        ~SignalledBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signalled_bandwidth_type; //type: OtnSignaledBandwidthEnum
        YLeaf bitrate; //type: int32
        YLeaf od_uflex_framing_type; //type: OtnSignaledBandwidthFlexFramingEnum



}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination : public Entity
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


        YLeaf destination; //type: string
        YLeaf destination_type; //type: OtnDestinationEnum
        YLeaf interface_if_index; //type: int32



}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching : public Entity
{
    public:
        ProtectionSwitching();
        ~ProtectionSwitching();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lockout; //type: OtnProtectionSwitchLockoutEnum



}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging : public Entity
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


        YLeaf active_lsp_message; //type: empty
        YLeaf homepath_state_message; //type: empty
        YLeaf signalling_state_message; //type: empty
        YLeaf path_change_message; //type: empty
        YLeaf static_cross_connect_message; //type: empty
        YLeaf tunnel_state_message; //type: empty
        YLeaf insufficient_bw_message; //type: empty



}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions : public Entity
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



        class PathOption; //type: MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption> > path_option;


}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption : public Entity
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
        YLeaf protected_by_preference_level; //type: uint32
        YLeaf restore_by_preference_level; //type: uint32
        YLeaf xro_type; //type: empty
        YLeaf xro_attribute_set_name; //type: string
        YLeaf lockdown; //type: MplsTePathOptionPropertyEnum



}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption


class MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni : public Entity
{
    public:
        StaticUni();
        ~StaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ingress_controller_name; //type: string
        YLeaf egress_controller_if_index; //type: int32
        YLeaf ingress_type; //type: OtnStaticUniEnum
        YLeaf egress_type; //type: OtnStaticUniEnum



}; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni


class MplsTe::Lcac : public Entity
{
    public:
        Lcac();
        ~Lcac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_hold_timer; //type: uint32
        YLeaf delay_preempt_bundle_capacity_timer; //type: uint32
        YLeaf periodic_flooding_timer; //type: uint32

        class Bfd; //type: MplsTe::Lcac::Bfd
        class FloodingThreshold; //type: MplsTe::Lcac::FloodingThreshold

        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::FloodingThreshold> flooding_threshold;


}; // MplsTe::Lcac


class MplsTe::Lcac::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // MplsTe::Lcac::Bfd


class MplsTe::Lcac::FloodingThreshold : public Entity
{
    public:
        FloodingThreshold();
        ~FloodingThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf up_stream; //type: uint32
        YLeaf down_stream; //type: uint32



}; // MplsTe::Lcac::FloodingThreshold

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

#endif /* _CISCO_IOS_XR_MPLS_TE_CFG_ */

