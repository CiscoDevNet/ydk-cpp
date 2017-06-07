#ifndef _OPENCONFIG_BGP_0_
#define _OPENCONFIG_BGP_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace openconfig_bgp {

class Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

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

        class Global; //type: Bgp::Global
        class Neighbors; //type: Bgp::Neighbors
        class PeerGroups; //type: Bgp::PeerGroups

        std::shared_ptr<openconfig_bgp::Bgp::Global> global;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors> neighbors;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups> peer_groups;
        
}; // Bgp


class Bgp::Global : public Entity
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

        class Config; //type: Bgp::Global::Config
        class State; //type: Bgp::Global::State
        class RouteSelectionOptions; //type: Bgp::Global::RouteSelectionOptions
        class DefaultRouteDistance; //type: Bgp::Global::DefaultRouteDistance
        class Confederation; //type: Bgp::Global::Confederation
        class UseMultiplePaths; //type: Bgp::Global::UseMultiplePaths
        class GracefulRestart; //type: Bgp::Global::GracefulRestart
        class AfiSafis; //type: Bgp::Global::AfiSafis
        class ApplyPolicy; //type: Bgp::Global::ApplyPolicy

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis> afi_safis;
        std::shared_ptr<openconfig_bgp::Bgp::Global::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig_bgp::Bgp::Global::Confederation> confederation;
        std::shared_ptr<openconfig_bgp::Bgp::Global::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::DefaultRouteDistance> default_route_distance;
        std::shared_ptr<openconfig_bgp::Bgp::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig_bgp::Bgp::Global::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig_bgp::Bgp::Global::State> state;
        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths> use_multiple_paths;
        
}; // Bgp::Global


class Bgp::Global::Config : public Entity
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

        YLeaf as; //type: uint32
        YLeaf router_id; //type: string

}; // Bgp::Global::Config


class Bgp::Global::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as; //type: uint32
        YLeaf router_id; //type: string
        YLeaf total_paths; //type: uint32
        YLeaf total_prefixes; //type: uint32

}; // Bgp::Global::State


class Bgp::Global::RouteSelectionOptions : public Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::RouteSelectionOptions::Config
        class State; //type: Bgp::Global::RouteSelectionOptions::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::RouteSelectionOptions::State> state;
        
}; // Bgp::Global::RouteSelectionOptions


class Bgp::Global::RouteSelectionOptions::Config : public Entity
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

        YLeaf always_compare_med; //type: boolean
        YLeaf ignore_as_path_length; //type: boolean
        YLeaf external_compare_router_id; //type: boolean
        YLeaf advertise_inactive_routes; //type: boolean
        YLeaf enable_aigp; //type: boolean
        YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::Global::RouteSelectionOptions::Config


class Bgp::Global::RouteSelectionOptions::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always_compare_med; //type: boolean
        YLeaf ignore_as_path_length; //type: boolean
        YLeaf external_compare_router_id; //type: boolean
        YLeaf advertise_inactive_routes; //type: boolean
        YLeaf enable_aigp; //type: boolean
        YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::Global::RouteSelectionOptions::State


class Bgp::Global::DefaultRouteDistance : public Entity
{
    public:
        DefaultRouteDistance();
        ~DefaultRouteDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::DefaultRouteDistance::Config
        class State; //type: Bgp::Global::DefaultRouteDistance::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::DefaultRouteDistance::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::DefaultRouteDistance::State> state;
        
}; // Bgp::Global::DefaultRouteDistance


class Bgp::Global::DefaultRouteDistance::Config : public Entity
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

        YLeaf external_route_distance; //type: uint8
        YLeaf internal_route_distance; //type: uint8

}; // Bgp::Global::DefaultRouteDistance::Config


class Bgp::Global::DefaultRouteDistance::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_route_distance; //type: uint8
        YLeaf internal_route_distance; //type: uint8

}; // Bgp::Global::DefaultRouteDistance::State


class Bgp::Global::Confederation : public Entity
{
    public:
        Confederation();
        ~Confederation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::Confederation::Config
        class State; //type: Bgp::Global::Confederation::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::Confederation::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::Confederation::State> state;
        
}; // Bgp::Global::Confederation


class Bgp::Global::Confederation::Config : public Entity
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

        YLeaf enabled; //type: boolean
        YLeaf identifier; //type: uint32
        YLeafList member_as; //type: list of  uint32

}; // Bgp::Global::Confederation::Config


class Bgp::Global::Confederation::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf identifier; //type: uint32
        YLeafList member_as; //type: list of  uint32

}; // Bgp::Global::Confederation::State


class Bgp::Global::UseMultiplePaths : public Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::UseMultiplePaths::Config
        class State; //type: Bgp::Global::UseMultiplePaths::State
        class Ebgp; //type: Bgp::Global::UseMultiplePaths::Ebgp
        class Ibgp; //type: Bgp::Global::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp> ibgp;
        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::State> state;
        
}; // Bgp::Global::UseMultiplePaths


class Bgp::Global::UseMultiplePaths::Config : public Entity
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

        YLeaf enabled; //type: boolean

}; // Bgp::Global::UseMultiplePaths::Config


class Bgp::Global::UseMultiplePaths::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Bgp::Global::UseMultiplePaths::State


class Bgp::Global::UseMultiplePaths::Ebgp : public Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::Global::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp::State> state;
        
}; // Bgp::Global::UseMultiplePaths::Ebgp


class Bgp::Global::UseMultiplePaths::Ebgp::Config : public Entity
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

        YLeaf allow_multiple_as; //type: boolean
        YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::UseMultiplePaths::Ebgp::Config


class Bgp::Global::UseMultiplePaths::Ebgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allow_multiple_as; //type: boolean
        YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::UseMultiplePaths::Ebgp::State


class Bgp::Global::UseMultiplePaths::Ibgp : public Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::UseMultiplePaths::Ibgp::Config
        class State; //type: Bgp::Global::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp::State> state;
        
}; // Bgp::Global::UseMultiplePaths::Ibgp


class Bgp::Global::UseMultiplePaths::Ibgp::Config : public Entity
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

        YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::UseMultiplePaths::Ibgp::Config


class Bgp::Global::UseMultiplePaths::Ibgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::UseMultiplePaths::Ibgp::State


class Bgp::Global::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::GracefulRestart::Config
        class State; //type: Bgp::Global::GracefulRestart::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::GracefulRestart::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::GracefulRestart::State> state;
        
}; // Bgp::Global::GracefulRestart


class Bgp::Global::GracefulRestart::Config : public Entity
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

        YLeaf enabled; //type: boolean
        YLeaf restart_time; //type: uint16
        YLeaf stale_routes_time; //type: decimal64
        YLeaf helper_only; //type: boolean

}; // Bgp::Global::GracefulRestart::Config


class Bgp::Global::GracefulRestart::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf restart_time; //type: uint16
        YLeaf stale_routes_time; //type: decimal64
        YLeaf helper_only; //type: boolean

}; // Bgp::Global::GracefulRestart::State


class Bgp::Global::AfiSafis : public Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AfiSafi; //type: Bgp::Global::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi> > afi_safi;
        
}; // Bgp::Global::AfiSafis


class Bgp::Global::AfiSafis::AfiSafi : public Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
        class GracefulRestart; //type: Bgp::Global::AfiSafis::AfiSafi::GracefulRestart
        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::State
        class ApplyPolicy; //type: Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabelledUnicast; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast
        class Ipv6LabelledUnicast; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast
        class L3VpnIpv4Unicast; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn
        class RouteSelectionOptions; //type: Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions
        class UseMultiplePaths; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        
}; // Bgp::Global::AfiSafis::AfiSafi


class Bgp::Global::AfiSafis::AfiSafi::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart


class Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config : public Entity
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

        YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config


class Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State


class Bgp::Global::AfiSafis::AfiSafi::Config : public Entity
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

        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
        YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Config


class Bgp::Global::AfiSafis::AfiSafi::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
        YLeaf enabled; //type: boolean
        YLeaf total_paths; //type: uint32
        YLeaf total_prefixes; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::State


class Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy : public Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy


class Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config : public Entity
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

        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;

}; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config


class Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;

}; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast : public Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config : public Entity
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

        YLeaf send_default_route; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_default_route; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast : public Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config : public Entity
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

        YLeaf send_default_route; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_default_route; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast : public Entity
{
    public:
        Ipv4LabelledUnicast();
        ~Ipv4LabelledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast


class Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast : public Entity
{
    public:
        Ipv6LabelledUnicast();
        ~Ipv6LabelledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast


class Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls : public Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls


class Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn : public Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn


class Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions : public Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions


class Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config : public Entity
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

        YLeaf always_compare_med; //type: boolean
        YLeaf ignore_as_path_length; //type: boolean
        YLeaf external_compare_router_id; //type: boolean
        YLeaf advertise_inactive_routes; //type: boolean
        YLeaf enable_aigp; //type: boolean
        YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config


class Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always_compare_med; //type: boolean
        YLeaf ignore_as_path_length; //type: boolean
        YLeaf external_compare_router_id; //type: boolean
        YLeaf advertise_inactive_routes; //type: boolean
        YLeaf enable_aigp; //type: boolean
        YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths : public Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp
        class Ibgp; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config : public Entity
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

        YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public Entity
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

        YLeaf allow_multiple_as; //type: boolean
        YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allow_multiple_as; //type: boolean
        YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp : public Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config : public Entity
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

        YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


class Bgp::Global::ApplyPolicy : public Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Global::ApplyPolicy::Config
        class State; //type: Bgp::Global::ApplyPolicy::State

        std::shared_ptr<openconfig_bgp::Bgp::Global::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Global::ApplyPolicy::State> state;
        
}; // Bgp::Global::ApplyPolicy


class Bgp::Global::ApplyPolicy::Config : public Entity
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

        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;

}; // Bgp::Global::ApplyPolicy::Config


class Bgp::Global::ApplyPolicy::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;

}; // Bgp::Global::ApplyPolicy::State


class Bgp::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: Bgp::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor> > neighbor;
        
}; // Bgp::Neighbors


class Bgp::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: union (refers to openconfig_bgp::Bgp::Neighbors::Neighbor::Config::neighbor_address)
        YLeaf neighbor_address;
        class Config; //type: Bgp::Neighbors::Neighbor::Config
        class State; //type: Bgp::Neighbors::Neighbor::State
        class Timers; //type: Bgp::Neighbors::Neighbor::Timers
        class Transport; //type: Bgp::Neighbors::Neighbor::Transport
        class ErrorHandling; //type: Bgp::Neighbors::Neighbor::ErrorHandling
        class LoggingOptions; //type: Bgp::Neighbors::Neighbor::LoggingOptions
        class EbgpMultihop; //type: Bgp::Neighbors::Neighbor::EbgpMultihop
        class RouteReflector; //type: Bgp::Neighbors::Neighbor::RouteReflector
        class AsPathOptions; //type: Bgp::Neighbors::Neighbor::AsPathOptions
        class AddPaths; //type: Bgp::Neighbors::Neighbor::AddPaths
        class AfiSafis; //type: Bgp::Neighbors::Neighbor::AfiSafis
        class GracefulRestart; //type: Bgp::Neighbors::Neighbor::GracefulRestart
        class ApplyPolicy; //type: Bgp::Neighbors::Neighbor::ApplyPolicy
        class UseMultiplePaths; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths> add_paths;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis> afi_safis;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions> as_path_options;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling> error_handling;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions> logging_options;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector> route_reflector;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State> state;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Timers> timers;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Transport> transport;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths> use_multiple_paths;
        
}; // Bgp::Neighbors::Neighbor


class Bgp::Neighbors::Neighbor::Config : public Entity
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

        YLeaf peer_as; //type: uint32
        YLeaf local_as; //type: uint32
        YLeaf peer_type; //type: PeerTypeEnum
        YLeaf auth_password; //type: string
        YLeaf remove_private_as; //type: RemovePrivateAsOptionEnum
        YLeaf route_flap_damping; //type: boolean
        YLeaf send_community; //type: CommunityTypeEnum
        YLeaf description; //type: string
        //type: leafref (refers to openconfig_bgp::Bgp::PeerGroups::PeerGroup::peer_group_name)
        YLeaf peer_group;
        YLeaf neighbor_address; //type: string

}; // Bgp::Neighbors::Neighbor::Config


class Bgp::Neighbors::Neighbor::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_as; //type: uint32
        YLeaf local_as; //type: uint32
        YLeaf peer_type; //type: PeerTypeEnum
        YLeaf auth_password; //type: string
        YLeaf remove_private_as; //type: RemovePrivateAsOptionEnum
        YLeaf route_flap_damping; //type: boolean
        YLeaf send_community; //type: CommunityTypeEnum
        YLeaf description; //type: string
        //type: leafref (refers to openconfig_bgp::Bgp::PeerGroups::PeerGroup::peer_group_name)
        YLeaf peer_group;
        YLeaf neighbor_address; //type: string
        YLeaf session_state; //type: SessionStateEnum
        YLeafList supported_capabilities; //type: list of  BgpCapabilityIdentity
        class Messages; //type: Bgp::Neighbors::Neighbor::State::Messages
        class Queues; //type: Bgp::Neighbors::Neighbor::State::Queues

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages> messages;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State::Queues> queues;
                class SessionStateEnum;

}; // Bgp::Neighbors::Neighbor::State


class Bgp::Neighbors::Neighbor::State::Messages : public Entity
{
    public:
        Messages();
        ~Messages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sent; //type: Bgp::Neighbors::Neighbor::State::Messages::Sent
        class Received; //type: Bgp::Neighbors::Neighbor::State::Messages::Received

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages::Received> received;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages::Sent> sent;
        
}; // Bgp::Neighbors::Neighbor::State::Messages


class Bgp::Neighbors::Neighbor::State::Messages::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update; //type: uint64
        YLeaf notification; //type: uint64

}; // Bgp::Neighbors::Neighbor::State::Messages::Sent


class Bgp::Neighbors::Neighbor::State::Messages::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update; //type: uint64
        YLeaf notification; //type: uint64

}; // Bgp::Neighbors::Neighbor::State::Messages::Received


class Bgp::Neighbors::Neighbor::State::Queues : public Entity
{
    public:
        Queues();
        ~Queues();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: uint32
        YLeaf output; //type: uint32

}; // Bgp::Neighbors::Neighbor::State::Queues


class Bgp::Neighbors::Neighbor::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::Timers::Config
        class State; //type: Bgp::Neighbors::Neighbor::Timers::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Timers::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Timers::State> state;
        
}; // Bgp::Neighbors::Neighbor::Timers


class Bgp::Neighbors::Neighbor::Timers::Config : public Entity
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

        YLeaf connect_retry; //type: decimal64
        YLeaf hold_time; //type: decimal64
        YLeaf keepalive_interval; //type: decimal64
        YLeaf minimum_advertisement_interval; //type: decimal64

}; // Bgp::Neighbors::Neighbor::Timers::Config


class Bgp::Neighbors::Neighbor::Timers::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf connect_retry; //type: decimal64
        YLeaf hold_time; //type: decimal64
        YLeaf keepalive_interval; //type: decimal64
        YLeaf minimum_advertisement_interval; //type: decimal64
        YLeaf uptime; //type: uint32
        YLeaf negotiated_hold_time; //type: decimal64

}; // Bgp::Neighbors::Neighbor::Timers::State


class Bgp::Neighbors::Neighbor::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::Transport::Config
        class State; //type: Bgp::Neighbors::Neighbor::Transport::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Transport::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Transport::State> state;
        
}; // Bgp::Neighbors::Neighbor::Transport


class Bgp::Neighbors::Neighbor::Transport::Config : public Entity
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

        YLeaf tcp_mss; //type: uint16
        YLeaf mtu_discovery; //type: boolean
        YLeaf passive_mode; //type: boolean
        YLeaf local_address; //type: one of union, string

}; // Bgp::Neighbors::Neighbor::Transport::Config


class Bgp::Neighbors::Neighbor::Transport::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcp_mss; //type: uint16
        YLeaf mtu_discovery; //type: boolean
        YLeaf passive_mode; //type: boolean
        YLeaf local_address; //type: one of union, string
        YLeaf local_port; //type: uint16
        YLeaf remote_address; //type: string
        YLeaf remote_port; //type: uint16

}; // Bgp::Neighbors::Neighbor::Transport::State


class Bgp::Neighbors::Neighbor::ErrorHandling : public Entity
{
    public:
        ErrorHandling();
        ~ErrorHandling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::ErrorHandling::Config
        class State; //type: Bgp::Neighbors::Neighbor::ErrorHandling::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling::State> state;
        
}; // Bgp::Neighbors::Neighbor::ErrorHandling


class Bgp::Neighbors::Neighbor::ErrorHandling::Config : public Entity
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

        YLeaf treat_as_withdraw; //type: boolean

}; // Bgp::Neighbors::Neighbor::ErrorHandling::Config


class Bgp::Neighbors::Neighbor::ErrorHandling::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf treat_as_withdraw; //type: boolean
        YLeaf erroneous_update_messages; //type: uint32

}; // Bgp::Neighbors::Neighbor::ErrorHandling::State


class Bgp::Neighbors::Neighbor::LoggingOptions : public Entity
{
    public:
        LoggingOptions();
        ~LoggingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::LoggingOptions::Config
        class State; //type: Bgp::Neighbors::Neighbor::LoggingOptions::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions::State> state;
        
}; // Bgp::Neighbors::Neighbor::LoggingOptions


class Bgp::Neighbors::Neighbor::LoggingOptions::Config : public Entity
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

        YLeaf log_neighbor_state_changes; //type: boolean

}; // Bgp::Neighbors::Neighbor::LoggingOptions::Config


class Bgp::Neighbors::Neighbor::LoggingOptions::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log_neighbor_state_changes; //type: boolean

}; // Bgp::Neighbors::Neighbor::LoggingOptions::State


class Bgp::Neighbors::Neighbor::EbgpMultihop : public Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::EbgpMultihop::Config
        class State; //type: Bgp::Neighbors::Neighbor::EbgpMultihop::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop::State> state;
        
}; // Bgp::Neighbors::Neighbor::EbgpMultihop


class Bgp::Neighbors::Neighbor::EbgpMultihop::Config : public Entity
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

        YLeaf enabled; //type: boolean
        YLeaf multihop_ttl; //type: uint8

}; // Bgp::Neighbors::Neighbor::EbgpMultihop::Config


class Bgp::Neighbors::Neighbor::EbgpMultihop::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf multihop_ttl; //type: uint8

}; // Bgp::Neighbors::Neighbor::EbgpMultihop::State


class Bgp::Neighbors::Neighbor::RouteReflector : public Entity
{
    public:
        RouteReflector();
        ~RouteReflector();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::RouteReflector::Config
        class State; //type: Bgp::Neighbors::Neighbor::RouteReflector::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector::State> state;
        
}; // Bgp::Neighbors::Neighbor::RouteReflector


class Bgp::Neighbors::Neighbor::RouteReflector::Config : public Entity
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

        YLeaf route_reflector_cluster_id; //type: one of uint32, string
        YLeaf route_reflector_client; //type: boolean

}; // Bgp::Neighbors::Neighbor::RouteReflector::Config


class Bgp::Neighbors::Neighbor::RouteReflector::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_reflector_cluster_id; //type: one of uint32, string
        YLeaf route_reflector_client; //type: boolean

}; // Bgp::Neighbors::Neighbor::RouteReflector::State


class Bgp::Neighbors::Neighbor::AsPathOptions : public Entity
{
    public:
        AsPathOptions();
        ~AsPathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AsPathOptions::Config
        class State; //type: Bgp::Neighbors::Neighbor::AsPathOptions::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions::State> state;
        
}; // Bgp::Neighbors::Neighbor::AsPathOptions


class Bgp::Neighbors::Neighbor::AsPathOptions::Config : public Entity
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

        YLeaf allow_own_as; //type: uint8
        YLeaf replace_peer_as; //type: boolean

}; // Bgp::Neighbors::Neighbor::AsPathOptions::Config


class Bgp::Neighbors::Neighbor::AsPathOptions::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allow_own_as; //type: uint8
        YLeaf replace_peer_as; //type: boolean

}; // Bgp::Neighbors::Neighbor::AsPathOptions::State


class Bgp::Neighbors::Neighbor::AddPaths : public Entity
{
    public:
        AddPaths();
        ~AddPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AddPaths::Config
        class State; //type: Bgp::Neighbors::Neighbor::AddPaths::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths::State> state;
        
}; // Bgp::Neighbors::Neighbor::AddPaths


class Bgp::Neighbors::Neighbor::AddPaths::Config : public Entity
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

        YLeaf receive; //type: boolean
        YLeaf send_max; //type: uint8

}; // Bgp::Neighbors::Neighbor::AddPaths::Config


class Bgp::Neighbors::Neighbor::AddPaths::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: boolean
        YLeaf send_max; //type: uint8

}; // Bgp::Neighbors::Neighbor::AddPaths::State


class Bgp::Neighbors::Neighbor::AfiSafis : public Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AfiSafi; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi> > afi_safi;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi : public Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
        class GracefulRestart; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart
        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State
        class ApplyPolicy; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabelledUnicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast
        class Ipv6LabelledUnicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast
        class L3VpnIpv4Unicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn
        class UseMultiplePaths; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config : public Entity
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

        YLeaf enabled; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean
        YLeaf received; //type: boolean
        YLeaf advertised; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config : public Entity
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

        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
        YLeaf enabled; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
        YLeaf enabled; //type: boolean
        YLeaf active; //type: boolean
        class Prefixes; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes> prefixes;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received; //type: uint32
        YLeaf sent; //type: uint32
        YLeaf installed; //type: uint32

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy : public Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config : public Entity
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

        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast : public Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config : public Entity
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

        YLeaf send_default_route; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_default_route; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast : public Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public Entity
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

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config : public Entity
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

        YLeaf send_default_route; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_default_route; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast : public Entity
{
    public:
        Ipv4LabelledUnicast();
        ~Ipv4LabelledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast

class Bgp::Neighbors::Neighbor::State::SessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf IDLE;
        static const Enum::YLeaf CONNECT;
        static const Enum::YLeaf ACTIVE;
        static const Enum::YLeaf OPENSENT;
        static const Enum::YLeaf OPENCONFIRM;
        static const Enum::YLeaf ESTABLISHED;

};


}
}

#endif /* _OPENCONFIG_BGP_0_ */

